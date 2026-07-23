/*
 * XREFs of CcPostDeferredWritesOnVolumeHelper @ 0x1405B4980
 * Callers:
 *     <none>
 * Callees:
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 */

char __fastcall CcPostDeferredWritesOnVolumeHelper(unsigned __int64 a1, __int64 a2)
{
  CcPostDeferredWrites(a1, a2);
  return 1;
}
