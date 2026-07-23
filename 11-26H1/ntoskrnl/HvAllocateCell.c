/*
 * XREFs of HvAllocateCell @ 0x1408E1DBC
 * Callers:
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14085F2D0 (CmpAddValueKeyTombstone.c)
 *     CmpSetValueKeyExisting @ 0x1408C37CC (CmpSetValueKeyExisting.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpSplitLeaf @ 0x1408C5D28 (CmpSplitLeaf.c)
 *     CmpAddSubKeyEx @ 0x1408C6A8C (CmpAddSubKeyEx.c)
 *     CmpCopyCell @ 0x1408E3124 (CmpCopyCell.c)
 *     CmpAddValueKeyNew @ 0x1408E3B9C (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1408E3E88 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyNew @ 0x1408E3FE4 (CmpSetValueKeyNew.c)
 *     CmpSetValueDataNew @ 0x1408E4628 (CmpSetValueDataNew.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14094536C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A4043C (CmpLightWeightPrepareAddKeyUoW.c)
 *     HvDuplicateCell @ 0x140A4115C (HvDuplicateCell.c)
 *     CmpConcatenateValueLists @ 0x140AE53B8 (CmpConcatenateValueLists.c)
 *     CmpSetValueDataExisting @ 0x140B33210 (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x140B4D6CC (CmpCreateHiveRootCell.c)
 *     CmpCreateRootNode @ 0x140CF0C94 (CmpCreateRootNode.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvpFindFreeCell @ 0x1408E1930 (HvpFindFreeCell.c)
 *     HvpGetCellContextMove @ 0x1408E20A4 (HvpGetCellContextMove.c)
 *     HvpEnlistFreeCell @ 0x1408E2D90 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x1408E2F60 (HvpRemoveFreeCellHint.c)
 *     HvpDelistFreeCell @ 0x1408E3DC8 (HvpDelistFreeCell.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 */

__int64 __fastcall HvAllocateCell(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v8; // r13d
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  unsigned int v15; // esi
  char v16; // r15
  unsigned int FreeCell; // r14d
  unsigned int *v18; // rsi
  unsigned int v19; // r8d
  unsigned int v20; // r15d
  unsigned int v21; // r8d
  unsigned int v22; // eax
  _DWORD *v23; // rax
  int v24; // r14d
  unsigned int v26; // esi
  unsigned int v27; // r8d
  unsigned int v28; // eax
  __int64 CellFlat; // rax
  __int64 v30; // [rsp+38h] [rbp-18h] BYREF
  __int64 v31; // [rsp+40h] [rbp-10h] BYREF

  v8 = 0;
  v9 = (a2 + 11) & 0xFFFFFFF8;
  v10 = 0;
  v11 = 0x4000LL;
  while ( v9 > (unsigned int)v11 )
  {
    v11 = (unsigned int)(2 * v11);
    ++v10;
  }
  if ( !v10 )
    v11 = v9;
  if ( (unsigned int)v11 > 0x100000 )
    return (unsigned int)-1073741670;
  v30 = 0LL;
  v31 = 0LL;
  HvpGetCellContextInitialize(&v30);
  v15 = ((unsigned int)v11 >> 3) - 1;
  if ( v15 >= 0x10 )
  {
    v26 = v15 >> 4;
    if ( v26 > 0xFF )
    {
      v15 = 23;
    }
    else
    {
      _BitScanReverse(&v26, v26);
      v15 = v26 + 16;
    }
  }
  HvLockHiveWriter(BugCheckParameter2, v12, v13, v14);
  v16 = 1;
  FreeCell = HvpFindFreeCell(BugCheckParameter2, v15, v11, a3, &v31, (unsigned int *)&v30);
  if ( FreeCell != -1 )
  {
    v18 = (unsigned int *)v31;
LABEL_9:
    v19 = *v18;
    v20 = *v18 - v11;
    if ( v20 < 8 )
    {
      HvpDelistFreeCell(BugCheckParameter2, FreeCell, a3);
      *v18 = -*v18;
    }
    else
    {
      *(unsigned int *)((char *)v18 + v11) = v20;
      *v18 = -(int)v11;
      v21 = (v19 >> 3) - 1;
      if ( v21 >= 0x10 )
      {
        v27 = v21 >> 4;
        if ( v27 > 0xFF )
        {
          v21 = 23;
        }
        else
        {
          _BitScanReverse(&v27, v27);
          v21 = v27 + 16;
        }
      }
      v22 = (v20 >> 3) - 1;
      if ( v22 >= 0x10 )
      {
        v28 = v22 >> 4;
        if ( v28 > 0xFF )
        {
          v22 = 23;
        }
        else
        {
          _BitScanReverse(&v28, v28);
          v22 = v28 + 16;
        }
      }
      if ( v21 != v22 )
      {
        HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, v21, a3, 0);
        HvpEnlistFreeCell(BugCheckParameter2, (unsigned int)v11 + FreeCell);
      }
    }
    HvUnlockHiveWriter(BugCheckParameter2);
    v16 = 0;
    if ( a5 )
    {
      v23 = v18 + 1;
      v18 = 0LL;
      *a5 = v23;
      HvpGetCellContextMove(a6, &v30);
    }
    v8 = FreeCell;
    v24 = 0;
    goto LABEL_17;
  }
  v24 = HvpAddBin(BugCheckParameter2);
  if ( v24 >= 0 )
  {
    FreeCell = 31;
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, 0x1Fu, (unsigned int *)&v30);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2, 31LL);
    v18 = (unsigned int *)((CellFlat - 4) & -(__int64)(CellFlat != 0));
    goto LABEL_9;
  }
  v18 = (unsigned int *)v31;
LABEL_17:
  if ( v18 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v30);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v30);
  }
  if ( v16 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
    KeAbPostRelease(BugCheckParameter2 + 80);
  }
  if ( v24 >= 0 )
  {
    v24 = 0;
    *a4 = v8;
  }
  return (unsigned int)v24;
}
