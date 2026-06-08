/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x140036A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // edx
  int v1; // ebx

  v1 = ((__int64 (*)(void))qword_1400158F8)();
  if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      3,
      29,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
      v1);
  }
  return (unsigned int)v1;
}
