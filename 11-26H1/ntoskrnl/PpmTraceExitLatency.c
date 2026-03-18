/*
 * XREFs of PpmTraceExitLatency @ 0x14060360C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     PpmConvertTimeTo @ 0x140429470 (PpmConvertTimeTo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall PpmTraceExitLatency(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  int v8; // r9d
  LARGE_INTEGER PerformanceCounter; // rax
  int v11; // ecx
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v13[6]; // [rsp+40h] [rbp-28h] BYREF

  v8 = -1;
  if ( PopFxSystemLatencyLimit == -1 )
    return 3221226614LL;
  if ( a5 != -1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v8 = a5 + PpmConvertTimeTo(PerformanceCounter.QuadPart - a6, 0x989680uLL);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x4000000) != 0 )
  {
    v13[4] = v8;
    v13[1] = a3;
    v11 = 4;
    v13[2] = a2;
    if ( a5 != -1 )
      v11 = 0;
    v13[3] = a5;
    v13[0] = v11;
    v12[0] = v13;
    v12[1] = 20LL;
    EtwTraceKernelEvent((int)v12, 1, 0x44000000u, 4668, 1538);
  }
  return 0LL;
}
