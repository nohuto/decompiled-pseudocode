/*
 * XREFs of HvIsCellAllocated @ 0x1408D9150
 * Callers:
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14094D7E0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 * Callees:
 *     RtlClearBits @ 0x1403591A0 (RtlClearBits.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     HvpMapEntryIsDiscardable @ 0x1408D9350 (HvpMapEntryIsDiscardable.c)
 *     HvpGetCellMap @ 0x140C58690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C586F0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C58AA0 (HvpGetBinContextInitialize.c)
 */

char __fastcall HvIsCellAllocated(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  int *v3; // rdi
  unsigned int v5; // edx
  __int64 v6; // r8
  RTL_BITMAP *v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 CellMap; // rax
  __int64 v11; // rbp
  __int64 CellFlat; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  int *v15; // rax
  __int64 BinAddress; // rax
  unsigned int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // r9
  bool v20; // si
  __int16 v22; // [rsp+40h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v23 = 0LL;
  v22 = 0;
  HvpGetCellContextInitialize(&v23);
  HvpGetBinContextInitialize(&v22);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    return 1;
  v8 = v5 >> 31;
  if ( (a2 & 0x7FFFFFFF) >= *(_DWORD *)(632 * v8 + BugCheckParameter3 + 280) || (a2 & 7) != 0 )
    return 0;
  if ( v6 && !(_DWORD)v8 )
  {
    v9 = a2 >> 3;
    if ( _bittest64(*(const signed __int64 **)(v6 + 8), v9) )
    {
      RtlClearBits(v7, v9, 1u);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  CellMap = HvpGetCellMap(BugCheckParameter3, a2);
  v11 = CellMap;
  if ( !CellMap || (unsigned __int8)HvpMapEntryIsDiscardable(CellMap) )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, (unsigned int *)&v23);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2);
  v14 = CellFlat;
  v15 = (int *)(CellFlat - 4);
  if ( v14 )
    v3 = v15;
  if ( v3 )
  {
    BinAddress = HvpMapEntryGetBinAddress(v14, v11, &v22, v13);
    v17 = (_DWORD)v3 - BinAddress;
    v18 = -*v3;
    v20 = 0;
    if ( *v3 < 0 && v18 - 8 <= 0xFFFF8 )
    {
      v19 = *(unsigned int *)(BinAddress + 8);
      if ( v18 <= (unsigned __int64)(v19 - 32) && v17 - *v3 <= (unsigned int)v19 && v17 >= 0x20 )
        v20 = 1;
    }
  }
  else
  {
    v20 = 1;
  }
  if ( !v3 )
    return v20;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
  {
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
    return v20;
  }
  HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v23);
  return v20;
}
