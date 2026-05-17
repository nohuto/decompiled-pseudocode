/*
 * XREFs of LdrpApplyFileNameRedirection @ 0x180042DA0
 * Callers:
 *     LdrpLoadDll @ 0x180051A00 (LdrpLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     ApiSetpSearchForApiSet @ 0x180047120 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x180047310 (ApiSetpResolveHost.c)
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     ApiSetpSearchForApiSetHost @ 0x180083EB0 (ApiSetpSearchForApiSetHost.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x1801214BC (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpApplyFileNameRedirection(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        _BYTE *a5)
{
  char v5; // r14
  __int64 v6; // rsi
  struct _PEB *v8; // rdx
  unsigned __int16 *v9; // rbx
  _DWORD *ApiSetMap; // rdi
  __int64 v11; // r12
  _DWORD *SharedData; // rcx
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // si
  int v19; // edi
  _DWORD *v20; // rcx
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rdi
  size_t v26; // rax
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // r15
  int v29; // edx
  unsigned int v30; // ecx
  _QWORD *v31; // r14
  int v32; // ecx
  unsigned __int16 *v33; // rdi
  const void **v34; // r14
  __int64 v35; // rdx
  int v36; // ecx
  unsigned int v37; // edx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  char v39; // al
  _WORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  int v45; // esi
  _BYTE *v46; // rax
  __int64 FullPathName_Ustr; // rdi
  _WORD *Atom; // r14
  __int64 v49; // rcx
  unsigned __int16 *v50; // rdx
  unsigned int v51; // r12d
  void *v52; // r13
  unsigned int v53; // r14d
  unsigned __int16 *v54; // rdx
  void *v55; // r15
  unsigned int v56; // edi
  const void **v57; // r12
  void *v58; // r15
  char *v59; // rcx
  __int64 v60; // [rsp+30h] [rbp-41h]
  __int64 v61; // [rsp+38h] [rbp-39h]
  struct _PEB *v62; // [rsp+50h] [rbp-21h]
  void *Src[2]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v64; // [rsp+68h] [rbp-9h] BYREF
  __int128 v65; // [rsp+78h] [rbp+7h]
  __int64 v66; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v67; // [rsp+E0h] [rbp+6Fh] BYREF

  v67 = a3;
  v5 = 0;
  LOBYTE(v67) = 0;
  v6 = a1 + 88;
  v64 = 0LL;
  v8 = NtCurrentPeb();
  if ( !a1 )
    v6 = 0LL;
  v9 = a4;
  v62 = v8;
  *(_OWORD *)Src = 0LL;
  ApiSetMap = v8->ApiSetMap;
  v11 = 2147353476LL;
  *a5 = 0;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v13 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v13 = 2147353476LL;
  v14 = 2147353477LL;
  if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v59 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v59 & 0x20) != 0 )
      LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)a2, 0LL);
  }
  if ( *(_BYTE *)ApiSetMap != 7 )
  {
    if ( *ApiSetMap == 6
      && ApiSetMap[4] > 8u
      && *((_BYTE *)ApiSetMap + 28) == 7
      && (*((_BYTE *)ApiSetMap + 30) & 4) == 0 )
    {
      LODWORD(ApiSetMap) = (_DWORD)ApiSetMap + 28;
      goto LABEL_27;
    }
    v15 = *a2;
    if ( (unsigned int)v15 >= 8 )
    {
      v16 = (_QWORD *)*((_QWORD *)a2 + 1);
      v17 = *v16 & 0xFFFFFFDFFFDFFFDFuLL;
      if ( v17 == 0x2D004900500041LL || (a3 = 0x2D005400580045LL, v17 == 0x2D005400580045LL) )
      {
        v40 = (_WORD *)((char *)v16 + v15);
        a3 = *a2;
        do
        {
          if ( (unsigned int)a3 <= 1 )
            break;
          --v40;
          a3 = (unsigned int)(a3 - 2);
        }
        while ( *v40 != 45 );
        LOWORD(a3) = (unsigned __int16)a3 >> 1;
        if ( (_WORD)a3 )
        {
          v41 = ApiSetpSearchForApiSet(ApiSetMap);
          if ( v41 )
          {
            if ( v6 && *(_DWORD *)(v41 + 20) > 1u )
            {
              v42 = ApiSetpSearchForApiSetHost(v41, *(_QWORD *)(v6 + 8), *(_WORD *)v6 >> 1, ApiSetMap);
LABEL_57:
              v43 = *(unsigned int *)(v42 + 12);
              v5 = 1;
              v18 = *(_WORD *)(v42 + 16);
              Src[1] = (char *)ApiSetMap + v43;
              goto LABEL_13;
            }
            if ( *(_DWORD *)(v41 + 20) )
            {
              v42 = (__int64)ApiSetMap + *(unsigned int *)(v41 + 16);
              goto LABEL_57;
            }
          }
        }
      }
    }
    v18 = (unsigned __int16)Src[0];
LABEL_13:
    v19 = 0;
    goto LABEL_14;
  }
LABEL_27:
  LOBYTE(a4) = 1;
  v22 = ApiSetpResolveHost(
          (_DWORD)ApiSetMap,
          *((_QWORD *)a2 + 1),
          *a2 >> 1,
          (_DWORD)a4,
          v6,
          (__int64)&v67,
          (__int64)Src);
  v18 = (unsigned __int16)Src[0];
  v19 = v22;
  v5 = v67;
  if ( v22 < 0 )
  {
LABEL_28:
    v23 = NtCurrentPeb()->SharedData;
    if ( v23 && *v23 )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( !*(_BYTE *)v11 || (NtCurrentPeb()->TracingFlags & 4) == 0 )
      goto LABEL_31;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v14 & 0x20) == 0 )
      goto LABEL_31;
    v21 = 5331;
    goto LABEL_133;
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_28;
  if ( v18 )
  {
    v20 = NtCurrentPeb()->SharedData;
    if ( v20 && *v20 )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( !*(_BYTE *)v11 || (NtCurrentPeb()->TracingFlags & 4) == 0 )
      goto LABEL_31;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v14 & 0x20) == 0 )
      goto LABEL_31;
    v21 = 5329;
LABEL_133:
    LdrpLogEtwEvent(v21, 0, 0, 0, (__int64)a2, 0LL);
    goto LABEL_31;
  }
  LdrpLogDllState(0LL, a2, 5330LL);
LABEL_31:
  if ( !v5 )
  {
    v39 = 1;
    if ( v19 < 0 )
      return (unsigned int)v19;
LABEL_73:
    if ( v39 && !LdrpIsSecureProcess )
    {
      v45 = RtlDosApplyFileIsolationRedirection_Ustr(
              1,
              (_DWORD)a2,
              (unsigned int)L"\b\n",
              0,
              (__int64)&v64,
              0LL,
              0LL,
              0LL,
              0LL);
      if ( v45 >= 0 )
      {
        v46 = a5;
        v66 = 0LL;
        LOBYTE(a5) = 0;
        v67 = 0LL;
        *v46 = 1;
        while ( 1 )
        {
          FullPathName_Ustr = (unsigned int)RtlGetFullPathName_Ustr(
                                              &v64,
                                              v9[1],
                                              *((_QWORD *)v9 + 1),
                                              &v66,
                                              &a5,
                                              &v67,
                                              v60,
                                              v61);
          if ( (_BYTE)a5
            || (unsigned int)(FullPathName_Ustr - 1) > 0xFFFD
            || (_DWORD)v67 == 5 && (HIDWORD(v67) & LdrpIllegalCWDDevices) != 0 )
          {
            break;
          }
          if ( (unsigned int)FullPathName_Ustr < v9[1] )
          {
            *v9 = FullPathName_Ustr;
            break;
          }
          Atom = (_WORD *)RtlpAllocateAtom(FullPathName_Ustr);
          if ( !Atom )
            break;
          v49 = *((_QWORD *)v9 + 1);
          if ( v9 + 8 != (unsigned __int16 *)v49 )
            RtlpSysVolFree(v49);
          v9[8] = 0;
          *((_QWORD *)v9 + 1) = Atom;
          *v9 = 0;
          v9[1] = FullPathName_Ustr;
          *Atom = 0;
        }
        if ( *((_QWORD *)&v64 + 1) )
          RtlpSysVolFree(*((__int64 *)&v64 + 1));
        return (unsigned int)v45;
      }
      if ( v45 != -1072365560 )
        return (unsigned int)v45;
    }
    return (unsigned int)v19;
  }
  if ( !v18 )
    return 3221226625LL;
  *v9 = 0;
  v24 = NtCurrentPeb()->SharedData;
  if ( v24 && *v24 )
    v25 = (__int64)NtCurrentPeb()->SharedData + 30;
  else
    v25 = 2147352624LL;
  LOWORD(v26) = 0;
  v27 = 0;
  v65 = 0LL;
  if ( v25 )
  {
    v26 = 2 * wcslen((const wchar_t *)v25);
    if ( v26 >= 0xFFFE )
      LOWORD(v26) = -4;
    v28 = v26;
    v27 = v26;
  }
  else
  {
    v28 = v65;
  }
  if ( (_WORD)v26 )
  {
    v29 = *v9;
    v30 = v29 + v27 + 2;
    if ( v30 <= v9[1] )
    {
      v31 = v9 + 4;
LABEL_42:
      memmove((void *)(*v31 + (unsigned __int16)v29), (const void *)v25, v28);
      *v9 += v28;
      *(_WORD *)(*v31 + 2 * ((unsigned __int64)*v9 >> 1)) = 0;
      goto LABEL_43;
    }
    if ( v30 <= 0xFFFE )
    {
      v50 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
      v51 = (v30 + 63) & 0xFFFFFFC0;
      if ( v51 > 0xFFFE )
        v51 = 65534;
      v31 = v9 + 4;
      if ( v50 != v9 + 8 )
      {
        v52 = (void *)NtdllpReallocateStringRoutine(v51, v50, a3, a4);
        goto LABEL_92;
      }
      v52 = (void *)RtlpAllocateAtom(v51);
      if ( v52 )
      {
        if ( *v9 )
        {
          memmove(v52, *((const void **)v9 + 1), *v9);
          v31 = v9 + 4;
          goto LABEL_114;
        }
LABEL_92:
        if ( !v52 )
          goto LABEL_43;
LABEL_114:
        LOWORD(v29) = *v9;
        *((_QWORD *)v9 + 1) = v52;
        v9[1] = v51;
        goto LABEL_42;
      }
    }
  }
LABEL_43:
  v32 = *v9;
  v33 = v9 + 1;
  if ( v32 + 22 <= (unsigned int)v9[1] )
  {
LABEL_44:
    v34 = (const void **)(v9 + 4);
    v35 = *((_QWORD *)v9 + 1) + (unsigned __int16)v32;
    *(_OWORD *)v35 = *(_OWORD *)L"\\SYSTEM32\\";
    *(_DWORD *)(v35 + 16) = *(_DWORD *)L"2\\";
    *v9 += 20;
    *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1)) = 0;
    goto LABEL_45;
  }
  if ( (unsigned int)(v32 + 22) <= 0xFFFE )
  {
    v53 = (v32 + 85) & 0xFFFFFFC0;
    if ( v53 > 0xFFFE )
    {
      v53 = 65534;
      v33 = v9 + 1;
    }
    v54 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
    if ( v54 == v9 + 8 )
    {
      v55 = (void *)RtlpAllocateAtom(v53);
      if ( !v55 )
        goto LABEL_100;
      if ( *v9 )
      {
        memmove(v55, *((const void **)v9 + 1), *v9);
        v33 = v9 + 1;
        goto LABEL_118;
      }
    }
    else
    {
      v55 = (void *)NtdllpReallocateStringRoutine(v53, v54, a3, a4);
    }
    if ( !v55 )
      goto LABEL_100;
LABEL_118:
    LOWORD(v32) = *v9;
    *((_QWORD *)v9 + 1) = v55;
    v9[1] = v53;
    goto LABEL_44;
  }
LABEL_100:
  v34 = (const void **)(v9 + 4);
LABEL_45:
  v36 = *v9;
  v37 = v36 + v18 + 2;
  if ( v37 <= *v33 )
  {
LABEL_46:
    memmove((char *)*v34 + (unsigned __int16)v36, Src[1], v18);
    *v9 += v18;
    *((_WORD *)*v34 + ((unsigned __int64)*v9 >> 1)) = 0;
    ProcessParameters = v62->ProcessParameters;
    if ( ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0 )
    {
      v39 = 1;
      LODWORD(a2) = (_DWORD)v9;
      v19 = 0;
    }
    else
    {
      v39 = 0;
      LODWORD(a2) = (_DWORD)v9;
      v19 = 0;
    }
    goto LABEL_73;
  }
  if ( v37 <= 0xFFFE )
  {
    v56 = (v37 + 63) & 0xFFFFFFC0;
    if ( v56 > 0xFFFE )
    {
      v56 = 65534;
      v34 = (const void **)(v9 + 4);
    }
    v57 = v34;
    if ( *v34 == v9 + 8 )
    {
      v58 = (void *)RtlpAllocateAtom(v56);
      if ( !v58 )
        return 3221225495LL;
      if ( *v9 )
      {
        memmove(v58, *v34, *v9);
        v34 = (const void **)(v9 + 4);
        goto LABEL_122;
      }
    }
    else
    {
      v58 = (void *)NtdllpReallocateStringRoutine(v56, *v34, a3, a4);
    }
    if ( !v58 )
      return 3221225495LL;
LABEL_122:
    LOWORD(v36) = *v9;
    *v57 = v58;
    v9[1] = v56;
    goto LABEL_46;
  }
  return 3221225734LL;
}
