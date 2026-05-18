/*
 * XREFs of sub_1800CFB2C @ 0x1800CFB2C
 * Callers:
 *     sub_1800CF8E4 @ 0x1800CF8E4 (sub_1800CF8E4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CFB2C(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v3 = sub_18002ECC8(1uLL);
  a1[1] = sub_180011790(v3);
  return a1;
}
