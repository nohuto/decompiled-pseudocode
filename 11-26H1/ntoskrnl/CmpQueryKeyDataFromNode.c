/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x1408C8DC0
 * Callers:
 *     CmpQueryKeyData @ 0x1408C6E10 (CmpQueryKeyData.c)
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x1408C2FF8 (CmGetVisibleSubkeyCount.c)
 *     CmpCopyCompressedName @ 0x1408C82E0 (CmpCopyCompressedName.c)
 *     CmpIsKeyDeleted @ 0x1408C8400 (CmpIsKeyDeleted.c)
 *     CmGetKeyLastWriteTime @ 0x1408C85E0 (CmGetKeyLastWriteTime.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x140A76A30 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleValueCount @ 0x140A83770 (CmGetVisibleValueCount.c)
 *     CmpPopulateKeyFullInformation @ 0x140AB5FF4 (CmpPopulateKeyFullInformation.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpQueryKeyDataFromNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8)
{
  int VisibleMaxValueNameLenAndDataLen; // r14d
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // r13
  __int64 v15; // rbx
  unsigned __int16 v16; // cx
  unsigned int v17; // edx
  unsigned int v18; // r12d
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int i; // eax
  __int64 v23; // rbx
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r12
  unsigned int v29; // ebx
  __int64 v30; // rbx
  void *CellFlat; // rax
  int v32; // r8d
  unsigned __int16 v33; // cx
  unsigned int v34; // r9d
  int v35; // ecx
  unsigned int v36; // r12d
  int v37; // eax
  unsigned int v38; // edx
  void *v39; // rcx
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  bool v45; // zf
  __int64 v46; // rcx
  __int64 NextElement; // rax
  char v48; // al
  char IsKeyDeleted; // al
  ULONG_PTR v50; // rcx
  __int64 CellPaged; // rax
  __int64 v52; // rcx
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // [rsp+38h] [rbp-90h] BYREF
  void *Src; // [rsp+40h] [rbp-88h]
  __int64 v58; // [rsp+48h] [rbp-80h]
  __int64 v59; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v60; // [rsp+58h] [rbp-70h]
  __int64 v61; // [rsp+60h] [rbp-68h]
  __int64 v62; // [rsp+68h] [rbp-60h] BYREF
  __int128 v63; // [rsp+70h] [rbp-58h] BYREF
  __int128 v64; // [rsp+80h] [rbp-48h]
  __int128 v65; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v66; // [rsp+E0h] [rbp+18h]

  VisibleMaxValueNameLenAndDataLen = 0;
  v59 = 0LL;
  Src = 0LL;
  v61 = 0LL;
  HvpGetCellContextInitialize(&v59);
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  if ( !v13 )
  {
    v14 = 0LL;
    if ( v12 )
    {
      v15 = *(_QWORD *)(v12 + 4);
      if ( !a7 )
      {
LABEL_5:
        v16 = 2 * *(_WORD *)(a2 + 72);
        if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
          v16 = *(_WORD *)(a2 + 72);
        v17 = v16;
        v18 = v16 + 16;
        *a6 = v18;
        if ( a5 < 0x10 )
        {
          VisibleMaxValueNameLenAndDataLen = -1073741789;
        }
        else
        {
          *(_QWORD *)a4 = v15;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = v16;
          v19 = a5 - 16;
          if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
          {
            v20 = *(unsigned __int16 *)(a2 + 72);
            v60 = 0;
            v21 = v19 >> 1;
            if ( v21 >= v20 )
              v21 = v20;
            for ( i = 0; ; ++i )
            {
              v60 = i;
              if ( i >= v21 )
                break;
              *(_WORD *)(a4 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
            }
          }
          else
          {
            if ( v19 <= v16 )
              v17 = a5 - 16;
            memmove((void *)(a4 + 16), (const void *)(a2 + 76), v17);
          }
          if ( a5 < v18 )
            VisibleMaxValueNameLenAndDataLen = -2147483643;
        }
        v23 = (__int64)Src;
        goto LABEL_21;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a7 + 168);
    }
    if ( a8 )
    {
      v42 = a7 + 208;
      v58 = a7 + 208;
      while ( 1 )
      {
        if ( !v14 )
          v14 = *(_QWORD *)(v42 + 8);
        v43 = v14;
        v62 = v14;
        if ( v42 == v14 )
          break;
        v44 = v14 - 32;
        v14 = *(_QWORD *)(v14 + 8);
        if ( !v44 )
          break;
        v45 = CmEqualTrans(*(_QWORD *)(v43 + 24), a8) == 0;
        v42 = v58;
        if ( !v45 && *(_DWORD *)(v62 + 36) == 8 )
        {
          v15 = *(_QWORD *)(v62 + 56);
          goto LABEL_5;
        }
      }
    }
    goto LABEL_5;
  }
  v25 = v13 - 1;
  if ( !v25 )
  {
    v30 = CmGetKeyLastWriteTime(a7, v12, a8);
    if ( *(_WORD *)(a2 + 74) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = (void *)HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(a2 + 48), (unsigned int *)&v59);
      else
        CellFlat = (void *)HvpGetCellPaged(BugCheckParameter3);
      Src = CellFlat;
      v61 = (__int64)CellFlat;
    }
    v32 = *(unsigned __int16 *)(a2 + 74);
    LODWORD(v56) = v32;
    v33 = 2 * *(_WORD *)(a2 + 72);
    if ( (*(_BYTE *)(a2 + 2) & 0x20) == 0 )
      v33 = *(_WORD *)(a2 + 72);
    v34 = v33;
    v35 = v33 + 24;
    v66 = v35;
    if ( (_WORD)v32 )
    {
      v36 = (v35 + 3) & 0xFFFFFFFC;
      v35 = v36 + v32;
      v66 = v36 + v32;
    }
    else
    {
      v36 = v35;
    }
    *a6 = v35;
    if ( a5 < 0x18 )
    {
      VisibleMaxValueNameLenAndDataLen = -1073741789;
      v23 = (__int64)Src;
    }
    else
    {
      *(_QWORD *)a4 = v30;
      *(_DWORD *)(a4 + 8) = 0;
      *(_DWORD *)(a4 + 16) = v32;
      *(_DWORD *)(a4 + 20) = v34;
      v37 = -1;
      if ( (_WORD)v32 )
        v37 = v36;
      *(_DWORD *)(a4 + 12) = v37;
      v38 = a5 - 24;
      v39 = (void *)(a4 + 24);
      if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
      {
        CmpCopyCompressedName((unsigned __int64)v39, v38, a2 + 76, *(unsigned __int16 *)(a2 + 72));
      }
      else
      {
        if ( v38 <= v34 )
          v34 = a5 - 24;
        memmove(v39, (const void *)(a2 + 76), v34);
      }
      v23 = (__int64)Src;
      if ( a5 < v36 )
        goto LABEL_56;
      v40 = v56;
      if ( (_WORD)v56 )
      {
        if ( a5 - v36 <= (unsigned int)v56 )
          v40 = a5 - v36;
        memmove((void *)(a4 + v36), Src, v40);
      }
      if ( v66 > a5 )
LABEL_56:
        VisibleMaxValueNameLenAndDataLen = -2147483643;
    }
    goto LABEL_21;
  }
  if ( v25 != 1 )
  {
    VisibleMaxValueNameLenAndDataLen = -1073741811;
    v23 = (__int64)Src;
    goto LABEL_21;
  }
  v26 = 0LL;
  if ( !a2 )
  {
    v27 = *(_QWORD *)(a7 + 168);
    goto LABEL_31;
  }
  v27 = *(_QWORD *)(v12 + 4);
  if ( a7 )
  {
LABEL_31:
    v28 = a8;
    if ( a8 )
    {
LABEL_98:
      v55 = a7 + 208;
      while ( 1 )
      {
        if ( !v26 )
          v26 = *(_QWORD *)(v55 + 8);
        v58 = v26;
        if ( v55 == v26 )
          break;
        v56 = *(_QWORD *)(v26 + 8);
        if ( v26 == 32 )
          break;
        v45 = CmEqualTrans(*(_QWORD *)(v26 + 24), a8) == 0;
        v26 = v56;
        v55 = a7 + 208;
        if ( !v45 )
        {
          if ( *(_DWORD *)(v58 + 36) != 8 )
            goto LABEL_98;
          v27 = *(_QWORD *)(v58 + 56);
          goto LABEL_32;
        }
      }
    }
    goto LABEL_32;
  }
  v28 = a8;
LABEL_32:
  *(_QWORD *)&v63 = v27;
  DWORD2(v63) = 0;
  v62 = 0LL;
  v56 = 0xFFFFFFFFLL;
  *((_QWORD *)&v64 + 1) = 0LL;
  if ( !a2 || (DWORD2(v64) = (unsigned __int16)*(_DWORD *)(a2 + 52), HIDWORD(v64) = *(_DWORD *)(a2 + 56), a7) )
  {
    if ( a7 )
    {
      v29 = *(unsigned __int16 *)(a7 + 176);
      DWORD2(v64) = v29;
      if ( v28 )
      {
LABEL_84:
        v46 = a7 + 208;
        while ( 1 )
        {
          NextElement = CmListGetNextElement(v46, &v62, 32LL);
          v58 = NextElement;
          if ( !NextElement )
            break;
          v48 = CmEqualTrans(*(_QWORD *)(NextElement + 56), v28);
          v46 = a7 + 208;
          if ( v48 )
          {
            v46 = a7 + 208;
            if ( *(_DWORD *)(v58 + 68) == 1 )
            {
              v58 = *(_QWORD *)(v58 + 88);
              IsKeyDeleted = CmpIsKeyDeleted(v58, 0LL);
              v46 = a7 + 208;
              if ( !IsKeyDeleted )
              {
                v50 = *(_QWORD *)(v58 + 32);
                if ( (*(_BYTE *)(v50 + 140) & 1) != 0 )
                  CellPaged = HvpGetCellFlat(v50, *(_DWORD *)(v58 + 40), (unsigned int *)&v56);
                else
                  CellPaged = HvpGetCellPaged(v50);
                v52 = CellPaged;
                if ( !CellPaged )
                {
                  VisibleMaxValueNameLenAndDataLen = -1073741670;
                  break;
                }
                v53 = (unsigned __int16)*(_DWORD *)(CellPaged + 52);
                if ( v29 < v53 )
                {
                  v29 = v53;
                  DWORD2(v64) = v53;
                }
                if ( HIDWORD(v64) < *(_DWORD *)(v52 + 56) )
                  HIDWORD(v64) = *(_DWORD *)(v52 + 56);
                v54 = *(_QWORD *)(v58 + 32);
                if ( (*(_BYTE *)(v54 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v54, &v56);
                else
                  HvpReleaseCellPaged(v54, &v56);
                goto LABEL_84;
              }
            }
          }
        }
      }
    }
  }
  if ( VisibleMaxValueNameLenAndDataLen < 0
    || (VisibleMaxValueNameLenAndDataLen = CmGetVisibleMaxValueNameLenAndDataLen(
                                             a7,
                                             a2,
                                             v28,
                                             (unsigned int)&v65 + 4,
                                             (__int64)&v65 + 8),
        VisibleMaxValueNameLenAndDataLen < 0) )
  {
    v23 = (__int64)Src;
  }
  else
  {
    DWORD1(v64) = CmGetVisibleSubkeyCount(a7, a2, v28);
    LODWORD(v65) = CmGetVisibleValueCount(a7, a2, v28);
    if ( *(_WORD *)(a2 + 74) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v41 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(a2 + 48), (unsigned int *)&v59);
      else
        v41 = HvpGetCellPaged(BugCheckParameter3);
      v23 = v41;
      v61 = v41;
    }
    else
    {
      v23 = (__int64)Src;
    }
    VisibleMaxValueNameLenAndDataLen = CmpPopulateKeyFullInformation(
                                         &v63,
                                         v23,
                                         *(unsigned __int16 *)(a2 + 74),
                                         a4,
                                         a5,
                                         a6);
  }
LABEL_21:
  if ( v23 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v59);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v59);
  }
  return (unsigned int)VisibleMaxValueNameLenAndDataLen;
}
