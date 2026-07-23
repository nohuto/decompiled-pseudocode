/*
 * XREFs of CmpUpdateHiveRootCellFlags @ 0x140AE52F8
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpUpdateHiveRootCellFlags(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 CellFlat; // rax
  __int64 v8; // rdi
  int v9; // esi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  HvpGetCellContextInitialize(&v11);
  HvLockHiveFlusherShared(BugCheckParameter3, v4, v5, v6);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, (unsigned int *)&v11);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2);
  v8 = CellFlat;
  if ( !CellFlat )
  {
    v9 = -1073741670;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 0xC) != 0xC )
  {
    v9 = HvpMarkCellDirty(BugCheckParameter3, a2, 0);
    if ( v9 < 0 )
      goto LABEL_8;
    *(_WORD *)(v8 + 2) |= 0xCu;
  }
  v9 = 0;
LABEL_8:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v11);
LABEL_10:
  HvUnlockHiveFlusherShared(BugCheckParameter3);
  return (unsigned int)v9;
}
