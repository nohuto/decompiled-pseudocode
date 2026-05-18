/*
 * XREFs of sub_180027324 @ 0x180027324
 * Callers:
 *     sub_180055FB0 @ 0x180055FB0 (sub_180055FB0.c)
 * Callees:
 *     sub_18001EA3C @ 0x18001EA3C (sub_18001EA3C.c)
 */

__int64 __fastcall sub_180027324(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_18001EA3C((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 32 * a2;
  return result;
}
