/*
 * XREFs of CmpCopyMergeOfLayeredKeyNode @ 0x14094536C
 * Callers:
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140943804 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpFreeKeyByCell @ 0x1408C3264 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmpCopyCell @ 0x1408E3124 (CmpCopyCell.c)
 *     CmLockHiveSecurityExclusive @ 0x1408E575C (CmLockHiveSecurityExclusive.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140943A14 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140944550 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpCopyMergeOfLayeredKeyNode(
        __int16 *a1,
        ULONG_PTR a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // r15d
  __int16 v13; // bx
  __int64 v14; // r13
  __int16 i; // dx
  __int64 EntryAtLayerHeight; // rax
  __int16 v17; // dx
  int v18; // r9d
  unsigned int v19; // edi
  int v20; // eax
  char *v21; // rbx
  int SecurityDescriptorNode; // r14d
  __int16 v23; // cx
  ULONG_PTR v24; // r13
  __int64 CellFlat; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KLOCK_ENTRIES *v28; // r9
  __int64 v29; // rdi
  void *Src; // rax
  unsigned int v31; // edi
  __int16 v32; // r12
  __int64 v34; // rax
  int v35; // r10d
  int EffectiveKeyNodeSemantics; // eax
  __int64 v37; // rdx
  ULONG_PTR v38; // rcx
  char v39; // r9
  __int64 v40; // [rsp+40h] [rbp-30h] BYREF
  __int64 v41; // [rsp+48h] [rbp-28h] BYREF
  __int64 v42; // [rsp+50h] [rbp-20h] BYREF
  void *v43; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR v45; // [rsp+68h] [rbp-8h]
  unsigned int v46; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v47; // [rsp+B8h] [rbp+48h]
  unsigned int v48; // [rsp+C8h] [rbp+58h] BYREF

  BugCheckParameter3 = 0LL;
  v48 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v46 = -1;
  v43 = 0LL;
  HvpGetCellContextInitialize(&v42);
  HvpGetCellContextInitialize(&v41);
  v12 = a5;
  LODWORD(v40) = v11;
  if ( a5 == 2 )
  {
    if ( a3 == v11 )
      v12 = v10;
    else
      v12 = a3 >> 31;
  }
  v13 = *a1;
  v14 = v10;
  for ( i = *a1; i >= 0; i = v17 - 1 )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i);
    if ( *(_DWORD *)(EntryAtLayerHeight + 8) != v18 )
    {
      v14 = EntryAtLayerHeight;
      break;
    }
  }
  CmpGetSecurityCellForKeyNodeStack(a1, &BugCheckParameter3, &v48);
  v45 = 0LL;
  v47 = -1;
  LOWORD(a5) = 0;
  if ( (a4 & 1) != 0 )
  {
    while ( v13 >= 0 )
    {
      v34 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, v13);
      if ( *(_DWORD *)(v34 + 8) != v35 )
      {
        EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*(_QWORD *)v34, *(_QWORD *)(v34 + 16));
        if ( EffectiveKeyNodeSemantics == 1 )
          break;
        if ( *(char *)(v37 + 13) >= v39 )
        {
          v47 = *(_DWORD *)(v37 + 48);
          LOWORD(a5) = *(_WORD *)(v37 + 74);
          v45 = v38;
          break;
        }
        if ( EffectiveKeyNodeSemantics )
          break;
      }
      --v13;
    }
  }
  v19 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 16) + 72LL) + 76;
  v20 = HvAllocateCell(a2, v19, v12, &v46, &v43, (__int64)&v42);
  v21 = (char *)v43;
  SecurityDescriptorNode = v20;
  if ( v20 < 0 )
  {
    v31 = v46;
  }
  else
  {
    memmove(v43, *(const void **)(v14 + 16), v19);
    v21[12] = 0;
    v21[13] = v21[13] & 0x7C | 0x80;
    *((_DWORD *)v21 + 4) = a3;
    *(_QWORD *)(v21 + 20) = 0LL;
    *((_DWORD *)v21 + 7) = -1;
    *((_DWORD *)v21 + 8) = -1;
    *((_DWORD *)v21 + 9) = 0;
    *((_DWORD *)v21 + 10) = -1;
    *((_DWORD *)v21 + 11) = -1;
    *((_DWORD *)v21 + 12) = -1;
    *((_WORD *)v21 + 26) = 0;
    *((_QWORD *)v21 + 7) = 0LL;
    *((_QWORD *)v21 + 8) = 0LL;
    *((_WORD *)v21 + 37) = 0;
    v23 = *(_WORD *)(*(_QWORD *)(v14 + 16) + 2LL) & 0xFFBF;
    *((_WORD *)v21 + 1) = v23;
    if ( a3 == -1 )
      *((_WORD *)v21 + 1) = v23 | 0xC;
    v24 = BugCheckParameter3;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v48, (unsigned int *)&v41);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v48);
    v29 = CellFlat;
    CmLockHiveSecurityExclusive(a2, v26, v27, v28);
    Src = (void *)(v29 + 20);
    v31 = v46;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a2,
                               v46,
                               (__int64)v21,
                               v46 >> 31,
                               Src,
                               0,
                               (unsigned int *)v21 + 11);
    CmUnlockHiveSecurity(a2);
    if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v24, (__int64)&v41);
    else
      HvpReleaseCellPaged(v24, (unsigned int *)&v41);
    if ( SecurityDescriptorNode >= 0 )
    {
      v32 = a5;
      if ( !(_WORD)a5 )
      {
LABEL_16:
        SecurityDescriptorNode = 0;
        *a6 = v31;
        v31 = -1;
        goto LABEL_17;
      }
      SecurityDescriptorNode = CmpCopyCell(v45, v47, a2, v12, &v40);
      if ( SecurityDescriptorNode >= 0 )
      {
        *((_DWORD *)v21 + 12) = v40;
        *((_WORD *)v21 + 37) = v32;
        goto LABEL_16;
      }
    }
  }
LABEL_17:
  if ( v21 )
  {
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a2, (__int64)&v42);
    else
      HvpReleaseCellPaged(a2, (unsigned int *)&v42);
  }
  if ( v31 != -1 )
    CmpFreeKeyByCell(a2, v31, 0);
  return (unsigned int)SecurityDescriptorNode;
}
