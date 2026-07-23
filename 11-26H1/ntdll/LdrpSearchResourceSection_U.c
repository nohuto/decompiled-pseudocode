/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180019960
 * Callers:
 *     LdrIsResItemExist @ 0x180017A70 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x180018F20 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlFindMessage @ 0x180019840 (RtlFindMessage.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlLoadString @ 0x1800A9FC0 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x1800D6C10 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800EC400 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1801113B0 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     LdrRscIsTypeExist @ 0x1800173A0 (LdrRscIsTypeExist.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800175C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x180018D20 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetRcConfig @ 0x180018F20 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001CA40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpGetParentLangId @ 0x18004DD38 (LdrpGetParentLangId.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpSetThreadPreferredLangList @ 0x180053860 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800551A0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 *     LdrpResGetMappingSize @ 0x1800A6EF0 (LdrpResGetMappingSize.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     wcsncmp @ 0x18012D9F0 (wcsncmp.c)
 *     NtQueryDefaultLocale @ 0x18015F0E0 (NtQueryDefaultLocale.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        unsigned __int64 BaseOfImage,
        const wchar_t **a2,
        DWORD a3,
        unsigned int a4,
        __int64 a5)
{
  DWORD v6; // r12d
  unsigned __int64 v7; // r15
  const wchar_t *v8; // rbx
  int v9; // ecx
  char v10; // di
  unsigned int v11; // ecx
  unsigned int *v12; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // r10
  char *v18; // r9
  unsigned int *v19; // rax
  unsigned __int16 v20; // di
  unsigned int *v21; // rsi
  bool v22; // r8
  char v23; // r15
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // r12
  bool v27; // r8
  char v28; // di
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rax
  unsigned int v32; // edx
  unsigned __int64 v33; // rcx
  __int64 v34; // r10
  unsigned int v35; // eax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // esi
  int CurrentLocale_low; // r14d
  __int64 v40; // r8
  __int64 v41; // rdi
  unsigned int v42; // r11d
  unsigned __int64 MergedPrefLanguages; // rcx
  unsigned int v44; // eax
  const wchar_t **v45; // r11
  int v46; // r9d
  unsigned int v47; // ecx
  unsigned int v48; // edx
  __int64 result; // rax
  unsigned __int64 v50; // rax
  unsigned int v51; // edx
  ULONG v52; // edi
  unsigned int v53; // eax
  struct _TEB *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  const wchar_t **v57; // r13
  const wchar_t **v58; // r13
  __int64 v59; // r9
  bool v60; // r10
  int v61; // eax
  char *v62; // r13
  unsigned int v63; // r13d
  const wchar_t *v64; // rax
  const wchar_t *v65; // rax
  unsigned int v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // esi
  unsigned __int16 v69; // si
  const wchar_t *v70; // rcx
  unsigned int *v71; // rax
  unsigned int *v72; // rdi
  const wchar_t **v73; // r14
  int v74; // eax
  ULONG v75; // r13d
  bool v76; // si
  char *v77; // rdi
  NTSTATUS v78; // eax
  PIMAGE_NT_HEADERS v79; // r9
  unsigned __int16 Magic; // ax
  __int64 v81; // rax
  __int64 VirtualAddress; // r10
  _DWORD *v83; // rdx
  unsigned int NumberOfSections; // r11d
  unsigned int v85; // r8d
  unsigned int v86; // ecx
  __int64 v87; // r13
  unsigned __int16 *v88; // r13
  unsigned int v89; // edx
  __int64 v90; // rcx
  __int64 v91; // rdx
  struct _TEB *v92; // rax
  _DWORD *RcConfig; // rax
  bool v94; // zf
  wchar_t *v95; // rcx
  size_t v96; // rax
  __int16 v97; // cx
  __int64 v98; // rsi
  char *v99; // rsi
  unsigned int v100; // edx
  __int64 v101; // rcx
  __int64 v102; // rdx
  DWORD v103; // ebx
  ULONG v104; // edi
  const wchar_t **v105; // r13
  __int64 v106; // r14
  unsigned int ResourceFromAlternativeModule; // eax
  int v108; // eax
  int v109; // eax
  __int64 v110; // r9
  const wchar_t *v111; // rax
  int v112; // eax
  unsigned int v113; // eax
  _WORD v114[2]; // [rsp+40h] [rbp-1D8h] BYREF
  char v115; // [rsp+44h] [rbp-1D4h]
  int v116; // [rsp+48h] [rbp-1D0h]
  NTSTATUS v117; // [rsp+4Ch] [rbp-1CCh]
  int v118; // [rsp+50h] [rbp-1C8h] BYREF
  bool v119; // [rsp+54h] [rbp-1C4h]
  unsigned int v120; // [rsp+58h] [rbp-1C0h]
  int v121; // [rsp+5Ch] [rbp-1BCh]
  unsigned __int16 v122; // [rsp+60h] [rbp-1B8h]
  __int64 v123; // [rsp+68h] [rbp-1B0h] BYREF
  char v124; // [rsp+70h] [rbp-1A8h]
  char v125[8]; // [rsp+78h] [rbp-1A0h] BYREF
  unsigned __int16 v126; // [rsp+80h] [rbp-198h]
  __int64 v127; // [rsp+88h] [rbp-190h]
  unsigned int *v128; // [rsp+90h] [rbp-188h]
  DWORD v129; // [rsp+98h] [rbp-180h]
  unsigned int v130; // [rsp+9Ch] [rbp-17Ch]
  const wchar_t **v131; // [rsp+A0h] [rbp-178h]
  DWORD v132; // [rsp+A8h] [rbp-170h] BYREF
  int v133; // [rsp+ACh] [rbp-16Ch]
  __int64 v134; // [rsp+B0h] [rbp-168h] BYREF
  _UNICODE_STRING String; // [rsp+B8h] [rbp-160h] BYREF
  bool v136; // [rsp+C8h] [rbp-150h]
  int v137; // [rsp+CCh] [rbp-14Ch]
  int v138; // [rsp+D0h] [rbp-148h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+D8h] [rbp-140h] BYREF
  __int64 v140; // [rsp+E0h] [rbp-138h] BYREF
  __int64 v141; // [rsp+E8h] [rbp-130h]
  char *v142; // [rsp+F0h] [rbp-128h]
  const wchar_t **v143; // [rsp+F8h] [rbp-120h]
  int v144; // [rsp+100h] [rbp-118h]
  DWORD Lcid; // [rsp+104h] [rbp-114h] BYREF
  unsigned int v146; // [rsp+108h] [rbp-110h]
  DWORD DefaultLocaleId; // [rsp+10Ch] [rbp-10Ch] BYREF
  __int64 v148; // [rsp+110h] [rbp-108h]
  __int64 v149; // [rsp+118h] [rbp-100h]
  char *v150; // [rsp+120h] [rbp-F8h]
  unsigned int *v151; // [rsp+128h] [rbp-F0h]
  unsigned int *v152; // [rsp+130h] [rbp-E8h]
  unsigned __int64 v153; // [rsp+138h] [rbp-E0h]
  char *v154; // [rsp+140h] [rbp-D8h]
  unsigned __int64 v155; // [rsp+148h] [rbp-D0h]
  _DWORD *v156; // [rsp+150h] [rbp-C8h]
  unsigned __int64 v157; // [rsp+158h] [rbp-C0h]
  unsigned int v158; // [rsp+160h] [rbp-B8h]
  int v159; // [rsp+164h] [rbp-B4h]
  unsigned __int64 v160; // [rsp+168h] [rbp-B0h]
  __int64 v161; // [rsp+170h] [rbp-A8h]
  unsigned int *v162; // [rsp+178h] [rbp-A0h]
  unsigned int *v163; // [rsp+180h] [rbp-98h]
  __int64 *v164; // [rsp+188h] [rbp-90h]
  __int64 v165; // [rsp+190h] [rbp-88h]
  const wchar_t *v166; // [rsp+198h] [rbp-80h] BYREF
  const wchar_t *v167; // [rsp+1A0h] [rbp-78h]
  const wchar_t *v168; // [rsp+1A8h] [rbp-70h]
  const wchar_t *v169; // [rsp+1B0h] [rbp-68h]
  const wchar_t *v170; // [rsp+1B8h] [rbp-60h]
  __int64 v171; // [rsp+1C0h] [rbp-58h]
  __int64 v172; // [rsp+1C8h] [rbp-50h]

  v118 = a4;
  v6 = a3;
  v129 = a3;
  v143 = a2;
  v7 = BaseOfImage;
  v153 = BaseOfImage;
  v127 = a5;
  v8 = 0LL;
  v123 = 0LL;
  v125[0] = 0;
  v131 = a2;
  v119 = 0;
  v134 = 0LL;
  v146 = 0;
  Lcid = 0;
  v132 = 0;
  DefaultLocaleId = 0;
  String = 0LL;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = 3;
  if ( a3 != 4 )
    v9 = a3;
  v120 = v9;
  v130 = v9;
  v10 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) != 0 && (unsigned int)(v9 - 1) <= 2 )
  {
    if ( v9 == 3 )
      v69 = *((_WORD *)a2 + 8);
    else
      v69 = 0;
    v122 = v69;
    v70 = *a2;
    if ( ((unsigned __int64)(*a2 - 8) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && (((unsigned __int64)v70 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp(v70, L"MUI"))
      || (v10 & 8) == 0
      || (v69 & 0xF3FF) != 0
      || v69 == 3072 )
    {
      v118 = 0;
      v140 = 0LL;
      v137 = 0;
      v121 = 0;
      v71 = LdrpGetFromMUIMemCache(v7, 0, 0LL, 8);
      v72 = v71;
      v128 = v71;
      if ( v71 == (unsigned int *)-1LL )
        goto LABEL_275;
      if ( !v71 )
      {
        v170 = L"MUI";
        v171 = 1LL;
        v172 = 0LL;
        v109 = LdrpSearchResourceSection_U((PVOID)v7, (__int64)&v140);
        v137 = v109;
        if ( v109 < 0 )
        {
          v72 = 0LL;
          v128 = 0LL;
        }
        else
        {
          v109 = LdrpAccessResourceDataNoMultipleLanguage((PVOID)v7);
          v137 = v109;
          if ( v109 < 0 )
          {
            v72 = 0LL;
            v128 = 0LL;
          }
          else
          {
            v72 = v128;
            if ( *v128 == -20054323 )
            {
              v121 = 0;
            }
            else
            {
              v109 = -1073741701;
              v137 = -1073741701;
              v72 = 0LL;
              v128 = 0LL;
            }
          }
        }
        v110 = -1LL;
        if ( v72 )
          v110 = (__int64)v72;
        LdrpSetAlternateResourceModuleHandle(v7, 0LL, 0LL, v110, 0, 2, v109, 0LL);
      }
      if ( !v72 )
      {
LABEL_275:
        v74 = 0x80000;
        v118 = 0x80000;
        v73 = v143;
      }
      else
      {
        v73 = v143;
        if ( (int)LdrRscIsTypeExist(v72, *v143, a4, &v118) < 0 )
        {
          v74 = 393216;
          v118 = 393216;
        }
        else
        {
          v74 = v118;
          if ( (v72[5] & 0x100) != 0 )
          {
            v74 = v118 | 0x100000;
            v118 |= 0x100000u;
          }
          if ( (v72[4] & 0x10) != 0 )
          {
            v74 |= 0x200000u;
            v118 = v74;
          }
        }
      }
      v75 = v74 | a4;
      v118 = v75;
      v138 = v75;
      if ( (v75 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v117 = -1073741686;
        if ( (v75 & 0x20000) == 0 )
        {
          v166 = *v73;
          if ( v120 < 2 )
            v111 = 0LL;
          else
            v111 = v73[1];
          v167 = v111;
          if ( v120 == 3 )
            v8 = v73[2];
          v168 = v8;
          if ( v6 == 4 )
            v169 = v73[3];
          result = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v166, v6, v75, v127);
          v117 = result;
        }
        return result;
      }
    }
    else
    {
      v118 = a4 | 0x10;
      v138 = a4 | 0x10;
    }
  }
  v76 = 1;
  v124 = 1;
  v77 = (char *)v7;
  v160 = v7;
  OutHeaders = 0LL;
  v62 = 0LL;
  v142 = 0LL;
  if ( (v7 & 2) != 0 || (v7 & 1) != 0 )
  {
    v76 = (v7 & 1) == 0;
    v124 = v76;
    v77 = (char *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    v160 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v78 = RtlImageNtHeaderEx(1u, v77, 0LL, &OutHeaders);
  v79 = OutHeaders;
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) > 2 )
      {
        VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( !(_DWORD)VirtualAddress )
        {
          v78 = -1073741822;
          goto LABEL_139;
        }
        if ( v76 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v62 = &v77[VirtualAddress];
          v142 = &v77[VirtualAddress];
          v78 = 0;
          goto LABEL_139;
        }
        v144 = 0;
        v156 = 0LL;
        v83 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
        v156 = v83;
        NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
        v85 = 0;
        v144 = 0;
        while ( v85 < NumberOfSections )
        {
          v86 = v83[3];
          if ( (unsigned int)VirtualAddress >= v86 && (unsigned int)VirtualAddress < v83[4] + v86 )
          {
            if ( v83 )
            {
              v62 = &v77[(unsigned int)v83[5] - (unsigned __int64)(unsigned int)v83[3] + VirtualAddress];
              goto LABEL_269;
            }
            break;
          }
          v83 += 10;
          v156 = v83;
          v144 = ++v85;
        }
        v62 = 0LL;
        goto LABEL_269;
      }
    }
    else if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes > 2 )
    {
      v81 = OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      if ( !(_DWORD)v81 )
      {
        v78 = -1073741822;
        goto LABEL_139;
      }
      if ( v76 || (unsigned int)v81 < OutHeaders->OptionalHeader.SizeOfHeaders )
      {
        v62 = &v77[v81];
        v142 = &v77[v81];
        v78 = 0;
        goto LABEL_139;
      }
      v62 = (char *)RtlAddressInSectionTable(OutHeaders, v77, v81);
LABEL_269:
      v142 = v62;
      v78 = 0;
      if ( !v62 )
        v78 = -1073741811;
      goto LABEL_139;
    }
    v78 = -1073741811;
  }
LABEL_139:
  if ( v78 < 0 )
    v62 = 0LL;
  v128 = (unsigned int *)v62;
  v142 = v62;
  if ( !v62 )
    return 3221225609LL;
  LOBYTE(v79) = 1;
  result = LdrpResGetMappingSize(v7, &v134, 256LL, v79);
  v117 = result;
  if ( (int)result >= 0 )
  {
    v17 = (__int64)v62;
    v149 = (__int64)v62;
    v40 = 61166LL;
    v123 = 61166LL;
    v38 = 0;
    v133 = 0;
    v18 = 0LL;
    *(_QWORD *)&String.Length = 0LL;
    v150 = 0LL;
    v41 = 0LL;
    v140 = 0LL;
    v161 = 0LL;
    LOWORD(CurrentLocale_low) = 0;
    v116 = 0;
    v114[0] = 0;
    v122 = 0;
    v132 = 0;
    v42 = -1073741308;
    v121 = -1073741308;
LABEL_53:
    MergedPrefLanguages = v130;
    if ( !v17
      || (v44 = v130, MergedPrefLanguages = v130 - 1, v130 = MergedPrefLanguages, v159 = MergedPrefLanguages, !v44) )
    {
      v52 = v118;
      goto LABEL_66;
    }
    if ( !(_DWORD)MergedPrefLanguages )
    {
      if ( v120 == 3 )
        v41 = v17;
      v140 = v41;
      v161 = v41;
    }
    if ( !v41 )
    {
      v45 = v143;
      goto LABEL_58;
    }
    LOWORD(CurrentLocale_low) = 0;
    v116 = 0;
    v114[0] = 0;
    v58 = v131;
    v59 = *((unsigned __int16 *)v131 + 8);
    v122 = v59;
    v60 = (v59 & 0x3FF) == 0;
    v119 = v60;
    v136 = v60;
    v52 = v118;
    v55 = v120;
    while ( 1 )
    {
      v61 = v38++;
      v133 = v38;
      if ( v61 == 6 )
        break;
      if ( !v61 )
      {
        if ( (_WORD)v59 )
        {
          CurrentLocale_low = (unsigned __int16)v40;
          if ( (v52 & 0x80000) != 0 )
            LOWORD(CurrentLocale_low) = v59;
        }
        else
        {
          CurrentLocale_low = 0;
        }
LABEL_83:
        v114[0] = CurrentLocale_low;
LABEL_84:
        v116 = CurrentLocale_low;
        goto LABEL_85;
      }
      MergedPrefLanguages = 0x180000000uLL;
      switch ( v61 )
      {
        case 1:
          if ( (~v52 & 0xA0010) != 0xA0010 )
            goto LABEL_82;
          v166 = *v58;
          if ( (unsigned int)v55 < 2 )
            v64 = 0LL;
          else
            v64 = v58[1];
          v167 = v64;
          if ( (_DWORD)v55 == 3 )
            v65 = v58[2];
          else
            v65 = 0LL;
          v168 = v65;
          if ( v6 == 4 )
            v169 = v58[3];
          result = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v166, v6, v52, v127);
          v117 = result;
          if ( (int)result >= 0 )
            return result;
          goto LABEL_178;
        case 2:
          CurrentLocale_low = (unsigned __int16)v59;
          if ( v60 )
            LOWORD(CurrentLocale_low) = v40;
          goto LABEL_83;
        case 3:
          if ( (v52 & 4) != 0 )
            return 3221225988LL;
          if ( v60 )
            goto LABEL_82;
          if ( (int)LdrpGetParentLangId((unsigned __int16)CurrentLocale_low, v114, v40, v59) < 0 )
          {
            CurrentLocale_low = 0;
            v114[0] = 0;
            v40 = v123;
            goto LABEL_84;
          }
          LOWORD(CurrentLocale_low) = v114[0];
          v116 = v114[0];
          if ( v114[0] )
            goto LABEL_99;
          v40 = v123;
          break;
        case 4:
          if ( v60 )
            goto LABEL_82;
          CurrentLocale_low = (unsigned __int16)v59;
          MergedPrefLanguages = 1023LL;
          LOWORD(CurrentLocale_low) = v59 & 0x3FF;
          goto LABEL_83;
        case 5:
          if ( v60 )
            goto LABEL_82;
          return 3221225988LL;
        case 7:
          if ( (~v52 & 0x80000) == 0 )
            goto LABEL_82;
          RcConfig = LdrpGetRcConfig((PVOID)v7, v55, 0, 1);
          if ( !RcConfig )
            goto LABEL_178;
          if ( *RcConfig != -20054323 )
            goto LABEL_178;
          MergedPrefLanguages = (unsigned int)RcConfig[31];
          if ( !(_DWORD)MergedPrefLanguages )
            goto LABEL_178;
          v94 = (_DWORD *)((char *)RcConfig + MergedPrefLanguages) == 0LL;
          v95 = (wchar_t *)((char *)RcConfig + MergedPrefLanguages);
          v141 = 0LL;
          *(_QWORD *)&String.Length = 0LL;
          String.Buffer = v95;
          if ( !v94 )
          {
            v96 = 2 * wcslen(v95);
            v141 = v96;
            v97 = v96;
            if ( v96 >= 0xFFFE )
            {
              LOWORD(v96) = -4;
              v141 = 65532LL;
              v97 = -4;
            }
            String.Length = v96;
            String.MaximumLength = v97 + 2;
          }
          if ( !RtlCultureNameToLCID(&String, &Lcid) )
            goto LABEL_178;
          CurrentLocale_low = (unsigned __int16)Lcid;
          v114[0] = Lcid;
          v40 = v123;
          goto LABEL_84;
        case 8:
          LOWORD(CurrentLocale_low) = v40;
          v116 = (unsigned __int16)v40;
          v114[0] = v40;
          if ( (~v52 & 0x80000) != 0 )
            goto LABEL_92;
          if ( !NtCurrentTeb() )
            goto LABEL_100;
          v92 = NtCurrentTeb();
          CurrentLocale_low = LOWORD(v92->CurrentLocale);
          v114[0] = v92->CurrentLocale;
          v40 = v123;
          goto LABEL_84;
        case 9:
          LOWORD(CurrentLocale_low) = v40;
          v116 = (unsigned __int16)v40;
          v114[0] = v40;
          v117 = NtQueryDefaultLocale(1u, &v132);
          if ( v117 < 0 )
            goto LABEL_100;
          CurrentLocale_low = (unsigned __int16)v132;
          v114[0] = v132;
          v40 = v123;
          goto LABEL_84;
        case 10:
          LOWORD(CurrentLocale_low) = v40;
          v116 = (unsigned __int16)v40;
          v114[0] = v40;
          v117 = NtQueryDefaultLocale(0, &DefaultLocaleId);
          if ( v117 < 0 || DefaultLocaleId == v132 )
            goto LABEL_100;
          CurrentLocale_low = (unsigned __int16)DefaultLocaleId;
          v114[0] = DefaultLocaleId;
          v40 = v123;
          goto LABEL_84;
        case 11:
          CurrentLocale_low = 1033;
          goto LABEL_83;
        case 12:
LABEL_92:
          v52 |= 0x20u;
          v118 = v52;
          v138 = v52;
          break;
        default:
          return 3221225988LL;
      }
LABEL_85:
      if ( (~(_BYTE)v52 & 0x20) == 0 || (unsigned __int16)CurrentLocale_low != v40 )
      {
        v123 = (unsigned __int16)CurrentLocale_low;
        v45 = (const wchar_t **)&v123;
        v143 = (const wchar_t **)&v123;
        v164 = &v123;
        v41 = v140;
        v17 = v140;
        v149 = v140;
        v62 = (char *)v128;
LABEL_58:
        v46 = *(unsigned __int16 *)(v17 + 14);
        v16 = *(unsigned __int16 *)(v17 + 12);
        v47 = v46 + v16;
        v48 = -1;
        if ( v46 + (int)v16 >= (unsigned int)v16 )
          v48 = v46 + v16;
        result = v47 < (unsigned int)v16 ? 0xC0000095 : 0;
        v117 = v47 < (unsigned int)v16 ? 0xC0000095 : 0;
        if ( v47 < (unsigned int)v16 )
          return result;
        v50 = 8LL * v48;
        v155 = v50;
        v51 = 8 * v48;
        if ( v50 > 0xFFFFFFFF )
          v51 = -1;
        v11 = 0;
        if ( v50 > 0xFFFFFFFF )
          v11 = -1073741675;
        v117 = v11;
        if ( v50 > 0xFFFFFFFF )
          return v11;
        v12 = (unsigned int *)(v17 + 16);
        v162 = (unsigned int *)(v17 + 16);
        v157 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
        v13 = (v7 & 0xFFFFFFFFFFFFFFFCuLL) + v134;
        if ( v17 + 16 + (unsigned __int64)v51 > v13 )
          return 3221225595LL;
        v14 = (unsigned __int64)*v45;
        v141 = v14;
        v15 = v14 & 0xFFFFFFFFFFFF0000uLL;
        v155 = v14 & 0xFFFFFFFFFFFF0000uLL;
        if ( (v14 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          v12 += 2 * v16;
          v162 = v12;
          LOWORD(v16) = v46;
        }
        if ( (_WORD)v16 )
        {
          if ( !v41 || (v52 = v118, (v118 & 0x20) == 0) )
          {
            v163 = v12;
            v126 = v16;
            v151 = 0LL;
            v115 = 0;
            v149 = 0LL;
            v150 = 0LL;
            v17 = 0LL;
            OutHeaders = 0LL;
            v148 = 0LL;
            v18 = 0LL;
            *(_QWORD *)&String.Length = 0LL;
            v154 = 0LL;
            v19 = &v12[2 * (unsigned __int16)v16 - 2];
            v152 = v19;
            v20 = v16;
            while ( 1 )
            {
              if ( v12 > v19 )
                goto LABEL_51;
              v20 >>= 1;
              if ( !v20 )
                break;
              v151 = v12;
              v21 = &v12[2 * v20];
              if ( (v16 & 1) == 0 )
                v21 -= 2;
              v151 = v21;
              v22 = v7 && v134;
              v23 = 1;
              v115 = 1;
              v24 = *v21;
              if ( v15 )
              {
                if ( (int)v24 >= 0 )
                {
                  v25 = -1;
                }
                else
                {
                  v87 = *v21;
                  if ( v22 && (v14 = v141, (unsigned __int64)v128 + (v24 & 0xFFFFFFFF7FFFFFFFuLL) > v134 + v157) )
                  {
                    v23 = 0;
                    v115 = 0;
                    v25 = -1;
                    v62 = (char *)v128;
                    v18 = *(char **)&String.Length;
                  }
                  else
                  {
                    LODWORD(v87) = v24 & 0x7FFFFFFF;
                    v88 = (unsigned __int16 *)((char *)v128 + v87);
                    if ( v22
                      && ((v165 = 2LL * *v88,
                           v89 = v24 & 0x7FFFFFFF,
                           v90 = v89 + (unsigned int)v165,
                           (unsigned int)v90 < v89)
                       || (unsigned __int64)v128 + v90 > v134 + (v153 & 0xFFFFFFFFFFFFFFFCuLL)) )
                    {
                      v23 = 0;
                      v115 = 0;
                      v25 = -1;
                      v62 = (char *)v128;
                      v18 = *(char **)&String.Length;
                    }
                    else
                    {
                      v25 = wcsncmp((const wchar_t *)v14, v88 + 1, *v88);
                      v14 = v141;
                      if ( !v25 )
                      {
                        v91 = -1LL;
                        do
                          ++v91;
                        while ( *(_WORD *)(v141 + 2 * v91) );
                        if ( v91 != *v88 )
                          v25 = 1;
                      }
                      v17 = (__int64)OutHeaders;
                      v62 = (char *)v128;
                      v18 = *(char **)&String.Length;
                    }
                  }
                }
              }
              else if ( (int)v24 < 0 )
              {
                v25 = 1;
              }
              else
              {
                v25 = v14 - v24;
              }
              if ( !v23 )
                return 3221225595LL;
              if ( !v25 )
              {
                v35 = v21[1];
                v7 = v153;
                v36 = v134 + (v153 & 0xFFFFFFFFFFFFFFFCuLL);
                v37 = v35;
                if ( (v35 & 0x80000000) == 0 )
                {
                  if ( (unsigned __int64)&v62[v35] <= v36 )
                  {
                    v17 = 0LL;
                    v148 = 0LL;
                    v18 = &v62[v35];
                    *(_QWORD *)&String.Length = v18;
                    v154 = v18;
                    goto LABEL_51;
                  }
                }
                else
                {
                  LODWORD(v37) = v35 & 0x7FFFFFFF;
                  if ( (unsigned __int64)&v62[v37] <= v36 )
                  {
                    v34 = v35;
LABEL_50:
                    LODWORD(v34) = v34 & 0x7FFFFFFF;
                    v17 = (__int64)&v62[v34];
                    v148 = v17;
LABEL_51:
                    v149 = v17;
                    v150 = v18;
                    v164 = (__int64 *)++v143;
                    v6 = v129;
                    v38 = v133;
                    LOWORD(CurrentLocale_low) = v116;
                    v40 = v123;
                    v41 = v140;
                    v42 = -1073741308;
                    goto LABEL_53;
                  }
                }
                return 3221225595LL;
              }
              if ( v25 >= 0 )
              {
                v12 = v21 + 2;
                v163 = v21 + 2;
                v19 = v152;
              }
              else
              {
                v19 = v21 - 2;
                v152 = v21 - 2;
                if ( (v16 & 1) == 0 )
                  --v20;
              }
              LOWORD(v16) = v20;
              v126 = v20;
              v15 = v155;
              v7 = v153;
            }
            if ( !(_WORD)v16 )
              goto LABEL_51;
            v26 = v134;
            v27 = v7 && v134;
            v28 = 1;
            v115 = 1;
            v29 = *v12;
            if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              if ( (int)v29 >= 0 )
              {
                v30 = -1;
              }
              else
              {
                v98 = *v12;
                if ( v27 && (unsigned __int64)&v62[v29 & 0xFFFFFFFF7FFFFFFFuLL] > v134 + (v7 & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  v28 = 0;
                  v115 = 0;
                  v30 = -1;
                }
                else
                {
                  LODWORD(v98) = v29 & 0x7FFFFFFF;
                  v99 = &v62[v98];
                  if ( v27
                    && ((v157 = 2LL * *(unsigned __int16 *)v99,
                         v100 = v29 & 0x7FFFFFFF,
                         v101 = v100 + (unsigned int)v157,
                         (unsigned int)v101 < v100)
                     || (unsigned __int64)&v62[v101] > v134 + (v7 & 0xFFFFFFFFFFFFFFFCuLL)) )
                  {
                    v28 = 0;
                    v115 = 0;
                    v30 = -1;
                  }
                  else
                  {
                    v30 = wcsncmp((const wchar_t *)v14, (const wchar_t *)v99 + 1, *(unsigned __int16 *)v99);
                    if ( !v30 )
                    {
                      v102 = -1LL;
                      do
                        ++v102;
                      while ( *(_WORD *)(v141 + 2 * v102) );
                      if ( v102 != *(unsigned __int16 *)v99 )
                        v30 = 1;
                    }
                    v17 = (__int64)OutHeaders;
                    v18 = *(char **)&String.Length;
                  }
                }
              }
            }
            else if ( (int)v29 < 0 )
            {
              v30 = 1;
            }
            else
            {
              v30 = v14 - v29;
            }
            if ( v28 )
            {
              if ( v30 )
                goto LABEL_51;
              v31 = v12[1];
              v32 = v31;
              v33 = v26 + (v7 & 0xFFFFFFFFFFFFFFFCuLL);
              if ( (int)v31 >= 0 )
              {
                if ( (unsigned __int64)&v62[v31] <= v33 )
                {
                  v18 = &v62[(unsigned int)v31];
                  *(_QWORD *)&String.Length = v18;
                  v154 = v18;
                  goto LABEL_51;
                }
              }
              else
              {
                LODWORD(v31) = v31 & 0x7FFFFFFF;
                if ( (unsigned __int64)&v62[v31] <= v33 )
                {
                  v34 = v32;
                  goto LABEL_50;
                }
              }
            }
            return 3221225595LL;
          }
          v17 = 0LL;
          v149 = 0LL;
          v53 = *v12;
          v123 = *v12;
          v18 = &v62[v12[1]];
          *(_QWORD *)&String.Length = v18;
          if ( (unsigned __int64)v18 > v13 )
            return 3221225595LL;
          v150 = v18;
          v6 = v129;
          LOWORD(CurrentLocale_low) = v116;
          v40 = v53;
          MergedPrefLanguages = v130;
          v42 = -1073741308;
LABEL_66:
          if ( v18 && (v52 & 2) == 0 )
          {
            *(_QWORD *)v127 = v18;
            if ( !NtCurrentTeb()->ResourceRetValue )
            {
              v54 = NtCurrentTeb();
              v54->ResourceRetValue = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
              v18 = *(char **)&String.Length;
              v52 = v118;
            }
            if ( NtCurrentTeb()->ResourceRetValue )
            {
              *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v7;
              *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v18;
              *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v7;
            }
            v42 = 0;
            v121 = 0;
            v117 = 0;
            LODWORD(v55) = v120;
            goto LABEL_73;
          }
          if ( v17 && (v52 & 2) != 0 )
          {
            v56 = v127;
            *(_QWORD *)v127 = v17;
            v42 = 0;
            v121 = 0;
            v117 = 0;
            LODWORD(v55) = v120;
          }
          else
          {
            v55 = v120;
            if ( v120 - (_DWORD)MergedPrefLanguages == 3 )
            {
              v117 = -1073741308;
              if ( v140 )
              {
                v150 = 0LL;
                goto LABEL_88;
              }
LABEL_73:
              v56 = v127;
            }
            else
            {
              v108 = v120 - MergedPrefLanguages - 1;
              if ( v120 - (_DWORD)MergedPrefLanguages == 1 )
              {
                v42 = -1073741686;
                v121 = -1073741686;
                v117 = -1073741686;
                goto LABEL_73;
              }
              v56 = v127;
              if ( v108 == 1 )
              {
                v42 = -1073741685;
                v121 = -1073741685;
                v117 = -1073741685;
              }
              else
              {
                v42 = -1073741811;
                v121 = -1073741811;
                v117 = -1073741811;
              }
            }
          }
          v57 = v131;
          if ( (v52 & 0x2040000) == 0 && v42 + 1073741686 <= 1 && (_DWORD)v55 == 3 )
          {
            v166 = *v131;
            v167 = v131[1];
            v168 = v131[2];
            if ( v6 == 4 )
              v169 = v131[3];
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                              (PVOID)v7,
                                              (__int64)&v166,
                                              v6,
                                              v52 | 0x1000000,
                                              v56);
            v42 = v121;
            LODWORD(v55) = v120;
            v56 = v127;
            if ( ResourceFromAlternativeModule != -1073020927 )
            {
              if ( ResourceFromAlternativeModule != -1073020922 )
                v42 = ResourceFromAlternativeModule;
              v117 = v42;
            }
          }
          if ( v42 + 1073741686 <= 1 && (~v52 & 0xA0010) == 0xA0010 && (_DWORD)v55 == 3 )
          {
            v166 = *v57;
            v167 = v57[1];
            v168 = v57[2];
            if ( v6 == 4 )
              v169 = v57[3];
            v42 = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v166, v6, v52, v56);
            v117 = v42;
          }
          return v42;
        }
        v66 = v120;
        switch ( v120 - v130 )
        {
          case 3u:
            v67 = -1073741308;
            goto LABEL_114;
          case 1u:
            v112 = -1073741686;
            break;
          case 2u:
            v112 = -1073741685;
            break;
          default:
            v68 = -1073741811;
            v117 = -1073741811;
            v103 = v129;
            v104 = v118;
            v105 = v131;
            goto LABEL_238;
        }
        v117 = v112;
        v68 = v112;
        v104 = v118;
        v105 = v131;
        v103 = v129;
        if ( (v118 & 0x2040000) != 0 || v120 != 3 )
        {
LABEL_238:
          v106 = v127;
        }
        else
        {
          v166 = *v131;
          v167 = v131[1];
          v168 = v131[2];
          if ( v129 == 4 )
            v169 = v131[3];
          v106 = v127;
          v113 = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v166, v129, v118 | 0x1000000u, v127);
          v66 = v120;
          if ( v113 != -1073020927 )
          {
            if ( v113 != -1073020922 )
              v68 = v113;
            v117 = v68;
          }
        }
        if ( v68 + 1073741686 <= 1 && (~v104 & 0xA0010) == 0xA0010 && v66 == 3 )
        {
          v166 = *v105;
          v167 = v105[1];
          v168 = v105[2];
          if ( v103 == 4 )
            v169 = v105[3];
          v67 = LdrpLoadResourceFromAlternativeModule((PVOID)v7, (__int64)&v166, v103, v104, v106);
LABEL_114:
          v117 = v67;
          return v67;
        }
        return v68;
      }
      v55 = v120;
LABEL_88:
      v58 = v131;
      v60 = v119;
      v59 = v122;
    }
    LOWORD(CurrentLocale_low) = v40;
    v116 = (unsigned __int16)v40;
    v114[0] = v40;
    if ( (v52 & 0x20) != 0 )
      goto LABEL_85;
    v114[0] = 0;
    if ( (unsigned __int8)LdrpSetThreadPreferredLangList(MergedPrefLanguages, v55, v40, v59)
      && (MergedPrefLanguages = (unsigned __int64)NtCurrentTeb()->MergedPrefLanguages,
          v63 = v146,
          v146 < *(unsigned __int16 *)(MergedPrefLanguages + 4)) )
    {
      GetLCIDFromLangListNodeWithLICCheck(
        MergedPrefLanguages,
        NtCurrentTeb()->MergedPrefLanguages,
        v146,
        (unsigned int)v114,
        (__int64)v125);
      LOWORD(CurrentLocale_low) = v114[0];
      v116 = v114[0];
      if ( v114[0] )
      {
        v146 = v63 + 1;
        v158 = v63 + 1;
LABEL_99:
        v133 = --v38;
LABEL_100:
        v40 = v123;
        goto LABEL_85;
      }
    }
    else
    {
      v114[0] = 0;
    }
LABEL_178:
    v40 = v123;
LABEL_82:
    CurrentLocale_low = (unsigned __int16)v40;
    goto LABEL_83;
  }
  return result;
}
