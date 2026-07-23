/*
 * XREFs of CmpCopySyncTree2 @ 0x1408E4914
 * Callers:
 *     CmpCopySyncTree @ 0x140948D9C (CmpCopySyncTree.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpAddSubKeyEx @ 0x1408C6A8C (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpFindSubKeyByNumber @ 0x1408E5360 (CmpFindSubKeyByNumber.c)
 *     CmpMarkKeyParentDirty @ 0x140B00B7C (CmpMarkKeyParentDirty.c)
 *     CmpInitializeKeyNameString @ 0x140B0BD84 (CmpInitializeKeyNameString.c)
 *     CmpMergeKeyValues @ 0x140B2DE64 (CmpMergeKeyValues.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140B531EC (CmpSyncSubKeysAfterDelete.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCopySyncTree2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        __int16 a6,
        int a7)
{
  __int64 v7; // rsi
  __int64 v9; // rdx
  _OWORD *v10; // r12
  __int64 v11; // r8
  __int64 v12; // r13
  unsigned int *v13; // r15
  __int64 v14; // rdx
  __int64 CellFlat; // rax
  int SubKeyByNumber; // ebx
  ULONG_PTR v17; // rsi
  unsigned int v18; // esi
  char v19; // bl
  __int64 v20; // rax
  char v21; // al
  int v22; // ecx
  char v23; // dl
  char v24; // r12
  unsigned int v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int16 v31; // cx
  unsigned int v32; // eax
  int v33; // edx
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // r8d
  int v37; // r9d
  int v38; // edx
  __int64 v39; // rsi
  __int64 v40; // rdx
  bool v41; // zf
  int v42; // ebx
  size_t v43; // r8
  int v44; // eax
  ULONG_PTR v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // ebx
  int v49; // esi
  unsigned int v50; // esi
  void *Pool2; // rbx
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 CellPaged; // rax
  int v56; // ecx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned int v61; // ecx
  __int64 v63; // [rsp+30h] [rbp-99h]
  __int16 v64; // [rsp+38h] [rbp-91h]
  int v65; // [rsp+48h] [rbp-81h]
  int v66; // [rsp+4Ch] [rbp-7Dh]
  __int64 v67; // [rsp+50h] [rbp-79h]
  int v68; // [rsp+58h] [rbp-71h] BYREF
  int v69; // [rsp+5Ch] [rbp-6Dh]
  unsigned int v70[2]; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v71[2]; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v72[2]; // [rsp+70h] [rbp-59h] BYREF
  int v73; // [rsp+78h] [rbp-51h]
  unsigned int v74[2]; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v75[2]; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v76; // [rsp+90h] [rbp-39h]
  __int64 v77; // [rsp+94h] [rbp-35h] BYREF
  int v78; // [rsp+9Ch] [rbp-2Dh]
  unsigned int v79[2]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v80[2]; // [rsp+A8h] [rbp-21h] BYREF
  _OWORD *v81; // [rsp+B0h] [rbp-19h]
  int v82; // [rsp+B8h] [rbp-11h]
  int v83; // [rsp+BCh] [rbp-Dh]
  PVOID P; // [rsp+C0h] [rbp-9h]
  __int128 v85[4]; // [rsp+C8h] [rbp-1h] BYREF
  char v87; // [rsp+120h] [rbp+57h]
  bool v88; // [rsp+128h] [rbp+5Fh]

  v7 = a1;
  v73 = 0;
  v77 = 0xFFFFFFFF00000000uLL;
  v87 = 0;
  v72[0] = -1;
  v72[1] = 0;
  v75[0] = -1;
  LODWORD(v9) = 0;
  v65 = 0;
  v75[1] = 0;
  v10 = 0LL;
  v74[0] = -1;
  v11 = 0LL;
  v74[1] = 0;
  v70[0] = -1;
  v70[1] = 0;
  v78 = 0;
  v83 = -1;
  P = 0LL;
  v82 = a6 & 1;
  v88 = (unsigned int)(a7 - 1) <= 1;
  v71[0] = -1;
  v71[1] = 0;
  v81 = 0LL;
  v76 = 0;
  v66 = -1;
  v69 = 1;
  v85[0] = 0LL;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    P = (PVOID)ExAllocatePool2(0x100uLL);
    if ( !P )
      return 3221225626LL;
    LODWORD(v9) = 0;
    v11 = 0LL;
  }
  while ( 2 )
  {
    v12 = 0LL;
    v13 = (unsigned int *)(v7 + 20LL * (unsigned int)v9);
    v13[2] = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v11 )
        {
          if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
            HvpReleaseCellFlat(a4, (__int64)v74);
          else
            HvpReleaseCellPaged(a4, v74);
        }
        v14 = *v13;
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(a4, v14, v74);
        else
          CellFlat = HvpGetCellPaged(a4, v14);
        v67 = CellFlat;
        SubKeyByNumber = CmpFindSubKeyByNumber(a4);
        v17 = 0LL;
        if ( SubKeyByNumber < 0 )
          goto LABEL_139;
        ++v13[2];
        v18 = v73;
        v19 = v82;
        if ( v73 != -1 && ((_BYTE)v82 || v73 >= 0) )
          break;
        if ( v88 && a7 != 2 )
        {
          v54 = v13[1];
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            CellPaged = HvpGetCellFlat(BugCheckParameter3, v54, v70);
          else
            CellPaged = HvpGetCellPaged(BugCheckParameter3, v54);
          if ( v19 )
            v56 = *(_DWORD *)(v67 + 24);
          else
            v56 = 0;
          if ( *(_DWORD *)(CellPaged + 20) + *(_DWORD *)(CellPaged + 24) > (unsigned int)(*(_DWORD *)(v67 + 20) + v56) )
            CmpSyncSubKeysAfterDelete(a4, v67, BugCheckParameter3);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)v70);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v70);
        }
        v36 = v66;
        if ( (v13[4] & 1) != 0 )
        {
          v36 = v66 + 1;
          v66 = v36;
          if ( v36 >= v76 )
          {
            v49 = 1;
            if ( v76 + 1 <= (v76 >> 1) + v76 )
              v49 = v76 >> 1;
            v50 = v76 + v49;
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
            {
              SubKeyByNumber = -1073741670;
              goto LABEL_156;
            }
            memmove(Pool2, v10, 20LL * v76);
            if ( v10 )
              ExFreePoolWithTag(v10, 0);
            v36 = v66;
            v10 = Pool2;
            v81 = Pool2;
            v76 = v50;
          }
          v37 = v69;
          v13[2] = 0;
          v52 = v37 ^ (v13[3] ^ v37) & 0xFFFFFFF8;
          *((_BYTE *)v13 + 16) &= ~1u;
          v13[3] = v52;
          v53 = 5LL * v36;
          *(_OWORD *)((char *)v10 + 4 * v53) = *(_OWORD *)v13;
          *((_DWORD *)v10 + v53 + 4) = v13[4];
        }
        else
        {
          v37 = v69;
        }
        v38 = v65;
        if ( v65 )
        {
          v39 = a1;
        }
        else
        {
          if ( v36 == -1 )
          {
            if ( (a6 & 0x40) != 0 )
              *(_DWORD *)(BugCheckParameter3 + 4768) = *(_DWORD *)(BugCheckParameter3 + 280);
            SubKeyByNumber = 0;
            goto LABEL_156;
          }
          v39 = a1;
          v42 = v36 - 1;
          v43 = 20LL * v36;
          if ( ((*((_BYTE *)v10 + 12) ^ *((_BYTE *)v10 + v43 + 12)) & 7) != 0 )
          {
            *(_OWORD *)a1 = *v10;
            *(_DWORD *)(a1 + 16) = *((_DWORD *)v10 + 4);
            memmove(v10, (char *)v10 + 20, v43);
            v37 = v69;
          }
          else
          {
            *(_OWORD *)a1 = *(_OWORD *)((char *)v10 + v43);
            *(_DWORD *)(a1 + 16) = *(_DWORD *)((char *)v10 + v43 + 16);
          }
          v38 = 1;
          v66 = v42;
          if ( v37 == (int)(*(_DWORD *)(a1 + 12) << 29) >> 29 )
          {
            v44 = *(_DWORD *)(BugCheckParameter3 + 280);
            v69 = v37 + 1;
            v66 = v42;
            if ( v37 == 1 )
              *(_DWORD *)(BugCheckParameter3 + 4760) = v44;
            else
              *(_DWORD *)(BugCheckParameter3 + 4764) = v44;
          }
        }
        v11 = v67;
        v40 = (unsigned int)(v38 - 1);
        v65 = v40;
        v13 = (unsigned int *)(v39 + 20 * v40);
        if ( v87 && (_DWORD)v40 == v83 )
        {
          v88 = 1;
          v87 = 0;
        }
      }
      if ( v88 )
        break;
LABEL_13:
      if ( (a6 & 0x40) == 0 )
        goto LABEL_22;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        v20 = HvpGetCellFlat(a4, v18, v71);
      else
        v20 = HvpGetCellPaged(a4, v18);
      v21 = *(_BYTE *)(v20 + 12);
      if ( (v21 & 2) != 0 )
        v22 = 1;
      else
        v22 = ((v21 & 1) == 0) | 2;
      if ( v22 > v69 )
      {
        *((_BYTE *)v13 + 16) |= 1u;
        v41 = (*(_BYTE *)(a4 + 140) & 1) == 0;
      }
      else
      {
        v23 = *(_BYTE *)(a4 + 140) & 1;
        if ( v22 > (int)(v13[3] << 29) >> 29 )
        {
          if ( v23 )
            HvpReleaseCellFlat(a4, (__int64)v71);
          else
            HvpReleaseCellPaged(a4, v71);
LABEL_22:
          SubKeyByNumber = CmpCopyKeyPartial(a4, v18, BugCheckParameter3, v13[1], a6 | 4u, v63, 2, (unsigned int *)&v77);
          if ( SubKeyByNumber >= 0 )
          {
            v24 = 1;
            if ( (v13[4] & 2) == 0 )
            {
              SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v13[1], 0);
              if ( SubKeyByNumber < 0 )
                goto LABEL_155;
              *((_BYTE *)v13 + 16) |= 2u;
            }
            v25 = v77;
            v26 = v13[1];
            v68 = v77;
            SubKeyByNumber = CmpAddSubKeyEx(BugCheckParameter3, v26, v77);
            if ( SubKeyByNumber >= 0 )
            {
              v27 = v13[1];
              v80[1] = 0;
              v80[0] = -1;
              v79[0] = -1;
              v79[1] = 0;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v28 = HvpGetCellFlat(BugCheckParameter3, v27, v80);
              else
                v28 = HvpGetCellPaged(BugCheckParameter3, v27);
              v29 = v28;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v30 = HvpGetCellFlat(BugCheckParameter3, v25, v79);
              else
                v30 = HvpGetCellPaged(BugCheckParameter3, v25);
              v31 = 2 * *(_WORD *)(v30 + 72);
              if ( (*(_BYTE *)(v30 + 2) & 0x20) == 0 )
                v31 = *(_WORD *)(v30 + 72);
              if ( (unsigned __int16)*(_DWORD *)(v29 + 52) < (unsigned int)v31 )
                *(_WORD *)(v29 + 52) = v31;
              v32 = *(unsigned __int16 *)(v30 + 74);
              if ( *(_DWORD *)(v29 + 56) < v32 )
                *(_DWORD *)(v29 + 56) = v32;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, (__int64)v79);
              else
                HvpReleaseCellPaged(BugCheckParameter3, v79);
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, (__int64)v80);
              else
                HvpReleaseCellPaged(BugCheckParameter3, v80);
              v17 = 0LL;
              if ( !v88 || !v87 )
                goto LABEL_40;
              SubKeyByNumber = CmpMarkKeyParentDirty(BugCheckParameter3);
              if ( SubKeyByNumber >= 0 )
              {
                v33 = v65;
                v83 = v65;
                v88 = 0;
                goto LABEL_41;
              }
              v10 = v81;
LABEL_138:
              v12 = 0LL;
              goto LABEL_139;
            }
LABEL_155:
            v10 = v81;
          }
LABEL_156:
          v17 = 0LL;
          goto LABEL_138;
        }
        v41 = v23 == 0;
      }
      if ( v41 )
        HvpReleaseCellPaged(a4, v71);
      else
        HvpReleaseCellFlat(a4, (__int64)v71);
      v11 = v67;
    }
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      v45 = HvpGetCellFlat(a4, v73, v72);
    else
      v45 = HvpGetCellPaged(a4, (unsigned int)v73);
    v17 = v45;
    CmpInitializeKeyNameString(v45);
    v46 = v13[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v47 = HvpGetCellFlat(BugCheckParameter3, v46, (unsigned int *)&v77 + 1);
    else
      v47 = HvpGetCellPaged(BugCheckParameter3, v46);
    v68 = 0;
    CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v47, (unsigned __int16 *)v85, &v68);
    v41 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v48 = v68;
    LODWORD(v77) = v68;
    if ( v41 )
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v77 + 1);
    else
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v77 + 4);
    if ( v48 == -1 )
    {
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        HvpReleaseCellFlat(a4, (__int64)v72);
      else
        HvpReleaseCellPaged(a4, v72);
      v18 = v73;
      v87 = 1;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v57 = HvpGetCellFlat(BugCheckParameter3, v48, v75);
    else
      v57 = HvpGetCellPaged(BugCheckParameter3, v48);
    v12 = v57;
    if ( a7 != 2 && *(_QWORD *)(v57 + 4) >= *(_QWORD *)(v17 + 4) )
      goto LABEL_125;
    if ( (v13[4] & 2) != 0 || *(_WORD *)(v17 + 74) <= *(_WORD *)(v57 + 74) )
      goto LABEL_115;
    SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v13[1], 0);
    if ( SubKeyByNumber >= 0 )
    {
      *((_BYTE *)v13 + 16) |= 2u;
      v48 = v68;
LABEL_115:
      v58 = a7 == 2 ? CmpMergeKeyValues(a4, v48, v12) : CmpSyncKeyValues(a4, v48, v12, v64);
      SubKeyByNumber = v58;
      if ( v58 >= 0 )
      {
        v59 = v13[1];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v60 = HvpGetCellFlat(BugCheckParameter3, v59, v70);
        else
          v60 = HvpGetCellPaged(BugCheckParameter3, v59);
        v61 = *(unsigned __int16 *)(v12 + 74);
        if ( v61 > *(_DWORD *)(v60 + 56) )
          *(_DWORD *)(v60 + 56) = v61;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v70);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v70);
        *(_QWORD *)(v12 + 4) = *(_QWORD *)(v17 + 4);
LABEL_125:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v75);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v75);
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a4, (__int64)v72);
        else
          HvpReleaseCellPaged(a4, v72);
        v17 = 0LL;
        v24 = 0;
LABEL_40:
        v33 = v65;
LABEL_41:
        v9 = (unsigned int)(v33 + 1);
        v12 = 0LL;
        v65 = v9;
        if ( (unsigned int)v9 < 0x200 )
        {
          v7 = a1;
          v34 = 5 * v9;
          v35 = v73;
          v11 = v67;
          *(_DWORD *)(a1 + 4 * v34 + 12) &= 0xFFFFFFF8;
          *(_DWORD *)(a1 + 4 * v34) = v35;
          *(_DWORD *)(a1 + 4 * v34 + 4) = v68;
          LOBYTE(v35) = (2 * v24) | *(_BYTE *)(a1 + 20 * v9 + 16) & 0xFC;
          v10 = v81;
          *(_BYTE *)(a1 + 4 * v34 + 16) = v35;
          continue;
        }
        v10 = v81;
        SubKeyByNumber = -1073741670;
      }
    }
    break;
  }
LABEL_139:
  if ( v67 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, (__int64)v74);
    else
      HvpReleaseCellPaged(a4, v74);
  }
  if ( v17 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, (__int64)v72);
    else
      HvpReleaseCellPaged(a4, v72);
  }
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v75);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v75);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)SubKeyByNumber;
}
