/*
 * XREFs of CmpReferenceSecurityNode @ 0x14085B3C4
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 * Callees:
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404C4528 (CmpKeySecurityIncrementReferenceCount.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpReferenceSecurityNode(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 CellFlat; // rax
  __int64 v6; // rsi
  int v7; // edi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  HvpGetCellContextInitialize(&v9);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v4, &v9);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v6 = CellFlat;
  v7 = CmpKeySecurityIncrementReferenceCount(CellFlat, BugCheckParameter3, a2, 0);
  if ( v7 < 0 )
  {
    if ( v6 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v9);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v9);
    }
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v9);
    return 0;
  }
  return (unsigned int)v7;
}
