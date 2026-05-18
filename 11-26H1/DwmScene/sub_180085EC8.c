/*
 * XREFs of sub_180085EC8 @ 0x180085EC8
 * Callers:
 *     sub_180085EA0 @ 0x180085EA0 (sub_180085EA0.c)
 * Callees:
 *     sub_18007D44C @ 0x18007D44C (sub_18007D44C.c)
 */

__int64 __fastcall sub_180085EC8(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = sub_18007D44C((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 12 * a2;
  a1[2] = result;
  return result;
}
