/*
 * XREFs of LdrpPreprocessDllName @ 0x180045C10
 * Callers:
 *     LdrpLoadForwardedDll @ 0x18003A500 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindLoadedDll @ 0x180051680 (LdrpFindLoadedDll.c)
 *     LdrpEnclaveAddDependentModule @ 0x180125528 (LdrpEnclaveAddDependentModule.c)
 *     LdrLoadEnclaveModule @ 0x1801394E0 (LdrLoadEnclaveModule.c)
 *     LdrpAddRedirectedFunction @ 0x18015DEAC (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     ApiSetpSearchForApiSet @ 0x180047120 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x180047310 (ApiSetpResolveHost.c)
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180051F90 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     ApiSetpSearchForApiSetHost @ 0x180083EB0 (ApiSetpSearchForApiSetHost.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     LdrpGetFullPath @ 0x1800850A0 (LdrpGetFullPath.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A6E20 (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpReallocateStringRoutine @ 0x1801214BC (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *ArgList, unsigned __int16 *a2, __int64 a3, int *a4)
{
  int *v4; // rsi
  char v5; // r14
  unsigned __int16 *v7; // r9
  int FullPath; // ebx
  __int64 v9; // rsi
  struct _PEB *v10; // rax
  __int64 v11; // r15
  _DWORD *ApiSetMap; // rbx
  _DWORD *SharedData; // rcx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int16 v19; // si
  _DWORD *v20; // rcx
  __int64 v21; // r15
  int v22; // ecx
  unsigned __int16 *v23; // r10
  int v24; // r8d
  int v25; // eax
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  __int64 v28; // rbx
  size_t v29; // rax
  unsigned __int16 v30; // cx
  __int64 v31; // r8
  unsigned __int16 v32; // r15
  int v33; // edx
  unsigned int v34; // ecx
  _QWORD *v35; // r14
  int v36; // ecx
  unsigned __int16 *v37; // rbx
  const void **v38; // r14
  __int64 v39; // rdx
  int v40; // ecx
  unsigned int v41; // edx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  char v43; // al
  __int128 *v44; // rdx
  _WORD *v45; // rax
  unsigned int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  unsigned __int16 *v50; // r13
  unsigned __int64 v51; // rdx
  _WORD *v52; // rax
  __int64 v53; // r9
  int v54; // ecx
  int v55; // edx
  __int64 v56; // r8
  _QWORD *v57; // rsi
  unsigned __int64 v58; // rdx
  __int16 *v59; // rax
  __int16 v60; // cx
  unsigned int v61; // ecx
  _QWORD *v62; // r9
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  _WORD *i; // rax
  int v67; // esi
  __int64 FullPathName_Ustr; // rbx
  int v69; // eax
  _WORD *v70; // r14
  __int64 v71; // rcx
  unsigned __int16 *v72; // rdx
  unsigned int v73; // r14d
  void *v74; // rbx
  unsigned __int16 *v75; // rdx
  unsigned int v76; // eax
  void *Atom; // r12
  unsigned int v78; // r14d
  unsigned __int16 *v79; // rdx
  void *v80; // r15
  unsigned int v81; // ebx
  const void **v82; // r12
  void *v83; // r15
  __int64 v84; // rcx
  unsigned __int16 *v85; // rdx
  unsigned int v86; // esi
  void *v87; // rbx
  __int64 v88; // [rsp+30h] [rbp-39h]
  __int64 v89; // [rsp+38h] [rbp-31h]
  char v90; // [rsp+50h] [rbp-19h] BYREF
  char v91; // [rsp+51h] [rbp-18h]
  __int128 v92; // [rsp+58h] [rbp-11h] BYREF
  struct _PEB *v93; // [rsp+68h] [rbp-1h] BYREF
  void *Src[2]; // [rsp+70h] [rbp+7h] BYREF
  _OWORD v95[4]; // [rsp+80h] [rbp+17h] BYREF

  v4 = a4;
  v5 = 0;
  v7 = ArgList;
  FullPath = 0;
  if ( (*v4 & 0x800008) == 0 )
  {
    v90 = 0;
    v9 = a3 + 88;
    v95[0] = 0LL;
    v10 = NtCurrentPeb();
    if ( !a3 )
      v9 = 0LL;
    v93 = v10;
    *(_OWORD *)Src = 0LL;
    v11 = 2147353476LL;
    ApiSetMap = v10->ApiSetMap;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    v15 = 2147353477LL;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v84 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v84 = 2147353477LL;
      if ( (*(_BYTE *)v84 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)ArgList, 0LL);
      v7 = ArgList;
    }
    if ( *(_BYTE *)ApiSetMap == 7 )
    {
LABEL_28:
      v23 = v7;
      v24 = *v7 >> 1;
      LOBYTE(v7) = 1;
      v25 = ApiSetpResolveHost(
              (_DWORD)ApiSetMap,
              *((_QWORD *)v23 + 1),
              v24,
              (_DWORD)v7,
              v9,
              (__int64)&v90,
              (__int64)Src);
      v19 = (unsigned __int16)Src[0];
      FullPath = v25;
      v5 = v90;
      if ( v25 < 0 )
        goto LABEL_29;
      goto LABEL_15;
    }
    if ( *ApiSetMap == 6
      && ApiSetMap[4] > 8u
      && *((_BYTE *)ApiSetMap + 28) == 7
      && (*((_BYTE *)ApiSetMap + 30) & 4) == 0 )
    {
      LODWORD(ApiSetMap) = (_DWORD)ApiSetMap + 28;
      goto LABEL_28;
    }
    v16 = *v7;
    if ( (unsigned int)v16 >= 8 )
    {
      v17 = (_QWORD *)*((_QWORD *)v7 + 1);
      v18 = *v17 & 0xFFFFFFDFFFDFFFDFuLL;
      if ( v18 == 0x2D004900500041LL || v18 == 0x2D005400580045LL )
      {
        v45 = (_WORD *)((char *)v17 + v16);
        v46 = *v7;
        do
        {
          if ( v46 <= 1 )
            break;
          --v45;
          v46 -= 2;
        }
        while ( *v45 != 45 );
        if ( (unsigned __int16)v46 >> 1 )
        {
          v47 = ApiSetpSearchForApiSet(ApiSetMap);
          if ( v47 )
          {
            if ( v9 && *(_DWORD *)(v47 + 20) > 1u )
            {
              v48 = ApiSetpSearchForApiSetHost(v47, *(_QWORD *)(v9 + 8), *(_WORD *)v9 >> 1, ApiSetMap);
LABEL_59:
              v49 = *(unsigned int *)(v48 + 12);
              v5 = 1;
              v19 = *(_WORD *)(v48 + 16);
              Src[1] = (char *)ApiSetMap + v49;
              goto LABEL_14;
            }
            if ( *(_DWORD *)(v47 + 20) )
            {
              v48 = (__int64)ApiSetMap + *(unsigned int *)(v47 + 16);
              goto LABEL_59;
            }
          }
        }
      }
    }
    v19 = (unsigned __int16)Src[0];
LABEL_14:
    FullPath = 0;
LABEL_15:
    if ( v5 )
    {
      if ( !v19 )
      {
        v21 = (__int64)ArgList;
        LdrpLogDllState(0LL, ArgList, 5330LL);
        goto LABEL_33;
      }
      v20 = NtCurrentPeb()->SharedData;
      if ( v20 && *v20 )
        v11 = (__int64)NtCurrentPeb()->SharedData + 554;
      if ( !*(_BYTE *)v11 || (NtCurrentPeb()->TracingFlags & 4) == 0 )
      {
LABEL_32:
        v21 = (__int64)ArgList;
LABEL_33:
        if ( !v5 )
        {
          v44 = (__int128 *)v21;
          v43 = 1;
          if ( FullPath < 0 )
            goto LABEL_65;
          goto LABEL_64;
        }
        if ( !v19 )
        {
          FullPath = -1073740671;
          goto LABEL_65;
        }
        *a2 = 0;
        v27 = NtCurrentPeb()->SharedData;
        if ( v27 && *v27 )
          v28 = (__int64)NtCurrentPeb()->SharedData + 30;
        else
          v28 = 2147352624LL;
        LOWORD(v29) = 0;
        v30 = 0;
        v92 = 0LL;
        if ( v28 )
        {
          v29 = 2 * wcslen((const wchar_t *)v28);
          v31 = 65534LL;
          if ( v29 >= 0xFFFE )
            LOWORD(v29) = -4;
          v32 = v29;
          v30 = v29;
        }
        else
        {
          v32 = v92;
          v31 = 65534LL;
        }
        if ( (_WORD)v29 )
        {
          v33 = *a2;
          v34 = v33 + v30 + 2;
          if ( v34 <= a2[1] )
          {
            v35 = a2 + 4;
LABEL_44:
            memmove((void *)(*v35 + (unsigned __int16)v33), (const void *)v28, v32);
            *a2 += v32;
            *(_WORD *)(*v35 + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
            goto LABEL_45;
          }
          if ( v34 <= 0xFFFE )
          {
            v75 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
            v76 = (v34 + 63) & 0xFFFFFFC0;
            if ( v76 > 0xFFFE )
              v76 = 65534;
            LODWORD(v92) = v76;
            if ( v75 == a2 + 8 )
            {
              Atom = (void *)RtlpAllocateAtom(v76);
              if ( !Atom )
                goto LABEL_45;
              v35 = a2 + 4;
              if ( *a2 )
              {
                memmove(Atom, *((const void **)a2 + 1), *a2);
                v35 = a2 + 4;
LABEL_160:
                LOWORD(v33) = *a2;
                a2[1] = v92;
                *((_QWORD *)a2 + 1) = Atom;
                goto LABEL_44;
              }
            }
            else
            {
              Atom = (void *)NtdllpReallocateStringRoutine(v76, v75, 65534LL, v7);
              v35 = a2 + 4;
            }
            if ( Atom )
              goto LABEL_160;
          }
        }
LABEL_45:
        v36 = *a2;
        v37 = a2 + 1;
        if ( v36 + 22 <= (unsigned int)a2[1] )
        {
LABEL_46:
          v38 = (const void **)(a2 + 4);
          v39 = *((_QWORD *)a2 + 1) + (unsigned __int16)v36;
          *(_OWORD *)v39 = *(_OWORD *)L"\\SYSTEM32\\";
          *(_DWORD *)(v39 + 16) = *(_DWORD *)L"2\\";
          *a2 += 20;
          *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
          goto LABEL_47;
        }
        if ( (unsigned int)(v36 + 22) > 0xFFFE )
        {
LABEL_142:
          v38 = (const void **)(a2 + 4);
LABEL_47:
          v40 = *a2;
          v41 = v40 + v19 + 2;
          if ( v41 <= *v37 )
          {
LABEL_48:
            memmove((char *)*v38 + (unsigned __int16)v40, Src[1], v19);
            *a2 += v19;
            FullPath = 0;
            *((_WORD *)*v38 + ((unsigned __int64)*a2 >> 1)) = 0;
            ProcessParameters = v93->ProcessParameters;
            if ( ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0 )
            {
              v43 = 1;
              v44 = (__int128 *)a2;
            }
            else
            {
              v43 = 0;
              v44 = (__int128 *)a2;
            }
LABEL_64:
            if ( v43 && !LdrpIsSecureProcess )
            {
              v67 = RtlDosApplyFileIsolationRedirection_Ustr(1, v44, (__m128i *)L"\b\n", 0LL, v95, 0LL, 0LL, 0LL, 0LL);
              if ( v67 < 0 )
              {
                v5 = 0;
                if ( v67 == -1072365560 )
                  goto LABEL_66;
              }
              else
              {
                v91 = 1;
                v93 = 0LL;
                v90 = 0;
                *(_QWORD *)&v92 = 0LL;
                while ( 1 )
                {
                  FullPathName_Ustr = (unsigned int)RtlGetFullPathName_Ustr(
                                                      v95,
                                                      a2[1],
                                                      *((_QWORD *)a2 + 1),
                                                      &v93,
                                                      &v90,
                                                      &v92,
                                                      v88,
                                                      v89);
                  if ( v90
                    || (unsigned int)(FullPathName_Ustr - 1) > 0xFFFD
                    || (_DWORD)v92 == 5 && (DWORD1(v92) & LdrpIllegalCWDDevices) != 0 )
                  {
                    break;
                  }
                  if ( (unsigned int)FullPathName_Ustr < a2[1] )
                  {
                    *a2 = FullPathName_Ustr;
                    break;
                  }
                  v70 = (_WORD *)RtlpAllocateAtom(FullPathName_Ustr);
                  if ( !v70 )
                    break;
                  v71 = *((_QWORD *)a2 + 1);
                  if ( a2 + 8 != (unsigned __int16 *)v71 )
                    RtlpSysVolFree(v71);
                  a2[8] = 0;
                  *((_QWORD *)a2 + 1) = v70;
                  *a2 = 0;
                  a2[1] = FullPathName_Ustr;
                  *v70 = 0;
                }
                if ( *((_QWORD *)&v95[0] + 1) )
                  RtlpSysVolFree(*((__int64 *)&v95[0] + 1));
                v5 = v91;
              }
              FullPath = v67;
LABEL_66:
              if ( FullPath < 0 )
                goto LABEL_90;
              v7 = ArgList;
              v4 = a4;
              goto LABEL_68;
            }
LABEL_65:
            v5 = 0;
            goto LABEL_66;
          }
          if ( v41 > 0xFFFE )
          {
            FullPath = -1073741562;
            goto LABEL_65;
          }
          v81 = (v41 + 63) & 0xFFFFFFC0;
          if ( v81 > 0xFFFE )
          {
            v81 = 65534;
            v38 = (const void **)(a2 + 4);
          }
          v82 = v38;
          if ( *v38 == a2 + 8 )
          {
            v83 = (void *)RtlpAllocateAtom(v81);
            if ( !v83 )
              goto LABEL_149;
            if ( *a2 )
            {
              memmove(v83, *v38, *a2);
              v38 = (const void **)(a2 + 4);
              goto LABEL_168;
            }
          }
          else
          {
            v83 = (void *)NtdllpReallocateStringRoutine(v81, *v38, v31, v7);
          }
          if ( !v83 )
          {
LABEL_149:
            FullPath = -1073741801;
            goto LABEL_65;
          }
LABEL_168:
          LOWORD(v40) = *a2;
          *v82 = v83;
          a2[1] = v81;
          goto LABEL_48;
        }
        v78 = (v36 + 85) & 0xFFFFFFC0;
        if ( v78 > 0xFFFE )
        {
          v78 = 65534;
          v37 = a2 + 1;
        }
        v79 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
        if ( v79 == a2 + 8 )
        {
          v80 = (void *)RtlpAllocateAtom(v78);
          if ( !v80 )
            goto LABEL_142;
          if ( *a2 )
          {
            memmove(v80, *((const void **)a2 + 1), *a2);
            v37 = a2 + 1;
            goto LABEL_164;
          }
        }
        else
        {
          v80 = (void *)NtdllpReallocateStringRoutine(v78, v79, v31, v7);
        }
        if ( !v80 )
          goto LABEL_142;
LABEL_164:
        LOWORD(v36) = *a2;
        *((_QWORD *)a2 + 1) = v80;
        a2[1] = v78;
        goto LABEL_46;
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 555;
      v21 = (__int64)ArgList;
      if ( (*(_BYTE *)v15 & 0x20) == 0 )
        goto LABEL_33;
      v22 = 5329;
LABEL_184:
      LdrpLogEtwEvent(v22, 0, 0, 0, v21, 0LL);
      goto LABEL_33;
    }
LABEL_29:
    v26 = NtCurrentPeb()->SharedData;
    if ( v26 && *v26 )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( !*(_BYTE *)v11 || (NtCurrentPeb()->TracingFlags & 4) == 0 )
      goto LABEL_32;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 555;
    v21 = (__int64)ArgList;
    if ( (*(_BYTE *)v15 & 0x20) == 0 )
      goto LABEL_33;
    v22 = 5331;
    goto LABEL_184;
  }
LABEL_68:
  v50 = v7;
  if ( *a2 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      2801,
      (int)"LdrpPreprocessDllName",
      2,
      "DLL %wZ was redirected to %wZ by %s\n",
      (char)v7);
    v69 = *v4 | 0x200;
    *v4 = v69;
    if ( v5 )
      *v4 = v69 | 4;
    v50 = a2;
    goto LABEL_81;
  }
  v51 = *((_QWORD *)v7 + 1);
  v52 = (_WORD *)(v51 + *v7);
  do
  {
    if ( (unsigned __int64)--v52 < v51 )
    {
      *v4 |= 0x20u;
      v54 = *v7;
      FullPath = 0;
      if ( !(_WORD)v54 )
        goto LABEL_80;
      v55 = *a2;
      v56 = (unsigned int)(v54 + v55 + 2);
      if ( (unsigned int)v56 <= a2[1] )
      {
        v57 = a2 + 4;
LABEL_79:
        FullPath = 0;
        memmove((void *)(*v57 + (unsigned __int16)v55), *((const void **)v7 + 1), (unsigned __int16)v54);
        *a2 += *ArgList;
        *(_WORD *)(*v57 + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
        goto LABEL_80;
      }
      if ( (unsigned int)v56 > 0xFFFE )
      {
        FullPath = -1073741562;
        goto LABEL_80;
      }
      v72 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
      v73 = (v56 + 63) & 0xFFFFFFC0;
      if ( v73 > 0xFFFE )
        v73 = 65534;
      if ( v72 == a2 + 8 )
      {
        v74 = (void *)RtlpAllocateAtom(v73);
        if ( !v74 )
          goto LABEL_128;
        v57 = a2 + 4;
        if ( *a2 )
        {
          memmove(v74, *((const void **)a2 + 1), *a2);
          v57 = a2 + 4;
          goto LABEL_155;
        }
      }
      else
      {
        v74 = (void *)NtdllpReallocateStringRoutine(v73, v72, v56, v7);
        v57 = a2 + 4;
      }
      if ( !v74 )
      {
LABEL_128:
        FullPath = -1073741801;
        goto LABEL_80;
      }
LABEL_155:
      v7 = ArgList;
      LOWORD(v55) = *a2;
      *((_QWORD *)a2 + 1) = v74;
      a2[1] = v73;
      LOWORD(v54) = *ArgList;
      goto LABEL_79;
    }
  }
  while ( *v52 != 92 && *v52 != 47 );
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v7) != 5 )
  {
    FullPath = LdrpGetFullPath(v53, a2);
    if ( FullPath < 0 )
      goto LABEL_90;
    *v4 |= 0x600u;
    goto LABEL_81;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, v53);
LABEL_80:
  if ( FullPath < 0 )
    goto LABEL_90;
LABEL_81:
  v58 = *((_QWORD *)v50 + 1);
  v59 = (__int16 *)(v58 + *v50);
  do
  {
    if ( (unsigned __int64)--v59 < v58 )
      break;
    v60 = *v59;
    if ( *v59 == 46 )
    {
      v64 = *((_QWORD *)a2 + 1);
      v65 = *a2;
      for ( i = (_WORD *)(v65 + v64 - 2); (unsigned __int64)i >= v64; *a2 = v65 )
      {
        if ( *i != 46 )
          break;
        LOWORD(v65) = v65 - 2;
        --i;
      }
      i[1] = 0;
      return (unsigned int)FullPath;
    }
  }
  while ( v60 != 47 && v60 != 92 );
  v61 = *a2 + 10;
  if ( v61 <= a2[1] )
  {
    v62 = a2 + 4;
    goto LABEL_88;
  }
  if ( v61 > 0xFFFE )
  {
    FullPath = -1073741562;
  }
  else
  {
    v85 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
    v86 = (*a2 + 73) & 0xFFFFFFC0;
    if ( v86 > 0xFFFE )
      v86 = 65534;
    if ( v85 != a2 + 8 )
    {
      v87 = (void *)NtdllpReallocateStringRoutine(v86, v85, 65534LL, v7);
      v62 = a2 + 4;
      goto LABEL_192;
    }
    v87 = (void *)RtlpAllocateAtom(v86);
    if ( !v87 )
      goto LABEL_193;
    v62 = a2 + 4;
    if ( *a2 )
    {
      memmove(v87, *((const void **)a2 + 1), *a2);
      v62 = a2 + 4;
      goto LABEL_197;
    }
LABEL_192:
    if ( v87 )
    {
LABEL_197:
      *((_QWORD *)a2 + 1) = v87;
      a2[1] = v86;
LABEL_88:
      FullPath = 0;
      *(_QWORD *)(*a2 + *v62) = *(_QWORD *)L".DLL";
      *a2 += 8;
      *(_WORD *)(*v62 + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
    }
    else
    {
LABEL_193:
      FullPath = -1073741801;
    }
  }
  if ( FullPath >= 0 )
    return (unsigned int)FullPath;
LABEL_90:
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrutil.c",
    2862,
    (int)"LdrpPreprocessDllName",
    0,
    "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
    (char)ArgList);
  return (unsigned int)FullPath;
}
