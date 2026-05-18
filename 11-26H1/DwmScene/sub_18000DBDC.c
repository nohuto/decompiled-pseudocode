/*
 * XREFs of sub_18000DBDC @ 0x18000DBDC
 * Callers:
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 * Callees:
 *     sub_18000DA44 @ 0x18000DA44 (sub_18000DA44.c)
 *     sub_18000F774 @ 0x18000F774 (sub_18000F774.c)
 */

__int64 __fastcall sub_18000DBDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v11; // [rsp+20h] [rbp-48h]
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = a7;
  v12[1] = sub_18000F774(a7);
  v12[2] = 0;
  return sub_18000DA44(v9, v7, v8, v9, v11, a6, (__int64)v12);
}
