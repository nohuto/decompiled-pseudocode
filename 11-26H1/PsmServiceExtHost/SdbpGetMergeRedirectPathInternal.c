/*
 * XREFs of SdbpGetMergeRedirectPathInternal @ 0x18008E830
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x18008D65C (SdbGetMergeRedirectPath.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchLengthW @ 0x18008D2FC (RtlStringCchLengthW.c)
 *     SdbpGetFileTimestamp @ 0x18008E114 (SdbpGetFileTimestamp.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x18008E3FC (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeSdbsSupported @ 0x18008F10C (SdbpGetMergeSdbsSupported.c)
 *     SdbpSafeAllocAndConcatW @ 0x18008F4D0 (SdbpSafeAllocAndConcatW.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslRegistryGetKey @ 0x180098F30 (AslRegistryGetKey.c)
 *     AslRegistryGetString @ 0x180099048 (AslRegistryGetString.c)
 *     AslRegistryGetUInt32 @ 0x18009922C (AslRegistryGetUInt32.c)
 *     AslPathGetFileNamePart @ 0x18009F158 (AslPathGetFileNamePart.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetMergeRedirectPathInternal(const WCHAR **a1, _DWORD *a2, int a3, unsigned __int64 a4)
{
  int v7; // r14d
  int v8; // edi
  const WCHAR *v9; // r15
  signed int LastError; // ebx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  DWORD FullPathNameW; // eax
  DWORD v15; // edi
  WCHAR *Heap; // rax
  WCHAR *v17; // r14
  const WCHAR *v18; // rdi
  __int64 FileNamePart; // rax
  const wchar_t *v20; // r14
  const wchar_t *i; // rdi
  int v22; // eax
  unsigned __int64 v23; // r15
  int v24; // eax
  const wchar_t *v25; // rdi
  int Key; // eax
  char *v27; // r13
  const char *v28; // r9
  __int64 v29; // r8
  wchar_t *v30; // rbx
  unsigned int v31; // edi
  int v32; // eax
  int v33; // eax
  int FileTimestamp; // eax
  __int64 v35; // r8
  const char *v36; // r9
  unsigned __int64 v37; // rax
  int v38; // eax
  __int64 v39; // [rsp+20h] [rbp-89h]
  __int64 v40; // [rsp+20h] [rbp-89h]
  const WCHAR *v41; // [rsp+30h] [rbp-79h] BYREF
  const WCHAR *v42; // [rsp+38h] [rbp-71h]
  unsigned int v43; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-65h] BYREF
  int v45; // [rsp+48h] [rbp-61h]
  wchar_t *String1; // [rsp+50h] [rbp-59h] BYREF
  const WCHAR *v47; // [rsp+58h] [rbp-51h] BYREF
  __int64 v48; // [rsp+60h] [rbp-49h] BYREF
  const wchar_t *v49; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v50; // [rsp+70h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v52; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v53; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v54; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v55; // [rsp+98h] [rbp-11h] BYREF
  WCHAR *v56; // [rsp+A0h] [rbp-9h]
  const WCHAR **v57; // [rsp+A8h] [rbp-1h]
  wchar_t String2[12]; // [rsp+B0h] [rbp+7h] BYREF

  v45 = a3;
  v7 = 0;
  v57 = a1;
  v8 = 0;
  v43 = 0;
  v9 = 0LL;
  Handle = 0LL;
  String1 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  v44 = 0;
  v56 = 0LL;
  v42 = 0LL;
  v47 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v53 = 0LL;
  v41 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  wcscpy(String2, L"\\AppPatch\\");
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( a2 && a3 )
    *a2 = 0;
  LastError = -1073741772;
  if ( (unsigned int)SdbpGetMergeSdbsSupported() )
  {
    v12 = -1LL;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(a4 + 2 * v13) );
    if ( v13 > 3 && *(_WORD *)(a4 + 2) == 58 && *(_WORD *)(a4 + 4) == 92 )
      v7 = 1;
    do
      ++v12;
    while ( *(_WORD *)(a4 + 2 * v12) );
    if ( v12 > 1 && *(_WORD *)a4 == 92 )
      v8 = 1;
    if ( !v7 && !v8 )
    {
      FullPathNameW = GetFullPathNameW((LPCWSTR)a4, 0, 0LL, 0LL);
      v15 = FullPathNameW;
      if ( !FullPathNameW )
      {
        if ( (int)GetLastError() > 0 )
          LastError = (unsigned __int16)GetLastError() | 0xC0070000;
        else
          LastError = GetLastError();
        if ( LastError >= 0 )
          LastError = -1073741595;
        AslLogCallPrintf(
          1LL,
          "SdbpGetMergeRedirectPathInternal",
          1794LL,
          "Failed to get full path size [%x]",
          LastError);
        return (unsigned int)LastError;
      }
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * FullPathNameW);
      v56 = Heap;
      v17 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      if ( !GetFullPathNameW((LPCWSTR)a4, v15, Heap, 0LL) )
      {
        if ( (int)GetLastError() > 0 )
          LastError = (unsigned __int16)GetLastError() | 0xC0070000;
        else
          LastError = GetLastError();
        if ( LastError >= 0 )
          LastError = -1073741595;
        AslLogCallPrintf(1LL, "SdbpGetMergeRedirectPathInternal", 1808LL, "Failed to get full path [%x]", LastError);
        v18 = v41;
LABEL_47:
        AslFree(NtCurrentPeb()->ProcessHeap, v17);
LABEL_48:
        if ( String1 )
          AslFree(NtCurrentPeb()->ProcessHeap, String1);
        if ( v9 )
          AslFree(NtCurrentPeb()->ProcessHeap, v9);
        if ( v18 )
          AslFree(NtCurrentPeb()->ProcessHeap, v18);
        if ( v48 )
          AslFree(NtCurrentPeb()->ProcessHeap, v48);
        if ( v49 )
          AslFree(NtCurrentPeb()->ProcessHeap, v49);
        return (unsigned int)LastError;
      }
      a4 = (unsigned __int64)v17;
    }
    FileNamePart = AslPathGetFileNamePart(a4);
    v20 = (const wchar_t *)FileNamePart;
    if ( FileNamePart == a4 )
    {
LABEL_45:
      v18 = v41;
LABEL_46:
      v17 = v56;
      if ( !v56 )
        goto LABEL_48;
      goto LABEL_47;
    }
    for ( i = (const wchar_t *)(FileNamePart - 4); ; --i )
    {
      if ( (unsigned __int64)i < a4 )
        goto LABEL_45;
      if ( (*i == 92 || *i == 47) && !_wcsnicmp(i, String2, 0xAuLL) )
        break;
    }
    v22 = RtlStringCchLengthW((__int64)v20, 0x7FFFFFFFLL, &v50);
    LastError = v22;
    if ( v22 < 0 )
    {
      AslLogCallPrintf(1LL, "SdbpGetMergeRedirectPathInternal", 1844LL, "RtlStringCchLengthW failed [%x]", v22);
      goto LABEL_45;
    }
    v23 = v50;
    if ( a3 )
    {
      v24 = SdbpSafeAllocAndConcatW((unsigned int)&v49, (unsigned int)L"StagedDelete_", 13, (_DWORD)v20, v50);
      LastError = v24;
      if ( v24 < 0 )
      {
        AslLogCallPrintf(
          1LL,
          "SdbpGetMergeRedirectPathInternal",
          1856LL,
          "Failed to alloc and cat file to prefix [%x]",
          v24);
        v9 = v42;
        goto LABEL_45;
      }
      v25 = v49;
    }
    else
    {
      v25 = v20;
    }
    Key = AslRegistryGetKey(
            &Handle,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
            2147483904LL);
    v27 = (char *)Handle;
    LastError = Key;
    if ( Key < 0 )
    {
      if ( Key != -1073741772 )
      {
        v28 = "AslRegistryGetKey failed to open SdbUpdates key [%x]";
        v29 = 1873LL;
        goto LABEL_67;
      }
LABEL_69:
      v9 = v42;
LABEL_70:
      v18 = v41;
      goto LABEL_71;
    }
    LastError = AslRegistryGetString(&String1, Handle, v25);
    if ( LastError < 0 )
      goto LABEL_69;
    v30 = String1;
    if ( !_wcsicmp(String1, v20) )
    {
      LastError = -1073741772;
      goto LABEL_69;
    }
    if ( v45 && !_wcsicmp(v30, L"__NotRedirected__") && a2 )
    {
      *a2 = 1;
      LastError = 0;
      goto LABEL_69;
    }
    Key = SdbpSafeAllocAndConcatW((unsigned int)&v48, (unsigned int)L"MergeVer_", 9, (_DWORD)v25, 0LL);
    LastError = Key;
    if ( Key < 0 )
    {
      v28 = "Failed to alloc and cat file to prefix [%x]";
      v29 = 1907LL;
      goto LABEL_67;
    }
    Key = AslRegistryGetUInt32(&v44, v27, v48);
    LastError = Key;
    if ( Key == -1073741772 )
    {
      v31 = 0;
    }
    else
    {
      if ( Key < 0 )
      {
        v28 = "Failed to query reg value. [%x]";
        v29 = 1916LL;
        goto LABEL_67;
      }
      v31 = v44;
    }
    Key = AslRegistryGetUInt32(&v43, v27, L"MergeVer");
    LastError = Key;
    if ( Key < 0 )
    {
      v28 = "Failed to query reg value. [%x]";
      v29 = 1922LL;
      goto LABEL_67;
    }
    if ( v43 < v31 )
      AslLogCallPrintf(
        1LL,
        "SdbpGetMergeRedirectPathInternal",
        1931LL,
        "Merge target is too high of a version, this code might not handle it correctly.");
    Key = AslRegistryGetUInt32(&v43, v27, L"MinMergeVer");
    LastError = Key;
    if ( Key < 0 )
    {
      v28 = "Failed to query reg value. [%x]";
      v29 = 1937LL;
LABEL_67:
      LODWORD(v39) = Key;
      AslLogCallPrintf(1LL, "SdbpGetMergeRedirectPathInternal", v29, v28, v39);
      goto LABEL_69;
    }
    if ( v31 < v43 )
      AslLogCallPrintf(
        1LL,
        "SdbpGetMergeRedirectPathInternal",
        1946LL,
        "Merge target is too low of a version, it might not be possible to handle correctly.");
    v32 = RtlStringCchLengthW(a4, 0x7FFFFFFFLL, &v52);
    LastError = v32;
    if ( v32 < 0 )
    {
      LODWORD(v39) = v32;
      AslLogCallPrintf(1LL, "SdbpGetMergeRedirectPathInternal", 1953LL, "RtlStringCchLengthW failed [%x]", v39);
      goto LABEL_69;
    }
    if ( v52 < v23 )
    {
      LastError = -1073741675;
      LODWORD(v39) = -1073741675;
      AslLogCallPrintf(1LL, "SdbpGetMergeRedirectPathInternal", 1960LL, "RtlSizeTSub failed [%x]", v39);
      goto LABEL_69;
    }
    v33 = SdbpSafeAllocAndConcatW((unsigned int)&v47, a4, (int)v52 - (int)v23, (_DWORD)String1, 0LL);
    LastError = v33;
    if ( v33 < 0 )
    {
      AslLogCallPrintf(
        1LL,
        "SdbpGetMergeRedirectPathInternal",
        1970LL,
        "Failed to alloc and cat file to prefix [%x]",
        v33);
      v9 = v47;
      goto LABEL_70;
    }
    v9 = v47;
    FileTimestamp = SdbpGetFileTimestamp(&v54, v47, 1);
    LastError = FileTimestamp;
    if ( FileTimestamp >= 0 )
    {
      FileTimestamp = SdbpGetFileTimestamp(&v55, (const WCHAR *)a4, 0);
      LastError = FileTimestamp;
      if ( FileTimestamp >= 0 )
      {
        FileTimestamp = SdbpGetManifestedMergeStubAlloc(&v41, v20);
        LastError = FileTimestamp;
        if ( FileTimestamp == -1073741772 )
        {
          v18 = v41;
          v37 = 0LL;
        }
        else
        {
          if ( FileTimestamp < 0 )
          {
            v36 = "Failed to get manifested stub [%x]";
            v35 = 2006LL;
            goto LABEL_104;
          }
          v18 = v41;
          v38 = SdbpGetFileTimestamp(&v53, v41, 0);
          LastError = v38;
          if ( v38 < 0 )
          {
            AslLogCallPrintf(1LL, "SdbpGetMergeRedirectPathInternal", 2016LL, "Failed to check timestamp [%x]", v38);
LABEL_71:
            if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              ZwClose(v27);
            goto LABEL_46;
          }
          v37 = v53;
        }
        if ( v54 < v55 || v54 < v37 )
        {
          LastError = -1073741772;
        }
        else
        {
          *v57 = v9;
          if ( a2 && v45 )
            *a2 = 1;
          v9 = 0LL;
          LastError = 0;
        }
        goto LABEL_71;
      }
      v35 = 1992LL;
    }
    else
    {
      if ( FileTimestamp == -1073741772 )
        goto LABEL_70;
      v35 = 1981LL;
    }
    v36 = "Failed to check timestamp [%x]";
LABEL_104:
    LODWORD(v40) = FileTimestamp;
    AslLogCallPrintf(1LL, "SdbpGetMergeRedirectPathInternal", v35, v36, v40);
    goto LABEL_70;
  }
  return (unsigned int)LastError;
}
