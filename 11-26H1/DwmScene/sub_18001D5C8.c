/*
 * XREFs of sub_18001D5C8 @ 0x18001D5C8
 * Callers:
 *     sub_18001D674 @ 0x18001D674 (sub_18001D674.c)
 *     sub_18002B398 @ 0x18002B398 (sub_18002B398.c)
 *     sub_1800315DC @ 0x1800315DC (sub_1800315DC.c)
 *     sub_180054C64 @ 0x180054C64 (sub_180054C64.c)
 *     sub_18005CD18 @ 0x18005CD18 (sub_18005CD18.c)
 *     sub_1800BF0A0 @ 0x1800BF0A0 (sub_1800BF0A0.c)
 *     sub_1800D8B0A @ 0x1800D8B0A (sub_1800D8B0A.c)
 *     sub_1800D931C @ 0x1800D931C (sub_1800D931C.c)
 *     sub_1800D97B1 @ 0x1800D97B1 (sub_1800D97B1.c)
 *     sub_1800DC0E4 @ 0x1800DC0E4 (sub_1800DC0E4.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18001D5C8(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x48uLL);
  return result;
}
