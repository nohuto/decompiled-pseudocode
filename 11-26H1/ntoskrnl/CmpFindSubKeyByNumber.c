/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1408DEDA0
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpPreserveSystemHiveData @ 0x14085F688 (CmpPreserveSystemHiveData.c)
 *     CmpMarkAllChildrenDirty @ 0x140860000 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14086016C (CmpUpdateParentForEachSon.c)
 *     CmpCopySyncTree2 @ 0x1408DE354 (CmpCopySyncTree2.c)
 *     CmpClearKeyAccessBits @ 0x1408DEFA8 (CmpClearKeyAccessBits.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmpDeleteTree @ 0x140987238 (CmpDeleteTree.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140B50C8C (CmpSyncSubKeysAfterDelete.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140C58D4C (CmpDoAccessCheckOnSubtree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140CEBDA4 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x140CEEE14 (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, _DWORD *a2, unsigned int a3, int *a4)
{
  unsigned int v4; // eax
  int v5; // r14d
  unsigned int v7; // ebp
  __int64 v9; // rdx
  _WORD *CellFlat; // rax
  _WORD *v11; // rbx
  unsigned int i; // esi
  __int64 v14; // rdx
  __int64 CellPaged; // rax
  _WORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF
  int v20; // [rsp+5Ch] [rbp+14h]
  unsigned int v21; // [rsp+68h] [rbp+20h] BYREF
  int v22; // [rsp+6Ch] [rbp+24h]

  v4 = a2[5];
  v22 = 0;
  v5 = -1;
  v21 = -1;
  *a4 = -1;
  v7 = a3;
  if ( a3 >= v4 )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u )
      return 0LL;
    v7 = a3 - v4;
    if ( a3 - v4 >= a2[6] )
      return 0LL;
    v9 = (unsigned int)a2[8];
  }
  else
  {
    v9 = (unsigned int)a2[7];
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v9, &v21);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v9);
  v11 = CellFlat;
  if ( CellFlat )
  {
    v19 = -1;
    v20 = 0;
    if ( *CellFlat != 26994 )
    {
LABEL_7:
      if ( *v11 == 26220 || *v11 == 26732 )
        v5 = *(_DWORD *)&v11[4 * v7 + 2];
      else
        v5 = *(_DWORD *)&v11[2 * v7 + 2];
      goto LABEL_9;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned __int16)v11[1] )
        goto LABEL_7;
      v14 = *(unsigned int *)&v11[2 * i + 2];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, v14, &v19);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3, v14);
      v16 = (_WORD *)CellPaged;
      if ( !CellPaged )
        goto LABEL_9;
      v17 = *(unsigned __int16 *)(CellPaged + 2);
      if ( v7 < v17 )
        break;
      v7 -= v17;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v19);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v19);
    }
    if ( *v16 == 26220 || *v16 == 26732 )
    {
      v5 = *(_DWORD *)&v16[4 * v7 + 2];
      v18 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_35;
    }
    else
    {
      v5 = *(_DWORD *)&v16[2 * v7 + 2];
      v18 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
LABEL_35:
        HvpReleaseCellFlat(v18, (__int64)&v19);
LABEL_9:
        *a4 = v5;
        if ( v11 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v21);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v21);
        }
        return 0LL;
      }
    }
    HvpReleaseCellPaged(v18, &v19);
    goto LABEL_9;
  }
  return 3221225626LL;
}
