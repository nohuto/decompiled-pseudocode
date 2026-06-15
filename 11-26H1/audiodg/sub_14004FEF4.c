/*
 * XREFs of sub_14004FEF4 @ 0x14004FEF4
 * Callers:
 *     sub_14004FE50 @ 0x14004FE50 (sub_14004FE50.c)
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004BB2C @ 0x14004BB2C (sub_14004BB2C.c)
 *     sub_14004BB80 @ 0x14004BB80 (sub_14004BB80.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004FEF4(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  int v17; // r9d
  int v18; // [rsp+20h] [rbp-58h]
  _BYTE v19[16]; // [rsp+50h] [rbp-28h] BYREF

  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)(a8 + 2 * v9) );
  v13 = qword_1400E83C0;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  if ( !v13
    || (v14 = sub_1400B6010(v19),
        v15 = *(_DWORD *)(v14 + 8),
        *(_QWORD *)a1 = *(_QWORD *)v14,
        *(_DWORD *)(a1 + 8) = v15,
        *(int *)a1 >= 0) )
  {
    *(_DWORD *)a1 = -2147024322;
    *(_DWORD *)(a1 + 4) = sub_14001DFBC(-2147024322);
    *(_DWORD *)(a1 + 8) = 0;
    sub_14004BB80(a2, a3, a4, v17, v18, a7, a1, a8);
  }
  sub_14004BB2C(a2, a3, a4, 0, 0LL, a7, a1, a8);
  return a1;
}
