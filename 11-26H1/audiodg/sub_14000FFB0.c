/*
 * XREFs of sub_14000FFB0 @ 0x14000FFB0
 * Callers:
 *     sub_14000F170 @ 0x14000F170 (sub_14000F170.c)
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_14008289C @ 0x14008289C (sub_14008289C.c)
 *     sub_140084E2C @ 0x140084E2C (sub_140084E2C.c)
 *     sub_140085804 @ 0x140085804 (sub_140085804.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000FFB0(_QWORD *a1, unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    sub_14004639C(2147942487LL, a2);
  return *a1 + 8 * a2;
}
