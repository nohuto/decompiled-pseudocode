/*
 * XREFs of sub_14004BE14 @ 0x14004BE14
 * Callers:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004BB20 @ 0x14004BB20 (sub_14004BB20.c)
 */

__int64 __fastcall sub_14004BE14(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v11; // [rsp+20h] [rbp-48h]
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = a7;
  v12[1] = sub_14001DFBC(a7);
  v12[2] = 0;
  return sub_14004BB20(v9, v7, v8, v9, v11, a6, (__int64)v12, 0LL);
}
