/*
 * XREFs of sub_140A014D8 @ 0x140A014D8
 * Callers:
 *     sub_14090763C @ 0x14090763C (sub_14090763C.c)
 *     sub_140909DF0 @ 0x140909DF0 (sub_140909DF0.c)
 * Callees:
 *     sub_140907700 @ 0x140907700 (sub_140907700.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 */

signed __int64 __fastcall sub_140A014D8(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 && (int)sub_140907700(a1, a2, -1) >= 0 )
    {
      SddlpFree(*(void **)(a2 + 24));
      SddlpFree((void *)a2);
    }
  }
  return v2;
}
