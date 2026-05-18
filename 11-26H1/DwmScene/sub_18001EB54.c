/*
 * XREFs of sub_18001EB54 @ 0x18001EB54
 * Callers:
 *     sub_18001F128 @ 0x18001F128 (sub_18001F128.c)
 *     sub_18001F39C @ 0x18001F39C (sub_18001F39C.c)
 *     sub_18001F3E4 @ 0x18001F3E4 (sub_18001F3E4.c)
 *     sub_18001F81C @ 0x18001F81C (sub_18001F81C.c)
 *     sub_18001F8FC @ 0x18001F8FC (sub_18001F8FC.c)
 *     sub_180055FB0 @ 0x180055FB0 (sub_180055FB0.c)
 *     sub_1800567AC @ 0x1800567AC (sub_1800567AC.c)
 *     sub_1800D1ECC @ 0x1800D1ECC (sub_1800D1ECC.c)
 *     sub_1800D2510 @ 0x1800D2510 (sub_1800D2510.c)
 * Callees:
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 */

__int64 __fastcall sub_18001EB54(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180014244(v3);
      v3 += 32LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
