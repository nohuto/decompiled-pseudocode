/*
 * XREFs of sub_140B39CA4 @ 0x140B39CA4
 * Callers:
 *     sub_1409EF40C @ 0x1409EF40C (sub_1409EF40C.c)
 *     sub_1409EF970 @ 0x1409EF970 (sub_1409EF970.c)
 * Callees:
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 */

__int64 __fastcall sub_140B39CA4(void **a1)
{
  if ( a1 )
  {
    SddlpFree(a1[5]);
    SddlpFree(a1[7]);
    SddlpFree(a1);
  }
  return 0LL;
}
