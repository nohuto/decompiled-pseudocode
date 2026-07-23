/*
 * XREFs of LdrpPreprocessDllName @ 0x180030180
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180024A70 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpEnclaveAddDependentModule @ 0x180125298 (LdrpEnclaveAddDependentModule.c)
 *     LdrLoadEnclaveModule @ 0x180139250 (LdrLoadEnclaveModule.c)
 *     LdrpAddRedirectedFunction @ 0x18015DDB0 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     ApiSetpSearchForApiSet @ 0x180031690 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x180031880 (ApiSetpResolveHost.c)
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x18003C510 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     ApiSetpSearchForApiSetHost @ 0x18007B250 (ApiSetpSearchForApiSetHost.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 *     LdrpGetFullPath @ 0x18007C440 (LdrpGetFullPath.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A5F50 (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpReallocateStringRoutine @ 0x180121258 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, _UNICODE_STRING *a2, __int64 a3, int *a4)
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
  unsigned __int16 v31; // r15
  int Length; // edx
  unsigned int v33; // ecx
  wchar_t **p_Buffer; // r14
  int v35; // ecx
  unsigned __int16 *p_MaximumLength; // rbx
  const void **v37; // r14
  char *v38; // rdx
  int v39; // ecx
  unsigned int v40; // edx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  char v42; // al
  _UNICODE_STRING *v43; // rdx
  _WORD *v44; // rax
  unsigned int v45; // r8d
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  _UNICODE_STRING *v49; // r13
  unsigned __int64 v50; // rdx
  _WORD *v51; // rax
  __int64 v52; // r9
  int v53; // ecx
  int v54; // edx
  unsigned int v55; // r8d
  wchar_t **v56; // rsi
  unsigned __int64 v57; // rdx
  __int16 *v58; // rax
  __int16 v59; // cx
  unsigned int v60; // ecx
  wchar_t **v61; // r9
  unsigned __int64 v63; // rcx
  __int64 v64; // rdx
  _WORD *i; // rax
  NTSTATUS v66; // esi
  SIZE_T FullPathName_Ustr; // rbx
  const char *v68; // rax
  int v69; // eax
  wchar_t *v70; // r14
  unsigned __int16 *v71; // rcx
  unsigned __int16 *v72; // rdx
  unsigned int v73; // r14d
  PVOID v74; // rbx
  unsigned __int16 *Buffer; // rdx
  unsigned int v76; // eax
  PVOID Atom; // r12
  unsigned int v78; // r14d
  unsigned __int16 *v79; // rdx
  PVOID v80; // r15
  unsigned int v81; // ebx
  const void **v82; // r12
  PVOID v83; // r15
  __int64 v84; // rcx
  unsigned __int16 *v85; // rdx
  unsigned int v86; // esi
  PVOID v87; // rbx
  PULONG NewFlags; // [rsp+30h] [rbp-39h]
  PSIZE_T FileNameSize; // [rsp+38h] [rbp-31h]
  char v90; // [rsp+50h] [rbp-19h] BYREF
  char v91; // [rsp+51h] [rbp-18h]
  __int128 v92; // [rsp+58h] [rbp-11h] BYREF
  struct _PEB *v93; // [rsp+68h] [rbp-1h] BYREF
  void *Src[2]; // [rsp+70h] [rbp+7h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+80h] [rbp+17h] BYREF

  v4 = a4;
  v5 = 0;
  v7 = a1;
  FullPath = 0;
  if ( (*v4 & 0x800008) == 0 )
  {
    v90 = 0;
    v9 = a3 + 88;
    DynamicString = 0LL;
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
      if ( RtlGetCurrentServiceSessionId() )
        v84 = (__int64)NtCurrentPeb()->SharedData + 555;
      else
        v84 = 2147353477LL;
      if ( (*(_BYTE *)v84 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)a1, 0LL);
      v7 = a1;
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
        v44 = (_WORD *)((char *)v17 + v16);
        v45 = *v7;
        do
        {
          if ( v45 <= 1 )
            break;
          --v44;
          v45 -= 2;
        }
        while ( *v44 != 45 );
        if ( (unsigned __int16)v45 >> 1 )
        {
          v46 = ApiSetpSearchForApiSet(ApiSetMap);
          if ( v46 )
          {
            if ( v9 && *(_DWORD *)(v46 + 20) > 1u )
            {
              v47 = ApiSetpSearchForApiSetHost(v46, *(_QWORD *)(v9 + 8), *(_WORD *)v9 >> 1, ApiSetMap);
LABEL_59:
              v48 = *(unsigned int *)(v47 + 12);
              v5 = 1;
              v19 = *(_WORD *)(v47 + 16);
              Src[1] = (char *)ApiSetMap + v48;
              goto LABEL_14;
            }
            if ( *(_DWORD *)(v46 + 20) )
            {
              v47 = (__int64)ApiSetMap + *(unsigned int *)(v46 + 16);
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
        v21 = (__int64)a1;
        LdrpLogDllState(0LL, a1, 5330LL);
        goto LABEL_33;
      }
      v20 = NtCurrentPeb()->SharedData;
      if ( v20 && *v20 )
        v11 = (__int64)NtCurrentPeb()->SharedData + 554;
      if ( !*(_BYTE *)v11 || (NtCurrentPeb()->TracingFlags & 4) == 0 )
      {
LABEL_32:
        v21 = (__int64)a1;
LABEL_33:
        if ( !v5 )
        {
          v43 = (_UNICODE_STRING *)v21;
          v42 = 1;
          if ( FullPath < 0 )
            goto LABEL_65;
          goto LABEL_64;
        }
        if ( !v19 )
        {
          FullPath = -1073740671;
          goto LABEL_65;
        }
        a2->Length = 0;
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
          if ( v29 >= 0xFFFE )
            LOWORD(v29) = -4;
          v31 = v29;
          v30 = v29;
        }
        else
        {
          v31 = v92;
        }
        if ( (_WORD)v29 )
        {
          Length = a2->Length;
          v33 = Length + v30 + 2;
          if ( v33 <= a2->MaximumLength )
          {
            p_Buffer = &a2->Buffer;
LABEL_44:
            memmove((char *)*p_Buffer + (unsigned __int16)Length, (const void *)v28, v31);
            a2->Length += v31;
            (*p_Buffer)[(unsigned __int64)a2->Length >> 1] = 0;
            goto LABEL_45;
          }
          if ( v33 <= 0xFFFE )
          {
            Buffer = a2->Buffer;
            v76 = (v33 + 63) & 0xFFFFFFC0;
            if ( v76 > 0xFFFE )
              v76 = 65534;
            LODWORD(v92) = v76;
            if ( Buffer == (unsigned __int16 *)&a2[1] )
            {
              Atom = RtlpAllocateAtom(v76);
              if ( !Atom )
                goto LABEL_45;
              p_Buffer = &a2->Buffer;
              if ( a2->Length )
              {
                memmove(Atom, a2->Buffer, a2->Length);
                p_Buffer = &a2->Buffer;
LABEL_162:
                LOWORD(Length) = a2->Length;
                a2->MaximumLength = v92;
                a2->Buffer = (wchar_t *)Atom;
                goto LABEL_44;
              }
            }
            else
            {
              Atom = (PVOID)NtdllpReallocateStringRoutine(v76, Buffer);
              p_Buffer = &a2->Buffer;
            }
            if ( Atom )
              goto LABEL_162;
          }
        }
LABEL_45:
        v35 = a2->Length;
        p_MaximumLength = &a2->MaximumLength;
        if ( v35 + 22 <= (unsigned int)a2->MaximumLength )
        {
LABEL_46:
          v37 = (const void **)&a2->Buffer;
          v38 = (char *)a2->Buffer + (unsigned __int16)v35;
          *(_OWORD *)v38 = *(_OWORD *)SlashSystem32SlashString.Buffer;
          *((_DWORD *)v38 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
          a2->Length += 20;
          a2->Buffer[(unsigned __int64)a2->Length >> 1] = 0;
          goto LABEL_47;
        }
        if ( (unsigned int)(v35 + 22) > 0xFFFE )
        {
LABEL_144:
          v37 = (const void **)&a2->Buffer;
LABEL_47:
          v39 = a2->Length;
          v40 = v39 + v19 + 2;
          if ( v40 <= *p_MaximumLength )
          {
LABEL_48:
            memmove((char *)*v37 + (unsigned __int16)v39, Src[1], v19);
            a2->Length += v19;
            FullPath = 0;
            *((_WORD *)*v37 + ((unsigned __int64)a2->Length >> 1)) = 0;
            ProcessParameters = v93->ProcessParameters;
            if ( ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0 )
            {
              v42 = 1;
              v43 = a2;
            }
            else
            {
              v42 = 0;
              v43 = a2;
            }
LABEL_64:
            if ( v42 && !LdrpIsSecureProcess )
            {
              v66 = RtlDosApplyFileIsolationRedirection_Ustr(
                      1u,
                      v43,
                      (PUNICODE_STRING)&LdrpDefaultExtension,
                      0LL,
                      &DynamicString,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
              if ( v66 < 0 )
              {
                v5 = 0;
                if ( v66 == -1072365560 )
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
                                                      &DynamicString,
                                                      a2->MaximumLength,
                                                      a2->Buffer,
                                                      &v93,
                                                      &v90,
                                                      &v92,
                                                      NewFlags,
                                                      FileNameSize);
                  if ( v90
                    || (unsigned int)(FullPathName_Ustr - 1) > 0xFFFD
                    || (_DWORD)v92 == 5 && (DWORD1(v92) & LdrpIllegalCWDDevices) != 0 )
                  {
                    break;
                  }
                  if ( (unsigned int)FullPathName_Ustr < a2->MaximumLength )
                  {
                    a2->Length = FullPathName_Ustr;
                    break;
                  }
                  v70 = (wchar_t *)RtlpAllocateAtom(FullPathName_Ustr);
                  if ( !v70 )
                    break;
                  v71 = a2->Buffer;
                  if ( &a2[1] != (_UNICODE_STRING *)v71 )
                    RtlpSysVolFree(v71);
                  a2[1].Length = 0;
                  a2->Buffer = v70;
                  a2->Length = 0;
                  a2->MaximumLength = FullPathName_Ustr;
                  *v70 = 0;
                }
                if ( DynamicString.Buffer )
                  RtlpSysVolFree(DynamicString.Buffer);
                v5 = v91;
              }
              FullPath = v66;
LABEL_66:
              if ( FullPath < 0 )
                goto LABEL_90;
              v7 = a1;
              v4 = a4;
              goto LABEL_68;
            }
LABEL_65:
            v5 = 0;
            goto LABEL_66;
          }
          if ( v40 > 0xFFFE )
          {
            FullPath = -1073741562;
            goto LABEL_65;
          }
          v81 = (v40 + 63) & 0xFFFFFFC0;
          if ( v81 > 0xFFFE )
          {
            v81 = 65534;
            v37 = (const void **)&a2->Buffer;
          }
          v82 = v37;
          if ( *v37 == &a2[1] )
          {
            v83 = RtlpAllocateAtom(v81);
            if ( !v83 )
              goto LABEL_151;
            if ( a2->Length )
            {
              memmove(v83, *v37, a2->Length);
              v37 = (const void **)&a2->Buffer;
              goto LABEL_170;
            }
          }
          else
          {
            v83 = (PVOID)NtdllpReallocateStringRoutine(v81, (PVOID)*v37);
          }
          if ( !v83 )
          {
LABEL_151:
            FullPath = -1073741801;
            goto LABEL_65;
          }
LABEL_170:
          LOWORD(v39) = a2->Length;
          *v82 = v83;
          a2->MaximumLength = v81;
          goto LABEL_48;
        }
        v78 = (v35 + 85) & 0xFFFFFFC0;
        if ( v78 > 0xFFFE )
        {
          v78 = 65534;
          p_MaximumLength = &a2->MaximumLength;
        }
        v79 = a2->Buffer;
        if ( v79 == (unsigned __int16 *)&a2[1] )
        {
          v80 = RtlpAllocateAtom(v78);
          if ( !v80 )
            goto LABEL_144;
          if ( a2->Length )
          {
            memmove(v80, a2->Buffer, a2->Length);
            p_MaximumLength = &a2->MaximumLength;
            goto LABEL_166;
          }
        }
        else
        {
          v80 = (PVOID)NtdllpReallocateStringRoutine(v78, v79);
        }
        if ( !v80 )
          goto LABEL_144;
LABEL_166:
        LOWORD(v35) = a2->Length;
        a2->Buffer = (wchar_t *)v80;
        a2->MaximumLength = v78;
        goto LABEL_46;
      }
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 555;
      v21 = (__int64)a1;
      if ( (*(_BYTE *)v15 & 0x20) == 0 )
        goto LABEL_33;
      v22 = 5329;
LABEL_186:
      LdrpLogEtwEvent(v22, 0, 0, 0, v21, 0LL);
      goto LABEL_33;
    }
LABEL_29:
    v26 = NtCurrentPeb()->SharedData;
    if ( v26 && *v26 )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( !*(_BYTE *)v11 || (NtCurrentPeb()->TracingFlags & 4) == 0 )
      goto LABEL_32;
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 555;
    v21 = (__int64)a1;
    if ( (*(_BYTE *)v15 & 0x20) == 0 )
      goto LABEL_33;
    v22 = 5331;
    goto LABEL_186;
  }
LABEL_68:
  v49 = (_UNICODE_STRING *)v7;
  if ( a2->Length )
  {
    v68 = "SxS";
    if ( !v5 )
      v68 = "API set";
    LdrpLogInternal(
      "minkernel\\ldr\\ldrutil.c",
      2801LL,
      "LdrpPreprocessDllName",
      2LL,
      "DLL %wZ was redirected to %wZ by %s\n",
      v7,
      a2,
      v68);
    v69 = *v4 | 0x200;
    *v4 = v69;
    if ( v5 )
      *v4 = v69 | 4;
    v49 = a2;
    goto LABEL_81;
  }
  v50 = *((_QWORD *)v7 + 1);
  v51 = (_WORD *)(v50 + *v7);
  do
  {
    if ( (unsigned __int64)--v51 < v50 )
    {
      *v4 |= 0x20u;
      v53 = *v7;
      FullPath = 0;
      if ( !(_WORD)v53 )
        goto LABEL_80;
      v54 = a2->Length;
      v55 = v53 + v54 + 2;
      if ( v55 <= a2->MaximumLength )
      {
        v56 = &a2->Buffer;
LABEL_79:
        FullPath = 0;
        memmove((char *)*v56 + (unsigned __int16)v54, *((const void **)v7 + 1), (unsigned __int16)v53);
        a2->Length += *a1;
        (*v56)[(unsigned __int64)a2->Length >> 1] = 0;
        goto LABEL_80;
      }
      if ( v55 > 0xFFFE )
      {
        FullPath = -1073741562;
        goto LABEL_80;
      }
      v72 = a2->Buffer;
      v73 = (v55 + 63) & 0xFFFFFFC0;
      if ( v73 > 0xFFFE )
        v73 = 65534;
      if ( v72 == (unsigned __int16 *)&a2[1] )
      {
        v74 = RtlpAllocateAtom(v73);
        if ( !v74 )
          goto LABEL_130;
        v56 = &a2->Buffer;
        if ( a2->Length )
        {
          memmove(v74, a2->Buffer, a2->Length);
          v56 = &a2->Buffer;
          goto LABEL_157;
        }
      }
      else
      {
        v74 = (PVOID)NtdllpReallocateStringRoutine(v73, v72);
        v56 = &a2->Buffer;
      }
      if ( !v74 )
      {
LABEL_130:
        FullPath = -1073741801;
        goto LABEL_80;
      }
LABEL_157:
      v7 = a1;
      LOWORD(v54) = a2->Length;
      a2->Buffer = (wchar_t *)v74;
      a2->MaximumLength = v73;
      LOWORD(v53) = *a1;
      goto LABEL_79;
    }
  }
  while ( *v51 != 92 && *v51 != 47 );
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v7) != 5 )
  {
    FullPath = LdrpGetFullPath(v52, a2);
    if ( FullPath < 0 )
      goto LABEL_90;
    *v4 |= 0x600u;
    goto LABEL_81;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, v52);
LABEL_80:
  if ( FullPath < 0 )
    goto LABEL_90;
LABEL_81:
  v57 = (unsigned __int64)v49->Buffer;
  v58 = (__int16 *)(v57 + v49->Length);
  do
  {
    if ( (unsigned __int64)--v58 < v57 )
      break;
    v59 = *v58;
    if ( *v58 == 46 )
    {
      v63 = (unsigned __int64)a2->Buffer;
      v64 = a2->Length;
      for ( i = (_WORD *)(v64 + v63 - 2); (unsigned __int64)i >= v63; a2->Length = v64 )
      {
        if ( *i != 46 )
          break;
        LOWORD(v64) = v64 - 2;
        --i;
      }
      i[1] = 0;
      return (unsigned int)FullPath;
    }
  }
  while ( v59 != 47 && v59 != 92 );
  v60 = a2->Length + 10;
  if ( v60 <= a2->MaximumLength )
  {
    v61 = &a2->Buffer;
    goto LABEL_88;
  }
  if ( v60 > 0xFFFE )
  {
    FullPath = -1073741562;
  }
  else
  {
    v85 = a2->Buffer;
    v86 = (a2->Length + 73) & 0xFFFFFFC0;
    if ( v86 > 0xFFFE )
      v86 = 65534;
    if ( v85 != (unsigned __int16 *)&a2[1] )
    {
      v87 = (PVOID)NtdllpReallocateStringRoutine(v86, v85);
      v61 = &a2->Buffer;
      goto LABEL_194;
    }
    v87 = RtlpAllocateAtom(v86);
    if ( !v87 )
      goto LABEL_195;
    v61 = &a2->Buffer;
    if ( a2->Length )
    {
      memmove(v87, a2->Buffer, a2->Length);
      v61 = &a2->Buffer;
      goto LABEL_199;
    }
LABEL_194:
    if ( v87 )
    {
LABEL_199:
      a2->Buffer = (wchar_t *)v87;
      a2->MaximumLength = v86;
LABEL_88:
      FullPath = 0;
      *(_QWORD *)((char *)*v61 + a2->Length) = *(_QWORD *)LdrpDefaultExtension.Buffer;
      a2->Length += 8;
      (*v61)[(unsigned __int64)a2->Length >> 1] = 0;
    }
    else
    {
LABEL_195:
      FullPath = -1073741801;
    }
  }
  if ( FullPath >= 0 )
    return (unsigned int)FullPath;
LABEL_90:
  LODWORD(NewFlags) = FullPath;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrutil.c",
    2862LL,
    "LdrpPreprocessDllName",
    0LL,
    "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
    a1,
    NewFlags);
  return (unsigned int)FullPath;
}
