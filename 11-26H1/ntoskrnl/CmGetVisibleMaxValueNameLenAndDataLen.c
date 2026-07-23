/*
 * XREFs of CmGetVisibleMaxValueNameLenAndDataLen @ 0x140A76A30
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1408C8DC0 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmGetVisibleMaxValueNameLenAndDataLen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int *v5; // rdi
  __int64 v6; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // rcx
  __int64 CellFlat; // rax
  __int64 v14; // r14
  ULONG_PTR v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int16 v19; // cx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+48h] [rbp+10h] BYREF
  int v25; // [rsp+4Ch] [rbp+14h]
  unsigned int v26; // [rsp+58h] [rbp+20h] BYREF
  int v27; // [rsp+5Ch] [rbp+24h]

  v5 = a5;
  v6 = 0LL;
  *a4 = 0;
  v24 = -1;
  v25 = 0;
  *v5 = 0;
  v26 = -1;
  v27 = 0;
  if ( a2 )
  {
    *a4 = *(_DWORD *)(a2 + 60);
    *v5 = *(_DWORD *)(a2 + 64);
  }
  if ( !a1 )
    return 0LL;
  *a4 = *(unsigned __int16 *)(a1 + 178);
  *v5 = *(_DWORD *)(a1 + 180);
  if ( !a3 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 288);
  if ( !v10 )
    return 0LL;
  if ( v10 != a3 )
    return 0LL;
  *a4 = 0;
  *v5 = 0;
  if ( !*(_DWORD *)(a1 + 280) )
    return 0LL;
  v11 = *(unsigned int *)(a1 + 284);
  v12 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v12, v11, &v24);
  else
    CellFlat = HvpGetCellPaged(v12, v11);
  v14 = CellFlat;
  if ( !CellFlat )
    return 3221225626LL;
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 280) )
    {
      if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v15, (__int64)&v24);
      else
        HvpReleaseCellPaged(v15, &v24);
      return 0LL;
    }
    v16 = *(unsigned int *)(v14 + 4 * v6);
    v17 = (*(_BYTE *)(v15 + 140) & 1) != 0 ? HvpGetCellFlat(v15, v16, &v26) : HvpGetCellPaged(v15, v16);
    v18 = v17;
    if ( !v17 )
      break;
    v19 = 2 * *(_WORD *)(v17 + 2);
    if ( (*(_BYTE *)(v17 + 16) & 1) == 0 )
      v19 = *(_WORD *)(v17 + 2);
    if ( *a4 < (unsigned int)v19 )
      *a4 = v19;
    v20 = *(_DWORD *)(v17 + 4);
    v21 = v20 + 0x80000000;
    if ( v20 < 0x80000000 )
      v21 = *(_DWORD *)(v18 + 4);
    if ( *v5 < v21 )
      *v5 = v21;
    v22 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v22, (__int64)&v26);
    else
      HvpReleaseCellPaged(v22, &v26);
    v6 = (unsigned int)(v6 + 1);
  }
  v23 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v23, (__int64)&v24);
  else
    HvpReleaseCellPaged(v23, &v24);
  return 3221225626LL;
}
