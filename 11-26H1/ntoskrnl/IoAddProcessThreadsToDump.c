/*
 * XREFs of IoAddProcessThreadsToDump @ 0x1405D70CC
 * Callers:
 *     IopLiveDumpAddProcessesCallback @ 0x1405CEF40 (IopLiveDumpAddProcessesCallback.c)
 *     IopPartialDumpAddProcessesCallback @ 0x1405D8760 (IopPartialDumpAddProcessesCallback.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x14040FEF8 (KeEnumerateKernelStackSegments.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall IoAddProcessThreadsToDump(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  int v5; // r8d
  int v6; // eax
  int v8; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(a2 + 48);
  v4 = *(_QWORD **)(a2 + 48);
  v5 = 0;
  while ( v4 != v2 )
  {
    v6 = MiAddRangeToCrashDump(a1, v4 - 95, 1944LL, 0LL);
    v5 = v6;
    if ( v6 >= 0 && (*(_DWORD *)(v4 - 80) & 0x20000) != 0 )
    {
      v8 = v6;
      KeEnumerateKernelStackSegments((__int64)(v4 - 95));
      v5 = v8;
    }
    if ( v5 < 0 )
      break;
    v4 = (_QWORD *)*v4;
  }
  return (unsigned int)v5;
}
