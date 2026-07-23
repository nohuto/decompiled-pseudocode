/*
 * XREFs of HvMarkCellDirty @ 0x1408E1C90
 * Callers:
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1404D6D18 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpCreateTombstone @ 0x1406E6C30 (CmpCreateTombstone.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 */

__int64 __fastcall HvMarkCellDirty(
        ULONG_PTR BugCheckParameter2,
        __int64 BugCheckParameter3,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  char v4; // bp
  ULONG_PTR v6; // rsi
  __int64 CellFlat; // rax
  int *v8; // rdi
  int v9; // edi
  int v10; // edi
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v12 = -1;
  v13 = 0;
  v4 = a3;
  v6 = (unsigned int)BugCheckParameter3;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 || (int)BugCheckParameter3 < 0 )
    return 0;
  if ( !(_BYTE)a3 )
    HvLockHiveWriter(BugCheckParameter2, BugCheckParameter3, a3, a4);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, v6, &v12);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2, (unsigned int)v6);
  v8 = (int *)((CellFlat - 4) & -(__int64)(CellFlat != 0));
  if ( v8 )
  {
    if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)v6) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x2A7uLL);
    v9 = *v8;
    if ( v9 < 0 )
      v9 = -v9;
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v12);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v12);
    v10 = HvpMarkDirty(BugCheckParameter2, (int)v6 - 4, v9, 0);
    if ( !v4 )
      HvUnlockHiveWriter(BugCheckParameter2);
    if ( v10 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 141) = 1;
      return 0;
    }
  }
  else
  {
    if ( !v4 )
      HvUnlockHiveWriter(BugCheckParameter2);
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v10;
}
