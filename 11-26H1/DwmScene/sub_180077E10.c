/*
 * XREFs of sub_180077E10 @ 0x180077E10
 * Callers:
 *     sub_180075FB8 @ 0x180075FB8 (sub_180075FB8.c)
 * Callees:
 *     sub_180076260 @ 0x180076260 (sub_180076260.c)
 */

__int64 __fastcall sub_180077E10(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_180076260((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + (a2 << 6);
  return result;
}
