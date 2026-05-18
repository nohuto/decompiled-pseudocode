/*
 * XREFs of sub_180087C7C @ 0x180087C7C
 * Callers:
 *     sub_180087AAC @ 0x180087AAC (sub_180087AAC.c)
 *     sub_180087CE4 @ 0x180087CE4 (sub_180087CE4.c)
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180088BE0 @ 0x180088BE0 (sub_180088BE0.c)
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     sub_1800878A0 @ 0x1800878A0 (sub_1800878A0.c)
 */

__int64 __fastcall sub_180087C7C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = a1;
  v6 = a1;
  v7 = a3;
  if ( a2 )
  {
    do
      sub_1800878A0((__int64)&v5);
    while ( v3 != 1 );
    return v6;
  }
  return a1;
}
