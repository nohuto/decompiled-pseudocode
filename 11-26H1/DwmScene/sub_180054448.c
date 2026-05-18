/*
 * XREFs of sub_180054448 @ 0x180054448
 * Callers:
 *     sub_1800C29D0 @ 0x1800C29D0 (sub_1800C29D0.c)
 * Callees:
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18001EA3C @ 0x18001EA3C (sub_18001EA3C.c)
 */

__int64 __fastcall sub_180054448(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    sub_180012A30();
  v5 = a2;
  result = sub_18001EA3C((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 32 * a2;
  return result;
}
