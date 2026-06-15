/*
 * XREFs of sub_140059234 @ 0x140059234
 * Callers:
 *     sub_140059F90 @ 0x140059F90 (sub_140059F90.c)
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004BB20 @ 0x14004BB20 (sub_14004BB20.c)
 */

__int64 __fastcall sub_140059234(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[6]; // [rsp+50h] [rbp-18h] BYREF

  v7 = a7;
  if ( a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  v13[0] = v7;
  v13[1] = sub_14001DFBC(v7);
  v13[2] = 0;
  sub_14004BB20(v10, v8, v9, v10, v12, a6, (__int64)v13, 0LL);
  return v7;
}
