/*
 * XREFs of LdrpSearchResourceSection_U @ 0x18002E860
 * Callers:
 *     LdrIsResItemExist @ 0x18002C970 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x18002DE20 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlFindMessage @ 0x18002E740 (RtlFindMessage.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlLoadString @ 0x1800AAE90 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x1800D9C50 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800ECF60 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x180111830 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     LdrpGetParentLangId @ 0x180002608 (LdrpGetParentLangId.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpSetThreadPreferredLangList @ 0x180008130 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180009A70 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrRscIsTypeExist @ 0x18002C2A0 (LdrRscIsTypeExist.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002C4C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x18002DC20 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetRcConfig @ 0x18002DE20 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18002E860 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1800318E0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 *     LdrpResGetMappingSize @ 0x1800A7DC0 (LdrpResGetMappingSize.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     wcsncmp @ 0x18012DC80 (wcsncmp.c)
 *     NtQueryDefaultLocale @ 0x18015F1E0 (NtQueryDefaultLocale.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v6; // r12d
  __int64 v7; // r15
  const wchar_t *v8; // rbx
  int v9; // ecx
  char v10; // di
  unsigned __int64 v11; // r10
  __int64 v12; // r9
  int v13; // r14d
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 CurrentLocale_low; // r8
  unsigned int v17; // r11d
  int v18; // ecx
  int v19; // eax
  const wchar_t **v20; // r11
  int v21; // r8d
  __int64 v22; // r12
  unsigned int v23; // ecx
  unsigned int v24; // edx
  __int64 result; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  unsigned int *v28; // r14
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rcx
  unsigned int *v32; // rax
  unsigned __int16 v33; // di
  unsigned int *v34; // rsi
  bool v35; // r8
  char v36; // r15
  __int64 v37; // rdx
  int v38; // ecx
  __int64 v39; // rsi
  bool v40; // r8
  char v41; // di
  __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // edx
  unsigned __int64 v46; // rcx
  __int64 v47; // r10
  unsigned int v48; // eax
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // edi
  unsigned int v52; // eax
  struct _TEB *v53; // rdi
  __int64 v54; // rdx
  unsigned __int64 *v55; // rcx
  const wchar_t **v56; // r13
  const wchar_t **v57; // r13
  unsigned __int16 v58; // r10
  bool v59; // si
  int v60; // eax
  unsigned __int64 v61; // rcx
  __int64 v62; // r13
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned int v64; // esi
  const wchar_t *v65; // rax
  const wchar_t *v66; // rax
  unsigned int v67; // ecx
  unsigned int v68; // eax
  unsigned int v69; // esi
  __int16 v70; // si
  const wchar_t *v71; // rcx
  unsigned int *v72; // rax
  unsigned int *v73; // rdi
  const wchar_t **v74; // r14
  int v75; // eax
  int v76; // r13d
  bool v77; // si
  unsigned __int64 v78; // rdi
  int v79; // eax
  unsigned __int64 v80; // r9
  __int16 v81; // ax
  __int64 v82; // rax
  __int64 v83; // r10
  _DWORD *v84; // rdx
  unsigned int v85; // r11d
  unsigned int v86; // r8d
  unsigned int v87; // ecx
  __int64 v88; // r13
  unsigned __int16 *v89; // r13
  unsigned int v90; // edx
  __int64 v91; // rcx
  __int64 v92; // rdx
  struct _TEB *v93; // rax
  _DWORD *RcConfig; // rax
  __int64 v95; // rcx
  bool v96; // zf
  const wchar_t *v97; // rcx
  size_t v98; // rax
  __int16 v99; // cx
  __int64 v100; // rsi
  unsigned __int16 *v101; // rsi
  unsigned int v102; // edx
  __int64 v103; // rcx
  __int64 v104; // rdx
  unsigned int v105; // ebx
  int v106; // edi
  const wchar_t **v107; // r13
  unsigned __int64 *v108; // r14
  unsigned int ResourceFromAlternativeModule; // eax
  int v110; // eax
  int v111; // eax
  __int64 v112; // r9
  const wchar_t *v113; // rax
  int v114; // eax
  unsigned int v115; // eax
  unsigned __int16 v116[2]; // [rsp+40h] [rbp-1E8h] BYREF
  unsigned int v117; // [rsp+44h] [rbp-1E4h]
  char v118; // [rsp+48h] [rbp-1E0h]
  signed int v119; // [rsp+4Ch] [rbp-1DCh]
  int v120; // [rsp+50h] [rbp-1D8h] BYREF
  bool v121; // [rsp+54h] [rbp-1D4h]
  unsigned int v122; // [rsp+58h] [rbp-1D0h]
  int v123; // [rsp+5Ch] [rbp-1CCh] BYREF
  __int16 v124; // [rsp+60h] [rbp-1C8h]
  __int64 v125; // [rsp+68h] [rbp-1C0h] BYREF
  char v126; // [rsp+70h] [rbp-1B8h]
  bool v127; // [rsp+78h] [rbp-1B0h] BYREF
  unsigned __int16 v128; // [rsp+80h] [rbp-1A8h]
  unsigned __int64 *v129; // [rsp+88h] [rbp-1A0h]
  __int64 v130; // [rsp+90h] [rbp-198h] BYREF
  unsigned int *v131; // [rsp+98h] [rbp-190h] BYREF
  unsigned int v132; // [rsp+A0h] [rbp-188h]
  int v133; // [rsp+A4h] [rbp-184h]
  int v134; // [rsp+A8h] [rbp-180h]
  __int64 v135; // [rsp+B0h] [rbp-178h]
  int v136; // [rsp+B8h] [rbp-170h] BYREF
  bool v137; // [rsp+BCh] [rbp-16Ch]
  int v138; // [rsp+C0h] [rbp-168h]
  int v139; // [rsp+C8h] [rbp-160h]
  __int64 v140; // [rsp+D0h] [rbp-158h]
  unsigned __int64 v141; // [rsp+D8h] [rbp-150h] BYREF
  unsigned __int64 v142; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v143; // [rsp+E8h] [rbp-140h]
  const wchar_t **v144; // [rsp+F0h] [rbp-138h]
  int v145; // [rsp+F8h] [rbp-130h]
  int v146; // [rsp+FCh] [rbp-12Ch] BYREF
  unsigned int v147; // [rsp+100h] [rbp-128h]
  __int128 v148; // [rsp+108h] [rbp-120h] BYREF
  int v149; // [rsp+118h] [rbp-110h] BYREF
  unsigned __int64 v150; // [rsp+120h] [rbp-108h]
  unsigned __int64 v151; // [rsp+128h] [rbp-100h]
  unsigned __int64 v152; // [rsp+130h] [rbp-F8h]
  unsigned int *v153; // [rsp+138h] [rbp-F0h]
  unsigned int *v154; // [rsp+140h] [rbp-E8h]
  __int64 v155; // [rsp+148h] [rbp-E0h]
  unsigned __int64 v156; // [rsp+150h] [rbp-D8h]
  unsigned __int64 v157; // [rsp+158h] [rbp-D0h]
  _DWORD *v158; // [rsp+160h] [rbp-C8h]
  unsigned __int64 v159; // [rsp+168h] [rbp-C0h]
  unsigned int v160; // [rsp+170h] [rbp-B8h]
  int v161; // [rsp+174h] [rbp-B4h]
  unsigned __int64 v162; // [rsp+178h] [rbp-B0h]
  unsigned __int64 v163; // [rsp+180h] [rbp-A8h]
  unsigned int *v164; // [rsp+188h] [rbp-A0h]
  unsigned int *v165; // [rsp+190h] [rbp-98h]
  __int64 *v166; // [rsp+198h] [rbp-90h]
  __int64 v167; // [rsp+1A0h] [rbp-88h]
  const wchar_t *v168; // [rsp+1A8h] [rbp-80h] BYREF
  const wchar_t *v169; // [rsp+1B0h] [rbp-78h]
  const wchar_t *v170; // [rsp+1B8h] [rbp-70h]
  const wchar_t *v171; // [rsp+1C0h] [rbp-68h]
  _QWORD v172[3]; // [rsp+1C8h] [rbp-60h] BYREF

  v120 = a4;
  v6 = a3;
  v132 = a3;
  v144 = (const wchar_t **)a2;
  v7 = a1;
  v155 = a1;
  v129 = a5;
  v8 = 0LL;
  v125 = 0LL;
  v127 = 0;
  v135 = a2;
  v121 = 0;
  v130 = 0LL;
  v147 = 0;
  v146 = 0;
  v136 = 0;
  v149 = 0;
  v148 = 0LL;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = 3;
  if ( a3 != 4 )
    v9 = a3;
  v122 = v9;
  v133 = v9;
  v10 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) != 0 && (unsigned int)(v9 - 1) <= 2 )
  {
    if ( v9 == 3 )
      v70 = *(_WORD *)(a2 + 16);
    else
      v70 = 0;
    v124 = v70;
    v71 = *(const wchar_t **)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && (((unsigned __int64)v71 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp(v71, L"MUI"))
      || (v10 & 8) == 0
      || (v70 & 0xF3FF) != 0
      || v70 == 3072 )
    {
      v120 = 0;
      v142 = 0LL;
      v138 = 0;
      v123 = 0;
      v72 = LdrpGetFromMUIMemCache(v7, 0, 0LL, 8);
      v73 = v72;
      v131 = v72;
      if ( v72 == (unsigned int *)-1LL )
        goto LABEL_277;
      if ( !v72 )
      {
        v172[0] = L"MUI";
        v172[1] = 1LL;
        v172[2] = 0LL;
        v111 = LdrpSearchResourceSection_U(v7, (unsigned int)v172, 3, 33554480, (__int64)&v142);
        v138 = v111;
        if ( v111 < 0 )
        {
          v73 = 0LL;
          v131 = 0LL;
        }
        else
        {
          v111 = LdrpAccessResourceDataNoMultipleLanguage(v7, v142, &v131, &v123);
          v138 = v111;
          if ( v111 < 0 )
          {
            v73 = 0LL;
            v131 = 0LL;
          }
          else
          {
            v73 = v131;
            if ( *v131 == -20054323 )
            {
              v123 = 0;
            }
            else
            {
              v111 = -1073741701;
              v138 = -1073741701;
              v73 = 0LL;
              v131 = 0LL;
            }
          }
        }
        v112 = -1LL;
        if ( v73 )
          v112 = (__int64)v73;
        LdrpSetAlternateResourceModuleHandle(v7, 0LL, 0LL, v112, 0, 2, v111, 0LL);
      }
      if ( !v73 )
      {
LABEL_277:
        v75 = 0x80000;
        v120 = 0x80000;
        v74 = v144;
      }
      else
      {
        v74 = v144;
        if ( (int)LdrRscIsTypeExist(v73, *v144, a4, &v120) < 0 )
        {
          v75 = 393216;
          v120 = 393216;
        }
        else
        {
          v75 = v120;
          if ( (v73[5] & 0x100) != 0 )
          {
            v75 = v120 | 0x100000;
            v120 |= 0x100000u;
          }
          if ( (v73[4] & 0x10) != 0 )
          {
            v75 |= 0x200000u;
            v120 = v75;
          }
        }
      }
      v76 = v75 | a4;
      v120 = v76;
      v139 = v76;
      if ( (v76 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v119 = -1073741686;
        if ( (v76 & 0x20000) == 0 )
        {
          v168 = *v74;
          if ( v122 < 2 )
            v113 = 0LL;
          else
            v113 = v74[1];
          v169 = v113;
          if ( v122 == 3 )
            v8 = v74[2];
          v170 = v8;
          if ( v6 == 4 )
            v171 = v74[3];
          result = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v168, v6, v76, v129);
          v119 = result;
        }
        return result;
      }
    }
    else
    {
      v120 = a4 | 0x10;
      v139 = a4 | 0x10;
    }
  }
  v77 = 1;
  v126 = 1;
  v78 = v7;
  v162 = v7;
  v141 = 0LL;
  v62 = 0LL;
  v143 = 0LL;
  if ( (v7 & 2) != 0 || (v7 & 1) != 0 )
  {
    v77 = (v7 & 1) == 0;
    v126 = v77;
    v78 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
    v162 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v79 = RtlImageNtHeaderEx(1LL, v78, 0LL, &v141);
  v80 = v141;
  if ( v141 )
  {
    v81 = *(_WORD *)(v141 + 24);
    if ( v81 == 267 )
    {
      if ( *(_DWORD *)(v141 + 116) > 2u )
      {
        v83 = *(unsigned int *)(v141 + 136);
        if ( !(_DWORD)v83 )
        {
          v79 = -1073741822;
          goto LABEL_140;
        }
        if ( v77 || (unsigned int)v83 < *(_DWORD *)(v141 + 84) )
        {
          v62 = v78 + v83;
          v143 = v78 + v83;
          v79 = 0;
          goto LABEL_140;
        }
        v145 = 0;
        v158 = 0LL;
        v84 = (_DWORD *)(v141 + *(unsigned __int16 *)(v141 + 20) + 24LL);
        v158 = v84;
        v85 = *(unsigned __int16 *)(v141 + 6);
        v86 = 0;
        v145 = 0;
        while ( v86 < v85 )
        {
          v87 = v84[3];
          if ( (unsigned int)v83 >= v87 && (unsigned int)v83 < v84[4] + v87 )
          {
            if ( v84 )
            {
              v62 = v83 + v78 + (unsigned int)v84[5] - (unsigned __int64)(unsigned int)v84[3];
              goto LABEL_271;
            }
            break;
          }
          v84 += 10;
          v158 = v84;
          v145 = ++v86;
        }
        v62 = 0LL;
        goto LABEL_271;
      }
    }
    else if ( v81 == 523 && *(_DWORD *)(v141 + 132) > 2u )
    {
      v82 = *(unsigned int *)(v141 + 152);
      if ( !(_DWORD)v82 )
      {
        v79 = -1073741822;
        goto LABEL_140;
      }
      if ( v77 || (unsigned int)v82 < *(_DWORD *)(v141 + 84) )
      {
        v62 = v78 + v82;
        v143 = v78 + v82;
        v79 = 0;
        goto LABEL_140;
      }
      v62 = RtlAddressInSectionTable(v141, v78, (unsigned int)v82);
LABEL_271:
      v143 = v62;
      v79 = 0;
      if ( !v62 )
        v79 = -1073741811;
      goto LABEL_140;
    }
    v79 = -1073741811;
  }
LABEL_140:
  if ( v79 < 0 )
    v62 = 0LL;
  v131 = (unsigned int *)v62;
  v143 = v62;
  if ( !v62 )
    return 3221225609LL;
  LOBYTE(v80) = 1;
  result = LdrpResGetMappingSize(v7, &v130, 256LL, v80);
  v119 = result;
  if ( (int)result >= 0 )
  {
    v11 = v62;
    v151 = v62;
    v12 = 61166LL;
    v125 = 61166LL;
    v13 = 0;
    v134 = 0;
    v14 = 0LL;
    v152 = 0LL;
    v15 = 0LL;
    v142 = 0LL;
    v163 = 0LL;
    CurrentLocale_low = 0LL;
    v117 = 0;
    v116[0] = 0;
    v124 = 0;
    v136 = 0;
    v17 = -1073741308;
    v123 = -1073741308;
LABEL_10:
    v18 = v133;
    if ( !v11 || (v19 = v133, v18 = v133 - 1, v133 = v18, v161 = v18, !v19) )
    {
      v51 = v120;
      goto LABEL_67;
    }
    if ( !v18 )
    {
      if ( v122 == 3 )
        v15 = v11;
      v142 = v15;
      v163 = v15;
    }
    if ( !v15 )
    {
      v20 = v144;
      goto LABEL_15;
    }
    CurrentLocale_low = 0LL;
    v117 = 0;
    v116[0] = 0;
    v57 = (const wchar_t **)v135;
    v58 = *(_WORD *)(v135 + 16);
    v124 = v58;
    v59 = (v58 & 0x3FF) == 0;
    v121 = v59;
    v137 = v59;
    v51 = v120;
    v54 = v122;
    while ( 1 )
    {
      v60 = v13++;
      v134 = v13;
      if ( v60 == 6 )
        break;
      if ( !v60 )
      {
        if ( v58 )
        {
          CurrentLocale_low = (unsigned __int16)v12;
          if ( (v51 & 0x80000) != 0 )
            LOWORD(CurrentLocale_low) = v58;
        }
        else
        {
          CurrentLocale_low = 0LL;
        }
LABEL_84:
        v116[0] = CurrentLocale_low;
LABEL_85:
        v117 = CurrentLocale_low;
        goto LABEL_86;
      }
      v61 = 0x180000000uLL;
      switch ( v60 )
      {
        case 1:
          if ( (~v51 & 0xA0010) != 0xA0010 )
            goto LABEL_83;
          v168 = *v57;
          if ( (unsigned int)v54 < 2 )
            v65 = 0LL;
          else
            v65 = v57[1];
          v169 = v65;
          if ( (_DWORD)v54 == 3 )
            v66 = v57[2];
          else
            v66 = 0LL;
          v170 = v66;
          if ( v6 == 4 )
            v171 = v57[3];
          result = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v168, v6, v51, v129);
          v119 = result;
          if ( (int)result >= 0 )
            return result;
          goto LABEL_179;
        case 2:
          CurrentLocale_low = v58;
          if ( v59 )
            LOWORD(CurrentLocale_low) = v12;
          goto LABEL_84;
        case 3:
          if ( (v51 & 4) != 0 )
            return 3221225988LL;
          if ( v59 )
            goto LABEL_83;
          if ( (int)LdrpGetParentLangId(CurrentLocale_low, v116) < 0 )
          {
            CurrentLocale_low = 0LL;
            v116[0] = 0;
            v12 = v125;
            goto LABEL_85;
          }
          CurrentLocale_low = v116[0];
          v117 = v116[0];
          if ( v116[0] )
            goto LABEL_100;
          v12 = v125;
          break;
        case 4:
          if ( v59 )
            goto LABEL_83;
          CurrentLocale_low = v58;
          LOWORD(CurrentLocale_low) = v58 & 0x3FF;
          goto LABEL_84;
        case 5:
          if ( v59 )
            goto LABEL_83;
          return 3221225988LL;
        case 7:
          if ( (~v51 & 0x80000) == 0 )
            goto LABEL_83;
          RcConfig = LdrpGetRcConfig(v7, v54, 0, 1);
          if ( !RcConfig )
            goto LABEL_179;
          if ( *RcConfig != -20054323 )
            goto LABEL_179;
          v95 = (unsigned int)RcConfig[31];
          if ( !(_DWORD)v95 )
            goto LABEL_179;
          v96 = (_DWORD *)((char *)RcConfig + v95) == 0LL;
          v97 = (const wchar_t *)((char *)RcConfig + v95);
          v140 = 0LL;
          *(_QWORD *)&v148 = 0LL;
          *((_QWORD *)&v148 + 1) = v97;
          if ( !v96 )
          {
            v98 = 2 * wcslen(v97);
            v140 = v98;
            v99 = v98;
            if ( v98 >= 0xFFFE )
            {
              LOWORD(v98) = -4;
              v140 = 65532LL;
              v99 = -4;
            }
            LOWORD(v148) = v98;
            WORD1(v148) = v99 + 2;
          }
          if ( !RtlCultureNameToLCID((unsigned __int16 *)&v148, &v146) )
            goto LABEL_179;
          CurrentLocale_low = (unsigned __int16)v146;
          v116[0] = v146;
          v12 = v125;
          goto LABEL_85;
        case 8:
          CurrentLocale_low = (unsigned __int16)v12;
          v117 = (unsigned __int16)v12;
          v116[0] = v12;
          if ( (~v51 & 0x80000) != 0 )
            goto LABEL_93;
          if ( !NtCurrentTeb() )
            goto LABEL_101;
          v93 = NtCurrentTeb();
          CurrentLocale_low = LOWORD(v93->CurrentLocale);
          v116[0] = v93->CurrentLocale;
          v12 = v125;
          goto LABEL_85;
        case 9:
          v117 = (unsigned __int16)v12;
          v116[0] = v12;
          LOBYTE(v61) = 1;
          v119 = NtQueryDefaultLocale(v61, &v136, CurrentLocale_low, v12);
          if ( v119 < 0 )
            goto LABEL_247;
          CurrentLocale_low = (unsigned __int16)v136;
          v116[0] = v136;
          v12 = v125;
          goto LABEL_85;
        case 10:
          v117 = (unsigned __int16)v12;
          v116[0] = v12;
          v119 = NtQueryDefaultLocale(0LL, &v149, CurrentLocale_low, v12);
          if ( v119 >= 0 && v149 != v136 )
          {
            CurrentLocale_low = (unsigned __int16)v149;
            v116[0] = v149;
            v12 = v125;
            goto LABEL_85;
          }
LABEL_247:
          CurrentLocale_low = v117;
          v12 = v125;
          break;
        case 11:
          CurrentLocale_low = 1033LL;
          goto LABEL_84;
        case 12:
LABEL_93:
          v51 |= 0x20u;
          v120 = v51;
          v139 = v51;
          break;
        default:
          return 3221225988LL;
      }
LABEL_86:
      if ( (~(_BYTE)v51 & 0x20) == 0 || (unsigned __int16)CurrentLocale_low != v12 )
      {
        v125 = (unsigned __int16)CurrentLocale_low;
        v20 = (const wchar_t **)&v125;
        v144 = (const wchar_t **)&v125;
        v166 = &v125;
        v15 = v142;
        v11 = v142;
        v151 = v142;
        v62 = (__int64)v131;
LABEL_15:
        v21 = *(unsigned __int16 *)(v11 + 14);
        v22 = *(unsigned __int16 *)(v11 + 12);
        v23 = v21 + v22;
        v24 = -1;
        if ( v21 + (int)v22 >= (unsigned int)v22 )
          v24 = v21 + v22;
        result = v23 < (unsigned int)v22 ? 0xC0000095 : 0;
        v119 = v23 < (unsigned int)v22 ? 0xC0000095 : 0;
        if ( v23 < (unsigned int)v22 )
          return result;
        v26 = 8LL * v24;
        v157 = v26;
        v27 = -1;
        if ( v26 <= 0xFFFFFFFF )
          v27 = v26;
        result = 0LL;
        if ( v26 > 0xFFFFFFFF )
          result = 3221225621LL;
        v119 = result;
        if ( v26 > 0xFFFFFFFF )
          return result;
        v28 = (unsigned int *)(v11 + 16);
        v164 = (unsigned int *)(v11 + 16);
        v159 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
        v29 = (v7 & 0xFFFFFFFFFFFFFFFCuLL) + v130;
        if ( v11 + 16 + v27 > v29 )
          return 3221225595LL;
        v30 = (unsigned __int64)*v20;
        v140 = v30;
        v31 = v30 & 0xFFFFFFFFFFFF0000uLL;
        v157 = v30 & 0xFFFFFFFFFFFF0000uLL;
        if ( (v30 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          v28 += 2 * v22;
          v164 = v28;
          LOWORD(v22) = v21;
        }
        if ( (_WORD)v22 )
        {
          if ( !v15 || (v51 = v120, (v120 & 0x20) == 0) )
          {
            v165 = v28;
            v128 = v22;
            v153 = 0LL;
            v118 = 0;
            v151 = 0LL;
            v152 = 0LL;
            v11 = 0LL;
            v141 = 0LL;
            v150 = 0LL;
            *(_QWORD *)&v148 = 0LL;
            v156 = 0LL;
            v32 = &v28[2 * (unsigned __int16)v22 - 2];
            v154 = v32;
            v33 = v22;
            while ( 1 )
            {
              if ( v28 > v32 )
                goto LABEL_62;
              v33 >>= 1;
              if ( !v33 )
                break;
              v153 = v28;
              v34 = &v28[2 * v33];
              if ( (v22 & 1) == 0 )
                v34 -= 2;
              v153 = v34;
              v35 = v7 && v130;
              v36 = 1;
              v118 = 1;
              v37 = *v34;
              if ( v31 )
              {
                if ( (int)v37 >= 0 )
                {
                  v38 = -1;
                }
                else
                {
                  v88 = *v34;
                  if ( v35 && (v30 = v140, (unsigned __int64)v131 + (v37 & 0xFFFFFFFF7FFFFFFFuLL) > v130 + v159)
                    || (LODWORD(v88) = v37 & 0x7FFFFFFF, v89 = (unsigned __int16 *)((char *)v131 + v88), v35)
                    && ((v167 = 2LL * *v89,
                         v90 = v37 & 0x7FFFFFFF,
                         v91 = v90 + (unsigned int)v167,
                         (unsigned int)v91 < v90)
                     || (unsigned __int64)v131 + v91 > v130 + (v155 & 0xFFFFFFFFFFFFFFFCuLL)) )
                  {
                    v36 = 0;
                    v118 = 0;
                    v38 = -1;
                  }
                  else
                  {
                    v38 = wcsncmp((const wchar_t *)v30, v89 + 1, *v89);
                    v30 = v140;
                    if ( !v38 )
                    {
                      v92 = -1LL;
                      do
                        ++v92;
                      while ( *(_WORD *)(v140 + 2 * v92) );
                      if ( v92 != *v89 )
                        v38 = 1;
                    }
                    v11 = v141;
                  }
                  v62 = (__int64)v131;
                }
              }
              else if ( (int)v37 < 0 )
              {
                v38 = 1;
              }
              else
              {
                v38 = v30 - v37;
              }
              if ( !v36 )
                return 3221225595LL;
              if ( !v38 )
              {
                v48 = v34[1];
                v7 = v155;
                v49 = v130 + (v155 & 0xFFFFFFFFFFFFFFFCuLL);
                v50 = v48;
                if ( (v48 & 0x80000000) == 0 )
                {
                  if ( (unsigned __int64)v48 + v62 <= v49 )
                  {
                    v11 = 0LL;
                    v150 = 0LL;
                    v14 = v48 + v62;
                    v156 = v14;
                    goto LABEL_63;
                  }
                }
                else
                {
                  LODWORD(v50) = v48 & 0x7FFFFFFF;
                  if ( v62 + v50 <= v49 )
                  {
                    v47 = v48;
LABEL_61:
                    LODWORD(v47) = v47 & 0x7FFFFFFF;
                    v11 = v62 + v47;
                    v150 = v11;
LABEL_62:
                    v14 = v148;
LABEL_63:
                    v151 = v11;
                    v152 = v14;
                    v166 = (__int64 *)++v144;
                    v6 = v132;
                    v13 = v134;
                    CurrentLocale_low = v117;
                    v12 = v125;
                    v15 = v142;
                    v17 = -1073741308;
                    goto LABEL_10;
                  }
                }
                return 3221225595LL;
              }
              if ( v38 >= 0 )
              {
                v28 = v34 + 2;
                v165 = v34 + 2;
                v32 = v154;
              }
              else
              {
                v32 = v34 - 2;
                v154 = v34 - 2;
                if ( (v22 & 1) == 0 )
                  --v33;
              }
              LOWORD(v22) = v33;
              v128 = v33;
              v31 = v157;
              v7 = v155;
            }
            if ( !(_WORD)v22 )
              goto LABEL_62;
            v39 = v130;
            v40 = v7 && v130;
            v41 = 1;
            v118 = 1;
            v42 = *v28;
            if ( (v30 & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              if ( (int)v42 >= 0 )
              {
                v43 = -1;
              }
              else
              {
                v100 = *v28;
                if ( v40 && v62 + (v42 & 0xFFFFFFFF7FFFFFFFuLL) > v130 + (v7 & 0xFFFFFFFFFFFFFFFCuLL)
                  || (LODWORD(v100) = v42 & 0x7FFFFFFF, v101 = (unsigned __int16 *)(v62 + v100), v40)
                  && ((v159 = 2LL * *v101,
                       v102 = v42 & 0x7FFFFFFF,
                       v103 = v102 + (unsigned int)v159,
                       (unsigned int)v103 < v102)
                   || v62 + v103 > v130 + (v7 & 0xFFFFFFFFFFFFFFFCuLL)) )
                {
                  v41 = 0;
                  v118 = 0;
                  v43 = -1;
                }
                else
                {
                  v43 = wcsncmp((const wchar_t *)v30, v101 + 1, *v101);
                  if ( !v43 )
                  {
                    v104 = -1LL;
                    do
                      ++v104;
                    while ( *(_WORD *)(v140 + 2 * v104) );
                    if ( v104 != *v101 )
                      v43 = 1;
                  }
                  v11 = v141;
                }
                v39 = v130;
              }
            }
            else if ( (int)v42 < 0 )
            {
              v43 = 1;
            }
            else
            {
              v43 = v30 - v42;
            }
            if ( v41 )
            {
              if ( v43 )
                goto LABEL_62;
              v44 = v28[1];
              v45 = v44;
              v46 = v39 + (v7 & 0xFFFFFFFFFFFFFFFCuLL);
              if ( (int)v44 >= 0 )
              {
                if ( v62 + v44 <= v46 )
                {
                  v14 = (unsigned int)v44 + v62;
                  v156 = v14;
                  goto LABEL_63;
                }
              }
              else
              {
                LODWORD(v44) = v44 & 0x7FFFFFFF;
                if ( v62 + v44 <= v46 )
                {
                  v47 = v45;
                  goto LABEL_61;
                }
              }
            }
            return 3221225595LL;
          }
          v11 = 0LL;
          v151 = 0LL;
          v52 = *v28;
          v125 = *v28;
          v14 = v62 + v28[1];
          if ( v14 > v29 )
            return 3221225595LL;
          v152 = v62 + v28[1];
          v6 = v132;
          v13 = v134;
          CurrentLocale_low = v117;
          v12 = v52;
          v18 = v133;
          v17 = -1073741308;
LABEL_67:
          if ( v14 && (v51 & 2) == 0 )
          {
            *v129 = v14;
            if ( !NtCurrentTeb()->ResourceRetValue )
            {
              v53 = NtCurrentTeb();
              v53->ResourceRetValue = (void *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, 24LL);
              v51 = v120;
            }
            if ( NtCurrentTeb()->ResourceRetValue )
            {
              *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v7;
              *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v14;
              *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v7;
            }
            v17 = 0;
            v123 = 0;
            v119 = 0;
            LODWORD(v54) = v122;
            goto LABEL_74;
          }
          if ( v11 && (v51 & 2) != 0 )
          {
            v55 = v129;
            *v129 = v11;
            v17 = 0;
            v123 = 0;
            v119 = 0;
            LODWORD(v54) = v122;
          }
          else
          {
            v54 = v122;
            if ( v122 - v18 == 3 )
            {
              v119 = -1073741308;
              if ( v142 )
              {
                v152 = 0LL;
                v57 = (const wchar_t **)v135;
                goto LABEL_89;
              }
LABEL_74:
              v55 = v129;
            }
            else
            {
              v110 = v122 - v18 - 1;
              if ( v122 - v18 == 1 )
              {
                v17 = -1073741686;
                v123 = -1073741686;
                v119 = -1073741686;
                goto LABEL_74;
              }
              v55 = v129;
              if ( v110 == 1 )
              {
                v17 = -1073741685;
                v123 = -1073741685;
                v119 = -1073741685;
              }
              else
              {
                v17 = -1073741811;
                v123 = -1073741811;
                v119 = -1073741811;
              }
            }
          }
          v56 = (const wchar_t **)v135;
          if ( (v51 & 0x2040000) == 0 && v17 + 1073741686 <= 1 && (_DWORD)v54 == 3 )
          {
            v168 = *(const wchar_t **)v135;
            v169 = *(const wchar_t **)(v135 + 8);
            v170 = *(const wchar_t **)(v135 + 16);
            if ( v6 == 4 )
              v171 = *(const wchar_t **)(v135 + 24);
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                              v7,
                                              (__int64)&v168,
                                              v6,
                                              v51 | 0x1000000u,
                                              v55);
            v17 = v123;
            LODWORD(v54) = v122;
            v55 = v129;
            if ( ResourceFromAlternativeModule != -1073020927 )
            {
              if ( ResourceFromAlternativeModule != -1073020922 )
                v17 = ResourceFromAlternativeModule;
              v119 = v17;
            }
          }
          if ( v17 + 1073741686 <= 1 && (~v51 & 0xA0010) == 0xA0010 && (_DWORD)v54 == 3 )
          {
            v168 = *v56;
            v169 = v56[1];
            v170 = v56[2];
            if ( v6 == 4 )
              v171 = v56[3];
            v17 = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v168, v6, v51, v55);
            v119 = v17;
          }
          return v17;
        }
        v67 = v122;
        switch ( v122 - v133 )
        {
          case 3u:
            v68 = -1073741308;
            goto LABEL_115;
          case 1u:
            v114 = -1073741686;
            break;
          case 2u:
            v114 = -1073741685;
            break;
          default:
            v69 = -1073741811;
            v119 = -1073741811;
            v105 = v132;
            v106 = v120;
            v107 = (const wchar_t **)v135;
            goto LABEL_239;
        }
        v119 = v114;
        v69 = v114;
        v106 = v120;
        v107 = (const wchar_t **)v135;
        v105 = v132;
        if ( (v120 & 0x2040000) != 0 || v122 != 3 )
        {
LABEL_239:
          v108 = v129;
        }
        else
        {
          v168 = *(const wchar_t **)v135;
          v169 = *(const wchar_t **)(v135 + 8);
          v170 = *(const wchar_t **)(v135 + 16);
          if ( v132 == 4 )
            v171 = *(const wchar_t **)(v135 + 24);
          v108 = v129;
          v115 = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v168, v132, v120 | 0x1000000u, v129);
          v67 = v122;
          if ( v115 != -1073020927 )
          {
            if ( v115 != -1073020922 )
              v69 = v115;
            v119 = v69;
          }
        }
        if ( v69 + 1073741686 <= 1 && (~v106 & 0xA0010) == 0xA0010 && v67 == 3 )
        {
          v168 = *v107;
          v169 = v107[1];
          v170 = v107[2];
          if ( v105 == 4 )
            v171 = v107[3];
          v68 = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v168, v105, v106, v108);
LABEL_115:
          v119 = v68;
          return v68;
        }
        return v69;
      }
      v54 = v122;
LABEL_89:
      v59 = v121;
      v58 = v124;
    }
    CurrentLocale_low = (unsigned __int16)v12;
    v117 = (unsigned __int16)v12;
    v116[0] = v12;
    if ( (v51 & 0x20) != 0 )
      goto LABEL_86;
    v116[0] = 0;
    if ( LdrpSetThreadPreferredLangList()
      && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
          v64 = v147,
          v147 < MergedPrefLanguages[2]) )
    {
      GetLCIDFromLangListNodeWithLICCheck(
        (__int64)MergedPrefLanguages,
        (__int64)NtCurrentTeb()->MergedPrefLanguages,
        v147,
        v116,
        &v127);
      CurrentLocale_low = v116[0];
      v117 = v116[0];
      if ( v116[0] )
      {
        v147 = v64 + 1;
        v160 = v64 + 1;
LABEL_100:
        v134 = --v13;
LABEL_101:
        v12 = v125;
        goto LABEL_86;
      }
    }
    else
    {
      v116[0] = 0;
    }
LABEL_179:
    v12 = v125;
LABEL_83:
    CurrentLocale_low = (unsigned __int16)v12;
    goto LABEL_84;
  }
  return result;
}
