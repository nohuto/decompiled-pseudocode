/*
 * XREFs of CmpPreserveSystemHiveData @ 0x140865978
 * Callers:
 *     CmReplaceKey @ 0x14085F020 (CmReplaceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _strnicmp @ 0x140538790 (_strnicmp.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpWalkPath @ 0x140866560 (CmpWalkPath.c)
 *     CmpSetValueKeyExisting @ 0x1408C37CC (CmpSetValueKeyExisting.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x1408E5360 (CmpFindSubKeyByNumber.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     CmpCopySyncTree @ 0x140948D9C (CmpCopySyncTree.c)
 *     CmpFindValueByName @ 0x140AAFFF0 (CmpFindValueByName.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpPreserveSystemHiveData(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // rax
  unsigned int v8; // r15d
  __int64 CellFlat; // rax
  bool v10; // zf
  __int64 v11; // rbx
  __int64 CellPaged; // rax
  int i; // r14d
  int v14; // r12d
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int ValueByName; // ebx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  _WORD *v24; // r14
  unsigned int v25; // ebx
  char *v26; // r15
  size_t v27; // rbx
  int v28; // r15d
  char v29; // r14
  unsigned int j; // r12d
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r14
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // r15d
  __int64 *v38; // r14
  _DWORD *v39; // rdx
  unsigned int k; // r14d
  __int64 v41; // rax
  const char *v42; // rcx
  int v43; // eax
  bool v44; // bl
  unsigned int m; // r15d
  int v46; // r12d
  const WCHAR *v47; // r14
  unsigned int v48; // eax
  __int64 v49; // rax
  unsigned int v50; // r14d
  __int64 v51; // rax
  _DWORD *v52; // rdx
  void *v53; // rcx
  int *v54; // rdx
  size_t Size; // [rsp+28h] [rbp-D8h]
  unsigned int v57[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v58[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v59[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v60[2]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v61[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  const wchar_t *v65; // [rsp+80h] [rbp-80h]
  PCWSTR SourceString; // [rsp+88h] [rbp-78h]
  _DWORD v67[2]; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h]
  _DWORD v69[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v70[2]; // [rsp+A8h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v72[2]; // [rsp+B8h] [rbp-48h] BYREF
  void *v73; // [rsp+C0h] [rbp-40h] BYREF
  int v74; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v75; // [rsp+CCh] [rbp-34h]
  _DWORD v76[3]; // [rsp+D4h] [rbp-2Ch] BYREF
  const wchar_t *v77; // [rsp+E0h] [rbp-20h]
  int v78; // [rsp+E8h] [rbp-18h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  int v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+110h] [rbp+10h]
  int v85; // [rsp+114h] [rbp+14h]
  __int64 v86; // [rsp+118h] [rbp+18h]
  int v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+124h] [rbp+24h]
  char v89; // [rsp+12Ch] [rbp+2Ch]
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+30h] BYREF
  const wchar_t *v91; // [rsp+140h] [rbp+40h]
  char v92; // [rsp+1A0h] [rbp+A0h]
  unsigned int v93; // [rsp+1A0h] [rbp+A0h]
  unsigned int v94; // [rsp+1B0h] [rbp+B0h] BYREF
  int v95; // [rsp+1B4h] [rbp+B4h]
  unsigned int v96; // [rsp+1B8h] [rbp+B8h] BYREF
  int v97; // [rsp+1BCh] [rbp+BCh]

  v91 = L"WPA";
  v96 = -1;
  v65 = L"Control\\FastCache";
  v97 = 0;
  *(_QWORD *)&v76[1] = L"Control\\ProductOptions";
  v61[0] = -1;
  v77 = L"ProductPolicy";
  v4 = 0LL;
  v5 = *(_QWORD *)(BugCheckParameter3 + 64);
  v61[1] = 0;
  v59[0] = -1;
  v59[1] = 0;
  v6 = *(_DWORD *)(v5 + 36);
  v7 = *(_QWORD *)(a2 + 64);
  v57[0] = -1;
  v57[1] = 0;
  v58[0] = -1;
  v8 = *(_DWORD *)(v7 + 36);
  v58[1] = 0;
  v60[0] = -1;
  v60[1] = 0;
  v94 = -1;
  v95 = 0;
  SourceString = 0LL;
  v67[0] = -1;
  v68 = 0LL;
  v69[0] = -1;
  v69[1] = 0;
  v70[0] = -1;
  v71 = 0LL;
  v72[0] = -1;
  v72[1] = 0;
  v73 = 0LL;
  v74 = -1;
  v75 = 0LL;
  LOBYTE(v76[0]) = 0;
  v78 = -1;
  v79 = 0LL;
  v80 = -1;
  v81 = 0;
  v82 = -1;
  v83 = 0LL;
  v84 = -1;
  v85 = 0;
  v86 = 0LL;
  v87 = -1;
  v88 = 0LL;
  v89 = 0;
  P = 0LL;
  v63 = 0LL;
  v62 = 0LL;
  DestinationString = 0LL;
  if ( v6 == -1 || v8 == -1 )
  {
LABEL_74:
    v16 = -1073741492;
    goto LABEL_75;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v6, v60);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v10 = (*(_BYTE *)(a2 + 140) & 1) == 0;
  v11 = CellFlat;
  v63 = CellFlat;
  if ( v10 )
    CellPaged = HvpGetCellPaged(a2);
  else
    CellPaged = HvpGetCellFlat(a2, v8, v61);
  v62 = CellPaged;
  if ( !v11 || !CellPaged )
    goto LABEL_38;
  for ( i = 0; !i; i = 1 )
  {
    v14 = CmpWalkPath(BugCheckParameter3);
    v15 = CmpWalkPath(a2);
    if ( v14 == -1 || v15 == -1 )
      goto LABEL_74;
    v16 = CmpCopySyncTree(BugCheckParameter3, v14, a2, v15, 2, 1);
    if ( v16 < 0 )
      goto LABEL_75;
  }
  v17 = CmpWalkPath(BugCheckParameter3);
  if ( v17 == -1 )
  {
LABEL_18:
    v16 = 0;
    goto LABEL_75;
  }
  v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, v17, v58)
      : HvpGetCellPaged(BugCheckParameter3);
  if ( !v18 )
  {
LABEL_38:
    v16 = -1073741670;
    goto LABEL_75;
  }
  ValueByName = CmpFindValueByName(BugCheckParameter3, v18, &PspSiloMonitorLock.152);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v58);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v58);
  if ( ValueByName != -1 )
  {
    v20 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, ValueByName, &v94)
        : HvpGetCellPaged(BugCheckParameter3);
    v21 = v20;
    if ( v20 )
    {
      if ( *(_DWORD *)(v20 + 12) == 6 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v22 = HvpGetCellFlat(BugCheckParameter3, *(_DWORD *)(v20 + 8), v57);
        else
          v22 = HvpGetCellPaged(BugCheckParameter3);
        v23 = v22;
        if ( !v22 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v94);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v94);
          goto LABEL_38;
        }
        v24 = (_WORD *)(v22 + *(unsigned int *)(v21 + 4) - 2LL);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v94);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v94);
        v25 = 0;
        while ( *v24 != 92 && (unsigned __int64)v24 >= v23 )
        {
          ++v25;
          --v24;
        }
        P = (PVOID)ExAllocatePool2(0x100uLL);
        v26 = (char *)P;
        if ( !P )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, v57);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v57);
          v16 = -1073741801;
          goto LABEL_75;
        }
        v27 = 2LL * v25;
        memmove(P, v24 + 1, v27);
        *(_WORD *)&v26[v27] = 0;
        v28 = CmpWalkPath(BugCheckParameter3);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v57);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v57);
        if ( v28 == -1 )
          goto LABEL_18;
      }
      else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
        HvpReleaseCellFlat(BugCheckParameter3, &v94);
      }
      else
      {
        HvpReleaseCellPaged(BugCheckParameter3, &v94);
      }
    }
  }
  v29 = 0;
  v92 = 0;
  for ( j = 0; j < 2; ++j )
  {
    v31 = 22LL * j;
    v32 = CmpWalkPath(BugCheckParameter3);
    v67[v31] = v32;
    if ( v32 != -1 )
    {
      if ( *(_QWORD *)&v67[22 * j - 2] )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v33 = HvpGetCellFlat(BugCheckParameter3, v32, &v69[v31]);
        else
          v33 = HvpGetCellPaged(BugCheckParameter3);
        *(_QWORD *)&v69[22 * j - 2] = v33;
        v34 = v33;
        if ( !v33 )
          goto LABEL_38;
        RtlInitUnicodeString(&DestinationString, *(PCWSTR *)&v67[22 * j - 2]);
        v35 = CmpFindValueByName(BugCheckParameter3, v34, &DestinationString);
        v70[22 * j] = v35;
        if ( v35 == -1 )
        {
          v29 = v92;
        }
        else
        {
          v29 = 1;
          v92 = 1;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v36 = HvpGetCellFlat(BugCheckParameter3, v35, &v72[v31]);
          else
            v36 = HvpGetCellPaged(BugCheckParameter3);
          *(_QWORD *)&v72[22 * j - 2] = v36;
          if ( !v36 )
            goto LABEL_38;
          if ( !(unsigned __int8)CmpGetValueData(
                                   BugCheckParameter3,
                                   (__int64)&v73 + v31 * 4,
                                   (__int64)&v76[v31],
                                   (__int64)&v74 + v31 * 4) )
            goto LABEL_74;
        }
      }
      else
      {
        v29 = 1;
        v92 = 1;
      }
    }
  }
  v16 = 0;
  if ( v29 )
  {
    for ( k = 0; ; ++k )
    {
      v93 = k;
      if ( k >= *(_DWORD *)(v62 + 20) )
        break;
      CmpFindSubKeyByNumber(a2);
      if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
        v41 = HvpGetCellFlat(a2, 0, &v96);
      else
        v41 = HvpGetCellPaged(a2);
      v4 = v41;
      if ( !v41 )
        goto LABEL_38;
      if ( *(_WORD *)(v41 + 72) == 13 )
      {
        v42 = (const char *)(v41 + 76);
        if ( (*(_BYTE *)(v41 + 2) & 0x20) != 0 )
          v43 = strnicmp(v42, "ControlSet000", 0xAuLL);
        else
          v43 = wcsnicmp((const wchar_t *)v42, L"ControlSet000", 0xAuLL);
        v44 = v43 == 0;
        if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(a2, &v96);
        else
          HvpReleaseCellPaged(a2, &v96);
        if ( v44 )
        {
          for ( m = 0; m < 2; ++m )
          {
            v46 = v67[22 * m];
            if ( v46 != -1 )
            {
              v47 = *(const WCHAR **)&v67[22 * m - 2];
              if ( !v47 || v70[22 * m] != -1 )
              {
                v48 = CmpWalkPath(a2);
                if ( v48 != -1 )
                {
                  if ( v47 )
                  {
                    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                      v49 = HvpGetCellFlat(a2, v48, &v96);
                    else
                      v49 = HvpGetCellPaged(a2);
                    v4 = v49;
                    if ( !v49 )
                      goto LABEL_38;
                    RtlInitUnicodeString(&DestinationString, v47);
                    v50 = CmpFindValueByName(a2, v4, &DestinationString);
                    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(a2, &v96);
                    else
                      HvpReleaseCellPaged(a2, &v96);
                    v4 = 0LL;
                    if ( v50 != -1 )
                    {
                      if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                        v51 = HvpGetCellFlat(a2, v50, v59);
                      else
                        v51 = HvpGetCellPaged(a2);
                      if ( !v51 )
                        goto LABEL_38;
                      LODWORD(Size) = v76[22 * m - 1];
                      v16 = CmpSetValueKeyExisting(a2, *(&v73 + 11 * m), Size, v50 >> 31);
                      if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(a2, v59);
                      else
                        HvpReleaseCellPaged(a2, v59);
                      if ( v16 < 0 )
                        goto LABEL_75;
                    }
                  }
                  else
                  {
                    CmpCopySyncTree(BugCheckParameter3, v46, a2, v48, 2, 1);
                  }
                }
              }
            }
          }
          k = v93;
        }
        v16 = 0;
      }
      else if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      {
        HvpReleaseCellFlat(a2, &v96);
      }
      else
      {
        HvpReleaseCellPaged(a2, &v96);
      }
    }
  }
  v4 = 0LL;
LABEL_75:
  v37 = 0;
  v38 = &v71;
  do
  {
    if ( *(v38 - 3) )
    {
      v39 = &v69[22 * v37];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v39);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v39);
    }
    if ( *v38 )
    {
      v52 = &v72[22 * v37];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v52);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v52);
    }
    v53 = (void *)v38[2];
    if ( v53 )
    {
      if ( *((_BYTE *)v38 + 36) )
      {
        ExFreePoolWithTag(v53, 0);
      }
      else
      {
        v54 = &v74 + 22 * v37;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v54);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v54);
      }
    }
    ++v37;
    v38 += 11;
  }
  while ( v37 < 2 );
  if ( v4 )
  {
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a2, &v96);
    else
      HvpReleaseCellPaged(a2, &v96);
  }
  if ( v63 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v60);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v60);
  }
  if ( v62 )
  {
    if ( (*(_BYTE *)(a2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a2, v61);
    else
      HvpReleaseCellPaged(a2, v61);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v16;
}
