/*
 * XREFs of ViDeadlockSimilarNode @ 0x140C3E474
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ViDeadlockSimilarNode(__int64 a1, int a2, __int64 a3)
{
  return a1 == *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8LL) && a2 == ((*(_DWORD *)(a3 + 72) >> 1) & 1);
}
