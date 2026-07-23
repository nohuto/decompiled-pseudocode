/*
 * XREFs of sub_1409EBD34 @ 0x1409EBD34
 * Callers:
 *     sub_1409EBBDC @ 0x1409EBBDC (sub_1409EBBDC.c)
 * Callees:
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 */

void __fastcall sub_1409EBD34(__int64 a1)
{
  if ( a1 )
  {
    SddlpFree(*(void **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 4) = 0LL;
  }
}
