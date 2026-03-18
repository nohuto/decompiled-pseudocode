/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x140A2F40C
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x140A2E958 (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     HvLockHiveWriter @ 0x1408DAEB0 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408DAF14 (HvUnlockHiveWriter.c)
 */

__int64 __fastcall CmpMarkEntireIndexDirty(ULONG_PTR BugCheckParameter3, int a2)
{
  __int64 v4; // rdx
  __int64 CellFlat; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  _WORD *v9; // rdi
  unsigned int i; // esi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  HvpGetCellContextInitialize(&v12);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v4, (unsigned int *)&v12);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v4);
  v9 = (_WORD *)CellFlat;
  HvLockHiveWriter(BugCheckParameter3, v6, v7, v8);
  if ( (int)HvpMarkCellDirty(BugCheckParameter3, a2, 1) >= 0 && *v9 == 26994 )
  {
    for ( i = 0; i < (unsigned __int16)v9[1]; ++i )
    {
      if ( (int)HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)&v9[2 * i + 2], 1) < 0 )
        break;
    }
  }
  HvUnlockHiveWriter(BugCheckParameter3);
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v12);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v12);
  }
  return 0LL;
}
