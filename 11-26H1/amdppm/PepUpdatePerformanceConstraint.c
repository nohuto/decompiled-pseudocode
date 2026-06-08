/*
 * XREFs of PepUpdatePerformanceConstraint @ 0x14000D5BC
 * Callers:
 *     PepDevicePowerControlCallback @ 0x14000D670 (PepDevicePowerControlCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepUpdatePerformanceConstraint(__int64 a1)
{
  unsigned int v2; // edi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      2,
      39,
      (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
      *(_DWORD *)(a1 + 56));
  v2 = 0;
  if ( *(_QWORD *)(a1 + 1176) )
  {
    _m_prefetchw((const void *)(a1 + 1172));
    if ( !(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(a1 + 1172), 1u) )
      IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 1176), PepUpdatePerformanceConstraintWorker, CriticalWorkQueue, 0LL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
