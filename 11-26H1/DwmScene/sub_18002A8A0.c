/*
 * XREFs of sub_18002A8A0 @ 0x18002A8A0
 * Callers:
 *     sub_18002A448 @ 0x18002A448 (sub_18002A448.c)
 *     sub_18002B374 @ 0x18002B374 (sub_18002B374.c)
 *     sub_18002B5CC @ 0x18002B5CC (sub_18002B5CC.c)
 *     sub_18002BB80 @ 0x18002BB80 (sub_18002BB80.c)
 *     sub_18009847C @ 0x18009847C (sub_18009847C.c)
 *     sub_180098BB8 @ 0x180098BB8 (sub_180098BB8.c)
 *     sub_180098C90 @ 0x180098C90 (sub_180098C90.c)
 *     sub_18009A08C @ 0x18009A08C (sub_18009A08C.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_18002A8D0 @ 0x18002A8D0 (sub_18002A8D0.c)
 */

__int64 __fastcall sub_18002A8A0(void **a1, __int64 a2)
{
  sub_18002A8D0(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x58uLL);
}
