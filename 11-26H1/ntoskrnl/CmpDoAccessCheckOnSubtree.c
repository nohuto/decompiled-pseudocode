/*
 * XREFs of CmpDoAccessCheckOnSubtree @ 0x140C58D4C
 * Callers:
 *     CmDumpKeyToFile @ 0x14084D1E8 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpDumpKeyToBuffer @ 0x140C5812C (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x1408DEDA0 (CmpFindSubKeyByNumber.c)
 *     CmpCheckKeyAccess @ 0x140984B90 (CmpCheckKeyAccess.c)
 */

__int64 __fastcall CmpDoAccessCheckOnSubtree(ULONG_PTR BugCheckParameter3, int a2, char a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 Pool; // rax
  void *v9; // r12
  int SubKeyByNumber; // ebx
  unsigned int *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  _BYTE *v15; // rsi
  _DWORD *CellFlat; // rax
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v20[2]; // [rsp+38h] [rbp-8h] BYREF

  v5 = 0LL;
  v20[0] = -1;
  v20[1] = 0;
  v19 = 0;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    return 0;
  Pool = CmpAllocatePool(0x100uLL);
  v9 = (void *)Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool = a2;
  *(_BYTE *)(Pool + 16) = !(a5 & 1);
  v12 = (unsigned int *)Pool;
  *(_DWORD *)(Pool + 12) = 0;
  while ( 1 )
  {
    if ( v5 < 0 )
    {
      SubKeyByNumber = 0;
      goto LABEL_25;
    }
    if ( !*((_BYTE *)v12 + 16) )
    {
      v13 = *v12;
      *((_BYTE *)v12 + 16) = 1;
      SubKeyByNumber = CmpCheckKeyAccess(BugCheckParameter3, v13);
      if ( SubKeyByNumber < 0 )
        goto LABEL_25;
    }
    v14 = *v12;
    v15 = (_BYTE *)(BugCheckParameter3 + 140);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, v14, v20);
    else
      CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3, v14);
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      goto LABEL_25;
    }
    v17 = v12[3];
    if ( v17 < CellFlat[5] + CellFlat[6] )
      break;
    --v5;
    v12 -= 5;
LABEL_16:
    if ( (*v15 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v20);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v20);
  }
  SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, CellFlat, v17, &v19);
  if ( SubKeyByNumber < 0 )
    goto LABEL_28;
  v18 = v19;
  if ( v19 != -1 )
  {
    ++v12[3];
    ++v5;
    v12 += 5;
    if ( v5 != 512 )
    {
      *v12 = v18;
      v12[3] = 0;
      *((_BYTE *)v12 + 16) = 0;
      goto LABEL_16;
    }
  }
  SubKeyByNumber = -1073741670;
LABEL_28:
  if ( (*v15 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v20);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v20);
LABEL_25:
  CmpFreeTransientPoolWithTag(v9, 0x74634D43u);
  return (unsigned int)SubKeyByNumber;
}
