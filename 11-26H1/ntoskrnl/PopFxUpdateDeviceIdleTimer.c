/*
 * XREFs of PopFxUpdateDeviceIdleTimer @ 0x1404CFA94
 * Callers:
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PoFxSetDeviceIdleTimeout @ 0x1404CFA20 (PoFxSetDeviceIdleTimeout.c)
 * Callees:
 *     PopFxScheduleDeviceIdleTimer @ 0x140219060 (PopFxScheduleDeviceIdleTimer.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x14021B810 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopFxUpdateDeviceIdleTimer(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  __int64 v4; // rdx

  _m_prefetchw((const void *)(a1 + 32));
  v2 = *(_DWORD *)(a1 + 32);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 4) != 0 )
  {
    LOBYTE(v2) = KeCancelTimer((PKTIMER)(a1 + 408));
    if ( (_BYTE)v2 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFB);
      LOBYTE(v2) = PopFxScheduleDeviceIdleTimer(a1);
      if ( !(_BYTE)v2 )
      {
        PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a1 + 48), 0, 0);
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x4000u);
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192), v4);
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x40u);
        v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF);
        if ( v2 != 1 )
          LOBYTE(v2) = (unsigned __int8)PopFxAddLogEntry(*(_QWORD *)(a1 + 48), 0, 17, 0LL);
      }
    }
  }
  return v2;
}
