/*
 * XREFs of CmpSyncKeyValues @ 0x140B65AF8
 * Callers:
 *     CmpCopySyncTree2 @ 0x1408E4914 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x140B2DE64 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     CmpDereferenceSecurityNode @ 0x1404C20E0 (CmpDereferenceSecurityNode.c)
 *     CmpFreeKeyValueList @ 0x14077CB0C (CmpFreeKeyValueList.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFreeSecurityDescriptor @ 0x1408C4C3C (CmpFreeSecurityDescriptor.c)
 *     CmpFreeValue @ 0x1408D71B4 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpCopyCell @ 0x1408E3124 (CmpCopyCell.c)
 *     CmpCopyValue @ 0x1408E342C (CmpCopyValue.c)
 *     CmpAddValueToListEx @ 0x1408E3E88 (CmpAddValueToListEx.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1408E5714 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1408E57C4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpFreeKeyValues @ 0x140B1F1B8 (CmpFreeKeyValues.c)
 */

__int64 __fastcall CmpSyncKeyValues(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        unsigned int a5,
        __int64 a6,
        __int16 a7)
{
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v12; // r8d
  unsigned __int16 v13; // dx
  char v14; // r14
  unsigned int v15; // esi
  __int64 v16; // rdx
  int v17; // eax
  int SecurityDescriptorNode; // esi
  int v19; // edx
  unsigned int v20; // esi
  unsigned __int8 *v21; // r14
  __int64 v22; // rdx
  __int64 CellFlat; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rsi
  unsigned int v27; // edx
  __int64 v28; // rax
  unsigned __int8 v29; // al
  unsigned int v31; // [rsp+40h] [rbp-28h]
  unsigned int v32; // [rsp+44h] [rbp-24h]
  __int64 v33; // [rsp+48h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-18h] BYREF
  __int64 v35; // [rsp+58h] [rbp-10h]
  __int64 v36; // [rsp+B0h] [rbp+48h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v38; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v39; // [rsp+C8h] [rbp+60h] BYREF

  v34 = 0LL;
  v39 = 0;
  LODWORD(BugCheckParameter3a) = -1;
  v9 = -1;
  LODWORD(v38) = -1;
  v10 = -1;
  LODWORD(v36) = -1;
  a7 = 0;
  v33 = 0xFFFFFFFF00000000uLL;
  v35 = 0LL;
  HvpGetCellContextInitialize(&v34);
  v14 = v13;
  v15 = a5 >> 31;
  v31 = a5 >> 31;
  if ( *(_WORD *)(a3 + 74) > v13 )
  {
    v16 = *(unsigned int *)(a3 + 48);
    if ( (_DWORD)v16 != v12 )
    {
      v17 = CmpCopyCell(BugCheckParameter3, v16, a4, v15, &BugCheckParameter3a);
      v9 = BugCheckParameter3a;
      SecurityDescriptorNode = v17;
      if ( v17 < 0 )
        goto LABEL_27;
      v15 = v31;
      a7 = *(_WORD *)(a3 + 74);
    }
  }
  CmpLockTwoSecurityCachesExclusiveShared(a4, BugCheckParameter3);
  v19 = *(_DWORD *)(a3 + 44);
  v14 = 1;
  LODWORD(BugCheckParameter3a) = 1;
  if ( CmpFindSecurityCellCacheIndex(BugCheckParameter3, v19, &v39) )
  {
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a4,
                               a5,
                               a6,
                               v15,
                               (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1896) + 16LL * v39 + 8) + 32LL),
                               0,
                               (unsigned int *)&v38);
    if ( SecurityDescriptorNode >= 0 )
    {
      v20 = *(_DWORD *)(a3 + 36);
      v21 = (unsigned __int8 *)(BugCheckParameter3 + 140);
      v32 = v20;
      if ( v20 )
      {
        v22 = *(unsigned int *)(a3 + 40);
        if ( ((unsigned __int8)BugCheckParameter3a & *v21) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v22, (unsigned int *)&v34);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3, v22);
        v24 = CellFlat;
        v35 = CellFlat;
        v25 = 0;
        while ( 1 )
        {
          v39 = v25;
          if ( v25 >= v20 )
            break;
          SecurityDescriptorNode = CmpCopyValue(
                                     BugCheckParameter3,
                                     *(_DWORD *)(v24 + 4LL * v25),
                                     a4,
                                     v31,
                                     (unsigned int *)&v36);
          if ( SecurityDescriptorNode < 0 )
          {
            v10 = v36;
            goto LABEL_20;
          }
          v10 = v36;
          SecurityDescriptorNode = CmpAddValueToListEx(a4, v36, v39, v31, (unsigned int *)&v33, BugCheckParameter3a);
          if ( SecurityDescriptorNode < 0 )
            goto LABEL_20;
          v10 = -1;
          v25 = BugCheckParameter3a + v39;
          v20 = v32;
          v24 = v35;
          LODWORD(v36) = -1;
        }
      }
      v36 = BugCheckParameter3 + 140;
      SecurityDescriptorNode = CmpFreeKeyValues(a4, a5, a6);
      if ( SecurityDescriptorNode >= 0 )
      {
        v26 = a6;
        v27 = a5;
        *(_WORD *)(a6 + 74) = a7;
        v28 = v33;
        *(_DWORD *)(v26 + 48) = v9;
        v9 = -1;
        *(_QWORD *)(v26 + 36) = v28;
        *(_DWORD *)(v26 + 60) = *(_DWORD *)(a3 + 60);
        *(_DWORD *)(v26 + 64) = *(_DWORD *)(a3 + 64);
        v33 = 0xFFFFFFFF00000000uLL;
        CmpFreeSecurityDescriptor(a4, v27);
        *(_DWORD *)(v26 + 44) = v38;
        SecurityDescriptorNode = 0;
        LODWORD(v38) = -1;
        v21 = (unsigned __int8 *)v36;
      }
LABEL_20:
      if ( v35 )
      {
        v29 = *v21;
        v14 = BugCheckParameter3a;
        if ( (v29 & (unsigned __int8)BugCheckParameter3a) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v34);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
      }
      else
      {
        v14 = BugCheckParameter3a;
      }
      if ( v10 != -1 )
        CmpFreeValue(a4, v10);
    }
  }
  else
  {
    SecurityDescriptorNode = -1073741492;
  }
LABEL_27:
  CmpFreeKeyValueList(a4, &v33);
  if ( v9 != -1 )
    HvFreeCell(a4, v9);
  if ( (_DWORD)v38 != -1 )
    CmpDereferenceSecurityNode(a4, v38);
  if ( v14 )
    CmpUnlockTwoSecurityCaches(a4, BugCheckParameter3);
  return (unsigned int)SecurityDescriptorNode;
}
