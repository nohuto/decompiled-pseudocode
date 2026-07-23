/*
 * XREFs of MiActivateBetterZeroEngine @ 0x1404E1264
 * Callers:
 *     MiReduceZeroingThreads @ 0x1405211AC (MiReduceZeroingThreads.c)
 * Callees:
 *     MiDecrementZeroEngineThread @ 0x1402F5CAC (MiDecrementZeroEngineThread.c)
 *     MiWakeZeroingThreads @ 0x140713A28 (MiWakeZeroingThreads.c)
 */

__int64 __fastcall MiActivateBetterZeroEngine(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v3; // rcx
  unsigned int v5; // edi

  v1 = *(_QWORD *)(a1 + 80);
  v3 = *(_DWORD **)(v1 + 136);
  if ( !v3[59] || v3[61] >= v3[60] )
    return 0LL;
  v5 = MiWakeZeroingThreads(v3, 1LL);
  if ( v5 )
  {
    ++*(_DWORD *)(v1 + 224);
    MiDecrementZeroEngineThread(a1);
  }
  return v5;
}
