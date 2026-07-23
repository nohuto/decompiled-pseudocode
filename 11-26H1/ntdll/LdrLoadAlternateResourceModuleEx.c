/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x18001B390
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180019070 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 *     LdrLoadAlternateResourceModule @ 0x1800E2E40 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800175C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpGetFromMUIMemCache @ 0x180018D20 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetRcConfig @ 0x180018F20 (LdrpGetRcConfig.c)
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     LdrpQuerySxSMUIFile @ 0x18001D5D8 (LdrpQuerySxSMUIFile.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18001D950 (GetOverlayFilePathUsingChecksum.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlLcidToLocaleName @ 0x1800515E0 (RtlLcidToLocaleName.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x180090D68 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpMapResourceFile @ 0x1800A4CE0 (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A601C (LdrpVerifyAlternateResourceModuleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     LdrpGetLoadAsEntry @ 0x1800C37FC (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x1800C38D0 (LdrFindEntryForAddress.c)
 *     LdrpGetFileDriverStoreRoot @ 0x1800DC68C (LdrpGetFileDriverStoreRoot.c)
 *     LdrpCnvrtShortToLongFileName @ 0x180113BA8 (LdrpCnvrtShortToLongFileName.c)
 *     __report_rangecheckfailure @ 0x1801268D0 (__report_rangecheckfailure.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     wcsrchr @ 0x18012DCE0 (wcsrchr.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  LCID v7; // edi
  const wchar_t *Buffer; // r15
  struct _ACTIVATION_CONTEXT *EntryPointActivationContext; // r12
  _DWORD *v11; // rax
  ULONG v13; // eax
  PVOID Heap_0; // r15
  NTSTATUS v15; // r15d
  __int64 v16; // rax
  ULONG_PTR v17; // r8
  wchar_t *v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  PVOID v22; // rax
  wchar_t *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // eax
  int v26; // ecx
  unsigned __int64 v27; // rcx
  unsigned int v28; // eax
  __int16 v29; // ax
  size_t v30; // rax
  unsigned __int16 v31; // cx
  const wchar_t *v32; // rdx
  PCWSTR v33; // r15
  size_t v34; // rax
  unsigned __int16 v35; // dx
  unsigned __int64 v36; // r15
  size_t v37; // r8
  const wchar_t *v38; // rdx
  int v39; // r15d
  char v40; // dl
  unsigned __int16 v41; // r15
  unsigned __int16 MaximumLength; // r12
  size_t v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int16 v45; // ax
  size_t v46; // rax
  unsigned __int16 v47; // dx
  unsigned __int64 v48; // r12
  __int64 v49; // rdx
  _DWORD *RcConfig; // rax
  int OverlayFilePathUsingChecksum; // r15d
  wchar_t *v52; // r12
  size_t v53; // rax
  __int64 v54; // rcx
  PVOID v55; // rcx
  size_t v56; // rax
  __int64 v57; // rax
  wchar_t *i; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  size_t v63; // rax
  unsigned __int16 v64; // dx
  __int64 v65; // r15
  size_t v66; // rdx
  __int64 v67; // rax
  unsigned __int16 v68; // r15
  __int64 v69; // rax
  size_t v70; // rax
  unsigned __int16 v71; // r15
  PVOID v72; // rax
  wchar_t *v73; // rax
  __int64 v74; // rax
  PLDR_DATA_TABLE_ENTRY v75; // r12
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  unsigned __int8 v79; // [rsp+40h] [rbp-AE8h]
  unsigned int v80; // [rsp+48h] [rbp-AE0h]
  unsigned int v81; // [rsp+48h] [rbp-AE0h]
  PVOID v82; // [rsp+48h] [rbp-AE0h]
  unsigned int Length; // [rsp+50h] [rbp-AD8h]
  unsigned __int16 v84; // [rsp+50h] [rbp-AD8h]
  ULONG_PTR ReturnLength; // [rsp+58h] [rbp-AD0h] BYREF
  size_t Size; // [rsp+60h] [rbp-AC8h]
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-AC0h] BYREF
  PVOID v88; // [rsp+78h] [rbp-AB0h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-AA8h] BYREF
  PVOID v90; // [rsp+88h] [rbp-AA0h] BYREF
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+90h] [rbp-A98h] BYREF
  wchar_t *String; // [rsp+98h] [rbp-A90h]
  PCWSTR Source[2]; // [rsp+A0h] [rbp-A88h] BYREF
  void *v94; // [rsp+B0h] [rbp-A78h]
  _UNICODE_STRING LocaleName; // [rsp+B8h] [rbp-A70h] BYREF
  int v96; // [rsp+C8h] [rbp-A60h]
  int v97; // [rsp+CCh] [rbp-A5Ch]
  HANDLE v98; // [rsp+D0h] [rbp-A58h] BYREF
  ULONG v99; // [rsp+D8h] [rbp-A50h]
  _QWORD v100[2]; // [rsp+E0h] [rbp-A48h] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp-A38h]
  PVOID v102; // [rsp+F8h] [rbp-A30h] BYREF
  PUNICODE_STRING v103; // [rsp+100h] [rbp-A28h] BYREF
  PVOID v104; // [rsp+108h] [rbp-A20h]
  __int128 v105; // [rsp+110h] [rbp-A18h]
  wchar_t *v106[2]; // [rsp+120h] [rbp-A08h] BYREF
  __int128 v107; // [rsp+130h] [rbp-9F8h]
  __int128 v108; // [rsp+140h] [rbp-9E8h]
  _QWORD v109[2]; // [rsp+150h] [rbp-9D8h] BYREF
  __int128 v110; // [rsp+160h] [rbp-9C8h]
  __int128 v111; // [rsp+170h] [rbp-9B8h]
  __int128 v112; // [rsp+180h] [rbp-9A8h]
  __int64 v113; // [rsp+190h] [rbp-998h]
  __int128 v114; // [rsp+1A0h] [rbp-988h] BYREF
  wchar_t Str[352]; // [rsp+1B0h] [rbp-978h] BYREF
  char v116; // [rsp+470h] [rbp-6B8h] BYREF
  _WORD v117[352]; // [rsp+4B0h] [rbp-678h] BYREF
  char v118; // [rsp+770h] [rbp-3B8h] BYREF
  wchar_t v119[352]; // [rsp+820h] [rbp-308h] BYREF

  v7 = LanguageId;
  v98 = 0LL;
  Destination = 0LL;
  v80 = 0;
  Buffer = 0LL;
  Length = 0;
  v104 = 0LL;
  v88 = 0LL;
  v105 = 0LL;
  v114 = 0LL;
  v103 = 0LL;
  v109[0] = 72LL;
  v109[1] = 1LL;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v79 = 0;
  v102 = 0LL;
  BaseAddress = 0LL;
  EntryPointActivationContext = 0LL;
  v100[0] = 0LL;
  String = v119;
  LODWORD(Handle) = 702;
  v96 = 1;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v11 = LdrpGetFromMUIMemCache((unsigned __int64)DllHandle, LanguageId, &v88, 4);
  if ( v11 == (_DWORD *)-1LL )
  {
    v13 = Flags & 0x400000;
    v99 = Flags & 0x400000;
    if ( (Flags & 0x400000) == 0 )
    {
      *ResourceDllBase = 0LL;
      return -1073020922;
    }
  }
  else
  {
    if ( v11 )
    {
      *ResourceDllBase = v11;
      if ( ResourceOffset )
        *ResourceOffset = (ULONG_PTR)v88;
      v97 = 0;
      return 0;
    }
    v13 = Flags & 0x400000;
    v99 = Flags & 0x400000;
  }
  v94 = 0LL;
  if ( v13 )
    goto LABEL_14;
  Entry = 0LL;
  *(_OWORD *)v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  if ( ((unsigned __int8)DllHandle & 3) == 0 )
  {
    LODWORD(ReturnLength) = LdrFindEntryForAddress(DllHandle, &Entry);
    if ( (ReturnLength & 0x80000000) == 0LL )
    {
      v25 = Entry->FullDllName.Length - Entry->BaseDllName.Length;
      v80 = v25;
      if ( v25 > Entry->FullDllName.Length || v25 >= 0x2BE )
        goto LABEL_30;
      v75 = Entry;
      memmove(Str, Entry->FullDllName.Buffer, v25);
      Buffer = v75->BaseDllName.Buffer;
      Length = v75->BaseDllName.Length;
      EntryPointActivationContext = v75->EntryPointActivationContext;
      v100[0] = EntryPointActivationContext;
    }
    goto LABEL_209;
  }
  LODWORD(ReturnLength) = LdrpGetLoadAsEntry(DllHandle, v106);
  if ( (ReturnLength & 0x80000000) != 0LL )
  {
LABEL_209:
    v26 = ReturnLength;
    goto LABEL_33;
  }
  v23 = wcsrchr(v106[1], 0x5Cu);
  if ( v23 )
  {
    Buffer = v23 + 1;
    v24 = -1LL;
    do
      ++v24;
    while ( Buffer[v24] );
    Length = 2 * v24;
    v25 = 2 * (Buffer - v106[1]);
    v80 = v25;
    if ( v25 >= 0x2BE )
    {
LABEL_30:
      v26 = -2147483643;
      goto LABEL_34;
    }
    memmove(Str, v106[1], v25);
    v26 = ReturnLength;
    if ( *((_QWORD *)&v108 + 1) != -1LL )
    {
      EntryPointActivationContext = (struct _ACTIVATION_CONTEXT *)*((_QWORD *)&v108 + 1);
      v100[0] = *((_QWORD *)&v108 + 1);
    }
  }
  else
  {
    v26 = -1073741767;
  }
LABEL_33:
  v25 = v80;
LABEL_34:
  if ( v26 >= 0 )
    goto LABEL_35;
LABEL_14:
  ReturnLength = 0LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x2BEuLL);
  v90 = Heap_0;
  if ( !Heap_0 )
  {
LABEL_23:
    v15 = -1073741801;
    goto LABEL_198;
  }
  v15 = ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          DllHandle,
          MemoryMappedFilenameInformation,
          Heap_0,
          0x2BEuLL,
          &ReturnLength);
  if ( v15 >= 0 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(*((_QWORD *)v90 + 1) + 2 * v16) );
    v17 = 2 * v16 + 2;
    ReturnLength = v17;
    if ( v17 >= 0x2BE )
    {
      v15 = -2147483643;
      goto LABEL_198;
    }
    memmove(Str, *((const void **)v90 + 1), v17);
    v18 = wcsrchr(Str, 0x5Cu);
    if ( !v18 )
    {
      v15 = -1073741767;
      goto LABEL_198;
    }
    v19 = v18 + 1;
    Source[0] = v18 + 1;
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = (unsigned int)(2 * v20);
    LODWORD(Entry) = v21;
    Size = v21 + 2;
    v22 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v21 + 2);
    BaseAddress = v22;
    if ( v22 )
    {
      memmove(v22, Source[0], Size);
      Length = (unsigned int)Entry;
      v80 = 2 * (Source[0] - Str);
      v79 = 1;
      goto LABEL_198;
    }
    goto LABEL_23;
  }
LABEL_198:
  if ( v90 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v90);
  if ( v15 < 0 )
    goto LABEL_182;
  Buffer = (const wchar_t *)BaseAddress;
  v25 = v80;
LABEL_35:
  v27 = v25 & 0xFFFFFFFE;
  if ( v27 >= 0x2BE )
    _report_rangecheckfailure();
  *(wchar_t *)((char *)Str + v27) = 0;
  if ( wcsrchr(Buffer, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Str, Buffer, &v102) >= 0 )
  {
    Buffer = (const wchar_t *)v102;
    v74 = -1LL;
    do
      ++v74;
    while ( *((_WORD *)v102 + v74) );
    v28 = 2 * v74;
    LOWORD(Length) = v28;
  }
  else
  {
    v28 = Length;
  }
  *(_OWORD *)Source = 0LL;
  *(_QWORD *)&LocaleName.Length = 0LL;
  LocaleName.Buffer = 0LL;
  *((_QWORD *)&v105 + 1) = v117;
  LODWORD(v105) = 46006272;
  if ( (unsigned __int64)v28 + 12 > 0x3C )
  {
    v72 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v28 + 10);
    v104 = v72;
    if ( !v72 )
    {
      v15 = -1073741801;
      goto LABEL_182;
    }
    Source[1] = (PCWSTR)v72;
    v29 = 2 * (Length + 5);
  }
  else
  {
    Source[1] = (PCWSTR)&v116;
    v29 = 60;
  }
  WORD1(Source[0]) = v29;
  v84 = v29;
  LOWORD(Source[0]) = 0;
  if ( !Buffer )
    goto LABEL_48;
  v30 = wcslen(Buffer);
  if ( v30 > 0x7FFE )
    v31 = 0;
  else
    v31 = 2 * v30;
  LOWORD(ReturnLength) = v31;
  if ( v30 > 0x7FFE )
  {
    v15 = -1073741789;
  }
  else
  {
    LODWORD(Entry) = v31;
    if ( v31 <= (unsigned int)v84 )
    {
      Size = v31;
      v32 = Buffer;
      v33 = Source[1];
      memmove((void *)Source[1], v32, v31);
      LOWORD(Source[0]) = ReturnLength;
      if ( (int)Entry + 1 < (unsigned int)v84 )
        v33[Size >> 1] = 0;
LABEL_48:
      v15 = 0;
      goto LABEL_49;
    }
    v15 = -1073741789;
  }
LABEL_49:
  if ( v15 < 0 )
  {
LABEL_182:
    v55 = v88;
    v82 = v88;
    v52 = String;
    goto LABEL_111;
  }
  LODWORD(Entry) = Flags & 0x1000000;
  if ( (Flags & 0x1000000) != 0 )
  {
    v63 = wcslen(L".mun");
    if ( v63 > 0x7FFE )
      v64 = 0;
    else
      v64 = 2 * v63;
    LOWORD(ReturnLength) = v64;
    if ( v63 > 0x7FFE )
    {
      v15 = -1073741789;
      goto LABEL_59;
    }
    v36 = LOWORD(Source[0]);
    if ( LOWORD(Source[0]) + (unsigned int)v64 > v84 )
    {
      v15 = -1073741789;
      goto LABEL_59;
    }
    v37 = v64;
    v38 = L".mun";
  }
  else
  {
    v34 = wcslen(L".mui");
    if ( v34 > 0x7FFE )
      v35 = 0;
    else
      v35 = 2 * v34;
    LOWORD(ReturnLength) = v35;
    if ( v34 > 0x7FFE )
    {
      v15 = -1073741789;
      goto LABEL_59;
    }
    v36 = LOWORD(Source[0]);
    if ( LOWORD(Source[0]) + (unsigned int)v35 > v84 )
    {
      v15 = -1073741789;
      goto LABEL_59;
    }
    v37 = v35;
    v38 = L".mui";
  }
  Size = (size_t)&Source[1][v36 >> 1];
  memmove((void *)Size, v38, v37);
  LOWORD(Source[0]) = ReturnLength + v36;
  if ( (unsigned int)(unsigned __int16)(ReturnLength + v36) + 1 < v84 )
    *(_WORD *)(Size + 2 * ((unsigned __int64)(unsigned __int16)ReturnLength >> 1)) = 0;
  v15 = 0;
LABEL_59:
  if ( v15 < 0 )
    goto LABEL_182;
  if ( EntryPointActivationContext )
    RtlActivateActivationContextUnsafeFast(v109, EntryPointActivationContext);
  v39 = LdrpQuerySxSMUIFile((PUNICODE_STRING)Source, &v103);
  if ( EntryPointActivationContext )
    RtlDeactivateActivationContextUnsafeFast(v109);
  if ( v39 < 0 )
  {
    v40 = 0;
  }
  else
  {
    v40 = 1;
    Destination.Buffer = v103->Buffer;
    Destination.Length = v103->Length;
    Destination.MaximumLength = v103->MaximumLength;
  }
  if ( v40 )
  {
    v96 = 0;
    goto LABEL_146;
  }
  Destination.Buffer = v117;
  v41 = 0;
  *(_DWORD *)&Destination.Length = 46006272;
  MaximumLength = 702;
  if ( !(_DWORD)Entry )
  {
    v43 = wcslen(Str);
    v44 = v43;
    if ( v43 > 0x7FFE )
      v45 = 0;
    else
      v45 = 2 * v43;
    LOWORD(ReturnLength) = v45;
    if ( v44 <= 0x7FFE && v45 <= 0x2BEu )
    {
      Size = v45;
      memmove(v117, Str, v45);
      v41 = ReturnLength;
      Destination.Length = ReturnLength;
      if ( (unsigned int)(unsigned __int16)ReturnLength + 1 < 0x2BE )
        v117[Size >> 1] = 0;
    }
    goto LABEL_74;
  }
  v57 = -1LL;
  do
    ++v57;
  while ( Str[v57] );
  for ( i = &Str[(unsigned int)v57 - 2]; i > Str; --i )
  {
    if ( *i == 92 )
      break;
  }
  if ( i > Str )
  {
    i[1] = 0;
    v70 = wcslen(Str);
    if ( v70 > 0x7FFE )
      v71 = 0;
    else
      v71 = 2 * v70;
    if ( v70 <= 0x7FFE && v71 <= 0x2BEu )
    {
      memmove(v117, Str, v71);
      Destination.Length = v71;
      if ( (unsigned int)v71 + 1 < 0x2BE )
        v117[(unsigned __int64)v71 >> 1] = 0;
    }
    RtlAppendUnicodeToString(&Destination, L"SystemResources\\");
    MaximumLength = Destination.MaximumLength;
    v41 = Destination.Length;
LABEL_74:
    if ( !(_DWORD)Entry )
    {
      LocaleName.Buffer = (wchar_t *)&v118;
      LocaleName.MaximumLength = 170;
      if ( RtlLcidToLocaleName(v7, &LocaleName, 2u, 0) < 0 )
      {
        v15 = -1073741811;
        v55 = v88;
        v82 = v88;
        v52 = String;
        goto LABEL_111;
      }
      if ( LocaleName.Length )
      {
        if ( LocaleName.Length + (unsigned int)v41 <= MaximumLength )
        {
          Size = (size_t)&Destination.Buffer[(unsigned __int64)v41 >> 1];
          memmove((void *)Size, LocaleName.Buffer, LocaleName.Length);
          v41 += LocaleName.Length;
          Destination.Length = v41;
          if ( (unsigned int)v41 + 1 < MaximumLength )
            *(_WORD *)(Size + 2 * ((unsigned __int64)LocaleName.Length >> 1)) = 0;
        }
      }
      v46 = wcslen(L"\\");
      if ( v46 > 0x7FFE )
        v47 = 0;
      else
        v47 = 2 * v46;
      LOWORD(ReturnLength) = v47;
      if ( v46 <= 0x7FFE )
      {
        v81 = MaximumLength;
        if ( v41 + (unsigned int)v47 <= MaximumLength )
        {
          Size = (size_t)&Destination.Buffer[(unsigned __int64)v41 >> 1];
          v48 = v47;
          memmove((void *)Size, L"\\", v47);
          Destination.Length = ReturnLength + v41;
          if ( (unsigned int)(unsigned __int16)(ReturnLength + v41) + 1 < v81 )
            *(_WORD *)(Size + 2 * (v48 >> 1)) = 0;
        }
      }
    }
    RtlAppendUnicodeToString(&Destination, Source[1]);
    if ( !(_DWORD)Entry )
    {
      RcConfig = LdrpGetRcConfig(DllHandle, v49, 0, 1);
      if ( RcConfig )
      {
        Size = (size_t)(RcConfig + 7);
        OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(LocaleName.Buffer, (__int64)&Handle, v119);
        if ( OverlayFilePathUsingChecksum == -1073741789 )
        {
          v73 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Handle);
          v52 = v73;
          String = v73;
          if ( v73 )
            OverlayFilePathUsingChecksum = GetOverlayFilePathUsingChecksum(LocaleName.Buffer, (__int64)&Handle, v73);
        }
        else
        {
          v52 = String;
        }
        if ( OverlayFilePathUsingChecksum < 0 )
          goto LABEL_147;
        v100[0] = 0LL;
        v100[1] = v52;
        if ( v52 )
        {
          v53 = wcslen(v52);
          if ( v53 > 0x7FFE )
            goto LABEL_147;
          LOWORD(v100[0]) = 2 * v53;
          WORD1(v100[0]) = 2 * v53 + 2;
        }
        Handle = 0LL;
        v88 = 0LL;
        v90 = 0LL;
        v82 = 0LL;
        if ( RtlGetCurrentServiceSessionId() )
          v54 = (__int64)NtCurrentPeb()->SharedData + 555;
        else
          v54 = 2147353477LL;
        if ( (*(_BYTE *)v54 & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v77 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v77 = 2147353476LL;
          LdrpTraceLoadMUIDll(v100, *(unsigned __int8 *)v77);
        }
        v15 = LdrpMapResourceFile(
                (_DWORD)DllHandle,
                (unsigned int)v100,
                v79,
                (unsigned int)&Handle,
                (__int64)&v88,
                (__int64)&v90);
        if ( v15 >= 0 )
        {
          Size = (unsigned __int64)v88 | 1;
          if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(
                                  DllHandle,
                                  (unsigned __int64)v88 | 1,
                                  v100,
                                  LocaleName.Buffer,
                                  Flags,
                                  2) )
          {
            v98 = Handle;
            v55 = v90;
            v82 = v90;
            v94 = (void *)Size;
LABEL_100:
            if ( v15 >= 0 )
            {
              *(_QWORD *)&Destination.Length = 0LL;
              Destination.Buffer = v52;
              if ( v52 )
              {
                v56 = wcslen(v52);
                v55 = v82;
                if ( v56 <= 0x7FFE )
                {
                  Destination.Length = 2 * v56;
                  Destination.MaximumLength = 2 * v56 + 2;
                }
              }
              goto LABEL_111;
            }
            if ( v15 != -1073741772 && v15 != -1073741766 )
              LdrpLogMapAndVerifyResourceFileFailure(v15, (unsigned int)v100, v79, Flags, (__int64)&LocaleName);
LABEL_147:
            v65 = 2147353477LL;
            Handle = 0LL;
            v88 = 0LL;
            v90 = 0LL;
            v98 = 0LL;
            v82 = 0LL;
            v94 = 0LL;
            if ( RtlGetCurrentServiceSessionId() )
              v65 = (__int64)NtCurrentPeb()->SharedData + 555;
            if ( (*(_BYTE *)v65 & 1) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v76 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v76 = 2147353476LL;
              LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v76);
            }
            v15 = LdrpMapResourceFile(
                    (_DWORD)DllHandle,
                    (unsigned int)&Destination,
                    v79,
                    (unsigned int)&Handle,
                    (__int64)&v88,
                    (__int64)&v90);
            if ( v15 >= 0 )
            {
              Size = (unsigned __int64)v88 | 1;
              if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(
                                      DllHandle,
                                      (unsigned __int64)v88 | 1,
                                      &Destination,
                                      LocaleName.Buffer,
                                      Flags,
                                      v96) )
              {
                v98 = Handle;
                v55 = v90;
                v82 = v90;
                v66 = Size;
                v94 = (void *)Size;
LABEL_153:
                if ( (_DWORD)Entry || v15 != -1073741772 && v15 != -1073741766 )
                  goto LABEL_111;
                if ( (unsigned __int8)LdrpGetFileDriverStoreRoot(Str, v66, v117) )
                {
                  Destination.Buffer = v117;
                  v67 = -1LL;
                  do
                    ++v67;
                  while ( v117[v67] );
                  Destination.Length = 2 * v67;
                  Destination.MaximumLength = 702;
                  RtlAppendUnicodeToString(&Destination, L"\\");
                  if ( LocaleName.Length )
                  {
                    v68 = Destination.Length;
                    if ( Destination.Length + (unsigned int)LocaleName.Length <= Destination.MaximumLength )
                    {
                      Size = (size_t)&Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
                      memmove((void *)Size, LocaleName.Buffer, LocaleName.Length);
                      Destination.Length = LocaleName.Length + v68;
                      if ( (unsigned int)(unsigned __int16)(LocaleName.Length + v68) + 1 < Destination.MaximumLength )
                        *(_WORD *)(Size + 2 * ((unsigned __int64)LocaleName.Length >> 1)) = 0;
                    }
                  }
                  RtlAppendUnicodeToString(&Destination, L"\\");
                  RtlAppendUnicodeToString(&Destination, Source[1]);
                  Handle = 0LL;
                  v88 = 0LL;
                  v90 = 0LL;
                  v98 = 0LL;
                  v82 = 0LL;
                  v94 = 0LL;
                  if ( RtlGetCurrentServiceSessionId() )
                    v69 = (__int64)NtCurrentPeb()->SharedData + 555;
                  else
                    v69 = 2147353477LL;
                  if ( (*(_BYTE *)v69 & 1) != 0 )
                  {
                    if ( RtlGetCurrentServiceSessionId() )
                      v78 = (__int64)NtCurrentPeb()->SharedData + 554;
                    else
                      v78 = 2147353476LL;
                    LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v78);
                  }
                  v15 = LdrpMapResourceFile(
                          (_DWORD)DllHandle,
                          (unsigned int)&Destination,
                          v79,
                          (unsigned int)&Handle,
                          (__int64)&v88,
                          (__int64)&v90);
                  if ( v15 >= 0 )
                  {
                    Size = (unsigned __int64)v88 | 1;
                    if ( (unsigned __int8)LdrpVerifyAlternateResourceModuleEx(
                                            DllHandle,
                                            (unsigned __int64)v88 | 1,
                                            &Destination,
                                            LocaleName.Buffer,
                                            Flags,
                                            v96) )
                    {
                      v98 = Handle;
                      v55 = v90;
                      v82 = v90;
                      v94 = (void *)Size;
                      goto LABEL_111;
                    }
                    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v88);
                    NtClose(Handle);
                    v15 = -1073020926;
                  }
                }
                v55 = v82;
                goto LABEL_111;
              }
              NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v88);
              NtClose(Handle);
              v15 = -1073020926;
            }
            v55 = 0LL;
            goto LABEL_153;
          }
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v88);
          NtClose(Handle);
          v15 = -1073020926;
        }
        v55 = 0LL;
        goto LABEL_100;
      }
    }
LABEL_146:
    v52 = String;
    goto LABEL_147;
  }
  v15 = -1073741686;
  v55 = v88;
  v82 = v88;
  v52 = String;
LABEL_111:
  v59 = (__int64)v94;
  if ( !v94 )
    v59 = -1LL;
  v94 = (void *)v59;
  v90 = (PVOID)v59;
  if ( v15 != -1073741659 && v15 != -1073741801 && v15 != -1073741523 )
  {
    v60 = 33;
    if ( !v99 )
      v60 = 1;
    LdrpSetAlternateResourceModuleHandle((__int64)DllHandle, &v90, &v98, 0LL, v7, v60, v15, (__int64)v55);
    v59 = (__int64)v90;
    v94 = v90;
  }
  if ( v59 == -1 )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v61 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v61 = 2147353477LL;
    if ( (*(_BYTE *)v61 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v62 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v62 = 2147353476LL;
      LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v62);
    }
    *ResourceDllBase = v94;
    if ( ResourceOffset )
      *ResourceOffset = (ULONG_PTR)v82;
    v15 = 0;
    v97 = 0;
  }
  if ( BaseAddress )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v102 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v102);
  if ( v104 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v104);
  if ( v52 && v119 != v52 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v52);
  return v15;
}
