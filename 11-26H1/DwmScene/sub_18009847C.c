/*
 * XREFs of sub_18009847C @ 0x18009847C
 * Callers:
 *     sub_180098E60 @ 0x180098E60 (sub_180098E60.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18002A8A0 @ 0x18002A8A0 (sub_18002A8A0.c)
 *     sub_180098348 @ 0x180098348 (sub_180098348.c)
 *     sub_180099318 @ 0x180099318 (sub_180099318.c)
 */

__int64 __fastcall sub_18009847C(__int64 a1)
{
  __int64 v2; // rcx

  sub_18002A8A0((void **)(a1 + 1064), a1 + 1064);
  v2 = *(_QWORD *)(a1 + 904);
  if ( v2 )
    sub_180010EC8(v2);
  sub_180098348((void **)(a1 + 880));
  sub_180099318(a1 + 704);
  sub_180099318(a1 + 528);
  sub_180099318(a1 + 352);
  sub_180099318(a1 + 176);
  return sub_180099318(a1);
}
