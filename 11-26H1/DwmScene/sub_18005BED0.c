/*
 * XREFs of sub_18005BED0 @ 0x18005BED0
 * Callers:
 *     sub_18005BCA4 @ 0x18005BCA4 (sub_18005BCA4.c)
 *     sub_18005C9D8 @ 0x18005C9D8 (sub_18005C9D8.c)
 *     sub_1800CFBEC @ 0x1800CFBEC (sub_1800CFBEC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_18002ECC8 @ 0x18002ECC8 (sub_18002ECC8.c)
 */

__int64 sub_18005BED0()
{
  unsigned __int64 v0; // rax
  __int64 result; // rax

  v0 = sub_18002ECC8(1uLL);
  result = sub_180011790(v0);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
