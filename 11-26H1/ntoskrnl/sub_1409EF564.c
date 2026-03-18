/*
 * XREFs of sub_1409EF564 @ 0x1409EF564
 * Callers:
 *     sub_1409EF40C @ 0x1409EF40C (sub_1409EF40C.c)
 * Callees:
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 */

void __fastcall sub_1409EF564(__int64 a1)
{
  if ( a1 )
  {
    SddlpFree(*(void **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 4) = 0LL;
  }
}
