/*
 * XREFs of sub_18003F2C4 @ 0x18003F2C4
 * Callers:
 *     sub_18003F38C @ 0x18003F38C (sub_18003F38C.c)
 *     sub_18003F3F0 @ 0x18003F3F0 (sub_18003F3F0.c)
 * Callees:
 *     sub_18003E794 @ 0x18003E794 (sub_18003E794.c)
 */

__int64 __fastcall sub_18003F2C4(void **a1)
{
  sub_18003E794((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_18000E26C(*a1, 0x50uLL);
}
