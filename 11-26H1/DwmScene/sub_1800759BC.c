/*
 * XREFs of sub_1800759BC @ 0x1800759BC
 * Callers:
 *     sub_180075A8C @ 0x180075A8C (sub_180075A8C.c)
 *     sub_1800DCD95 @ 0x1800DCD95 (sub_1800DCD95.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_1800759BC(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x38uLL);
  return result;
}
