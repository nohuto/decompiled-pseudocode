/*
 * XREFs of CmpGetSecurityDescriptorNodeEx @ 0x1408E5828
 * Callers:
 *     CmpAssignKeySecurity @ 0x140860E54 (CmpAssignKeySecurity.c)
 *     CmpCopySaclToVirtualKey @ 0x140861014 (CmpCopySaclToVirtualKey.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpAssignSecurityDescriptor @ 0x1408E57F4 (CmpAssignSecurityDescriptor.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14094536C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140ABAA1C (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140AE3604 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpCreateHiveRootCell @ 0x140B4D6CC (CmpCreateHiveRootCell.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 * Callees:
 *     RtlLengthSecurityDescriptorStrict @ 0x1404B1A48 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404BDE08 (CmpKeySecurityIncrementReferenceCount.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1408D74A0 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmpFindMatchingDescriptorCell @ 0x140A87208 (CmpFindMatchingDescriptorCell.c)
 *     CmpInsertSecurityCellList @ 0x140AE3114 (CmpInsertSecurityCellList.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNodeEx(
        ULONG_PTR BugCheckParameter2,
        int a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  unsigned int v8; // esi
  int v12; // edx
  int inserted; // edi
  const void *v14; // r14
  unsigned int v15; // r15d
  int v17; // eax
  unsigned int v18; // eax
  _DWORD *v19; // rcx
  __int64 v20; // r14
  __int64 CellFlat; // rax
  ULONG_PTR v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(v22) = 0;
  v8 = -1;
  v23 = 0LL;
  LODWORD(BugCheckParameter3) = -1;
  v24 = 0LL;
  HvpGetCellContextInitialize(&v23);
  inserted = HvpMarkCellDirty(BugCheckParameter2, v12, 0);
  if ( inserted < 0 )
    return (unsigned int)inserted;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter2, a3, a2);
  v14 = Src;
  if ( (unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter2, Src, a4, &v22, 0LL) )
  {
    v15 = v22;
    inserted = HvpMarkCellDirty(BugCheckParameter2, v22, 0);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, v15, (unsigned int *)&v23);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2, v15);
    v20 = CellFlat;
    inserted = CmpKeySecurityIncrementReferenceCount(CellFlat, BugCheckParameter2, v15, 0);
    if ( inserted < 0 )
      goto LABEL_17;
    *a7 = v15;
    goto LABEL_16;
  }
  if ( KeGetCurrentThread()->PreviousMode
    && (*(_DWORD *)(BugCheckParameter2 + 4120) & 0x20) != 0
    && *(_DWORD *)(BugCheckParameter2 + 1880) > 1u )
  {
    return (unsigned int)-1073741790;
  }
  v17 = RtlLengthSecurityDescriptorStrict();
  inserted = HvAllocateCell(BugCheckParameter2, v17 + 20, a4, (unsigned int *)&BugCheckParameter3, &v24, (__int64)&v23);
  if ( inserted < 0 )
  {
    v8 = BugCheckParameter3;
    v20 = v24;
LABEL_17:
    if ( v20 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v23);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v23);
    }
    goto LABEL_20;
  }
  v18 = RtlLengthSecurityDescriptorStrict();
  v19 = (_DWORD *)v24;
  *(_WORD *)v24 = 27507;
  v19[3] = 1;
  v19[4] = v18;
  memmove(v19 + 5, v14, v18);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v23);
  else
    HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v23);
  v8 = BugCheckParameter3;
  v20 = 0LL;
  inserted = CmpInsertSecurityCellList(BugCheckParameter2);
  if ( inserted >= 0 )
  {
    *a7 = v8;
    v8 = -1;
LABEL_16:
    inserted = 0;
    goto LABEL_17;
  }
LABEL_20:
  if ( v8 != -1 )
    HvFreeCell(BugCheckParameter2, v8);
  return (unsigned int)inserted;
}
