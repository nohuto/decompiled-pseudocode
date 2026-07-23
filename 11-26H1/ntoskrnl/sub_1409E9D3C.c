/*
 * XREFs of sub_1409E9D3C @ 0x1409E9D3C
 * Callers:
 *     sub_1409EAA60 @ 0x1409EAA60 (sub_1409EAA60.c)
 *     sub_1409EBBDC @ 0x1409EBBDC (sub_1409EBBDC.c)
 * Callees:
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409EA080 @ 0x1409EA080 (sub_1409EA080.c)
 */

signed __int64 __fastcall sub_1409E9D3C(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 && (int)sub_1409EA080(a1, a2, -1LL) >= 0 )
    {
      SddlpFree(*(void **)(a2 + 24));
      SddlpFree((void *)a2);
    }
  }
  return v2;
}
