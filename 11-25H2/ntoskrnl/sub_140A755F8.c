/*
 * XREFs of sub_140A755F8 @ 0x140A755F8
 * Callers:
 *     sub_140909DF0 @ 0x140909DF0 (sub_140909DF0.c)
 * Callees:
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 */

void __fastcall sub_140A755F8(__int64 a1)
{
  if ( a1 )
  {
    SddlpFree(*(void **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
