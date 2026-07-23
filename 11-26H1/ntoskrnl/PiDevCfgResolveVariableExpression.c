/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x140A48420
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     PnpMultiSzContainsString @ 0x1404F40FC (PnpMultiSzContainsString.c)
 *     PnpStringToDwordValue @ 0x1404F4A2C (PnpStringToDwordValue.c)
 *     PnpValidateRegistryMultiSz @ 0x1405006FC (PnpValidateRegistryMultiSz.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PiDevCfgCopyVariableData @ 0x1407AC3FC (PiDevCfgCopyVariableData.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // r14
  int RegistryValue; // ebx
  __int64 v6; // r10
  UNICODE_STRING *v7; // r12
  UNICODE_STRING *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 *v11; // r15
  int v12; // edi
  unsigned int i; // edx
  __int64 *v14; // r10
  unsigned int v15; // edx
  unsigned int v16; // r11d
  __int64 v17; // rcx
  unsigned __int16 v18; // r12
  __int64 v19; // r15
  wchar_t *v20; // r13
  int v21; // ecx
  _WORD *v22; // rdx
  int v23; // ecx
  __int64 *v24; // r14
  int v25; // ecx
  __int64 v26; // rax
  unsigned int v27; // ebx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  wchar_t *Pool2; // rax
  __int64 v32; // rdi
  unsigned __int16 v33; // di
  _WORD *v34; // r9
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  __int64 *v38; // rbx
  __int64 *v39; // r13
  int v40; // ecx
  unsigned __int64 v41; // r12
  _WORD *v42; // r8
  WCHAR *v43; // r14
  size_t v44; // rsi
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // eax
  __int64 v51; // rax
  unsigned int v52; // esi
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rax
  wchar_t *v55; // rax
  wchar_t *v56; // r13
  char *v57; // rdx
  size_t v58; // r8
  char *v59; // rcx
  BOOL v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  unsigned int v65; // eax
  LONG v66; // eax
  int v67; // edx
  _WORD *v68; // rsi
  unsigned int v69; // r14d
  int v70; // ecx
  __int64 v71; // r14
  wchar_t *v72; // rax
  unsigned __int64 v73; // rsi
  void *v74; // r12
  void *v75; // rdx
  size_t v76; // r14
  wchar_t *v77; // r13
  wchar_t *v78; // rax
  __int64 v79; // rbx
  unsigned __int64 v80; // r12
  wchar_t *v81; // rax
  unsigned int v82; // r9d
  int v83; // ecx
  unsigned int v84; // r8d
  int v85; // ecx
  int v86; // ecx
  int v87; // ecx
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  int v91; // ecx
  int v92; // ecx
  int v93; // r8d
  unsigned int v94; // r9d
  int v95; // eax
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  int v103; // edx
  int v104; // r8d
  __int64 *v105; // rsi
  int v106; // eax
  size_t v107; // r12
  void *v108; // r8
  wchar_t *v109; // r13
  size_t v110; // r14
  wchar_t *v111; // rax
  wchar_t *v112; // rdx
  __int16 v113; // r8
  const WCHAR *v114; // r13
  unsigned __int16 v115; // r14
  _WORD *v116; // r12
  __int16 v117; // dx
  unsigned int v118; // eax
  BOOL v119; // ecx
  __int64 v120; // rsi
  __int16 v121; // r8
  wchar_t *v122; // rax
  const WCHAR *v123; // rdx
  bool v124; // zf
  bool v125; // al
  __int64 v126; // rax
  int v127; // esi
  int v128; // edi
  _BYTE *v129; // r8
  int j; // edx
  wchar_t *v132; // rax
  __int128 *v133; // rsi
  __int64 v134; // r14
  _QWORD *v135; // rdi
  void *v136; // rcx
  __int64 v137; // rax
  int v138; // eax
  unsigned int v139; // eax
  __int128 *v140; // rdi
  __int64 v141; // r14
  _QWORD *v142; // rsi
  void *v143; // rcx
  PVOID *v144; // rdi
  __int64 v145; // rsi
  void *v146; // rcx
  unsigned __int16 v148; // [rsp+30h] [rbp-69h]
  int v149; // [rsp+30h] [rbp-69h]
  unsigned __int16 v150; // [rsp+38h] [rbp-61h]
  unsigned int v151; // [rsp+40h] [rbp-59h]
  wchar_t *v152; // [rsp+48h] [rbp-51h]
  unsigned int v153; // [rsp+58h] [rbp-41h]
  void *Src; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING *v155; // [rsp+68h] [rbp-31h] BYREF
  PVOID P; // [rsp+70h] [rbp-29h]
  unsigned int v157; // [rsp+78h] [rbp-21h]
  __int64 v158; // [rsp+80h] [rbp-19h]
  PVOID v159; // [rsp+88h] [rbp-11h] BYREF
  void *v160; // [rsp+90h] [rbp-9h]
  __int64 v161; // [rsp+98h] [rbp-1h]
  __int128 v162; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v163; // [rsp+B0h] [rbp+17h]

  v158 = a1;
  v161 = a3;
  v159 = 0LL;
  v3 = 0;
  v153 = 0;
  LODWORD(v4) = 0;
  v163 = 0LL;
  v162 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &v159);
  if ( RegistryValue < 0 )
    goto LABEL_363;
  if ( !PnpValidateRegistryMultiSz(v159) )
    goto LABEL_362;
  v7 = (UNICODE_STRING *)(v6 + *(unsigned int *)(v6 + 8));
  v155 = v7;
  v8 = v7;
  if ( !v7->Length )
    goto LABEL_362;
  do
  {
    ++v3;
    v9 = -1LL;
    do
      ++v9;
    while ( *(&v8->Length + v9) );
    v8 = (UNICODE_STRING *)((char *)v8 + 2 * v9 + 2);
  }
  while ( v8->Length );
  v10 = v158;
  v157 = v3;
  if ( !v3 )
  {
LABEL_362:
    RegistryValue = -1073741823;
    goto LABEL_363;
  }
  P = (PVOID)ExAllocatePool2(0x100uLL);
  v11 = (__int64 *)P;
  if ( !P )
  {
    RegistryValue = -1073741670;
    goto LABEL_363;
  }
  while ( 1 )
  {
    v12 = RegistryValue;
    if ( !v7->Length )
    {
      if ( RegistryValue < 0 )
        goto LABEL_351;
      if ( (_DWORD)v4 != 1 )
        goto LABEL_349;
      RegistryValue = PiDevCfgCopyVariableData(v161, *v11);
      goto LABEL_352;
    }
    if ( v7->MaximumLength && *(&v7->MaximumLength + 1) )
      goto LABEL_329;
    for ( i = 1; ; ++i )
    {
      if ( i >= 0x1B )
        goto LABEL_329;
      if ( *(_DWORD *)&v7->Length == *(_DWORD *)qword_140BE5C50[3 * i + 1] )
        break;
    }
    v14 = &qword_140BE5C50[3 * i];
    if ( !v14 )
    {
LABEL_329:
      if ( (unsigned int)v4 >= v3 )
      {
        RegistryValue = -1073741571;
      }
      else
      {
        v155 = 0LL;
        v138 = PiDevCfgResolveVariable(v10, &v7->Length, &v155);
        RegistryValue = v138;
        if ( v138 >= 0 )
        {
          v11[(unsigned int)v4] = (__int64)v155;
          goto LABEL_326;
        }
        if ( v138 == -1073741772 )
LABEL_349:
          RegistryValue = -1073741823;
      }
LABEL_351:
      if ( (_DWORD)v4 )
      {
LABEL_352:
        v144 = (PVOID *)v11;
        v145 = (unsigned int)v4;
        do
        {
          if ( !*((_QWORD *)*v144 + 3) )
          {
            v146 = (void *)*((_QWORD *)*v144 + 5);
            if ( v146 )
              ExFreePoolWithTag(v146, 0);
            ExFreePoolWithTag(*v144, 0);
          }
          ++v144;
          --v145;
        }
        while ( v145 );
      }
      ExFreePoolWithTag(v11, 0);
      goto LABEL_363;
    }
    v15 = *((_DWORD *)v14 + 4);
    v16 = 0;
    v151 = 0;
    while ( v16 < v15 )
    {
      if ( !(_DWORD)v4 )
      {
        RegistryValue = -1073741823;
        goto LABEL_339;
      }
      v4 = (unsigned int)(v4 - 1);
      v17 = v16++;
      v153 = v4;
      v151 = v16;
      *((_QWORD *)&v162 + v17) = v11[v4];
    }
    if ( RegistryValue < 0 )
      goto LABEL_339;
    LODWORD(Src) = 0;
    v18 = 0;
    v148 = 0;
    LODWORD(v19) = 0;
    v150 = 0;
    v20 = 0LL;
    v152 = 0LL;
    if ( v16 == 1 )
    {
      v21 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 == 22 )
      {
        if ( !*(_DWORD *)(v162 + 32) )
          goto LABEL_302;
        LODWORD(v19) = 1;
        goto LABEL_54;
      }
      if ( *(_DWORD *)v14 == 23 )
      {
        LODWORD(v19) = *(_DWORD *)(v162 + 32) == 0;
        goto LABEL_302;
      }
      if ( *(_DWORD *)(v162 + 32) == 1 || *(_DWORD *)(v162 + 32) == 2 )
      {
        v34 = *(_WORD **)(v162 + 40);
        v35 = v21 - 11;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 13;
            if ( v37 )
            {
              if ( v37 == 1 )
                v24 = (__int64 *)v162;
              else
                v24 = qword_140BDFB50;
            }
            else
            {
              v24 = 0LL;
              if ( PnpStringToDwordValue(*(_QWORD *)(v162 + 40), (unsigned int *)&Src) )
                LODWORD(v19) = (_DWORD)Src;
              else
                LODWORD(v19) = 0;
            }
            goto LABEL_301;
          }
          LODWORD(v19) = *v34 == 0;
        }
        else
        {
          v19 = -1LL;
          do
            ++v19;
          while ( v34[v19] );
        }
        v24 = 0LL;
        goto LABEL_301;
      }
      if ( *(_DWORD *)(v162 + 32) == 4 )
      {
        v27 = **(_DWORD **)(v162 + 40);
        v28 = v21 - 11;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( !v29 )
          {
            LOBYTE(v19) = v27 == 0;
            goto LABEL_51;
          }
          v30 = v29 - 13;
          if ( !v30 )
          {
            LODWORD(v19) = **(_DWORD **)(v162 + 40);
            goto LABEL_51;
          }
          if ( v30 == 1 )
          {
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v20 = Pool2;
            if ( !Pool2 )
              goto LABEL_334;
            RegistryValue = RtlStringCchPrintfW(Pool2, 0xBuLL, L"%u", v27);
            if ( RegistryValue < 0 )
            {
              ExFreePoolWithTag(v20, 0);
              v139 = v151;
              goto LABEL_340;
            }
            v32 = -1LL;
            do
              ++v32;
            while ( v20[v32] );
            v18 = 2 * v32;
            v33 = 2 * v32 + 2;
            v150 = v33;
            goto LABEL_303;
          }
LABEL_44:
          v24 = qword_140BDFB50;
          RegistryValue = v12;
          goto LABEL_318;
        }
        RegistryValue = v12;
        LODWORD(v19) = ~**(_DWORD **)(v162 + 40);
LABEL_54:
        v24 = 0LL;
        goto LABEL_301;
      }
      if ( *(_DWORD *)(v162 + 32) != 7 )
        goto LABEL_32;
      v22 = *(_WORD **)(v162 + 40);
      v23 = v21 - 11;
      if ( v23 )
      {
        if ( v23 == 1 )
        {
          LOBYTE(v19) = *v22 == 0;
          goto LABEL_302;
        }
LABEL_32:
        v24 = qword_140BDFB50;
        goto LABEL_318;
      }
      if ( !*v22 )
        goto LABEL_302;
      v25 = 1;
      do
      {
        LODWORD(v19) = v25;
        v26 = -1LL;
        do
          ++v26;
        while ( v22[v26] );
        ++v25;
        v22 += v26 + 1;
      }
      while ( *v22 );
LABEL_39:
      v24 = 0LL;
      goto LABEL_106;
    }
    if ( v16 != 2 )
    {
      if ( v16 != 3 )
        goto LABEL_302;
      switch ( *(_DWORD *)(v163 + 32) )
      {
        case 1:
        case 2:
          if ( *(_DWORD *)(v163 + 36) >= 2u )
            goto LABEL_300;
          goto LABEL_313;
        case 3:
          v129 = *(_BYTE **)(v163 + 40);
          for ( j = *(_DWORD *)(v163 + 36); j; --j )
          {
            if ( *v129++ )
              goto LABEL_300;
          }
          goto LABEL_313;
        case 4:
          v124 = **(_DWORD **)(v163 + 40) == 0;
          break;
        case 7:
          v125 = *(_DWORD *)(v163 + 36) > 4u;
          goto LABEL_299;
        default:
          v124 = *(_DWORD *)(v163 + 32) == 0;
          break;
      }
      v125 = !v124;
LABEL_299:
      if ( v125 )
      {
LABEL_300:
        v24 = (__int64 *)*((_QWORD *)&v162 + 1);
        goto LABEL_301;
      }
LABEL_313:
      v24 = (__int64 *)v162;
      goto LABEL_301;
    }
    v38 = (__int64 *)*((_QWORD *)&v162 + 1);
    if ( *(_DWORD *)(*((_QWORD *)&v162 + 1) + 32LL) == 1 || *(_DWORD *)(*((_QWORD *)&v162 + 1) + 32LL) == 2 )
      break;
    if ( *(_DWORD *)(*((_QWORD *)&v162 + 1) + 32LL) == 3 )
    {
      if ( *(_DWORD *)(v162 + 32) != 3 )
      {
LABEL_223:
        v24 = qword_140BDFB50;
        goto LABEL_224;
      }
      v103 = *(_DWORD *)(*((_QWORD *)&v162 + 1) + 36LL);
      v104 = *(_DWORD *)(v162 + 36);
      if ( *(_DWORD *)v14 == 15 )
      {
        if ( v103 == v104
          && !memcmp(
                *(const void **)(*((_QWORD *)&v162 + 1) + 40LL),
                *(const void **)(v162 + 40),
                *(unsigned int *)(*((_QWORD *)&v162 + 1) + 36LL)) )
        {
LABEL_231:
          LODWORD(v19) = 1;
LABEL_233:
          v24 = 0LL;
          goto LABEL_224;
        }
      }
      else
      {
        if ( *(_DWORD *)v14 != 16 )
          goto LABEL_223;
        if ( v103 != v104
          || memcmp(
               *(const void **)(*((_QWORD *)&v162 + 1) + 40LL),
               *(const void **)(v162 + 40),
               *(unsigned int *)(*((_QWORD *)&v162 + 1) + 36LL)) )
        {
          goto LABEL_231;
        }
      }
      LODWORD(v19) = 0;
      goto LABEL_233;
    }
    if ( *(_DWORD *)(*((_QWORD *)&v162 + 1) + 32LL) != 4 )
    {
      if ( *(_DWORD *)(*((_QWORD *)&v162 + 1) + 32LL) == 7 )
      {
        v39 = (__int64 *)v162;
        v40 = *(_DWORD *)(v162 + 32);
        if ( v40 == 7 )
        {
          v41 = *(unsigned int *)(*((_QWORD *)&v162 + 1) + 36LL);
          v42 = *(_WORD **)(v162 + 40);
          v43 = *(WCHAR **)(*((_QWORD *)&v162 + 1) + 40LL);
          v44 = *(unsigned int *)(v162 + 36);
          Src = v42;
          if ( (unsigned int)v41 > 0xFFFE || (unsigned int)v44 > 0xFFFE )
            goto LABEL_336;
          v45 = *(_DWORD *)v14;
          if ( *(int *)v14 > 15 )
          {
            v61 = v45 - 16;
            if ( !v61 )
            {
              v66 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v44 >> 1, 1u);
              v24 = 0LL;
              v20 = 0LL;
              LODWORD(v19) = v66 != 0;
              goto LABEL_157;
            }
            v62 = v61 - 1;
            if ( !v62 )
            {
              v65 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v44 >> 1, 1u);
LABEL_128:
              LODWORD(v19) = v65 >> 31;
LABEL_121:
              v20 = 0LL;
              goto LABEL_91;
            }
            v63 = v62 - 1;
            if ( !v63 )
            {
              v60 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v44 >> 1, 1u) > 0;
              goto LABEL_120;
            }
            v64 = v63 - 1;
            if ( !v64 )
            {
              v60 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v44 >> 1, 1u) <= 0;
              goto LABEL_120;
            }
            if ( v64 == 1 )
            {
              v65 = ~RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v44 >> 1, 1u);
              goto LABEL_128;
            }
          }
          else
          {
            if ( v45 == 15 )
            {
              v60 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v44 >> 1, 1u) == 0;
LABEL_120:
              LODWORD(v19) = v60;
              goto LABEL_121;
            }
            v46 = v45 - 1;
            if ( !v46 )
              goto LABEL_110;
            v47 = v46 - 7;
            if ( !v47 )
            {
              LOWORD(v50) = 0;
              RegistryValue = v12;
              v149 = 0;
              v20 = 0LL;
              while ( *v43 )
              {
                v51 = -1LL;
                do
                  ++v51;
                while ( v43[v51] );
                v52 = 2 * v51 + 2;
                if ( PnpMultiSzContainsString(v42, v43) )
                {
                  if ( !v20 )
                  {
                    LOWORD(v149) = 0;
                    v20 = (wchar_t *)ExAllocatePool2(0x100uLL);
                    if ( !v20 )
                    {
                      v18 = 0;
                      RegistryValue = -1073741670;
                      goto LABEL_105;
                    }
                  }
                  v53 = v52;
                  memmove((char *)v20 + (unsigned __int16)v149, v43, v52);
                  HIWORD(v50) = HIWORD(v149);
                  LOWORD(v50) = v52 + v149;
                  v149 = v50;
                }
                else
                {
                  LOWORD(v50) = v149;
                  v53 = v52;
                }
                v42 = Src;
                v43 += v53 >> 1;
              }
              v18 = v50;
              if ( v20 )
              {
                v54 = (unsigned __int16)(v50 + 2);
                v18 = v54;
                v150 = v54;
                v20[(v54 >> 1) - 1] = 0;
              }
LABEL_105:
              v24 = 0LL;
              goto LABEL_106;
            }
            v48 = v47 - 1;
            if ( !v48 )
            {
LABEL_110:
              if ( *v43 )
              {
                if ( !*v42 )
                  goto LABEL_113;
                if ( (unsigned __int64)(unsigned int)(v44 + v41) - 2 > 0xFFFE )
                  goto LABEL_336;
                v150 = v44 + v41 - 2;
                v55 = (wchar_t *)ExAllocatePool2(0x100uLL);
                v152 = v55;
                v56 = v55;
                if ( !v55 )
                  goto LABEL_334;
                memmove(v55, v43, v41 - 2);
                v57 = (char *)Src;
                v58 = v44;
                v59 = (char *)&v56[(v41 >> 1) - 1];
LABEL_117:
                memmove(v59, v57, v58);
                v24 = 0LL;
              }
              else
              {
                v24 = (__int64 *)v162;
              }
              goto LABEL_118;
            }
            v49 = v48 - 4;
            if ( !v49 )
            {
              if ( (unsigned int)v41 > 2 )
              {
LABEL_88:
                if ( (unsigned int)v44 > 2 )
                  goto LABEL_89;
              }
LABEL_90:
              v20 = 0LL;
LABEL_91:
              v18 = 0;
              RegistryValue = v12;
LABEL_302:
              v33 = v150;
LABEL_303:
              v126 = ExAllocatePool2(0x100uLL);
              v24 = (__int64 *)v126;
              if ( !v126 )
                goto LABEL_337;
              *(_DWORD *)(v126 + 16) = 0;
              *(_QWORD *)(v126 + 24) = 0LL;
              if ( v20 )
              {
                v127 = v33;
                v128 = 7;
                if ( v18 != v150 )
                  v128 = 1;
              }
              else
              {
                v128 = 4;
                v127 = 4;
                v132 = (wchar_t *)ExAllocatePool2(0x100uLL);
                v20 = v132;
                if ( !v132 )
                {
LABEL_337:
                  RegistryValue = -1073741670;
LABEL_338:
                  LODWORD(v4) = v153;
                  v11 = (__int64 *)P;
LABEL_339:
                  v139 = v151;
                  if ( v151 )
                    goto LABEL_340;
                  goto LABEL_351;
                }
                *(_DWORD *)v132 = v19;
              }
              *((_DWORD *)v24 + 8) = v128;
              *((_DWORD *)v24 + 9) = v127;
              v24[5] = (__int64)v20;
LABEL_317:
              v16 = v151;
              goto LABEL_318;
            }
            if ( v49 == 1 )
            {
              if ( (unsigned int)v41 <= 2 )
                goto LABEL_88;
LABEL_89:
              LODWORD(v19) = 1;
              goto LABEL_90;
            }
          }
        }
        else if ( (unsigned int)(v40 - 1) <= 1 )
        {
          v73 = *(unsigned int *)(*((_QWORD *)&v162 + 1) + 36LL);
          v74 = *(void **)(*((_QWORD *)&v162 + 1) + 40LL);
          v75 = *(void **)(v162 + 40);
          v76 = *(unsigned int *)(v162 + 36);
          Src = v74;
          v160 = v75;
          if ( (unsigned int)v73 > 0xFFFE || (unsigned int)v76 > 0xFFFE )
            goto LABEL_336;
          switch ( *(_DWORD *)v14 )
          {
            case 1:
              goto LABEL_166;
            case 2:
              v77 = PnpMultiSzContainsString((wchar_t *)v74, (wchar_t *)v75);
              if ( v77 )
              {
                v150 = v73 - v76;
                v78 = (wchar_t *)ExAllocatePool2(0x100uLL);
                v152 = v78;
                if ( !v78 )
                  goto LABEL_334;
                v79 = ((char *)v77 - (_BYTE *)v74) >> 1;
                if ( v79 > 0 )
                {
                  memmove(v78, v74, ((char *)v77 - (_BYTE *)v74) >> 1);
                  v78 = v152;
                }
                v57 = (char *)v77 + v76;
                v59 = (char *)v78 + v79;
                v58 = (unsigned int)(v73 - v76) - v79;
                goto LABEL_117;
              }
LABEL_113:
              v24 = v38;
LABEL_118:
              v18 = v150;
              RegistryValue = v12;
              v20 = v152;
              goto LABEL_301;
            case 8:
              v24 = 0LL;
              if ( PnpMultiSzContainsString((wchar_t *)v74, (wchar_t *)v75) )
                v24 = v39;
LABEL_156:
              v20 = 0LL;
              goto LABEL_157;
            case 9:
              if ( PnpMultiSzContainsString((wchar_t *)v74, (wchar_t *)v75) )
              {
                v24 = v38;
                goto LABEL_156;
              }
LABEL_166:
              if ( (unsigned int)(v76 + v73) > 0xFFFE )
                goto LABEL_336;
              v80 = (unsigned __int16)(v76 + v73);
              v148 = v76 + v73;
              v150 = v76 + v73;
              v81 = (wchar_t *)ExAllocatePool2(0x100uLL);
              v20 = v81;
              if ( !v81 )
                goto LABEL_334;
              memmove(v81, Src, v73 - 2);
              memmove(&v20[(v73 >> 1) - 1], v160, v76);
              v24 = 0LL;
              v20[(v80 >> 1) - 1] = 0;
LABEL_157:
              v18 = v148;
              RegistryValue = v12;
              goto LABEL_301;
          }
        }
        else if ( v40 == 4 )
        {
          v67 = **(_DWORD **)(v162 + 40);
          if ( *(_DWORD *)v14 == 24 )
          {
            v68 = *(_WORD **)(*((_QWORD *)&v162 + 1) + 40LL);
            v69 = 0;
            RegistryValue = v12;
            v70 = 0;
            while ( *v68 )
            {
              v71 = -1LL;
              do
                ++v71;
              while ( v68[v71] );
              v69 = 2 * v71 + 2;
              if ( v70 == v67 )
                goto LABEL_143;
              ++v70;
              v68 += (unsigned __int64)v69 >> 1;
            }
            if ( v70 != v67 )
            {
LABEL_147:
              v24 = qword_140BDFB50;
              v20 = 0LL;
              goto LABEL_106;
            }
LABEL_143:
            if ( !*v68 || v69 <= 2 )
              goto LABEL_147;
            v150 = v69;
            v18 = v69 - 16;
            v72 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v20 = v72;
            if ( !v72 )
              goto LABEL_334;
            memmove(v72, v68, v69);
            goto LABEL_105;
          }
        }
      }
      goto LABEL_44;
    }
    if ( *(_DWORD *)(v162 + 32) != 4 )
      goto LABEL_223;
    v82 = **(_DWORD **)(*((_QWORD *)&v162 + 1) + 40LL);
    v83 = *(_DWORD *)v14;
    v84 = **(_DWORD **)(v162 + 40);
    if ( *(int *)v14 > 10 )
    {
      v96 = v83 - 13;
      if ( !v96 )
      {
        LODWORD(v19) = v82 && v84;
        RegistryValue = v12;
        v24 = 0LL;
        goto LABEL_301;
      }
      v97 = v96 - 1;
      if ( !v97 )
      {
        if ( v82 || (LODWORD(v19) = 0, v84) )
          LODWORD(v19) = 1;
        goto LABEL_51;
      }
      v98 = v97 - 1;
      if ( !v98 )
      {
        v95 = v82 == v84;
LABEL_191:
        LODWORD(v19) = v95;
        goto LABEL_51;
      }
      v99 = v98 - 1;
      if ( !v99 )
      {
        v95 = v82 != v84;
        goto LABEL_191;
      }
      v100 = v99 - 1;
      if ( !v100 )
      {
        v95 = v82 < v84;
        goto LABEL_191;
      }
      v101 = v100 - 1;
      if ( !v101 )
      {
        v95 = v82 > v84;
        goto LABEL_191;
      }
      v102 = v101 - 1;
      if ( !v102 )
      {
        v95 = v82 <= v84;
        goto LABEL_191;
      }
      if ( v102 == 1 )
      {
        v95 = v82 >= v84;
        goto LABEL_191;
      }
    }
    else
    {
      if ( v83 == 10 )
      {
        v93 = v82 ^ v84;
        goto LABEL_182;
      }
      v85 = v83 - 1;
      if ( !v85 )
      {
        LODWORD(v19) = v84 + v82;
        goto LABEL_51;
      }
      v86 = v85 - 1;
      if ( !v86 )
      {
        v94 = v82 - v84;
LABEL_185:
        LODWORD(v19) = v94;
LABEL_51:
        RegistryValue = v12;
        goto LABEL_302;
      }
      v87 = v86 - 1;
      if ( !v87 )
      {
        v93 = v82 * v84;
LABEL_182:
        LODWORD(v19) = v93;
        goto LABEL_51;
      }
      v88 = v87 - 1;
      if ( !v88 )
      {
        if ( v84 )
        {
          v95 = v82 / v84;
          goto LABEL_191;
        }
        goto LABEL_192;
      }
      v89 = v88 - 1;
      if ( !v89 )
      {
        if ( v84 )
        {
          LODWORD(v19) = v82 % v84;
          goto LABEL_51;
        }
LABEL_192:
        RegistryValue = -1073741676;
        v24 = 0LL;
LABEL_106:
        if ( RegistryValue < 0 )
          goto LABEL_338;
LABEL_301:
        if ( !v24 )
          goto LABEL_302;
        goto LABEL_317;
      }
      v90 = v89 - 1;
      if ( !v90 )
      {
        v94 = v82 << v84;
        goto LABEL_185;
      }
      v91 = v90 - 1;
      if ( !v91 )
      {
        v94 = v82 >> v84;
        goto LABEL_185;
      }
      v92 = v91 - 1;
      if ( !v92 )
      {
        v93 = v82 & v84;
        goto LABEL_182;
      }
      if ( v92 == 1 )
      {
        v93 = v82 | v84;
        goto LABEL_182;
      }
    }
    v24 = qword_140BDFB50;
    RegistryValue = v12;
LABEL_318:
    v11 = (__int64 *)P;
    *((_QWORD *)P + v153) = v24;
    if ( v16 )
    {
      v133 = &v162;
      v134 = v16;
      do
      {
        v135 = *(_QWORD **)v133;
        if ( !*(_QWORD *)(*(_QWORD *)v133 + 24LL) )
        {
          v136 = (void *)v135[5];
          if ( v136 )
            ExFreePoolWithTag(v136, 0);
          ExFreePoolWithTag(v135, 0);
        }
        v133 = (__int128 *)((char *)v133 + 8);
        --v134;
      }
      while ( v134 );
    }
    v10 = v158;
    v7 = v155;
    LODWORD(v4) = v153;
LABEL_326:
    LODWORD(v4) = v4 + 1;
    v153 = v4;
    v137 = -1LL;
    do
      ++v137;
    while ( *(&v7->Length + v137) );
    v3 = v157;
    v7 = (UNICODE_STRING *)((char *)v7 + 2 * v137 + 2);
    v155 = v7;
  }
  v105 = (__int64 *)v162;
  v106 = *(_DWORD *)(v162 + 32);
  if ( v106 == 1 || v106 == 2 )
  {
    if ( *(_DWORD *)(*((_QWORD *)&v162 + 1) + 36LL) > 0xFFFEu || *(_DWORD *)(v162 + 36) > 0xFFFEu )
    {
      RegistryValue = -2147483643;
      goto LABEL_39;
    }
    v113 = *(_WORD *)(*((_QWORD *)&v162 + 1) + 36LL);
    v114 = *(const WCHAR **)(*((_QWORD *)&v162 + 1) + 40LL);
    v115 = v113 - 2;
    v116 = *(_WORD **)(v162 + 40);
    v117 = *(_WORD *)(v162 + 36);
    switch ( *(_DWORD *)v14 )
    {
      case 1:
        if ( *v114 )
        {
          if ( *v116 )
          {
            v120 = (unsigned __int16)(v117 - 2);
            if ( (unsigned int)v120 + v115 >= 0xFFFE )
              goto LABEL_336;
            v121 = v117 + v113;
            v150 = v121 - 2;
            v148 = v121 - 4;
            v122 = (wchar_t *)ExAllocatePool2(0x100uLL);
            if ( !v122 )
            {
LABEL_334:
              RegistryValue = -1073741670;
              goto LABEL_335;
            }
            v123 = v114;
            v20 = v122;
            memmove(v122, v123, v115);
            memmove(&v20[(unsigned __int64)v115 >> 1], v116, v120 + 2);
            v24 = 0LL;
            goto LABEL_287;
          }
          v24 = (__int64 *)*((_QWORD *)&v162 + 1);
        }
        else
        {
          v24 = (__int64 *)v162;
        }
        goto LABEL_265;
      case 0xD:
        if ( v115 < 2u )
          goto LABEL_277;
        break;
      case 0xE:
        if ( v115 >= 2u )
          goto LABEL_276;
        break;
      default:
        switch ( *(_DWORD *)v14 )
        {
          case 0xF:
            v119 = RtlCompareUnicodeStrings(
                     v114,
                     (unsigned __int64)v115 >> 1,
                     v116,
                     (unsigned __int64)(unsigned __int16)(v117 - 2) >> 1,
                     1u) == 0;
            break;
          case 0x10:
            v119 = RtlCompareUnicodeStrings(
                     v114,
                     (unsigned __int64)v115 >> 1,
                     v116,
                     (unsigned __int64)(unsigned __int16)(v117 - 2) >> 1,
                     1u) != 0;
            break;
          case 0x11:
            v118 = RtlCompareUnicodeStrings(
                     v114,
                     (unsigned __int64)v115 >> 1,
                     v116,
                     (unsigned __int64)(unsigned __int16)(v117 - 2) >> 1,
                     1u);
            goto LABEL_267;
          case 0x12:
            v119 = RtlCompareUnicodeStrings(
                     v114,
                     (unsigned __int64)v115 >> 1,
                     v116,
                     (unsigned __int64)(unsigned __int16)(v117 - 2) >> 1,
                     1u) > 0;
            break;
          case 0x13:
            v119 = RtlCompareUnicodeStrings(
                     v114,
                     (unsigned __int64)v115 >> 1,
                     v116,
                     (unsigned __int64)(unsigned __int16)(v117 - 2) >> 1,
                     1u) <= 0;
            break;
          case 0x14:
            v118 = ~RtlCompareUnicodeStrings(
                      v114,
                      (unsigned __int64)v115 >> 1,
                      v116,
                      (unsigned __int64)(unsigned __int16)(v117 - 2) >> 1,
                      1u);
LABEL_267:
            v24 = 0LL;
            v20 = 0LL;
            LODWORD(v19) = v118 >> 31;
            goto LABEL_287;
          default:
            v24 = qword_140BDFB50;
LABEL_265:
            v20 = 0LL;
LABEL_287:
            v18 = v148;
            goto LABEL_224;
        }
        v24 = 0LL;
        LODWORD(v19) = v119;
        v20 = 0LL;
        goto LABEL_287;
    }
    if ( (unsigned __int16)(v117 - 2) < 2u )
    {
LABEL_277:
      v24 = 0LL;
      goto LABEL_265;
    }
LABEL_276:
    LODWORD(v19) = 1;
    goto LABEL_277;
  }
  if ( v106 != 7 )
    goto LABEL_223;
  v107 = *(unsigned int *)(*((_QWORD *)&v162 + 1) + 36LL);
  v108 = *(void **)(v162 + 40);
  v109 = *(wchar_t **)(*((_QWORD *)&v162 + 1) + 40LL);
  v110 = *(unsigned int *)(v162 + 36);
  v160 = v108;
  if ( (unsigned int)v107 <= 0xFFFE && (unsigned int)v110 <= 0xFFFE )
  {
    switch ( *(_DWORD *)v14 )
    {
      case 1:
        goto LABEL_248;
      case 8:
        if ( PnpMultiSzContainsString((wchar_t *)v108, v109) )
        {
          v24 = v38;
LABEL_245:
          v20 = 0LL;
        }
        else
        {
          v24 = 0LL;
          v20 = 0LL;
        }
        break;
      case 9:
        if ( PnpMultiSzContainsString((wchar_t *)v108, v109) )
        {
          v24 = v105;
          goto LABEL_245;
        }
LABEL_248:
        if ( (unsigned int)(v110 + v107) > 0xFFFE )
          goto LABEL_336;
        v150 = v110 + v107;
        v111 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !v111 )
          goto LABEL_334;
        v112 = v109;
        v20 = v111;
        memmove(v111, v112, v107);
        memmove(&v20[v107 >> 1], v160, v110);
        v24 = 0LL;
        break;
      default:
        v24 = qword_140BDFB50;
        v20 = 0LL;
        break;
    }
    v18 = v150;
LABEL_224:
    RegistryValue = v12;
    goto LABEL_301;
  }
LABEL_336:
  RegistryValue = -2147483643;
LABEL_335:
  v139 = v151;
LABEL_340:
  v140 = &v162;
  v141 = v139;
  do
  {
    v142 = *(_QWORD **)v140;
    if ( !*(_QWORD *)(*(_QWORD *)v140 + 24LL) )
    {
      v143 = (void *)v142[5];
      if ( v143 )
        ExFreePoolWithTag(v143, 0);
      ExFreePoolWithTag(v142, 0);
    }
    v140 = (__int128 *)((char *)v140 + 8);
    --v141;
  }
  while ( v141 );
  v11 = (__int64 *)P;
  if ( P )
  {
    LODWORD(v4) = v153;
    goto LABEL_351;
  }
LABEL_363:
  if ( v159 )
    ExFreePoolWithTag(v159, 0);
  return (unsigned int)RegistryValue;
}
