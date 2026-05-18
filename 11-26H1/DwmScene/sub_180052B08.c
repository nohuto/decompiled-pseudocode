/*
 * XREFs of sub_180052B08 @ 0x180052B08
 * Callers:
 *     sub_180053C4C @ 0x180053C4C (sub_180053C4C.c)
 * Callees:
 *     sub_180052968 @ 0x180052968 (sub_180052968.c)
 */

unsigned __int64 __fastcall sub_180052B08(_QWORD *a1, __int64 *a2, __int64 *a3, int *a4, int *a5, int *a6, int *a7)
{
  __int64 v7; // r11
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rcx

  v7 = a1[1];
  if ( v7 == a1[2] )
    return sub_180052968(a1, v7, a2, a3, a4, a5, a6, a7);
  v10 = *a7;
  v11 = *a3;
  v12 = *a4;
  v13 = *a6;
  v14 = *a5;
  *(_QWORD *)v7 = *a2;
  *(_QWORD *)(v7 + 8) = v11;
  *(_DWORD *)(v7 + 16) = v12;
  *(_DWORD *)(v7 + 20) = v14;
  *(_DWORD *)(v7 + 24) = v13;
  *(_DWORD *)(v7 + 28) = v10;
  v15 = a1[1];
  a1[1] = v15 + 32;
  return v15;
}
