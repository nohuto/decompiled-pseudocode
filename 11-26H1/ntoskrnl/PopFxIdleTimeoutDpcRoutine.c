/*
 * XREFs of PopFxIdleTimeoutDpcRoutine @ 0x1404D4C60
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140219E80 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x14021A640 (PopFxAddLogEntry.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403B3CC4 (PopFxDeliverDevicePowerRequired.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxIdleTimeoutDpcRoutine(__int64 a1, ULONG_PTR a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // si
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rdx

  v2 = (KSPIN_LOCK *)(a2 + 400);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 400));
  _m_prefetchw((const void *)(a2 + 32));
  v5 = *(_DWORD *)(a2 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a2 + 32), 0xFFFFFFFB);
    if ( *(_DWORD *)(a2 + 40) != 2 )
      PopFxBugCheck(0x613uLL, a2, 0LL, 0LL);
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a2 + 48), 0, 0);
    _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x4000u);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 192), v7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x40u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 40), 0xFFFFFFFF) != 1 )
      PopFxAddLogEntry(*(_QWORD *)(a2 + 48), 0, 17, 0LL);
  }
  else
  {
    PopFxDeliverDevicePowerRequired(a2, 0LL);
  }
  KeReleaseSpinLock(v2, v4);
}
