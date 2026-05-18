/*
 * XREFs of sub_18001086C @ 0x18001086C
 * Callers:
 *     sub_18000EB70 @ 0x18000EB70 (sub_18000EB70.c)
 *     sub_180010B1C @ 0x180010B1C (sub_180010B1C.c)
 * Callees:
 *     sub_18001099C @ 0x18001099C (sub_18001099C.c)
 *     sub_180010A78 @ 0x180010A78 (sub_180010A78.c)
 */

__int64 __fastcall sub_18001086C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  result = sub_180010A78(a1, a2, &v7);
  if ( (int)result >= 0 )
    return sub_18001099C(v6 + 2 * v7, 260 - v7, v5, a3);
  return result;
}
