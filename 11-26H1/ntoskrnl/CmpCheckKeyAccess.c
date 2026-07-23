/*
 * XREFs of CmpCheckKeyAccess @ 0x140946BA0
 * Callers:
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140C5ED4C (CmpDoAccessCheckOnSubtree.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpCheckSecurityCellAccess @ 0x140945764 (CmpCheckSecurityCellAccess.c)
 */

__int64 __fastcall CmpCheckKeyAccess(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 CellFlat; // rax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+44h] [rbp+Ch]

  v5 = -1;
  v6 = 0;
  if ( !BugCheckParameter3 || (unsigned int)(a2 - 1) > 0xFFFFFFFD )
    return 3221225852LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2);
  if ( !CellFlat )
    return 3221225626LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v5);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v5);
  return CmpCheckSecurityCellAccess(BugCheckParameter3);
}
