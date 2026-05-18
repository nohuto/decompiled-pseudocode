/*
 * XREFs of sub_18001F128 @ 0x18001F128
 * Callers:
 *     sub_1800563BC @ 0x1800563BC (sub_1800563BC.c)
 *     sub_1800D1ECC @ 0x1800D1ECC (sub_1800D1ECC.c)
 *     sub_1800D4010 @ 0x1800D4010 (sub_1800D4010.c)
 * Callees:
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 *     sub_18001F16C @ 0x18001F16C (sub_18001F16C.c)
 */

__int64 __fastcall sub_18001F128(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 32 )
  {
    sub_18001F16C(a1, a3, v4, i);
    a3 += 32LL;
  }
  sub_18001EB54(a3, a3);
  return a3;
}
