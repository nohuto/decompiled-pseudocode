/*
 * XREFs of EtwTraceJob @ 0x140A77CC8
 * Callers:
 *     NtTerminateJobObject @ 0x140958500 (NtTerminateJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140958CB0 (PspTerminateAllProcessesInJobHierarchy.c)
 *     NtCreateJobObject @ 0x140A76700 (NtCreateJobObject.c)
 *     NtOpenJobObject @ 0x140A77BE0 (NtOpenJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwpPsProvTraceJob @ 0x140A77D98 (EtwpPsProvTraceJob.c)
 */

__int64 __fastcall EtwTraceJob(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  __int128 v5; // xmm0
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-30h]
  int v9; // [rsp+44h] [rbp-2Ch]
  unsigned int v10; // [rsp+48h] [rbp-28h]
  _QWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0uLL;
  if ( a1 )
  {
    v5 = *(_OWORD *)(a1 + 1472);
    v8 = *(_DWORD *)(a1 + 1468);
    v7 = v5;
  }
  else
  {
    v8 = 0;
  }
  v9 = a2;
  v11[0] = &v7;
  v10 = a3;
  v11[1] = 28LL;
  if ( a1 && EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 0x80000) != 0 )
    EtwpPsProvTraceJob(a1, a3, a4);
  return EtwTraceKernelEvent((int)v11, 1, 0x80000u, a4, 6297860);
}
