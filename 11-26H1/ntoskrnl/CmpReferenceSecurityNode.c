/*
 * XREFs of CmpReferenceSecurityNode @ 0x1408616B8
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 * Callees:
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404BDE08 (CmpKeySecurityIncrementReferenceCount.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
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
