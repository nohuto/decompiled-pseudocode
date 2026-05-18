/*
 * XREFs of sub_180029B2C @ 0x180029B2C
 * Callers:
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 * Callees:
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 */

__int64 *__fastcall sub_180029B2C(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  char v4; // r9
  char v5; // al
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v4 = *((_BYTE *)a2 + 8);
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  v7 = *a1;
  v5 = *((_BYTE *)a1 + 8);
  *((_BYTE *)a1 + 8) = v4;
  *a1 = v2;
  v8 = v5;
  sub_180029B0C((__int64)&v7);
  return a1;
}
