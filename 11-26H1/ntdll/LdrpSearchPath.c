/*
 * XREFs of LdrpSearchPath @ 0x180098BBC
 * Callers:
 *     LdrpFindLoadedDll @ 0x180051680 (LdrpFindLoadedDll.c)
 *     LdrpFindLoadedDllInternal @ 0x180085670 (LdrpFindLoadedDllInternal.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x180075F50 (RtlCopyUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180083D00 (RtlCompareUnicodeStrings.c)
 *     LdrpResolveDllName @ 0x180084BE0 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x180099220 (LdrpAllocateUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18009985C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpComputeLazyDllPath @ 0x180099A0C (LdrpComputeLazyDllPath.c)
 *     EtwEventWriteNoRegistration @ 0x1800CE520 (EtwEventWriteNoRegistration.c)
 *     RtlpLookupSafeCurDirList @ 0x180106064 (RtlpLookupSafeCurDirList.c)
 *     LdrpSaveLocationsSearched @ 0x18010BB8C (LdrpSaveLocationsSearched.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSearchPath(
        const void **ArgList,
        __int16 **a2,
        char a3,
        __int16 **a4,
        _WORD *a5,
        __int64 a6,
        unsigned __int16 *a7,
        bool *a8,
        __int64 a9)
{
  char v10; // si
  const void **v12; // rbx
  unsigned __int16 *v13; // r13
  unsigned int v14; // r8d
  __int16 *v15; // rdx
  __int16 *i; // rcx
  __int16 v17; // ax
  int v18; // r9d
  __int16 v19; // ax
  int UnicodeString; // eax
  __int64 v21; // r9
  int v22; // ebx
  _WORD *v23; // rdx
  __int16 *v24; // r14
  __int16 *v25; // rdi
  __int64 v26; // r8
  __int16 v27; // cx
  _WORD *v28; // rax
  bool v29; // si
  unsigned __int16 *v30; // r15
  bool *v31; // rcx
  __int64 v32; // rsi
  int v34; // eax
  __int64 v35; // rcx
  __int16 **v36; // r15
  __int64 *v37; // rax
  __int64 *v38; // r15
  __int64 *j; // rsi
  unsigned __int16 v40; // cx
  int v41; // eax
  __int64 Heap_0; // rax
  int v43; // eax
  void *v44; // rdx
  char v46[16]; // [rsp+40h] [rbp-89h] BYREF
  const void **v47; // [rsp+50h] [rbp-79h]
  _WORD *v48; // [rsp+58h] [rbp-71h]
  __int64 v49; // [rsp+68h] [rbp-61h]
  _WORD *v50; // [rsp+70h] [rbp-59h]
  __int16 **v51; // [rsp+78h] [rbp-51h]
  bool *v52; // [rsp+80h] [rbp-49h]
  __int64 v53; // [rsp+88h] [rbp-41h]
  __int64 v54; // [rsp+90h] [rbp-39h] BYREF
  int v55; // [rsp+98h] [rbp-31h]
  int v56; // [rsp+9Ch] [rbp-2Dh]
  __int64 v57; // [rsp+A0h] [rbp-29h]
  int v58; // [rsp+A8h] [rbp-21h]
  int v59; // [rsp+ACh] [rbp-1Dh]
  __int64 v60; // [rsp+B0h] [rbp-19h]
  int v61; // [rsp+B8h] [rbp-11h]
  int v62; // [rsp+BCh] [rbp-Dh]

  v48 = a5;
  v10 = a3;
  v12 = ArgList;
  v49 = a6;
  v52 = a8;
  v13 = 0LL;
  v53 = a9;
  v51 = a4;
  v47 = ArgList;
  *(_OWORD *)v46 = 0LL;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1212, (__int64)"LdrpSearchPath", 3, "DLL name: %wZ\n", ArgList);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1213, (__int64)"LdrpSearchPath", 5, "%wZ\n", v12);
  if ( !*a2 )
  {
    v22 = LdrpComputeLazyDllPath(a2);
    if ( v22 < 0 )
      goto LABEL_37;
    v12 = v47;
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
  UnicodeString = LdrpAllocateUnicodeString(v46, v14 + 2 + *(unsigned __int16 *)v12);
  v21 = 0LL;
  v22 = UnicodeString;
  if ( UnicodeString >= 0 )
  {
    v23 = *(_WORD **)&v46[8];
    v50 = *(_WORD **)&v46[8];
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
        v28 = v23;
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
        if ( v28 != v23 )
          break;
        v10 = a3;
      }
      if ( *(v28 - 1) != 92 && *(v28 - 1) != 47 )
      {
        *v28 = 92;
        LOWORD(v28) = (_WORD)v28 + 2;
      }
      *(_WORD *)v46 = (_WORD)v28 - (_WORD)v23;
      RtlAppendUnicodeStringToString((unsigned __int16 *)v46, v47);
      v30 = a7;
      v34 = LdrpResolveDllName(v46, (__int64)v48, v49, a7, 0);
      v21 = 0LL;
      v22 = v34;
      if ( v29 )
      {
        if ( v34 < 0 )
          goto LABEL_41;
        v37 = (__int64 *)RtlpLookupSafeCurDirList(v35, v23, v26, 0LL);
        v38 = v37;
        if ( v37 )
        {
          for ( j = (__int64 *)*v37; j != v38; j = (__int64 *)*j )
          {
            v40 = *((_WORD *)j + 8) >> 1;
            if ( (unsigned __int16)(*a7 >> 1) > v40 )
            {
              v41 = RtlCompareUnicodeStrings(*((unsigned __int16 **)a7 + 1), v40, (_BYTE *)j[3], v40, 1);
              v21 = 0LL;
              if ( !v41 )
                goto LABEL_31;
            }
          }
        }
        Heap_0 = RtlAllocateHeap_0();
        v21 = 0LL;
        v13 = (unsigned __int16 *)Heap_0;
        if ( Heap_0 )
        {
          *(_WORD *)Heap_0 = 0;
          *(_WORD *)(Heap_0 + 2) = *a7;
          *(_QWORD *)(Heap_0 + 8) = Heap_0 + 16;
          RtlCopyUnicodeString((unsigned __int16 *)Heap_0, a7);
          v21 = 0LL;
          *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*a7 >> 1)) = 0;
        }
LABEL_45:
        v23 = v50;
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
        || (unsigned int)RtlCompareUnicodeStrings(
                           *((unsigned __int16 **)v30 + 1),
                           (unsigned __int64)*v30 >> 1,
                           *((_BYTE **)v13 + 1),
                           (unsigned __int64)*v13 >> 1,
                           1) )
      {
        v56 = 0;
        v59 = 0;
        v54 = *(_QWORD *)(LdrpImageEntry + 80);
        v55 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
        v57 = *((_QWORD *)v13 + 1);
        v58 = *v13 + 2;
        if ( v22 >= 0 )
        {
          v60 = *((_QWORD *)v30 + 1);
          v43 = *v30;
          v62 = 0;
          v61 = v43 + 2;
        }
        v44 = &CurDirDllLoadFailureWarning;
        if ( v22 < 0 )
          v44 = &CurDirDllLoadFailureError;
        EtwEventWriteNoRegistration(&UserLoaderGuid, v44, (unsigned int)((v22 >> 31) + 3), &v54);
      }
      RtlFreeHeap_0();
    }
    v31 = *(bool **)&v46[8];
    if ( *(_QWORD *)&v46[8] )
    {
      RtlpSysVolFree(*(__int64 *)&v46[8]);
      v21 = 0LL;
      *(_QWORD *)&v46[8] = 0LL;
    }
    *(_DWORD *)v46 = 0;
    if ( v22 >= 0 )
    {
      v36 = v51;
      if ( v51 )
      {
        *v51 = v24;
        v36[1] = v25;
      }
      v31 = v52;
      if ( v52 )
        *v52 = v24 == a2[2];
    }
    v32 = v53;
    if ( v53 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled(v31, v23, v26, v21) )
      LdrpSaveLocationsSearched(a2, v25, v32);
  }
LABEL_37:
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1534, (__int64)"LdrpSearchPath", 4, "Status: 0x%08lx\n", v22);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1535, (__int64)"LdrpSearchPath", 6, "%x\n", v22);
  return (unsigned int)v22;
}
