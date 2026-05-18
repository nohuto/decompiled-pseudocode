/*
 * XREFs of sub_180055B84 @ 0x180055B84
 * Callers:
 *     sub_180054A54 @ 0x180054A54 (sub_180054A54.c)
 *     sub_18005E588 @ 0x18005E588 (sub_18005E588.c)
 * Callees:
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180012F64 @ 0x180012F64 (sub_180012F64.c)
 */

__int64 __fastcall sub_180055B84(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v5 = a2;
  result = sub_180012F64((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}
