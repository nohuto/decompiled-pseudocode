/*
 * XREFs of HvpDoAllocateCell @ 0x1408E20F0
 * Callers:
 *     HvReallocateCell @ 0x1408E3254 (HvReallocateCell.c)
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

__int64 __fastcall HvpDoAllocateCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned int v13; // ebx
  char v14; // di
  unsigned int FreeCell; // r14d
  unsigned int *v16; // rbx
  unsigned int v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // r8d
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  int v22; // r14d
  unsigned int v24; // ebx
  unsigned int v25; // r8d
  unsigned int v26; // eax
  __int64 CellFlat; // rax
  bool v28; // zf
  unsigned int *v29; // rax
  __int64 v30; // [rsp+38h] [rbp-40h] BYREF
  __int64 v31; // [rsp+40h] [rbp-38h] BYREF

  v7 = a2;
  v30 = 0LL;
  v31 = 0LL;
  HvpGetCellContextInitialize(&v30);
  v13 = ((unsigned int)v10 >> 3) - 1;
  if ( v13 >= 0x10 )
  {
    v24 = v13 >> 4;
    if ( v24 > 0xFF )
    {
      v13 = 23;
    }
    else
    {
      _BitScanReverse(&v24, v24);
      v13 = v24 + 16;
    }
  }
  HvLockHiveWriter(BugCheckParameter2, v10, v11, v12);
  v14 = 1;
  FreeCell = HvpFindFreeCell(BugCheckParameter2, v13, v7, a3, &v31, (unsigned int *)&v30);
  if ( FreeCell == -1 )
  {
    v22 = HvpAddBin(BugCheckParameter2);
    if ( v22 < 0 )
    {
      v16 = (unsigned int *)v31;
      goto LABEL_12;
    }
    FreeCell = 31;
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, 0x1Fu, (unsigned int *)&v30);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2, 31LL);
    v16 = 0LL;
    v28 = CellFlat == 0;
    v29 = (unsigned int *)(CellFlat - 4);
    if ( !v28 )
      v16 = v29;
  }
  else
  {
    v16 = (unsigned int *)v31;
  }
  v17 = *v16;
  v18 = *v16 - v7;
  if ( v18 < 8 )
  {
    HvpDelistFreeCell(BugCheckParameter2, FreeCell, a3);
    *v16 = -*v16;
  }
  else
  {
    *(unsigned int *)((char *)v16 + v7) = v18;
    *v16 = -(int)v7;
    v19 = (v17 >> 3) - 1;
    if ( v19 >= 0x10 )
    {
      v25 = v19 >> 4;
      if ( v25 > 0xFF )
      {
        v19 = 23;
      }
      else
      {
        _BitScanReverse(&v25, v25);
        v19 = v25 + 16;
      }
    }
    v20 = (v18 >> 3) - 1;
    if ( v20 >= 0x10 )
    {
      v26 = v20 >> 4;
      if ( v26 > 0xFF )
      {
        v20 = 23;
      }
      else
      {
        _BitScanReverse(&v26, v26);
        v20 = v26 + 16;
      }
    }
    if ( v19 != v20 )
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, v19, a3, 0);
      HvpEnlistFreeCell(BugCheckParameter2, FreeCell + (unsigned int)v7);
    }
  }
  HvUnlockHiveWriter(BugCheckParameter2);
  v14 = 0;
  if ( a5 )
  {
    v21 = v16 + 1;
    v16 = 0LL;
    *a5 = v21;
    HvpGetCellContextMove(a6, &v30);
  }
  *a4 = FreeCell;
  v22 = 0;
LABEL_12:
  if ( v16 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v30);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v30);
  }
  if ( v14 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
    KeAbPostRelease(BugCheckParameter2 + 80);
  }
  return (unsigned int)v22;
}
