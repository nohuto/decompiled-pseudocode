/*
 * XREFs of sub_18001BA3C @ 0x18001BA3C
 * Callers:
 *     sub_18001BA04 @ 0x18001BA04 (sub_18001BA04.c)
 *     sub_18001BAE4 @ 0x18001BAE4 (sub_18001BAE4.c)
 *     sub_18001EA5C @ 0x18001EA5C (sub_18001EA5C.c)
 *     sub_180045E94 @ 0x180045E94 (sub_180045E94.c)
 * Callees:
 *     sub_1800177D0 @ 0x1800177D0 (sub_1800177D0.c)
 */

__int64 __fastcall sub_18001BA3C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = sub_1800177D0((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 4 * a2;
  a1[2] = result;
  return result;
}
