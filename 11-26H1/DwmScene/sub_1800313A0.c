/*
 * XREFs of sub_1800313A0 @ 0x1800313A0
 * Callers:
 *     sub_18003157C @ 0x18003157C (sub_18003157C.c)
 *     sub_18003160C @ 0x18003160C (sub_18003160C.c)
 *     sub_18003163C @ 0x18003163C (sub_18003163C.c)
 *     sub_180039A04 @ 0x180039A04 (sub_180039A04.c)
 *     sub_180075564 @ 0x180075564 (sub_180075564.c)
 *     sub_180075A5C @ 0x180075A5C (sub_180075A5C.c)
 *     sub_1800D9637 @ 0x1800D9637 (sub_1800D9637.c)
 *     sub_1800D97C3 @ 0x1800D97C3 (sub_1800D97C3.c)
 *     sub_1800DA57C @ 0x1800DA57C (sub_1800DA57C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_1800313A0(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x60uLL);
  return result;
}
