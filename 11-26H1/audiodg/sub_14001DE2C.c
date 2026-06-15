/*
 * XREFs of sub_14001DE2C @ 0x14001DE2C
 * Callers:
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 * Callees:
 *     sub_14001CE18 @ 0x14001CE18 (sub_14001CE18.c)
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004BB20 @ 0x14004BB20 (sub_14004BB20.c)
 */

__int64 __fastcall sub_14001DE2C(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  signed int v9; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  __int64 v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+20h] [rbp-48h]
  _DWORD v15[4]; // [rsp+50h] [rbp-18h] BYREF

  v9 = sub_14001CE18(a1, a2, a3, a4, v13, a6);
  v10 = v9;
  if ( v9 > 0 )
    v10 = (unsigned __int16)v9 | 0x80070000;
  v15[0] = v10;
  v15[1] = sub_14001DFBC(v10);
  v15[2] = 0;
  sub_14004BB20(a1, a2, a3, v11, v14, a6, (__int64)v15, 0LL);
  return v10;
}
