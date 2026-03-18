/*
 * XREFs of CmpCopySyncTree2 @ 0x1408DE354
 * Callers:
 *     CmpCopySyncTree @ 0x14098709C (CmpCopySyncTree.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpAddSubKeyEx @ 0x1408C04BC (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408D7490 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCopyKeyPartial @ 0x1408DDBFC (CmpCopyKeyPartial.c)
 *     CmpFindSubKeyByNumber @ 0x1408DEDA0 (CmpFindSubKeyByNumber.c)
 *     CmpMarkKeyParentDirty @ 0x140AFEB0C (CmpMarkKeyParentDirty.c)
 *     CmpInitializeKeyNameString @ 0x140B09FC4 (CmpInitializeKeyNameString.c)
 *     CmpMergeKeyValues @ 0x140B2BDE4 (CmpMergeKeyValues.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140B50C8C (CmpSyncSubKeysAfterDelete.c)
 *     CmpSyncKeyValues @ 0x140B62A58 (CmpSyncKeyValues.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // r13
  unsigned int *v12; // r12
  __int64 v13; // rdx
  __int64 CellFlat; // rax
  int SubKeyByNumber; // ebx
  unsigned int v16; // r14d
  char v17; // bl
  __int64 v18; // rax
  char v19; // al
  int v20; // ecx
  char v21; // dl
  char v22; // si
  unsigned int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  unsigned int v29; // eax
  ULONG_PTR v30; // r14
  int v31; // edx
  __int64 v32; // rcx
  int v33; // eax
  _BYTE *v34; // r13
  int v35; // edx
  __int64 v36; // r14
  __int64 v37; // rdx
  bool v38; // zf
  int v39; // ebx
  size_t v40; // r8
  int v41; // r8d
  int v42; // eax
  ULONG_PTR CellPaged; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r14
  int v47; // esi
  unsigned int v48; // esi
  _BYTE *Pool2; // rax
  _BYTE *v50; // rbx
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rsi
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned int v62; // ecx
  __int64 v64; // [rsp+30h] [rbp-99h]
  __int16 v65; // [rsp+38h] [rbp-91h]
  int v66; // [rsp+48h] [rbp-81h]
  _BYTE *Src; // [rsp+50h] [rbp-79h]
  int v68; // [rsp+58h] [rbp-71h]
  __int64 v69; // [rsp+5Ch] [rbp-6Dh] BYREF
  int v70; // [rsp+64h] [rbp-65h]
  unsigned int v71[2]; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v72[2]; // [rsp+70h] [rbp-59h] BYREF
  int v73; // [rsp+78h] [rbp-51h]
  int v74; // [rsp+7Ch] [rbp-4Dh]
  unsigned int v75[2]; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v76[2]; // [rsp+88h] [rbp-41h] BYREF
  __int64 v77; // [rsp+90h] [rbp-39h]
  unsigned int v78[2]; // [rsp+98h] [rbp-31h] BYREF
  unsigned int v79[2]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v80[2]; // [rsp+A8h] [rbp-21h] BYREF
  int v81; // [rsp+B0h] [rbp-19h]
  unsigned int v82; // [rsp+B4h] [rbp-15h]
  int v83; // [rsp+B8h] [rbp-11h]
  PVOID P; // [rsp+C0h] [rbp-9h]
  __int128 v85[4]; // [rsp+C8h] [rbp-1h] BYREF
  char v87; // [rsp+120h] [rbp+57h]
  bool v88; // [rsp+128h] [rbp+5Fh]

  v8 = a1;
  v74 = 0;
  v69 = 0xFFFFFFFF00000000uLL;
  v87 = 0;
  v72[0] = -1;
  LODWORD(v9) = 0;
  v72[1] = 0;
  v66 = 0;
  v76[0] = -1;
  v76[1] = 0;
  v10 = -1;
  v75[0] = -1;
  v11 = 0LL;
  v75[1] = 0;
  v70 = 0;
  v78[0] = -1;
  v78[1] = 0;
  v83 = -1;
  P = 0LL;
  v81 = a6 & 1;
  v88 = (unsigned int)(a7 - 1) <= 1;
  v71[0] = -1;
  v71[1] = 0;
  Src = 0LL;
  v82 = 0;
  v68 = -1;
  v73 = 1;
  v85[0] = 0LL;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    P = (PVOID)ExAllocatePool2(0x100uLL);
    if ( !P )
      return 3221225626LL;
    LODWORD(v9) = 0;
  }
LABEL_2:
  v12 = (unsigned int *)(v8 + 20LL * (unsigned int)v9);
  v12[2] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a4, (__int64)v75);
        else
          HvpReleaseCellPaged(a4, v75);
      }
      v13 = *v12;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(a4, v13, v75);
      else
        CellFlat = HvpGetCellPaged(a4, v13);
      v77 = CellFlat;
      v11 = CellFlat;
      SubKeyByNumber = CmpFindSubKeyByNumber(a4);
      if ( SubKeyByNumber < 0 )
        goto LABEL_159;
      ++v12[2];
      v16 = v74;
      v17 = v81;
      if ( v74 == -1 || !(_BYTE)v81 && v74 < 0 )
        break;
      if ( v88 )
      {
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(a4, v74, v72);
        else
          CellPaged = HvpGetCellPaged(a4, (unsigned int)v74);
        v30 = CellPaged;
        CmpInitializeKeyNameString(CellPaged);
        v44 = v12[1];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v45 = HvpGetCellFlat(BugCheckParameter3, v44, v78);
        else
          v45 = HvpGetCellPaged(BugCheckParameter3, v44);
        LODWORD(v69) = 0;
        CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v45, (unsigned __int16 *)v85, &v69);
        v23 = v69;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v78);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v78);
        if ( v23 != -1 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v57 = HvpGetCellFlat(BugCheckParameter3, v23, v76);
          else
            v57 = HvpGetCellPaged(BugCheckParameter3, v23);
          v58 = v57;
          if ( a7 == 2 || *(_QWORD *)(v57 + 4) < *(_QWORD *)(v30 + 4) )
          {
            if ( (v12[4] & 2) == 0 && *(_WORD *)(v30 + 74) > *(_WORD *)(v57 + 74) )
            {
              SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v12[1], 0);
              if ( SubKeyByNumber < 0 )
                goto LABEL_138;
              *((_BYTE *)v12 + 16) |= 2u;
            }
            if ( a7 == 2 )
              v59 = CmpMergeKeyValues(a4, v23, v58);
            else
              v59 = CmpSyncKeyValues(a4, v23, v58, v65);
            SubKeyByNumber = v59;
            if ( v59 < 0 )
              goto LABEL_138;
            v60 = v12[1];
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v61 = HvpGetCellFlat(BugCheckParameter3, v60, (unsigned int *)&v69 + 1);
            else
              v61 = HvpGetCellPaged(BugCheckParameter3, v60);
            v62 = *(unsigned __int16 *)(v58 + 74);
            if ( v62 > *(_DWORD *)(v61 + 56) )
              *(_DWORD *)(v61 + 56) = v62;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v69 + 4);
            else
              HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v69 + 1);
            *(_QWORD *)(v58 + 4) = *(_QWORD *)(v30 + 4);
          }
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)v76);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v76);
          if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
            HvpReleaseCellFlat(a4, (__int64)v72);
          else
            HvpReleaseCellPaged(a4, v72);
          v30 = 0LL;
          v22 = 0;
          goto LABEL_40;
        }
        if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a4, (__int64)v72);
        else
          HvpReleaseCellPaged(a4, v72);
        v16 = v74;
        v11 = v77;
        v87 = 1;
      }
      if ( (a6 & 0x40) == 0 )
        goto LABEL_22;
      if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
        v18 = HvpGetCellFlat(a4, v16, v71);
      else
        v18 = HvpGetCellPaged(a4, v16);
      v19 = *(_BYTE *)(v18 + 12);
      if ( (v19 & 2) != 0 )
        v20 = 1;
      else
        v20 = ((v19 & 1) == 0) | 2;
      if ( v20 > v73 )
      {
        *((_BYTE *)v12 + 16) |= 1u;
        v38 = (*(_BYTE *)(a4 + 140) & 1) == 0;
      }
      else
      {
        v21 = *(_BYTE *)(a4 + 140) & 1;
        if ( v20 > (int)(v12[3] << 29) >> 29 )
        {
          if ( v21 )
            HvpReleaseCellFlat(a4, (__int64)v71);
          else
            HvpReleaseCellPaged(a4, v71);
LABEL_22:
          SubKeyByNumber = CmpCopyKeyPartial(a4, v16, BugCheckParameter3, v12[1], a6 | 4u, v64, 2, (unsigned int *)&v69);
          if ( SubKeyByNumber < 0 )
            goto LABEL_159;
          v22 = 1;
          if ( (v12[4] & 2) == 0 )
          {
            SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, v12[1], 0);
            if ( SubKeyByNumber < 0 )
              goto LABEL_159;
            *((_BYTE *)v12 + 16) |= 2u;
          }
          v23 = v69;
          SubKeyByNumber = CmpAddSubKeyEx(BugCheckParameter3, v12[1], v69);
          if ( SubKeyByNumber >= 0 )
          {
            v24 = v12[1];
            v80[1] = 0;
            v80[0] = -1;
            v79[0] = -1;
            v79[1] = 0;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v25 = HvpGetCellFlat(BugCheckParameter3, v24, v80);
            else
              v25 = HvpGetCellPaged(BugCheckParameter3, v24);
            v26 = v25;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v27 = HvpGetCellFlat(BugCheckParameter3, v23, v79);
            else
              v27 = HvpGetCellPaged(BugCheckParameter3, v23);
            v28 = 2 * *(_WORD *)(v27 + 72);
            if ( (*(_BYTE *)(v27 + 2) & 0x20) == 0 )
              v28 = *(_WORD *)(v27 + 72);
            if ( (unsigned __int16)*(_DWORD *)(v26 + 52) < (unsigned int)v28 )
              *(_WORD *)(v26 + 52) = v28;
            v29 = *(unsigned __int16 *)(v27 + 74);
            if ( *(_DWORD *)(v26 + 56) < v29 )
              *(_DWORD *)(v26 + 56) = v29;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, (__int64)v79);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v79);
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, (__int64)v80);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v80);
            v30 = 0LL;
            if ( v88 && v87 )
            {
              SubKeyByNumber = CmpMarkKeyParentDirty(BugCheckParameter3);
              if ( SubKeyByNumber >= 0 )
              {
                v31 = v66;
                v83 = v66;
                v88 = 0;
                goto LABEL_41;
              }
LABEL_137:
              v58 = 0LL;
LABEL_138:
              v34 = Src;
              goto LABEL_139;
            }
LABEL_40:
            v31 = v66;
LABEL_41:
            v9 = (unsigned int)(v31 + 1);
            v66 = v9;
            if ( (unsigned int)v9 < 0x200 )
            {
              v8 = a1;
              v32 = 5 * v9;
              v33 = v74;
              *(_DWORD *)(a1 + 4 * v32 + 12) &= 0xFFFFFFF8;
              *(_DWORD *)(a1 + 4 * v32) = v33;
              LOBYTE(v33) = *(_BYTE *)(a1 + 20 * v9 + 16) & 0xFC;
              *(_DWORD *)(a1 + 4 * v32 + 4) = v23;
              v11 = v77;
              LOBYTE(v33) = (2 * v22) | v33;
              v10 = v68;
              *(_BYTE *)(a1 + 4 * v32 + 16) = v33;
              goto LABEL_2;
            }
            SubKeyByNumber = -1073741670;
            goto LABEL_137;
          }
LABEL_159:
          v30 = 0LL;
          goto LABEL_137;
        }
        v38 = v21 == 0;
      }
      if ( v38 )
        HvpReleaseCellPaged(a4, v71);
      else
        HvpReleaseCellFlat(a4, (__int64)v71);
    }
    if ( v88 && a7 != 2 )
    {
      v54 = v12[1];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v55 = HvpGetCellFlat(BugCheckParameter3, v54, (unsigned int *)&v69 + 1);
      else
        v55 = HvpGetCellPaged(BugCheckParameter3, v54);
      if ( v17 )
        v56 = *(_DWORD *)(v11 + 24);
      else
        v56 = 0;
      if ( *(_DWORD *)(v55 + 20) + *(_DWORD *)(v55 + 24) > (unsigned int)(*(_DWORD *)(v11 + 20) + v56) )
        CmpSyncSubKeysAfterDelete(a4, v11, BugCheckParameter3, v55, P);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v69 + 4);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v69 + 1);
    }
    if ( (v12[4] & 1) == 0 )
    {
      v34 = Src;
      goto LABEL_46;
    }
    v46 = v82;
    v68 = ++v10;
    if ( v10 >= v82 )
      break;
    v34 = Src;
LABEL_91:
    v51 = (v12[3] ^ v73) & 0xFFFFFFF8;
    v12[2] = 0;
    v52 = v73 ^ v51;
    *((_BYTE *)v12 + 16) &= ~1u;
    v12[3] = v52;
    v53 = 5LL * v10;
    *(_OWORD *)&v34[4 * v53] = *(_OWORD *)v12;
    *(_DWORD *)&v34[4 * v53 + 16] = v12[4];
LABEL_46:
    v35 = v66;
    if ( v66 )
    {
      v36 = a1;
    }
    else
    {
      if ( v10 == -1 )
      {
        if ( (a6 & 0x40) != 0 )
          *(_DWORD *)(BugCheckParameter3 + 4768) = *(_DWORD *)(BugCheckParameter3 + 280);
        SubKeyByNumber = 0;
        goto LABEL_169;
      }
      v36 = a1;
      v39 = v10 - 1;
      v40 = 20LL * v10;
      if ( ((v34[12] ^ v34[v40 + 12]) & 7) != 0 )
      {
        *(_OWORD *)a1 = *(_OWORD *)v34;
        *(_DWORD *)(a1 + 16) = *((_DWORD *)v34 + 4);
        memmove(v34, v34 + 20, v40);
      }
      else
      {
        *(_OWORD *)a1 = *(_OWORD *)&v34[v40];
        *(_DWORD *)(a1 + 16) = *(_DWORD *)&v34[v40 + 16];
      }
      --v10;
      v41 = v73;
      v35 = 1;
      v68 = v39;
      if ( v73 == (int)(*(_DWORD *)(a1 + 12) << 29) >> 29 )
      {
        v42 = *(_DWORD *)(BugCheckParameter3 + 280);
        ++v73;
        v68 = v39;
        if ( v41 == 1 )
          *(_DWORD *)(BugCheckParameter3 + 4760) = v42;
        else
          *(_DWORD *)(BugCheckParameter3 + 4764) = v42;
      }
    }
    v11 = v77;
    v37 = (unsigned int)(v35 - 1);
    v66 = v37;
    v12 = (unsigned int *)(v36 + 20 * v37);
    if ( v87 && (_DWORD)v37 == v83 )
    {
      v88 = 1;
      v87 = 0;
    }
  }
  v47 = 1;
  if ( v82 + 1 <= (v82 >> 1) + v82 )
    v47 = v82 >> 1;
  v48 = v82 + v47;
  Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
  v34 = Src;
  v50 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Src, 20 * v46);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    v82 = v48;
    v34 = v50;
    v10 = v68;
    Src = v50;
    goto LABEL_91;
  }
  SubKeyByNumber = -1073741670;
LABEL_169:
  v58 = 0LL;
  v30 = 0LL;
LABEL_139:
  if ( v77 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, (__int64)v75);
    else
      HvpReleaseCellPaged(a4, v75);
  }
  if ( v30 )
  {
    if ( (*(_BYTE *)(a4 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a4, (__int64)v72);
    else
      HvpReleaseCellPaged(a4, v72);
  }
  if ( v58 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v76);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v76);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  return (unsigned int)SubKeyByNumber;
}
