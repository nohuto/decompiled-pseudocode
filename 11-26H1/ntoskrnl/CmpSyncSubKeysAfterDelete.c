/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x140B50C8C
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408DE354 (CmpCopySyncTree2.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpFreeKeyByCell @ 0x1408BCC94 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408D7490 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpFindSubKeyByNumber @ 0x1408DEDA0 (CmpFindSubKeyByNumber.c)
 *     CmpDeleteTree @ 0x140987238 (CmpDeleteTree.c)
 *     CmpInitializeKeyNameString @ 0x140B09FC4 (CmpInitializeKeyNameString.c)
 */

bool __fastcall CmpSyncSubKeysAfterDelete(ULONG_PTR a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, unsigned __int64 a5)
{
  unsigned int v5; // r12d
  _BYTE *v7; // r15
  int SubKeyByNumber; // ebx
  ULONG_PTR v10; // rsi
  unsigned int v11; // r14d
  ULONG_PTR CellFlat; // rax
  unsigned int v14; // [rsp+20h] [rbp-20h] BYREF
  int v15; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned int v16[2]; // [rsp+28h] [rbp-18h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF

  v16[0] = -1;
  v14 = 0;
  v5 = 0;
  v16[1] = 0;
  v17 = 0LL;
  v7 = (_BYTE *)(a3 + 140);
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v5, (int *)&v14);
    v10 = 0LL;
    if ( SubKeyByNumber < 0 )
      break;
    v11 = v14;
    if ( v14 == -1 )
      return SubKeyByNumber >= 0;
    v7 = (_BYTE *)(a3 + 140);
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(a3, v14, v16);
    else
      CellFlat = HvpGetCellPaged(a3, v14);
    v10 = CellFlat;
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      return SubKeyByNumber >= 0;
    }
    CmpInitializeKeyNameString(CellFlat, (__int64)&v17, a5);
    v15 = 0;
    CmpFindSubKeyByNameWithStatus(a1, a2, (unsigned __int16 *)&v17, &v15);
    if ( v15 == -1 )
    {
      if ( *(_DWORD *)(v10 + 20) + *(_DWORD *)(v10 + 24) )
        CmpDeleteTree(a3, v11);
      SubKeyByNumber = CmpFreeKeyByCell(a3, v11, 1);
      if ( SubKeyByNumber < 0 )
        break;
    }
    else
    {
      ++v5;
    }
    if ( (*v7 & 1) != 0 )
      HvpReleaseCellFlat(a3, (__int64)v16);
    else
      HvpReleaseCellPaged(a3, v16);
  }
  if ( v10 )
  {
    if ( (*v7 & 1) != 0 )
      HvpReleaseCellFlat(a3, (__int64)v16);
    else
      HvpReleaseCellPaged(a3, v16);
  }
  return SubKeyByNumber >= 0;
}
