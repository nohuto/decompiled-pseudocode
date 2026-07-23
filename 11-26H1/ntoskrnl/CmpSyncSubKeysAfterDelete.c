/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x140B531EC
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408E4914 (CmpCopySyncTree2.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpFindSubKeyByNumber @ 0x1408E5360 (CmpFindSubKeyByNumber.c)
 *     CmpDeleteTree @ 0x140948F38 (CmpDeleteTree.c)
 *     CmpInitializeKeyNameString @ 0x140B0BD84 (CmpInitializeKeyNameString.c)
 */

bool __fastcall CmpSyncSubKeysAfterDelete(ULONG_PTR a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, unsigned __int64 a5)
{
  _BYTE *v5; // r13
  unsigned int v6; // r12d
  _BYTE *v7; // r14
  _DWORD *i; // rax
  int SubKeyByNumber; // ebx
  ULONG_PTR v11; // rsi
  unsigned int v12; // r15d
  ULONG_PTR CellFlat; // rax
  unsigned int v15; // [rsp+20h] [rbp-20h] BYREF
  int v16; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned int v17[2]; // [rsp+28h] [rbp-18h] BYREF
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v17[0] = -1;
  v15 = 0;
  v5 = (_BYTE *)(a3 + 140);
  v17[1] = 0;
  v6 = 0;
  v7 = (_BYTE *)(a3 + 140);
  v18 = 0LL;
  for ( i = a4; ; i = a4 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, i, v6, (int *)&v15);
    v11 = 0LL;
    if ( SubKeyByNumber < 0 )
      break;
    v12 = v15;
    v7 = v5;
    if ( v15 == -1 )
      break;
    v7 = (_BYTE *)(a3 + 140);
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(a3, v15, v17);
    else
      CellFlat = HvpGetCellPaged(a3, v15);
    v11 = CellFlat;
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      return SubKeyByNumber >= 0;
    }
    CmpInitializeKeyNameString(CellFlat, (__int64)&v18, a5);
    v16 = 0;
    CmpFindSubKeyByNameWithStatus(a1, a2, (unsigned __int16 *)&v18, &v16);
    if ( v16 == -1 )
    {
      if ( *(_DWORD *)(v11 + 20) + *(_DWORD *)(v11 + 24) )
        CmpDeleteTree(a3, v12);
      SubKeyByNumber = CmpFreeKeyByCell(a3, v12, 1);
      if ( SubKeyByNumber < 0 )
        break;
    }
    else
    {
      ++v6;
    }
    if ( (*v7 & 1) != 0 )
      HvpReleaseCellFlat(a3, (__int64)v17);
    else
      HvpReleaseCellPaged(a3, v17);
  }
  if ( v11 )
  {
    if ( (*v7 & 1) != 0 )
      HvpReleaseCellFlat(a3, (__int64)v17);
    else
      HvpReleaseCellPaged(a3, v17);
  }
  return SubKeyByNumber >= 0;
}
