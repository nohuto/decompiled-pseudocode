/*
 * XREFs of UpdateKernelCoordinatedStates @ 0x140039CB4
 * Callers:
 *     PepUpdateCoordinatedStateWorker @ 0x14003ACE0 (PepUpdateCoordinatedStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1400464E0 (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall UpdateKernelCoordinatedStates(__int64 a1)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  *(_BYTE *)(a1 + 40) = 1;
  v2 = ((__int64 (*)(void))qword_1400194F8)();
  if ( v2 >= 0 )
  {
    if ( a1 == qword_140019868 )
      ProcLibTraceCoordinatedIdleStates(0LL);
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x17u,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
