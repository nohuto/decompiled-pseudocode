/*
 * XREFs of MiPurgeFinish @ 0x1402EBEC0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockAllBatchPages @ 0x140298560 (MiUnlockAllBatchPages.c)
 *     MiReduceShareCount @ 0x1402BC9E0 (MiReduceShareCount.c)
 *     MiInsertPurgedPages @ 0x1402EBF44 (MiInsertPurgedPages.c)
 */

__int64 __fastcall MiPurgeFinish(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  MiInsertPurgedPages();
  MiUnlockAllBatchPages(a1, 0LL);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  MiReduceShareCount(v3, a3);
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return a3;
}
