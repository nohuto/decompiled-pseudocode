/*
 * XREFs of sub_14005C4AC @ 0x14005C4AC
 * Callers:
 *     sub_14005CF94 @ 0x14005CF94 (sub_14005CF94.c)
 *     sub_14005D050 @ 0x14005D050 (sub_14005D050.c)
 * Callees:
 *     sub_14001CE18 @ 0x14001CE18 (sub_14001CE18.c)
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004BB2C @ 0x14004BB2C (sub_14004BB2C.c)
 */

__int64 __fastcall sub_14005C4AC(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  signed int v9; // eax
  DWORD v10; // ebx
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-48h]
  _DWORD v15[4]; // [rsp+50h] [rbp-18h] BYREF

  v9 = sub_14001CE18(a1, a2, a3, a4, v14, a6);
  v10 = v9;
  if ( v9 > 0 )
    v11 = (unsigned __int16)v9 | 0x80070000;
  else
    v11 = v9;
  v15[0] = v11;
  v15[1] = sub_14001DFBC(v11);
  v15[2] = v12;
  sub_14004BB2C(a1, a2, a3, 0, v12, a6, (__int64)v15, v12);
  SetLastError(v10);
  return v10;
}
