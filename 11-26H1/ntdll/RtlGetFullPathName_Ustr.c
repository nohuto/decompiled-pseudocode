/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x180032060
 * Callers:
 *     RtlGetFullPathName_U @ 0x1800212E0 (RtlGetFullPathName_U.c)
 *     LdrpApplyFileNameRedirection @ 0x18002D310 (LdrpApplyFileNameRedirection.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpGetFullPath @ 0x18007C440 (LdrpGetFullPath.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A3DE0 (RtlSetCurrentDirectory_U.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A5B90 (RtlGetFullPathName_UstrEx.c)
 *     RtlGetFullPathName_UEx @ 0x1800CAE50 (RtlGetFullPathName_UEx.c)
 * Callees:
 *     NLS_UPCASE @ 0x180021F40 (NLS_UPCASE.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x1800333F0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpCheckRelativeDrive @ 0x18009A374 (RtlpCheckRelativeDrive.c)
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1800A4000 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A4340 (RtlpReferenceCurrentDirectory.c)
 *     RtlpComputeBackupIndex @ 0x1800A5074 (RtlpComputeBackupIndex.c)
 *     RtlUnicodeStringValidateWorker @ 0x1800A5B40 (RtlUnicodeStringValidateWorker.c)
 *     RtlUnicodeStringCopy @ 0x1800C6630 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x1800D44D0 (RtlUnicodeStringValidateWorker_0.c)
 *     RtlpCheckDeviceName @ 0x18010ADE8 (RtlpCheckDeviceName.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        unsigned int a2,
        _WORD *a3,
        int **a4,
        _BYTE *a5,
        int *a6)
{
  unsigned int v8; // r12d
  unsigned int v9; // edi
  _WORD *v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int16 v13; // ax
  unsigned int IsDosDeviceName_Ustr; // eax
  _WORD *v15; // rax
  unsigned __int16 v16; // cx
  __int16 v17; // cx
  int v18; // eax
  __int64 v19; // rcx
  int *v20; // r11
  HANDLE *v21; // rdx
  char v22; // r8
  unsigned int i; // ebx
  unsigned int v24; // r13d
  unsigned int v25; // r8d
  unsigned __int16 v26; // r10
  unsigned int v27; // r14d
  unsigned __int64 v28; // rcx
  unsigned int j; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int16 v32; // ax
  __int16 v33; // r8
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned int v37; // ebx
  __int16 v38; // cx
  __int64 v39; // r9
  __int16 v40; // r8
  __int64 v41; // rax
  __int16 v42; // cx
  unsigned int k; // ecx
  __int16 v44; // cx
  unsigned __int16 v45; // dx
  unsigned __int64 v46; // rax
  __int16 v47; // r8
  int v48; // ecx
  _WORD *v49; // r13
  _WORD *v50; // r12
  unsigned __int64 v51; // r14
  int v52; // ecx
  __int64 v53; // r10
  __int64 v54; // r11
  _CURDIR *v55; // rax
  _CURDIR *v56; // rcx
  __m128i v57; // xmm1
  _WORD *v58; // r13
  unsigned __int64 v59; // r14
  int v60; // edx
  __int64 v61; // r10
  unsigned __int64 v62; // r11
  __int64 v63; // rcx
  int v64; // eax
  _CURDIR *v65; // rax
  _CURDIR *p_CurrentDirectory; // rbx
  wchar_t v67; // ax
  wchar_t v68; // r14
  __int16 v69; // r10
  size_t v70; // rax
  __int16 v71; // cx
  __int16 v72; // dx
  unsigned __int16 v73; // r8
  NTSTATUS v74; // eax
  __int64 v75; // rbx
  unsigned __int16 v76; // cx
  unsigned __int16 v77; // dx
  __int64 v78; // rax
  __m128i v79; // xmm0
  _CURDIR *v80; // rax
  _CURDIR *v81; // r11
  unsigned int v82; // eax
  _UNICODE_STRING *v83; // r11
  __int16 v84; // ax
  int v85; // eax
  int v86; // r8d
  __int16 v87; // dx
  wchar_t *v88; // r14
  unsigned __int64 v89; // r11
  wchar_t *v90; // rcx
  __int16 v91; // r10
  __int64 v92; // rdx
  int v93; // eax
  __int64 result; // rax
  unsigned int v95; // r14d
  unsigned __int64 v96; // r12
  int v97; // ecx
  unsigned __int64 v98; // rbx
  int v99; // eax
  const wchar_t *v100; // r10
  __int16 v101; // r11
  unsigned __int64 v102; // rcx
  signed __int64 v103; // rdi
  unsigned __int64 v104; // rbx
  unsigned __int64 v105; // rdi
  unsigned __int64 v106; // rbx
  int v107; // eax
  unsigned __int64 v108; // r10
  unsigned __int16 v109; // r11
  int v110; // ecx
  __int16 v111; // dx
  __int16 v112; // dx
  __int16 v113; // dx
  char v114; // [rsp+30h] [rbp-1B8h]
  bool v115; // [rsp+31h] [rbp-1B7h]
  unsigned __int16 v116; // [rsp+38h] [rbp-1B0h]
  __int16 Length; // [rsp+38h] [rbp-1B0h]
  unsigned __int16 v118; // [rsp+38h] [rbp-1B0h]
  unsigned __int16 v119; // [rsp+38h] [rbp-1B0h]
  unsigned __int16 v120; // [rsp+38h] [rbp-1B0h]
  unsigned int v121; // [rsp+4Ch] [rbp-19Ch]
  __int64 v122; // [rsp+58h] [rbp-190h] BYREF
  _WORD *v123; // [rsp+60h] [rbp-188h]
  PVOID BaseAddress; // [rsp+68h] [rbp-180h]
  _UNICODE_STRING DosPath; // [rsp+70h] [rbp-178h] BYREF
  ULONG_PTR ReturnLength; // [rsp+80h] [rbp-168h] BYREF
  int v127; // [rsp+88h] [rbp-160h]
  int v128; // [rsp+8Ch] [rbp-15Ch]
  int v129; // [rsp+90h] [rbp-158h]
  __int64 v130; // [rsp+98h] [rbp-150h]
  int v131; // [rsp+A0h] [rbp-148h]
  int v132; // [rsp+A4h] [rbp-144h]
  int v133; // [rsp+A8h] [rbp-140h]
  unsigned int v134; // [rsp+ACh] [rbp-13Ch]
  unsigned int v135; // [rsp+B0h] [rbp-138h]
  int *v136; // [rsp+B8h] [rbp-130h]
  wchar_t *p_String; // [rsp+C0h] [rbp-128h]
  _WORD *v138; // [rsp+C8h] [rbp-120h]
  _WORD *v139; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v140; // [rsp+D8h] [rbp-110h]
  _WORD *v141; // [rsp+E0h] [rbp-108h]
  unsigned __int64 v142; // [rsp+E8h] [rbp-100h]
  unsigned __int64 v143; // [rsp+F0h] [rbp-F8h]
  _WORD *v144; // [rsp+F8h] [rbp-F0h]
  unsigned __int64 v145; // [rsp+100h] [rbp-E8h]
  unsigned __int64 v146; // [rsp+108h] [rbp-E0h]
  unsigned __int64 v147; // [rsp+110h] [rbp-D8h]
  int **v148; // [rsp+118h] [rbp-D0h] BYREF
  __int64 v149; // [rsp+120h] [rbp-C8h]
  _WORD *v150; // [rsp+128h] [rbp-C0h]
  _WORD *v151; // [rsp+130h] [rbp-B8h]
  wchar_t *v152; // [rsp+138h] [rbp-B0h]
  unsigned __int64 v153; // [rsp+140h] [rbp-A8h]
  __int64 v154; // [rsp+148h] [rbp-A0h]
  __int64 v155; // [rsp+150h] [rbp-98h]
  _WORD *v156; // [rsp+158h] [rbp-90h]
  wchar_t *v157; // [rsp+160h] [rbp-88h]
  __int64 v158; // [rsp+168h] [rbp-80h]
  unsigned __int64 v159; // [rsp+170h] [rbp-78h]
  __int64 v160; // [rsp+178h] [rbp-70h]
  __int64 v161; // [rsp+180h] [rbp-68h]
  unsigned __int64 v162; // [rsp+188h] [rbp-60h]
  unsigned __int64 v163; // [rsp+190h] [rbp-58h]
  wchar_t String; // [rsp+198h] [rbp-50h] BYREF
  _BYTE v165[6]; // [rsp+19Ah] [rbp-4Eh]

  v148 = a4;
  v136 = a6;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v8 = a2;
  LODWORD(v130) = v8;
  *(_QWORD *)a6 = 0LL;
  v135 = *a1;
  v9 = v135 >> 1;
  if ( !(v135 >> 1) )
    return 0LL;
  v10 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v10 )
    return 0LL;
  v11 = v135 >> 1;
  do
  {
    v12 = v11 - 1;
    if ( v10[v12] != 32 )
      break;
    --v11;
  }
  while ( (_DWORD)v12 );
  if ( !v11 )
    return 0LL;
  v13 = v10[v9 - 1];
  v115 = v13 != 92 && v13 != 47;
  v121 = v8 >> 1;
  v134 = v8 >> 1;
  memset_thunk_772440563353939046(a3, 0, v8);
  v122 = 0LL;
  v116 = 2 * (v8 >> 1);
  *(_DWORD *)((char *)&v122 + 2) = v116;
  v123 = a3;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v95 = HIWORD(IsDosDeviceName_Ustr);
    v96 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v95 || (int)RtlpCheckDeviceName(a1, v95, a5) >= 0 && !*a5 )
    {
      if ( (int)v96 + 8 >= (unsigned int)v116 )
      {
        result = 0LL;
        if ( (unsigned int)(v96 + 10) <= 0xFFFF )
          return (unsigned int)(v96 + 10);
      }
      else
      {
        v97 = 0;
        if ( ((v116 | (unsigned __int16)v122) & 1) == 0 && (unsigned __int16)v122 <= v116 && v116 != 0xFFFF )
        {
          if ( !a3 && v116 )
            v97 = -1073741811;
          if ( v97 >= 0 )
          {
            v98 = (unsigned __int64)v116 >> 1;
            v99 = RtlUnicodeStringValidateWorker_0(L"\b\n");
            if ( v99 >= 0 )
              v100 = L"\\\\.\\";
            v102 = (((__int64)v99 >> 63) & 0xFFFFFFFFFFFFFFFCuLL) + 4;
            if ( v99 >= 0 && v98 )
            {
              v103 = (char *)a3 - (char *)v100;
              v104 = v98 - v102;
              do
              {
                if ( !v102 )
                  break;
                *(const wchar_t *)((char *)v100 + v103) = *v100;
                ++v100;
                --v102;
                ++v101;
              }
              while ( v104 + v102 );
            }
            LOWORD(v122) = 2 * v101;
          }
        }
        v105 = *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v95 >> 1);
        LODWORD(v106) = 0;
        v107 = RtlUnicodeStringValidateWorker(&v122);
        if ( v107 < 0 )
        {
          v110 = 0;
        }
        else
        {
          v110 = (int)a3;
          v108 = (unsigned __int64)v116 >> 1;
          v106 = (unsigned __int64)v109 >> 1;
        }
        if ( v107 >= 0 )
          RtlWideCharArrayCopyStringWorker(v110 + 2 * v106, v108 - v106, (unsigned int)&v148, v105, v96 >> 1);
        return (unsigned int)(v96 + 8);
      }
      return result;
    }
    return 0LL;
  }
  v15 = (_WORD *)*((_QWORD *)a1 + 1);
  v16 = *a1;
  if ( *a1 >= 2u && (*v15 == 92 || *v15 == 47) )
  {
    if ( v16 >= 4u && ((v111 = v15[1], v111 == 92) || v111 == 47) )
    {
      if ( v16 >= 6u && ((v112 = v15[2], v112 == 46) || v112 == 63) )
      {
        if ( v16 >= 8u && ((v113 = v15[3], v113 == 92) || v113 == 47) )
        {
          v18 = 6;
        }
        else
        {
          v18 = 1;
          if ( v16 == 6 )
            v18 = 7;
        }
      }
      else
      {
        v18 = 1;
      }
    }
    else
    {
      v18 = 4;
    }
    goto LABEL_26;
  }
  if ( v16 < 4u || !*v15 || v15[1] != 58 )
  {
    v18 = 5;
    goto LABEL_26;
  }
  if ( v16 >= 6u )
  {
    v17 = v15[2];
    if ( v17 == 92 || v17 == 47 )
    {
      v18 = 2;
LABEL_26:
      v19 = 3LL;
      goto LABEL_27;
    }
  }
  v19 = 3LL;
  v18 = 3;
LABEL_27:
  *a6 = v18;
  DosPath = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  BaseAddress = 0LL;
  v22 = 0;
  v114 = 0;
  i = 0;
  if ( v18 != 2 )
  {
    switch ( v18 )
    {
      case 1:
        v86 = 0;
        v127 = 0;
        for ( i = 2; i < v9; ++i )
        {
          v87 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * i);
          if ( v87 == 92 || v87 == 47 )
          {
            v127 = ++v86;
            if ( v86 == 2 )
              break;
          }
        }
        v24 = i;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        Length = 2 * i;
        DosPath.Length = 2 * i;
        DosPath.MaximumLength = a1[1];
        goto LABEL_172;
      case 3:
        v65 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL);
        BaseAddress = v65;
        v114 = 1;
        if ( v65 )
          p_CurrentDirectory = v65 + 1;
        else
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
        NLS_UPCASE(qword_1801C5038, *p_CurrentDirectory->DosPath.Buffer);
        v67 = NLS_UPCASE(qword_1801C5038, **((unsigned __int16 **)a1 + 1));
        v68 = v67;
        if ( v69 == v67 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          v79.m128i_i64[1] = (__int64)DosPath.Buffer;
          *(double *)v79.m128i_i64 = RtlUnicodeStringCopy(&v122, &DosPath);
          v120 = _mm_cvtsi128_si32(v79);
          a3 = v123;
          v26 = v122;
LABEL_162:
          LOWORD(v25) = v120;
LABEL_163:
          i = 2;
          v20 = 0LL;
          v24 = 3;
          goto LABEL_31;
        }
        RtlpCheckRelativeDrive(v67);
        String = 61;
        *(_WORD *)v165 = v68;
        *(_DWORD *)&v165[2] = 58;
        p_String = &String;
        v70 = wcslen(&String);
        v71 = 2 * v70;
        v130 = 2 * v70;
        v72 = 2 * v70;
        v73 = 2 * v70;
        if ( 2 * v70 >= 0xFFFE )
        {
          v71 = -4;
          v130 = 65532LL;
          v72 = -4;
          v73 = -4;
        }
        LOWORD(v136) = v71;
        WORD1(v136) = v72 + 2;
        ReturnLength = 0LL;
        v129 = 0;
        v74 = RtlQueryEnvironmentVariable(
                0LL,
                &String,
                (unsigned __int64)v73 >> 1,
                a3,
                (unsigned __int64)v116 >> 1,
                &ReturnLength);
        v129 = v74;
        v75 = 0x7FFFLL;
        if ( ReturnLength > 0x7FFF )
        {
          v129 = -1073741801;
        }
        else
        {
          if ( v74 == -1073741789 )
          {
            v77 = 2 * (ReturnLength - 1);
            v26 = v77;
            LOWORD(v122) = v77;
            v76 = v77;
          }
          else
          {
            v76 = 2 * ReturnLength;
            v26 = 2 * ReturnLength;
            LOWORD(v122) = 2 * ReturnLength;
            v77 = 2 * ReturnLength;
          }
          if ( v74 >= 0 )
          {
            v78 = v76 >> 1;
            if ( (unsigned int)v78 <= 3 || (unsigned int)v78 >= v121 )
            {
              v120 = v26;
              DosPath.Length = v26;
            }
            else
            {
              a3[v78] = 92;
              v26 = v76 + 2;
              LOWORD(v122) = v76 + 2;
              v120 = v76 + 2;
              DosPath.Length = v76 + 2;
            }
            goto LABEL_162;
          }
          if ( v74 == -1073741789 )
          {
            v25 = v77 + 2;
            if ( v25 > 0xFFFF )
            {
              LOWORD(v20) = 0;
              v27 = 0;
              v37 = v8 >> 1;
              v22 = 1;
              v21 = (HANDLE *)BaseAddress;
              goto LABEL_213;
            }
LABEL_199:
            DosPath.Length = v25;
            goto LABEL_163;
          }
        }
        LOWORD(v122) = 0;
        String = v68;
        *(_DWORD *)v165 = 6029370;
        *(_WORD *)&v165[4] = 0;
        v138 = 0LL;
        v143 = 0LL;
        if ( (int)RtlUnicodeStringValidateWorker(&v122) >= 0 )
        {
          v88 = a3;
          v138 = a3;
          v89 = (unsigned __int64)v116 >> 1;
          v143 = v89;
          v154 = 0x7FFFLL;
          v90 = &String;
          v152 = &String;
          v153 = v89;
          v157 = a3;
          v132 = 0;
          v91 = 0;
          v155 = 0LL;
          v92 = 0LL;
          while ( v89 )
          {
            if ( !v75 || !*v90 )
              goto LABEL_197;
            *v88++ = *v90;
            v157 = v88;
            v152 = ++v90;
            v153 = --v89;
            v154 = --v75;
            v91 = v92 + 1;
            v155 = ++v92;
          }
          if ( v75 )
          {
            v93 = 0;
            if ( *v90 )
              v93 = -2147483643;
            v132 = v93;
          }
LABEL_197:
          v26 = 2 * v91;
          LOWORD(v122) = v26;
        }
        LOWORD(v25) = 8;
        goto LABEL_199;
      case 4:
        LOBYTE(v19) = 1;
        v80 = (_CURDIR *)RtlpReferenceCurrentDirectory(v19, 0LL);
        BaseAddress = v80;
        v114 = 1;
        if ( v80 )
          v81 = v80 + 1;
        else
          v81 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
        v82 = RtlpComputeBackupIndex(v81);
        v24 = v82;
        DosPath = *v83;
        if ( v82 == 3 )
          v84 = 4;
        else
          v84 = 2 * v82;
        DosPath.Length = v84;
        Length = v84;
LABEL_172:
        RtlUnicodeStringCopy(&v122, &DosPath);
        a3 = v123;
        v20 = 0LL;
        goto LABEL_29;
      case 5:
        v55 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL);
        BaseAddress = v55;
        v114 = 1;
        if ( v55 )
        {
          v56 = v55 + 1;
          a6[1] = (int)v55[1].Handle;
        }
        else
        {
          v56 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
        }
        v57 = (__m128i)v56->DosPath;
        DosPath = v56->DosPath;
        LODWORD(ReturnLength) = RtlpComputeBackupIndex(v56);
        v144 = 0LL;
        v145 = 0LL;
        if ( (int)RtlUnicodeStringValidateWorker_0(&v122) >= 0 )
        {
          v58 = a3;
          v144 = a3;
          v145 = (unsigned __int64)v116 >> 1;
          v136 = v20;
          v59 = (unsigned int)v20;
          v146 = (unsigned __int64)v20;
          v147 = (unsigned __int64)v20;
          v60 = RtlUnicodeStringValidateWorker_0(&DosPath);
          if ( v60 < 0 )
          {
            LOWORD(v25) = DosPath.Length;
          }
          else
          {
            v59 = _mm_srli_si128(v57, 8).m128i_u64[0];
            v146 = v59;
            v119 = _mm_cvtsi128_si32(v57);
            v62 = (unsigned __int64)v119 >> 1;
            v147 = v62;
            LOWORD(v25) = v119;
          }
          if ( v60 < 0 )
          {
            LOWORD(v63) = (_WORD)v136;
          }
          else
          {
            v159 = v62;
            v163 = v59;
            v158 = v61;
            v156 = a3;
            v133 = 0;
            v63 = 0LL;
            v160 = 0LL;
            while ( v61 )
            {
              if ( !v62 )
                goto LABEL_145;
              *v58++ = *(_WORD *)v59;
              v156 = v58;
              v59 += 2LL;
              v163 = v59;
              v158 = --v61;
              v159 = --v62;
              v160 = ++v63;
            }
            v85 = 0;
            if ( v62 )
              v85 = -2147483643;
            v133 = v85;
          }
LABEL_145:
          v26 = 2 * v63;
          LOWORD(v122) = 2 * v63;
          v20 = 0LL;
          v24 = ReturnLength;
          goto LABEL_31;
        }
        LOWORD(v25) = DosPath.Length;
        v24 = ReturnLength;
        goto LABEL_30;
      case 6:
      case 7:
        LODWORD(ReturnLength) = 4;
        i = 4;
        if ( v9 < 4 )
          i = v9;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        v139 = 0LL;
        v140 = 0LL;
        v48 = 0;
        v128 = 0;
        v26 = v122;
        if ( (v122 & 1) != 0 || (unsigned __int16)v122 > v116 || v116 == 0xFFFF )
        {
          v128 = -1073741811;
        }
        else
        {
          if ( !a3 && ((_WORD)v122 || v116) )
          {
            v48 = -1073741811;
            v128 = -1073741811;
          }
          if ( v48 >= 0 )
          {
            v49 = a3;
            v139 = a3;
            v140 = (unsigned __int64)v116 >> 1;
            v50 = 0LL;
            v141 = 0LL;
            v51 = 0LL;
            v142 = 0LL;
            v52 = RtlUnicodeStringValidateWorker_0(&DosPath);
            if ( v52 < 0 )
            {
              LOWORD(v25) = DosPath.Length;
            }
            else
            {
              v50 = (_WORD *)_mm_srli_si128(*(__m128i *)L"\b\n", 8).m128i_u64[0];
              v141 = v50;
              v118 = _mm_cvtsi128_si32(*(__m128i *)L"\b\n");
              v51 = (unsigned __int64)v118 >> 1;
              v142 = v51;
              LOWORD(v25) = v118;
            }
            if ( v52 >= 0 )
            {
              v162 = v51;
              v151 = v50;
              v161 = v54;
              v150 = a3;
              v131 = 0;
              v149 = 0LL;
              while ( v54 )
              {
                if ( !v51 )
                  goto LABEL_130;
                *v49++ = *v50;
                v150 = v49;
                v151 = ++v50;
                v161 = --v54;
                v162 = --v51;
                v149 = ++v53;
              }
              v64 = 0;
              if ( v51 )
                v64 = -2147483643;
              v131 = v64;
            }
LABEL_130:
            v26 = 2 * v53;
            LOWORD(v122) = v26;
            v8 = v130;
            goto LABEL_131;
          }
        }
        LOWORD(v25) = DosPath.Length;
LABEL_131:
        if ( v26 >= 6u )
          a3[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v20 = 0LL;
        v24 = ReturnLength;
        if ( *v136 == 7 )
          v115 = 0;
        goto LABEL_31;
      default:
        v27 = 0;
        v37 = v8 >> 1;
        goto LABEL_213;
    }
  }
  LODWORD(ReturnLength) = 3;
  Length = DosPath.Length;
  v24 = 3;
LABEL_29:
  LOWORD(v25) = Length;
LABEL_30:
  v26 = v122;
LABEL_31:
  v27 = (unsigned __int16)v25;
  v28 = v135 + (unsigned __int16)v25 - 2 * i + 2LL;
  if ( v28 > v8 )
  {
    if ( v9 > 1 || **((_WORD **)a1 + 1) != 46 )
    {
      v27 = (unsigned int)v20;
      if ( (unsigned int)v28 <= 0xFFFF )
        v27 = v135 + (unsigned __int16)v25 - 2 * i + 2;
      v37 = v121;
      v22 = v114;
      v21 = (HANDLE *)BaseAddress;
      goto LABEL_213;
    }
    if ( v9 != 1 )
    {
      v27 = v135 + (unsigned __int16)v25 - 2 * i;
      if ( v27 > 0xFFFF )
        v27 = (unsigned int)v20;
      v37 = v121;
      v22 = v114;
      v21 = (HANDLE *)BaseAddress;
      goto LABEL_213;
    }
    if ( (_WORD)v25 == 8 )
    {
      if ( v8 <= (unsigned __int16)v25 )
      {
        v27 = 10;
        v37 = v121;
        v22 = v114;
        v21 = (HANDLE *)BaseAddress;
        goto LABEL_213;
      }
    }
    else
    {
      if ( v8 < (unsigned __int16)v25 )
      {
        v37 = v121;
        v22 = v114;
        v21 = (HANDLE *)BaseAddress;
        goto LABEL_213;
      }
      v45 = v26;
      v46 = (unsigned __int64)v26 >> 1;
      if ( (_DWORD)v46 && a3[(unsigned int)(v46 - 1)] == 92 )
      {
        v26 -= 2;
        LOWORD(v122) = v45 - 2;
      }
    }
  }
  for ( j = (unsigned int)v20; ; ++j )
  {
    v30 = v26 >> 1;
    if ( j >= (unsigned int)v30 )
      break;
    if ( a3[j] == 47 )
      a3[j] = 92;
  }
  while ( i < v9 )
  {
    v31 = *((_QWORD *)a1 + 1);
    v32 = *(_WORD *)(v31 + 2LL * i);
    if ( v32 == 47 )
      goto LABEL_47;
    if ( v32 != 46 )
    {
      if ( v32 != 92 )
        goto LABEL_38;
LABEL_47:
      if ( !(_DWORD)v30 || a3[(unsigned int)(v30 - 1)] != 92 )
      {
        a3[v30] = 92;
        v30 = (unsigned int)(v30 + 1);
      }
      goto LABEL_46;
    }
    v39 = i + 1;
    if ( (_DWORD)v39 != v9 )
    {
      v40 = *(_WORD *)(v31 + 2 * v39);
      if ( v40 == 92 || v40 == 47 )
      {
        ++i;
      }
      else if ( v40 == 46
             && ((v41 = i + 2, (_DWORD)v41 == v9) || (v47 = *(_WORD *)(v31 + 2 * v41), v47 == 47) || v47 == 92) )
      {
        while ( (unsigned int)v30 >= v24 )
        {
          v42 = a3[v30];
          a3[v30] = (_WORD)v20;
          if ( v42 == 92 )
          {
            while ( (unsigned int)v30 >= v24 )
            {
              v44 = a3[v30];
              a3[v30] = (_WORD)v20;
              if ( v44 == 92 )
              {
                if ( (unsigned int)v30 >= v24 )
                  goto LABEL_93;
                goto LABEL_92;
              }
              v30 = (unsigned int)(v30 - 1);
            }
            break;
          }
          v30 = (unsigned int)(v30 - 1);
        }
LABEL_92:
        v30 = (unsigned int)(v30 + 1);
LABEL_93:
        ++i;
      }
      else
      {
LABEL_38:
        while ( i < v9 )
        {
          v33 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * i);
          if ( v33 == 92 || v33 == 47 )
            v34 = 1;
          else
            v34 = (int)v20;
          if ( v34 )
          {
            if ( i < v9 && (unsigned int)v30 >= 2 )
            {
              v35 = (unsigned int)(v30 - 1);
              if ( a3[v35] == 46 && a3[(unsigned int)(v30 - 2)] != 46 )
                v30 = (unsigned int)v35;
            }
            break;
          }
          a3[v30] = v33;
          v30 = (unsigned int)(v30 + 1);
          ++i;
        }
        --i;
      }
    }
LABEL_46:
    ++i;
  }
  if ( v115 && (unsigned int)v30 > v24 )
  {
    v36 = (unsigned int)(v30 - 1);
    if ( a3[v36] == 92 )
      v30 = (unsigned int)v36;
  }
  v37 = v121;
  if ( (unsigned int)v30 < v121 )
    a3[v30] = (_WORD)v20;
  while ( (_DWORD)v30 )
  {
    v30 = (unsigned int)(v30 - 1);
    v38 = a3[v30];
    if ( v38 != 32 && v38 != 46 )
    {
      LODWORD(v30) = v30 + 1;
      break;
    }
    a3[v30] = (_WORD)v20;
  }
  LOWORD(v122) = 2 * v30;
  if ( v148 )
  {
    for ( k = v30; k && a3[k - 1] != 92; --k )
      ;
    if ( k < v24 || k >= (unsigned int)v30 )
      *v148 = v20;
    else
      *v148 = (int *)&a3[k];
  }
  v27 = (unsigned __int16)(2 * v30);
  v22 = v114;
  v21 = (HANDLE *)BaseAddress;
LABEL_213:
  if ( v22 )
  {
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21, 0xFFFFFFFF) == 1 )
      {
        NtClose(v21[1]);
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        LOWORD(v20) = 0;
      }
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
      LOWORD(v20) = 0;
    }
  }
  if ( v27 >= 2 * (unsigned __int64)v37 && v37 )
    *a3 = (_WORD)v20;
  return v27;
}
