/*
 * XREFs of LdrpApplyFileNameRedirection @ 0x18002D310
 * Callers:
 *     LdrpLoadDll @ 0x18003BF80 (LdrpLoadDll.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x1800018C0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     ApiSetpSearchForApiSet @ 0x180031690 (ApiSetpSearchForApiSet.c)
 *     ApiSetpResolveHost @ 0x180031880 (ApiSetpResolveHost.c)
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     ApiSetpSearchForApiSetHost @ 0x18007B250 (ApiSetpSearchForApiSetHost.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 *     NtdllpReallocateStringRoutine @ 0x180121258 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpApplyFileNameRedirection(
        __int64 a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        _UNICODE_STRING *a4,
        _BYTE *a5)
{
  char v5; // r14
  __int64 v6; // rsi
  struct _PEB *v8; // rdx
  _UNICODE_STRING *v9; // rbx
  _DWORD *ApiSetMap; // rdi
  __int64 v11; // r12
  _DWORD *SharedData; // rcx
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 Length; // rcx
  wchar_t *Buffer; // rdx
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
  wchar_t **p_Buffer; // r14
  int v32; // ecx
  unsigned __int16 *p_MaximumLength; // rdi
  const void **v34; // r14
  char *v35; // rdx
  int v36; // ecx
  unsigned int v37; // edx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  char v39; // al
  _WORD *v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rax
  NTSTATUS v46; // esi
  _BYTE *v47; // rax
  SIZE_T FullPathName_Ustr; // rdi
  wchar_t *Atom; // r14
  unsigned __int16 *v50; // rcx
  unsigned __int16 *v51; // rdx
  unsigned int v52; // r12d
  PVOID v53; // r13
  unsigned int v54; // r14d
  unsigned __int16 *v55; // rdx
  PVOID v56; // r15
  unsigned int v57; // edi
  const void **v58; // r12
  PVOID v59; // r15
  char *v60; // rcx
  PULONG NewFlags; // [rsp+30h] [rbp-41h]
  PSIZE_T FileNameSize; // [rsp+38h] [rbp-39h]
  struct _PEB *v63; // [rsp+50h] [rbp-21h]
  void *Src[2]; // [rsp+58h] [rbp-19h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+68h] [rbp-9h] BYREF
  __int128 v66; // [rsp+78h] [rbp+7h]
  __int64 v67; // [rsp+D0h] [rbp+5Fh] BYREF
  __int64 v68; // [rsp+E0h] [rbp+6Fh] BYREF

  v68 = a3;
  v5 = 0;
  LOBYTE(v68) = 0;
  v6 = a1 + 88;
  DynamicString = 0LL;
  v8 = NtCurrentPeb();
  if ( !a1 )
    v6 = 0LL;
  v9 = a4;
  v63 = v8;
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
    v60 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v60 & 0x20) != 0 )
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
    Length = a2->Length;
    if ( (unsigned int)Length >= 8 )
    {
      Buffer = a2->Buffer;
      v17 = *(_QWORD *)Buffer & 0xFFFFFFDFFFDFFFDFuLL;
      if ( v17 == 0x2D004900500041LL || v17 == 0x2D005400580045LL )
      {
        v40 = (wchar_t *)((char *)Buffer + Length);
        v41 = a2->Length;
        do
        {
          if ( v41 <= 1 )
            break;
          --v40;
          v41 -= 2;
        }
        while ( *v40 != 45 );
        if ( (unsigned __int16)v41 >> 1 )
        {
          v42 = ApiSetpSearchForApiSet(ApiSetMap);
          if ( v42 )
          {
            if ( v6 && *(_DWORD *)(v42 + 20) > 1u )
            {
              v43 = ApiSetpSearchForApiSetHost(v42, *(_QWORD *)(v6 + 8), *(_WORD *)v6 >> 1, ApiSetMap);
LABEL_57:
              v44 = *(unsigned int *)(v43 + 12);
              v5 = 1;
              v18 = *(_WORD *)(v43 + 16);
              Src[1] = (char *)ApiSetMap + v44;
              goto LABEL_13;
            }
            if ( *(_DWORD *)(v42 + 20) )
            {
              v43 = (__int64)ApiSetMap + *(unsigned int *)(v42 + 16);
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
  v22 = ApiSetpResolveHost((_DWORD)ApiSetMap, a2->Buffer, a2->Length >> 1, (_DWORD)a4, v6, (__int64)&v68, (__int64)Src);
  v18 = (unsigned __int16)Src[0];
  v19 = v22;
  v5 = v68;
  if ( v22 < 0 )
  {
LABEL_28:
    v23 = NtCurrentPeb()->SharedData;
    if ( v23 && *v23 )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( !*(_BYTE *)v11 || (NtCurrentPeb()->TracingFlags & 4) == 0 )
      goto LABEL_31;
    if ( RtlGetCurrentServiceSessionId() )
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
    if ( RtlGetCurrentServiceSessionId() )
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
      v46 = RtlDosApplyFileIsolationRedirection_Ustr(
              1u,
              a2,
              (PUNICODE_STRING)&LdrpDefaultExtension,
              0LL,
              &DynamicString,
              0LL,
              0LL,
              0LL,
              0LL);
      if ( v46 >= 0 )
      {
        v47 = a5;
        v67 = 0LL;
        LOBYTE(a5) = 0;
        v68 = 0LL;
        *v47 = 1;
        while ( 1 )
        {
          FullPathName_Ustr = (unsigned int)RtlGetFullPathName_Ustr(
                                              &DynamicString,
                                              v9->MaximumLength,
                                              v9->Buffer,
                                              &v67,
                                              &a5,
                                              &v68,
                                              NewFlags,
                                              FileNameSize);
          if ( (_BYTE)a5
            || (unsigned int)(FullPathName_Ustr - 1) > 0xFFFD
            || (_DWORD)v68 == 5 && (HIDWORD(v68) & LdrpIllegalCWDDevices) != 0 )
          {
            break;
          }
          if ( (unsigned int)FullPathName_Ustr < v9->MaximumLength )
          {
            v9->Length = FullPathName_Ustr;
            break;
          }
          Atom = (wchar_t *)RtlpAllocateAtom(FullPathName_Ustr);
          if ( !Atom )
            break;
          v50 = v9->Buffer;
          if ( &v9[1] != (_UNICODE_STRING *)v50 )
            RtlpSysVolFree(v50);
          v9[1].Length = 0;
          v9->Buffer = Atom;
          v9->Length = 0;
          v9->MaximumLength = FullPathName_Ustr;
          *Atom = 0;
        }
        if ( DynamicString.Buffer )
          RtlpSysVolFree(DynamicString.Buffer);
        return (unsigned int)v46;
      }
      if ( v46 != -1072365560 )
        return (unsigned int)v46;
    }
    return (unsigned int)v19;
  }
  if ( !v18 )
    return 3221226625LL;
  v9->Length = 0;
  v24 = NtCurrentPeb()->SharedData;
  if ( v24 && *v24 )
    v25 = (__int64)NtCurrentPeb()->SharedData + 30;
  else
    v25 = 2147352624LL;
  LOWORD(v26) = 0;
  v27 = 0;
  v66 = 0LL;
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
    v28 = v66;
  }
  if ( (_WORD)v26 )
  {
    v29 = v9->Length;
    v30 = v29 + v27 + 2;
    if ( v30 <= v9->MaximumLength )
    {
      p_Buffer = &v9->Buffer;
LABEL_42:
      memmove((char *)*p_Buffer + (unsigned __int16)v29, (const void *)v25, v28);
      v9->Length += v28;
      (*p_Buffer)[(unsigned __int64)v9->Length >> 1] = 0;
      goto LABEL_43;
    }
    if ( v30 <= 0xFFFE )
    {
      v51 = v9->Buffer;
      v52 = (v30 + 63) & 0xFFFFFFC0;
      if ( v52 > 0xFFFE )
        v52 = 65534;
      p_Buffer = &v9->Buffer;
      if ( v51 != (unsigned __int16 *)&v9[1] )
      {
        v53 = (PVOID)NtdllpReallocateStringRoutine(v52, v51);
        goto LABEL_92;
      }
      v53 = RtlpAllocateAtom(v52);
      if ( v53 )
      {
        if ( v9->Length )
        {
          memmove(v53, v9->Buffer, v9->Length);
          p_Buffer = &v9->Buffer;
          goto LABEL_114;
        }
LABEL_92:
        if ( !v53 )
          goto LABEL_43;
LABEL_114:
        LOWORD(v29) = v9->Length;
        v9->Buffer = (wchar_t *)v53;
        v9->MaximumLength = v52;
        goto LABEL_42;
      }
    }
  }
LABEL_43:
  v32 = v9->Length;
  p_MaximumLength = &v9->MaximumLength;
  if ( v32 + 22 <= (unsigned int)v9->MaximumLength )
  {
LABEL_44:
    v34 = (const void **)&v9->Buffer;
    v35 = (char *)v9->Buffer + (unsigned __int16)v32;
    *(_OWORD *)v35 = *(_OWORD *)SlashSystem32SlashString.Buffer;
    *((_DWORD *)v35 + 4) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
    v9->Length += 20;
    v9->Buffer[(unsigned __int64)v9->Length >> 1] = 0;
    goto LABEL_45;
  }
  if ( (unsigned int)(v32 + 22) <= 0xFFFE )
  {
    v54 = (v32 + 85) & 0xFFFFFFC0;
    if ( v54 > 0xFFFE )
    {
      v54 = 65534;
      p_MaximumLength = &v9->MaximumLength;
    }
    v55 = v9->Buffer;
    if ( v55 == (unsigned __int16 *)&v9[1] )
    {
      v56 = RtlpAllocateAtom(v54);
      if ( !v56 )
        goto LABEL_100;
      if ( v9->Length )
      {
        memmove(v56, v9->Buffer, v9->Length);
        p_MaximumLength = &v9->MaximumLength;
        goto LABEL_118;
      }
    }
    else
    {
      v56 = (PVOID)NtdllpReallocateStringRoutine(v54, v55);
    }
    if ( !v56 )
      goto LABEL_100;
LABEL_118:
    LOWORD(v32) = v9->Length;
    v9->Buffer = (wchar_t *)v56;
    v9->MaximumLength = v54;
    goto LABEL_44;
  }
LABEL_100:
  v34 = (const void **)&v9->Buffer;
LABEL_45:
  v36 = v9->Length;
  v37 = v36 + v18 + 2;
  if ( v37 <= *p_MaximumLength )
  {
LABEL_46:
    memmove((char *)*v34 + (unsigned __int16)v36, Src[1], v18);
    v9->Length += v18;
    *((_WORD *)*v34 + ((unsigned __int64)v9->Length >> 1)) = 0;
    ProcessParameters = v63->ProcessParameters;
    if ( ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0 )
    {
      v39 = 1;
      a2 = v9;
      v19 = 0;
    }
    else
    {
      v39 = 0;
      a2 = v9;
      v19 = 0;
    }
    goto LABEL_73;
  }
  if ( v37 <= 0xFFFE )
  {
    v57 = (v37 + 63) & 0xFFFFFFC0;
    if ( v57 > 0xFFFE )
    {
      v57 = 65534;
      v34 = (const void **)&v9->Buffer;
    }
    v58 = v34;
    if ( *v34 == &v9[1] )
    {
      v59 = RtlpAllocateAtom(v57);
      if ( !v59 )
        return 3221225495LL;
      if ( v9->Length )
      {
        memmove(v59, *v34, v9->Length);
        v34 = (const void **)&v9->Buffer;
        goto LABEL_122;
      }
    }
    else
    {
      v59 = (PVOID)NtdllpReallocateStringRoutine(v57, (PVOID)*v34);
    }
    if ( !v59 )
      return 3221225495LL;
LABEL_122:
    LOWORD(v36) = v9->Length;
    *v58 = v59;
    v9->MaximumLength = v57;
    goto LABEL_46;
  }
  return 3221225734LL;
}
