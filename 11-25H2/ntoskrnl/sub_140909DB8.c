/*
 * XREFs of sub_140909DB8 @ 0x140909DB8
 * Callers:
 *     sub_1408E0EF8 @ 0x1408E0EF8 (sub_1408E0EF8.c)
 *     sub_140A75020 @ 0x140A75020 (sub_140A75020.c)
 * Callees:
 *     sub_140909DF0 @ 0x140909DF0 (sub_140909DF0.c)
 */

signed __int64 __fastcall sub_140909DB8(__int64 a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 232));
    if ( !v1 )
      sub_140909DF0(a1);
  }
  return v1;
}
