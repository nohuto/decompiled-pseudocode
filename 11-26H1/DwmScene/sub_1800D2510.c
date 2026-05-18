/*
 * XREFs of sub_1800D2510 @ 0x1800D2510
 * Callers:
 *     sub_1800D1ECC @ 0x1800D1ECC (sub_1800D1ECC.c)
 * Callees:
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 *     sub_18001F16C @ 0x18001F16C (sub_18001F16C.c)
 */

__int64 __fastcall sub_1800D2510(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r10

  v3 = a3;
  if ( a2 )
  {
    v4 = a1 - a3;
    do
    {
      sub_18001F16C(a1, v3, v4 + v3);
      v3 += 32LL;
    }
    while ( v5 != 1 );
  }
  sub_18001EB54(v3, v3);
  return v3;
}
