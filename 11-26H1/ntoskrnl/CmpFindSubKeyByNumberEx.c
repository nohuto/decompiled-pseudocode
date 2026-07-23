/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1408C94A0
 * Callers:
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140B42968 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x1408C8400 (CmpIsKeyDeleted.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408DA960 (CmpFindSubkeyInHashByChildCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpDoFindSubKeyByNumber @ 0x140945110 (CmpDoFindSubKeyByNumber.c)
 *     CmRmIsKCBVisible @ 0x140A41AB0 (CmRmIsKCBVisible.c)
 *     CmpReferenceKeyControlBlock @ 0x140A81AC0 (CmpReferenceKeyControlBlock.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        int *a4,
        ULONG_PTR a5,
        ULONG_PTR a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  unsigned int SubkeyInHashByChildCell; // r14d
  ULONG_PTR v12; // rdi
  _DWORD *CellFlat; // rax
  _DWORD *v15; // r15
  ULONG_PTR *v16; // r12
  unsigned int v17; // edx
  unsigned int v18; // edx
  ULONG_PTR v19; // rcx
  _WORD *CellPaged; // rax
  _WORD *v21; // rsi
  int v22; // r14d
  ULONG_PTR BugCheckParameter4; // r11
  int *v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  bool v29; // r10
  unsigned __int64 v30; // rax
  int v31; // eax
  __int64 v33; // rax
  _WORD *v34; // rcx
  unsigned int v35; // eax
  _QWORD *v36; // rax
  ULONG_PTR v37; // rcx
  unsigned int v38; // ecx
  int v39; // eax
  bool v40; // zf
  unsigned int v41; // ecx
  char v42; // al
  _WORD *v43; // rax
  _WORD *v44; // rcx
  unsigned int v45; // edx
  int v46; // edi
  __int64 *v47; // rdx
  __int64 v48; // r10
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rdx
  bool v52; // r8
  unsigned __int64 v53; // rax
  unsigned int i; // edi
  char v55; // r14
  __int64 v56; // rax
  _WORD *v57; // rcx
  unsigned int v58; // eax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  int SubKeyByNumber; // eax
  __int64 v63; // rax
  __int64 NextElement; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  unsigned int v69; // [rsp+30h] [rbp-50h] BYREF
  int v70; // [rsp+34h] [rbp-4Ch]
  unsigned int v71[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v72; // [rsp+40h] [rbp-40h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-38h] BYREF
  __int64 v74; // [rsp+50h] [rbp-30h] BYREF
  __int64 v75; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v76; // [rsp+60h] [rbp-20h]
  unsigned int v77; // [rsp+64h] [rbp-1Ch]
  unsigned int v78; // [rsp+68h] [rbp-18h]
  _WORD *v79; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v80; // [rsp+78h] [rbp-8h]
  unsigned int v81; // [rsp+7Ch] [rbp-4h]
  unsigned int v82; // [rsp+C0h] [rbp+40h] BYREF
  int v83; // [rsp+C4h] [rbp+44h]
  int *v84; // [rsp+D8h] [rbp+58h]

  v84 = a4;
  v71[0] = -1;
  SubkeyInHashByChildCell = 0;
  v71[1] = 0;
  v12 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, a2, v71);
  else
    CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3);
  v15 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  v16 = a9;
  *a4 = -1;
  if ( v16 )
    *v16 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 208) == a5 + 208 )
  {
    v69 = -1;
    v70 = 0;
    v17 = CellFlat[5];
    if ( a3 >= v17 )
    {
      if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u || (a3 -= v17, a3 >= CellFlat[6]) )
      {
LABEL_17:
        BugCheckParameter4 = 0LL;
        goto LABEL_18;
      }
      v18 = CellFlat[8];
      v19 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_9;
    }
    else
    {
      v18 = CellFlat[7];
      v19 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
LABEL_9:
        CellPaged = (_WORD *)HvpGetCellFlat(v19, v18, &v69);
        goto LABEL_10;
      }
    }
    CellPaged = (_WORD *)HvpGetCellPaged(v19);
LABEL_10:
    v21 = CellPaged;
    if ( CellPaged )
    {
      v82 = -1;
      v83 = 0;
      if ( *CellPaged == 26994 )
      {
        while ( 1 )
        {
          if ( SubkeyInHashByChildCell >= (unsigned __int16)v21[1] )
            goto LABEL_12;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v33 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)&v21[2 * SubkeyInHashByChildCell + 2], &v82);
          else
            v33 = HvpGetCellPaged(BugCheckParameter3);
          v34 = (_WORD *)v33;
          if ( !v33 )
          {
            v22 = -1;
            goto LABEL_14;
          }
          v35 = *(unsigned __int16 *)(v33 + 2);
          if ( a3 < v35 )
            break;
          a3 -= v35;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v82);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v82);
          ++SubkeyInHashByChildCell;
        }
        if ( *v34 != 26220 && *v34 != 26732 )
        {
          v22 = *(_DWORD *)&v34[2 * a3 + 2];
          v37 = BugCheckParameter3;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            goto LABEL_72;
LABEL_56:
          HvpReleaseCellPaged(v37, &v82);
          goto LABEL_14;
        }
        v22 = *(_DWORD *)&v34[4 * a3 + 2];
        v37 = BugCheckParameter3;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
          goto LABEL_56;
LABEL_72:
        HvpReleaseCellFlat(v37, &v82);
      }
      else
      {
LABEL_12:
        if ( *v21 == 26220 || *v21 == 26732 )
          v22 = *(_DWORD *)&v21[4 * a3 + 2];
        else
          v22 = *(_DWORD *)&v21[2 * a3 + 2];
      }
LABEL_14:
      *v84 = v22;
      SubkeyInHashByChildCell = 0;
      if ( v21 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v69);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v69);
      }
    }
    else
    {
      SubkeyInHashByChildCell = -1073741670;
    }
    goto LABEL_17;
  }
  v82 = 0;
  v38 = CellFlat[5];
  v74 = 0xFFFFFFFFLL;
  v75 = 0xFFFFFFFFLL;
  v81 = v38;
  if ( v38 )
    v76 = CellFlat[7];
  else
    v76 = -1;
  v39 = CellFlat[6];
  if ( v39 )
    v78 = v15[8];
  else
    v78 = -1;
  v40 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v80 = v39 + v38;
  if ( v40 )
    HvpReleaseCellPaged(BugCheckParameter3, v71);
  else
    HvpReleaseCellFlat(BugCheckParameter3, v71);
  BugCheckParameter4 = 0LL;
  v15 = 0LL;
  v41 = 0;
  while ( 1 )
  {
    v72 = v41;
    if ( v41 >= v80 )
      break;
    v42 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
    BugCheckParameter2 = 0LL;
    if ( v41 >= v81 )
    {
      if ( v42 )
        v61 = HvpGetCellFlat(BugCheckParameter3, v78, (unsigned int *)&v75);
      else
        v61 = HvpGetCellPaged(BugCheckParameter3);
      if ( !v61 )
        return (unsigned int)-1073741670;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter3);
      v47 = &v75;
      *v84 = SubKeyByNumber;
    }
    else
    {
      if ( v42 )
        v43 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v76, (unsigned int *)&v74);
      else
        v43 = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
      v79 = v43;
      v44 = v43;
      if ( !v43 )
        return (unsigned int)-1073741670;
      v45 = v72;
      v77 = v72;
      v69 = -1;
      v70 = 0;
      if ( *v43 == 26994 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= (unsigned __int16)v44[1] )
          {
            v45 = v77;
            goto LABEL_87;
          }
          v55 = *(_BYTE *)(BugCheckParameter3 + 140);
          if ( (v55 & 1) != 0 )
          {
            v56 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)&v44[2 * i + 2], &v69);
          }
          else
          {
            v56 = HvpGetCellPaged(BugCheckParameter3);
            v55 = *(_BYTE *)(BugCheckParameter3 + 140);
          }
          v57 = (_WORD *)v56;
          if ( !v56 )
          {
            v46 = -1;
            goto LABEL_89;
          }
          v58 = *(unsigned __int16 *)(v56 + 2);
          if ( v77 < v58 )
            break;
          v77 -= v58;
          if ( (v55 & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v69);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v69);
          v44 = v79;
        }
        if ( *v57 == 26220 || *v57 == 26732 )
          v46 = *(_DWORD *)&v57[4 * v77 + 2];
        else
          v46 = *(_DWORD *)&v57[2 * v77 + 2];
        if ( (v55 & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v69);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v69);
      }
      else
      {
LABEL_87:
        if ( *v44 == 26220 || *v44 == 26732 )
          v46 = *(_DWORD *)&v44[4 * v45 + 2];
        else
          v46 = *(_DWORD *)&v44[2 * v45 + 2];
      }
LABEL_89:
      v47 = &v74;
      *v84 = v46;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v47);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v47);
    if ( *v84 == -1 )
      return (unsigned int)-1073741670;
    SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, (__int64)&BugCheckParameter2);
    if ( (SubkeyInHashByChildCell & 0x80000000) != 0 )
      return SubkeyInHashByChildCell;
    v12 = BugCheckParameter2;
    if ( !BugCheckParameter2
      || ((v60 = *(_QWORD *)(BugCheckParameter2 + 240)) == 0 || CmEqualTrans(a7, v60)) && !CmpIsKeyDeleted(v12, a7) )
    {
      ++v82;
    }
    if ( v82 == a3 + 1 )
      goto LABEL_17;
    if ( !v12 )
      goto LABEL_166;
    v48 = *(_QWORD *)(v12 + 32);
    v49 = *(_QWORD *)v12;
    do
    {
      v50 = v49;
      if ( v49 <= 1 )
      {
        v59 = (_QWORD *)(v12 + 224);
        if ( (_QWORD *)*v59 != v59 )
          KeBugCheckEx(0x51u, 0x34uLL, v12, 1uLL, 0LL);
        v65 = a8;
        v66 = *(_QWORD **)(a8 + 8);
        if ( *v66 == a8 )
        {
          *v59 = a8;
          *(_QWORD *)(v12 + 232) = v66;
          *v66 = v59;
          *(_QWORD *)(v65 + 8) = v59;
          *(_BYTE *)(v12 + 64) |= 1u;
          goto LABEL_166;
        }
        goto FatalListEntryError_6;
      }
      v51 = v49 - 1;
      v52 = v49 == 3 && (*(_DWORD *)(v12 + 184) & 0x40000) != 0 && *(_BYTE *)(v48 + 2952) == 1;
      v53 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v51, v49);
      v49 = v53;
    }
    while ( v53 != v50 );
    if ( v53 < v51 )
      KeBugCheckEx(0x51u, 0x25uLL, v12, 0LL, 0LL);
    if ( v52 )
      CmpDoQueueLateUnloadWorker(v48);
LABEL_166:
    v41 = v72 + 1;
    BugCheckParameter4 = 0LL;
  }
  if ( v41 == v80 )
  {
    v24 = v84;
    v63 = a5 + 208;
    v79 = 0LL;
    v74 = a5 + 208;
    *v84 = -1;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v63, &v79, 32LL);
      v75 = NextElement;
      if ( !NextElement )
        goto LABEL_19;
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
      {
        if ( *(_DWORD *)(v75 + 68) == 1 )
        {
          v12 = *(_QWORD *)(v75 + 88);
          BugCheckParameter2 = v12;
          if ( (unsigned __int8)CmRmIsKCBVisible(v12, a7) )
          {
            if ( !CmpIsKeyDeleted(v12, a7) )
            {
              if ( v82 == a3 )
              {
                *v24 = *(_DWORD *)(v12 + 40);
                CmpReferenceKeyControlBlock(v12);
                BugCheckParameter4 = 0LL;
                goto LABEL_19;
              }
              ++v82;
            }
          }
        }
      }
      v63 = v74;
      v12 = 0LL;
      BugCheckParameter2 = 0LL;
    }
  }
LABEL_18:
  v24 = v84;
LABEL_19:
  if ( v16 && *v24 != -1 )
  {
    if ( !v12 )
    {
      if ( v15 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v71);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v71);
        v15 = 0LL;
      }
      v31 = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, (__int64)&BugCheckParameter2);
      v12 = BugCheckParameter2;
      SubkeyInHashByChildCell = v31;
      if ( v31 < 0 )
        *v24 = -1;
    }
    *v16 = v12;
    goto LABEL_38;
  }
  if ( !v12 )
    goto LABEL_38;
  v25 = *(_QWORD *)(v12 + 32);
  v26 = *(_QWORD *)v12;
  do
  {
    v27 = v26;
    if ( v26 <= 1 )
    {
      v36 = (_QWORD *)(v12 + 224);
      if ( (_QWORD *)*v36 != v36 )
        KeBugCheckEx(0x51u, 0x34uLL, v12, 1uLL, BugCheckParameter4);
      v67 = a8;
      v68 = *(_QWORD **)(a8 + 8);
      if ( *v68 == a8 )
      {
        *v36 = a8;
        *(_QWORD *)(v12 + 232) = v68;
        *v68 = v36;
        *(_QWORD *)(v67 + 8) = v36;
        *(_BYTE *)(v12 + 64) |= 1u;
        goto LABEL_38;
      }
FatalListEntryError_6:
      __fastfail(3u);
    }
    v28 = v26 - 1;
    v29 = v26 == 3 && (*(_DWORD *)(v12 + 184) & 0x40000) != 0 && *(_BYTE *)(v25 + 2952) == 1;
    v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v28, v26);
    v26 = v30;
  }
  while ( v30 != v27 );
  if ( v30 < v28 )
    KeBugCheckEx(0x51u, 0x25uLL, v12, 0LL, BugCheckParameter4);
  if ( v29 )
    CmpDoQueueLateUnloadWorker(v25);
LABEL_38:
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v71);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v71);
  }
  return SubkeyInHashByChildCell;
}
