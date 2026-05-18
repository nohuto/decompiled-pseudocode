/*
 * XREFs of sub_180099F20 @ 0x180099F20
 * Callers:
 *     sub_180099F74 @ 0x180099F74 (sub_180099F74.c)
 *     sub_180099FA4 @ 0x180099FA4 (sub_180099FA4.c)
 *     sub_1800DE79D @ 0x1800DE79D (sub_1800DE79D.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180099F20(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x1D0uLL);
  return result;
}
