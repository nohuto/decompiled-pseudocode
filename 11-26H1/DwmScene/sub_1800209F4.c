/*
 * XREFs of sub_1800209F4 @ 0x1800209F4
 * Callers:
 *     sub_180021420 @ 0x180021420 (sub_180021420.c)
 *     sub_1800214C0 @ 0x1800214C0 (sub_1800214C0.c)
 *     sub_180021560 @ 0x180021560 (sub_180021560.c)
 *     sub_180021600 @ 0x180021600 (sub_180021600.c)
 *     sub_1800216A0 @ 0x1800216A0 (sub_1800216A0.c)
 * Callees:
 *     unknown_libname_3 @ 0x180020780 (unknown_libname_3.c)
 */

__int64 __fastcall sub_1800209F4(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  return *unknown_libname_3(&v3, &v2);
}
