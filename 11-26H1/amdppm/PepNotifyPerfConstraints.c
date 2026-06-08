/*
 * XREFs of PepNotifyPerfConstraints @ 0x14000D078
 * Callers:
 *     RegisterKernelPepPerf @ 0x140036490 (RegisterKernelPepPerf.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x14003C670 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyPerfConstraints(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  int v6; // edx
  int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 1120);
  v9 = 0LL;
  v7 = PoFxProcessorNotification(v3, 12LL, &v9);
  if ( v7 >= 0 )
  {
    *a2 = v9;
    *a3 = HIDWORD(v9);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      2,
      35,
      (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
