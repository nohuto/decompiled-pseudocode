/*
 * XREFs of sub_1409ED56C @ 0x1409ED56C
 * Callers:
 *     sub_1409EE290 @ 0x1409EE290 (sub_1409EE290.c)
 *     sub_1409EF40C @ 0x1409EF40C (sub_1409EF40C.c)
 * Callees:
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     sub_1409ED8B0 @ 0x1409ED8B0 (sub_1409ED8B0.c)
 */

signed __int64 __fastcall sub_1409ED56C(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 && (int)sub_1409ED8B0(a1, a2, -1LL) >= 0 )
    {
      SddlpFree(*(void **)(a2 + 24));
      SddlpFree((void *)a2);
    }
  }
  return v2;
}
