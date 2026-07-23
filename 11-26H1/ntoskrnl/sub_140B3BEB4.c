/*
 * XREFs of sub_140B3BEB4 @ 0x140B3BEB4
 * Callers:
 *     sub_1409EBBDC @ 0x1409EBBDC (sub_1409EBBDC.c)
 *     sub_1409EC140 @ 0x1409EC140 (sub_1409EC140.c)
 * Callees:
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 */

__int64 __fastcall sub_140B3BEB4(void **a1)
{
  if ( a1 )
  {
    SddlpFree(a1[5]);
    SddlpFree(a1[7]);
    SddlpFree(a1);
  }
  return 0LL;
}
