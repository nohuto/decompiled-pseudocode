/*
 * XREFs of CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8
 * Callers:
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140866A0C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140866CE8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409479F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14048C7C0 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackEntryInitialize @ 0x1404C8430 (CmpValueEnumStackEntryInitialize.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1404D3984 (CmpValueEnumStackGetCurrentValueHive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpFreeKeyValueList @ 0x14077CB0C (CmpFreeKeyValueList.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpCopyCell @ 0x1408E3124 (CmpCopyCell.c)
 *     CmpCopyValue @ 0x1408E342C (CmpCopyValue.c)
 *     CmpAddValueToListEx @ 0x1408E3E88 (CmpAddValueToListEx.c)
 *     CmpValueEnumStackAdvance @ 0x140942ABC (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140943268 (CmpValueEnumStackCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpConcatenateValueLists @ 0x140AE53B8 (CmpConcatenateValueLists.c)
 */

__int64 __fastcall CmpFullPromoteSingleKeyFromKeyNodeStacks(__int64 a1, __int16 *a2)
{
  unsigned int v3; // r12d
  unsigned int v4; // r14d
  char *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 EntryAtLayerHeight; // rdi
  __int16 v12; // r11
  __int64 v13; // r15
  __int64 v14; // rax
  ULONG_PTR v15; // rsi
  ULONG_PTR *v16; // rax
  unsigned int v17; // r9d
  __int16 v18; // r10
  ULONG_PTR v19; // rcx
  int v20; // ebx
  __int16 v21; // r13
  int v22; // eax
  ULONG_PTR CurrentValueHive; // rax
  int v24; // ebx
  __int64 CellFlat; // rax
  char v26; // r8
  unsigned __int16 v27; // dx
  unsigned __int16 v28; // cx
  bool v29; // zf
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // ecx
  int v33; // eax
  int v34; // eax
  unsigned __int16 v35; // r13
  int v36; // edx
  __int64 v37; // rcx
  char v38; // al
  __int64 v39; // rcx
  ULONG_PTR v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  int v44; // eax
  unsigned __int16 v45; // [rsp+30h] [rbp-89h]
  __int16 v46; // [rsp+32h] [rbp-87h]
  char v47; // [rsp+32h] [rbp-87h]
  __int64 v48; // [rsp+34h] [rbp-85h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+3Ch] [rbp-7Dh] BYREF
  ULONG_PTR *v50; // [rsp+48h] [rbp-71h]
  unsigned int v51; // [rsp+50h] [rbp-69h]
  __int64 v52; // [rsp+58h] [rbp-61h] BYREF
  __int64 v53; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v55[2]; // [rsp+74h] [rbp-45h] BYREF
  __int16 v56; // [rsp+76h] [rbp-43h]
  char v57; // [rsp+80h] [rbp-39h] BYREF

  v52 = 0LL;
  v48 = 0xFFFFFFFFLL;
  v3 = -1;
  v45 = 0;
  BugCheckParameter3 = -1LL;
  v4 = -1;
  v53 = 0xFFFFFFFF00000000uLL;
  HvpGetCellContextInitialize(&v52);
  memset_0(v55, 0, 0x54uLL);
  v6 = &v57;
  v54 = -1;
  do
  {
    CmpValueEnumStackEntryInitialize(v6);
    v6 = (char *)(v7 + 32);
  }
  while ( v8 != v9 );
  v46 = *a2;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a2, (unsigned __int16)*a2);
  if ( a1 )
    v13 = CmpKeyNodeStackGetEntryAtLayerHeight(a1, v10);
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(EntryAtLayerHeight + 16);
  v15 = *(_QWORD *)EntryAtLayerHeight;
  v51 = *(_DWORD *)(EntryAtLayerHeight + 8) >> 31;
  if ( *(char *)(v14 + 13) < 0 )
  {
    LOWORD(v10) = v10 - v12;
    while ( (v10 & 0x8000u) == 0LL )
    {
      v16 = (ULONG_PTR *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, v10);
      v50 = v16;
      v19 = v16[2];
      if ( v19 && *(char *)(v19 + 13) >= (char)v18 )
      {
        if ( *(_WORD *)(v19 + 74) == v18 )
          break;
        v44 = CmpCopyCell(*v16, *(unsigned int *)(v19 + 48), v15, v17, &v48);
        v3 = v48;
        v20 = v44;
        if ( v44 >= 0 )
        {
          v45 = *(_WORD *)(v50[2] + 74);
          break;
        }
        goto LABEL_53;
      }
      LOWORD(v10) = v10 - 1;
    }
  }
  v20 = CmpValueEnumStackStartFromKeyNodeStack((__int64)&v54, a2);
  if ( v20 >= 0 )
  {
    v21 = v46;
    LODWORD(v48) = 0;
    LODWORD(v50) = 0;
    while ( 1 )
    {
      v22 = CmpValueEnumStackAdvance((__int64)&v54);
      v20 = v22;
      if ( v22 == -2147483622 )
        break;
      if ( v22 < 0 )
        goto LABEL_53;
      if ( v56 != v21 )
      {
        CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)&v54);
        v20 = CmpCopyValue(CurrentValueHive, v54, v15, v51, (unsigned int *)&BugCheckParameter3 + 1);
        if ( v20 < 0 )
          goto LABEL_53;
        v24 = HIDWORD(BugCheckParameter3);
        v47 = *(_BYTE *)(v15 + 140);
        if ( (v47 & 1) != 0 )
        {
          CellFlat = HvpGetCellFlat(v15, HIDWORD(BugCheckParameter3), (unsigned int *)&v52);
          v26 = v47;
        }
        else
        {
          CellFlat = HvpGetCellPaged(v15, HIDWORD(BugCheckParameter3));
          v26 = *(_BYTE *)(v15 + 140);
        }
        v27 = *(_WORD *)(CellFlat + 2);
        v28 = 2 * v27;
        v29 = (*(_BYTE *)(CellFlat + 16) & 1) == 0;
        v30 = *(_DWORD *)(CellFlat + 4);
        if ( v29 )
          v28 = v27;
        v31 = v28;
        v32 = v30 + 0x80000000;
        if ( v30 < 0x80000000 )
          v32 = v30;
        v33 = v48;
        if ( v32 > (unsigned int)v48 )
          v33 = v32;
        LODWORD(v48) = v33;
        if ( v31 <= (unsigned int)v50 )
          v31 = (unsigned int)v50;
        LODWORD(v50) = v31;
        if ( (v26 & 1) != 0 )
          HvpReleaseCellFlat(v15, (__int64)&v52);
        else
          HvpReleaseCellPaged(v15, (unsigned int *)&v52);
        v20 = CmpAddValueToListEx(v15, v24, HIDWORD(v48), 1LL, (unsigned int *)&v48 + 1, 1);
        if ( v20 < 0 )
          goto LABEL_53;
        HIDWORD(BugCheckParameter3) = -1;
      }
    }
    if ( !HIDWORD(v48) || (v34 = CmpConcatenateValueLists(v15, (__int64)&v53), v4 = HIDWORD(v53), v20 = v34, v34 >= 0) )
    {
      if ( *(char *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 13LL) >= 0 )
        goto LABEL_64;
      v20 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(_DWORD *)(EntryAtLayerHeight + 8), 0);
      if ( v20 < 0 )
        goto LABEL_53;
      if ( v13 )
      {
        v35 = v45;
        if ( *(_DWORD *)(*(_QWORD *)(v13 + 16) + 56LL) < (unsigned int)v45 )
        {
          v20 = HvpMarkCellDirty(*(_QWORD *)v13, *(_DWORD *)(v13 + 8), 0);
          if ( v20 < 0 )
            goto LABEL_53;
        }
      }
      else
      {
LABEL_64:
        v35 = v45;
      }
      if ( v4 == -1
        || (v20 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(_DWORD *)(EntryAtLayerHeight + 8), 0), v20 >= 0)
        && ((v36 = *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 40LL), v36 == -1)
         || (v20 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, v36, 0), v20 >= 0)) )
      {
        v37 = *(_QWORD *)(EntryAtLayerHeight + 16);
        v38 = *(_BYTE *)(v37 + 13);
        if ( v38 < 0 )
        {
          *(_BYTE *)(v37 + 13) = v38 & 0x7F;
          *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 48LL) = v3;
          v3 = -1;
          *(_WORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 74LL) = v35;
          if ( v13 )
          {
            v39 = *(_QWORD *)(v13 + 16);
            if ( *(_DWORD *)(v39 + 56) < (unsigned int)v35 )
              *(_DWORD *)(v39 + 56) = v35;
          }
        }
        if ( v4 != -1 )
        {
          v40 = *(unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 40LL);
          if ( (_DWORD)v40 != -1 )
            HvFreeCell(*(_QWORD *)EntryAtLayerHeight, v40);
          v4 = -1;
          *(_QWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 36LL) = v53;
          v41 = *(_QWORD *)(EntryAtLayerHeight + 16);
          if ( *(_DWORD *)(v41 + 64) < (unsigned int)v48 )
            *(_DWORD *)(v41 + 64) = v48;
          v42 = *(_QWORD *)(EntryAtLayerHeight + 16);
          if ( *(_DWORD *)(v42 + 60) < (unsigned int)v50 )
            *(_DWORD *)(v42 + 60) = (_DWORD)v50;
          HvFreeCell(v15, (unsigned int)BugCheckParameter3);
          LODWORD(BugCheckParameter3) = -1;
          HIDWORD(v48) = 0;
        }
        v20 = 0;
      }
    }
  }
LABEL_53:
  CmpValueEnumStackCleanup((__int64)&v54);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    CmpFreeKeyValueList(v15, (_DWORD *)&v48 + 1);
  if ( v4 != -1 )
    HvFreeCell(v15, v4);
  if ( v3 != -1 )
    HvFreeCell(v15, v3);
  return (unsigned int)v20;
}
