/*
 * XREFs of sub_1409EF3D4 @ 0x1409EF3D4
 * Callers:
 *     sub_1409EEEFC @ 0x1409EEEFC (sub_1409EEEFC.c)
 *     sub_1409F0FE4 @ 0x1409F0FE4 (sub_1409F0FE4.c)
 *     sub_140B38E0C @ 0x140B38E0C (sub_140B38E0C.c)
 * Callees:
 *     sub_1409EF40C @ 0x1409EF40C (sub_1409EF40C.c)
 */

signed __int64 __fastcall sub_1409EF3D4(__int64 a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 232));
    if ( !v1 )
      sub_1409EF40C(a1);
  }
  return v1;
}
