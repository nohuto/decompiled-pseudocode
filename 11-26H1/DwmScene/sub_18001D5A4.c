/*
 * XREFs of sub_18001D5A4 @ 0x18001D5A4
 * Callers:
 *     sub_18001CA80 @ 0x18001CA80 (sub_18001CA80.c)
 *     sub_18004D1D8 @ 0x18004D1D8 (sub_18004D1D8.c)
 *     sub_180050BD8 @ 0x180050BD8 (sub_180050BD8.c)
 *     sub_1800D8AF8 @ 0x1800D8AF8 (sub_1800D8AF8.c)
 *     sub_1800DBAD9 @ 0x1800DBAD9 (sub_1800DBAD9.c)
 *     sub_1800E5096 @ 0x1800E5096 (sub_1800E5096.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18001D5A4(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x68uLL);
  return result;
}
