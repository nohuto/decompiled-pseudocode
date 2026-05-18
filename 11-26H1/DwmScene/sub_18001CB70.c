/*
 * XREFs of sub_18001CB70 @ 0x18001CB70
 * Callers:
 *     sub_18001D650 @ 0x18001D650 (sub_18001D650.c)
 *     sub_18001D6A4 @ 0x18001D6A4 (sub_18001D6A4.c)
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 *     sub_1800E58A0 @ 0x1800E58A0 (sub_1800E58A0.c)
 * Callees:
 *     sub_18001CBA0 @ 0x18001CBA0 (sub_18001CBA0.c)
 */

__int64 __fastcall sub_18001CB70(void **a1, __int64 a2)
{
  sub_18001CBA0(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x68uLL);
}
