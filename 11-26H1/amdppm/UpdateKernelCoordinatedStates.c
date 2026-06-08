/*
 * XREFs of UpdateKernelCoordinatedStates @ 0x140036EB4
 * Callers:
 *     PepUpdateCoordinatedStateWorker @ 0x140038F30 (PepUpdateCoordinatedStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x140041AD0 (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall UpdateKernelCoordinatedStates(__int64 a1)
{
  int v2; // edx
  int v3; // ebx

  *(_BYTE *)(a1 + 40) = 1;
  v3 = ((__int64 (*)(void))qword_140015928)();
  if ( v3 >= 0 )
  {
    if ( a1 == qword_140015C98 )
      ProcLibTraceCoordinatedIdleStates(0LL);
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      3,
      23,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
