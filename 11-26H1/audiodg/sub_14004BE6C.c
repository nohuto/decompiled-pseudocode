/*
 * XREFs of sub_14004BE6C @ 0x14004BE6C
 * Callers:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14001CE18 @ 0x14001CE18 (sub_14001CE18.c)
 *     sub_14004DF60 @ 0x14004DF60 (sub_14004DF60.c)
 *     sub_14005CFC0 @ 0x14005CFC0 (sub_14005CFC0.c)
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004BB2C @ 0x14004BB2C (sub_14004BB2C.c)
 */

__int64 __fastcall sub_14004BE6C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // r10d
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = a7;
  v12[1] = sub_14001DFBC(a7);
  v12[2] = 0;
  return sub_14004BB2C(v10, v7, v8, v9, a5, a6, (__int64)v12, 0LL);
}
