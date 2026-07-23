/*
 * XREFs of CmpLightWeightDuplicateParentLists @ 0x140A407E4
 * Callers:
 *     CmpLightWeightCreateModificationData @ 0x140A40714 (CmpLightWeightCreateModificationData.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpDuplicateIndex @ 0x140A40E80 (CmpDuplicateIndex.c)
 *     CmpMarkEntireIndexDirty @ 0x140A41298 (CmpMarkEntireIndexDirty.c)
 */

__int64 __fastcall CmpLightWeightDuplicateParentLists(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 CellFlat; // rax
  int v7; // ebp
  _DWORD *v8; // rsi
  __int64 v9; // r14
  unsigned int v10; // r15d
  int v11; // edi
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  HvpGetCellContextInitialize(&v13);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, (unsigned int *)&v13);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v5);
  if ( CellFlat )
  {
    v7 = 0;
    v8 = (_DWORD *)(CellFlat + 20);
    v9 = a3 - CellFlat;
    while ( v7 < 2 )
    {
      v10 = v8[2];
      if ( v10 != -1 )
      {
        v11 = CmpMarkEntireIndexDirty(BugCheckParameter3, v10);
        if ( v11 < 0 )
          goto LABEL_9;
        v11 = CmpDuplicateIndex(BugCheckParameter3);
        if ( v11 < 0 )
          goto LABEL_9;
        *(_DWORD *)((char *)v8 + v9 - 16) = *v8;
      }
      ++v7;
      ++v8;
    }
    v11 = 0;
LABEL_9:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v11;
}
