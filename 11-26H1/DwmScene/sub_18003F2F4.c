/*
 * XREFs of sub_18003F2F4 @ 0x18003F2F4
 * Callers:
 *     sub_18003F3F0 @ 0x18003F3F0 (sub_18003F3F0.c)
 *     sub_18005CF24 @ 0x18005CF24 (sub_18005CF24.c)
 *     sub_180060D08 @ 0x180060D08 (sub_180060D08.c)
 *     sub_180060D54 @ 0x180060D54 (sub_180060D54.c)
 * Callees:
 *     sub_18003E7EC @ 0x18003E7EC (sub_18003E7EC.c)
 */

__int64 __fastcall sub_18003F2F4(void **a1)
{
  sub_18003E7EC((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x38uLL);
}
