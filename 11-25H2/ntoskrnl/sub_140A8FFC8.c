/*
 * XREFs of sub_140A8FFC8 @ 0x140A8FFC8
 * Callers:
 *     sub_140909DF0 @ 0x140909DF0 (sub_140909DF0.c)
 *     sub_1409E1224 @ 0x1409E1224 (sub_1409E1224.c)
 * Callees:
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 */

__int64 __fastcall sub_140A8FFC8(void **a1)
{
  if ( a1 )
  {
    SddlpFree(a1[5]);
    SddlpFree(a1[7]);
    SddlpFree(a1);
  }
  return 0LL;
}
