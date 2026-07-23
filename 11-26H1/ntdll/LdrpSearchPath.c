/*
 * XREFs of LdrpSearchPath @ 0x180097CEC
 * Callers:
 *     LdrpFindLoadedDll @ 0x18003BC00 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x18007CA10 (LdrpFindLoadedDllInternal.c)
 *     LdrpMapDllSearchPath @ 0x18011C780 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x180064770 (RtlCopyUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     LdrpResolveDllName @ 0x18007BF80 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x180098350 (LdrpAllocateUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18009898C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpComputeLazyDllPath @ 0x180098B3C (LdrpComputeLazyDllPath.c)
 *     EtwEventWriteNoRegistration @ 0x1800CBC90 (EtwEventWriteNoRegistration.c)
 *     RtlpLookupSafeCurDirList @ 0x180105A64 (RtlpLookupSafeCurDirList.c)
 *     LdrpSaveLocationsSearched @ 0x18010B6DC (LdrpSaveLocationsSearched.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSearchPath(
        const UNICODE_STRING *a1,
        wchar_t **a2,
        char a3,
        wchar_t **a4,
        _WORD *a5,
        __int64 a6,
        UNICODE_STRING *a7,
        bool *a8,
        __int64 a9)
{
  char v10; // si
  PCUNICODE_STRING v12; // rbx
  PCWCH *v13; // r13
  unsigned int v14; // r8d
  wchar_t *v15; // rdx
  wchar_t *i; // rcx
  wchar_t v17; // ax
  int v18; // r9d
  wchar_t v19; // ax
  int v20; // eax
  __int64 v21; // r9
  int v22; // ebx
  wchar_t *Buffer; // rdx
  wchar_t *v24; // r14
  wchar_t *v25; // rdi
  __int64 v26; // r8
  wchar_t v27; // cx
  wchar_t *v28; // rax
  bool v29; // si
  UNICODE_STRING *v30; // r15
  wchar_t *v31; // rcx
  __int64 v32; // rsi
  int v34; // eax
  __int64 v35; // rcx
  wchar_t **v36; // r15
  __int64 *v37; // rax
  __int64 *v38; // r15
  __int64 *j; // rsi
  unsigned __int16 v40; // cx
  LONG v41; // eax
  _UNICODE_STRING *Heap_0; // rax
  int Length; // eax
  const EVENT_DESCRIPTOR *v44; // rdx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-89h] BYREF
  PCUNICODE_STRING Source; // [rsp+50h] [rbp-79h]
  _WORD *v48; // [rsp+58h] [rbp-71h]
  __int64 v49; // [rsp+68h] [rbp-61h]
  wchar_t *v50; // [rsp+70h] [rbp-59h]
  wchar_t **v51; // [rsp+78h] [rbp-51h]
  bool *v52; // [rsp+80h] [rbp-49h]
  __int64 v53; // [rsp+88h] [rbp-41h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-39h] BYREF
  PCWCH v55; // [rsp+A0h] [rbp-29h]
  int v56; // [rsp+A8h] [rbp-21h]
  int v57; // [rsp+ACh] [rbp-1Dh]
  wchar_t *v58; // [rsp+B0h] [rbp-19h]
  int v59; // [rsp+B8h] [rbp-11h]
  int v60; // [rsp+BCh] [rbp-Dh]

  v48 = a5;
  v10 = a3;
  v12 = a1;
  v49 = a6;
  v52 = a8;
  v13 = 0LL;
  v53 = a9;
  v51 = a4;
  Source = a1;
  Destination = 0LL;
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1212, (__int64)"LdrpSearchPath", 3, "DLL name: %wZ\n", a1);
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1213, (__int64)"LdrpSearchPath", 5, "%wZ\n", v12);
  if ( !*a2 )
  {
    v22 = LdrpComputeLazyDllPath(a2);
    if ( v22 < 0 )
      goto LABEL_37;
    v12 = Source;
  }
  v14 = 0;
  if ( !a4 || (v15 = *a4) == 0LL )
  {
    v15 = a2[2];
    if ( !v15 )
      goto LABEL_60;
    goto LABEL_47;
  }
  for ( i = a4[1]; ; i = v15 )
  {
    if ( *i )
    {
      do
      {
        v17 = *i;
        v18 = (int)i;
        do
        {
          if ( v17 == 59 )
            break;
          v17 = *++i;
        }
        while ( *i );
        if ( (int)i - v18 > v14 )
          v14 = (_DWORD)i - v18;
        v19 = *i;
        if ( *i == 59 )
          v19 = *++i;
      }
      while ( v19 );
    }
    if ( v15 != a2[2] || v10 )
      break;
LABEL_60:
    v15 = *a2;
LABEL_47:
    ;
  }
  v20 = LdrpAllocateUnicodeString(&Destination, v14 + 2 + v12->Length);
  v21 = 0LL;
  v22 = v20;
  if ( v20 >= 0 )
  {
    Buffer = Destination.Buffer;
    v50 = Destination.Buffer;
    if ( a4 && (v24 = *a4) != 0LL )
    {
      v25 = a4[1];
    }
    else
    {
      v24 = a2[2];
      if ( !v24 )
        v24 = *a2;
      v25 = v24;
    }
    while ( 2 )
    {
      v26 = 92LL;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v27 = *v25;
            if ( *v25 )
              break;
            if ( v24 != a2[2] || v10 )
            {
              v22 = -1073741515;
LABEL_31:
              v30 = a7;
              goto LABEL_32;
            }
            v24 = *a2;
            v25 = *a2;
          }
          if ( v27 != 59 )
            break;
          ++v25;
        }
        v28 = Buffer;
        v29 = v25 == a2[1];
        do
        {
          if ( v27 == 59 )
            break;
          ++v25;
          *v28++ = v27;
          v27 = *v25;
        }
        while ( *v25 );
        if ( *v25 == 59 )
          ++v25;
        if ( v28 != Buffer )
          break;
        v10 = a3;
      }
      if ( *(v28 - 1) != 92 && *(v28 - 1) != 47 )
      {
        *v28 = 92;
        LOWORD(v28) = (_WORD)v28 + 2;
      }
      Destination.Length = (_WORD)v28 - (_WORD)Buffer;
      RtlAppendUnicodeStringToString(&Destination, Source);
      v30 = a7;
      v34 = LdrpResolveDllName(&Destination, (__int64)v48, v49, a7, 0);
      v21 = 0LL;
      v22 = v34;
      if ( v29 )
      {
        if ( v34 < 0 )
          goto LABEL_41;
        v37 = (__int64 *)RtlpLookupSafeCurDirList(v35, Buffer, v26, 0LL);
        v38 = v37;
        if ( v37 )
        {
          for ( j = (__int64 *)*v37; j != v38; j = (__int64 *)*j )
          {
            v40 = *((_WORD *)j + 8) >> 1;
            if ( (unsigned __int16)(a7->Length >> 1) > v40 )
            {
              v41 = RtlCompareUnicodeStrings(a7->Buffer, v40, (PCWCH)j[3], v40, 1u);
              v21 = 0LL;
              if ( !v41 )
                goto LABEL_31;
            }
          }
        }
        Heap_0 = (_UNICODE_STRING *)RtlAllocateHeap_0(LdrpHeap, NtdllBaseTag + 0x40000, a7->Length + 18LL);
        v21 = 0LL;
        v13 = (PCWCH *)Heap_0;
        if ( Heap_0 )
        {
          Heap_0->Length = 0;
          Heap_0->MaximumLength = a7->Length;
          Heap_0->Buffer = &Heap_0[1].Length;
          RtlCopyUnicodeString(Heap_0, a7);
          v21 = 0LL;
          v13[1][(unsigned __int64)a7->Length >> 1] = 0;
        }
LABEL_45:
        Buffer = v50;
        v10 = a3;
        *v48 = 0;
        continue;
      }
      break;
    }
    if ( v34 >= 0 )
      goto LABEL_32;
LABEL_41:
    if ( v34 == -1073741715 || v34 == -1073741515 || v34 == -1073741790 || v34 == -1073741757 )
      goto LABEL_45;
LABEL_32:
    if ( v13 )
    {
      if ( v22 < 0
        || RtlCompareUnicodeStrings(
             v30->Buffer,
             (unsigned __int64)v30->Length >> 1,
             v13[1],
             (unsigned __int64)*(unsigned __int16 *)v13 >> 1,
             1u) )
      {
        UserData.Reserved = 0;
        v57 = 0;
        UserData.Ptr = *(_QWORD *)(LdrpImageEntry + 80);
        UserData.Size = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
        v55 = v13[1];
        v56 = *(unsigned __int16 *)v13 + 2;
        if ( v22 >= 0 )
        {
          v58 = v30->Buffer;
          Length = v30->Length;
          v60 = 0;
          v59 = Length + 2;
        }
        v44 = (const EVENT_DESCRIPTOR *)&CurDirDllLoadFailureWarning;
        if ( v22 < 0 )
          v44 = &CurDirDllLoadFailureError;
        EtwEventWriteNoRegistration(&UserLoaderGuid, v44, (v22 >> 31) + 3, &UserData);
      }
      RtlFreeHeap_0(LdrpHeap, 0, v13);
    }
    v31 = Destination.Buffer;
    if ( Destination.Buffer )
    {
      RtlpSysVolFree(Destination.Buffer);
      v21 = 0LL;
      Destination.Buffer = 0LL;
    }
    *(_DWORD *)&Destination.Length = 0;
    if ( v22 >= 0 )
    {
      v36 = v51;
      if ( v51 )
      {
        *v51 = v24;
        v36[1] = v25;
      }
      v31 = (wchar_t *)v52;
      if ( v52 )
        *v52 = v24 == a2[2];
    }
    v32 = v53;
    if ( v53 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled(v31, Buffer, v26, v21) )
      LdrpSaveLocationsSearched(a2, v25, v32);
  }
LABEL_37:
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1534, (__int64)"LdrpSearchPath", 4, "Status: 0x%08lx\n", v22);
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1535, (__int64)"LdrpSearchPath", 6, "%x\n", v22);
  return (unsigned int)v22;
}
