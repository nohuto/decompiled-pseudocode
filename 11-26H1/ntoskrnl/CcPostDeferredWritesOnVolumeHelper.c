/*
 * XREFs of CcPostDeferredWritesOnVolumeHelper @ 0x1405B2170
 * Callers:
 *     <none>
 * Callees:
 *     CcPostDeferredWrites @ 0x14039B61C (CcPostDeferredWrites.c)
 */

char __fastcall CcPostDeferredWritesOnVolumeHelper(unsigned __int64 a1, __int64 a2)
{
  CcPostDeferredWrites(a1, a2);
  return 1;
}
