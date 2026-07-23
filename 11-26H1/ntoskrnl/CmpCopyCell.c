/*
 * XREFs of CmpCopyCell @ 0x1408E3124
 * Callers:
 *     CmpCopyValue @ 0x1408E342C (CmpCopyValue.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14094536C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpLightWeightCreateSetValueData @ 0x140AEAFF0 (CmpLightWeightCreateSetValueData.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 */

__int64 __fastcall CmpCopyCell(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, unsigned int a4, _DWORD *a5)
{
  __int64 v8; // rdx
  __int64 CellFlat; // rax
  const void *v10; // rsi
  unsigned int v11; // r12d
  int v12; // r14d
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  void *v16; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+70h] [rbp+20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v17 = -1;
  HvpGetCellContextInitialize(&v14);
  v16 = 0LL;
  HvpGetCellContextInitialize(&v15);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, (unsigned int *)&v14);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v8);
  v10 = (const void *)CellFlat;
  v11 = -4 - *(_DWORD *)(CellFlat - 4);
  v12 = HvAllocateCell(a3, v11, a4, &v17, &v16, (__int64)&v15);
  if ( v12 >= 0 )
  {
    memmove(v16, v10, v11);
    v12 = 0;
    *a5 = v17;
  }
  if ( v16 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, (__int64)&v15);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v15);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v14);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v14);
  return (unsigned int)v12;
}
