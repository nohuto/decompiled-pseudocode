/*
 * XREFs of SdbpGetMergeRedirectPathInternal @ 0x140887904
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x140886EF0 (SdbGetMergeRedirectPath.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1404509C0 (RtlStringCchLengthW.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     SdbpGetFileTimestamp @ 0x140887374 (SdbpGetFileTimestamp.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140887580 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpSafeAllocAndConcatW @ 0x140887F80 (SdbpSafeAllocAndConcatW.c)
 *     AslRegistryGetString @ 0x14088E7F0 (AslRegistryGetString.c)
 *     AslPathGetFileNamePart @ 0x14088FAA0 (AslPathGetFileNamePart.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslRegistryGetKey @ 0x140B32A38 (AslRegistryGetKey.c)
 *     AslRegistryGetUInt32 @ 0x140B32C48 (AslRegistryGetUInt32.c)
 */

__int64 __fastcall SdbpGetMergeRedirectPathInternal(const WCHAR **a1, _DWORD *a2, int a3, const wchar_t *a4)
{
  const WCHAR *v7; // r13
  const wchar_t *v8; // rdi
  int String; // ebx
  __int64 FileNamePart; // rax
  HANDLE v12; // rcx
  const wchar_t *v13; // r15
  const wchar_t *i; // rdi
  const char *v15; // r9
  int v16; // r8d
  const WCHAR *v17; // r14
  const wchar_t *v18; // rdi
  int Key; // eax
  const char *v20; // r9
  int v21; // r8d
  HANDLE v22; // rdi
  int UInt32; // eax
  unsigned int v24; // r14d
  const WCHAR *v25; // r14
  int FileTimestamp; // eax
  int ManifestedMergeStubAlloc; // eax
  unsigned __int64 v28; // rax
  const WCHAR *v29; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-71h] BYREF
  const wchar_t *v31; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  wchar_t *Str1; // [rsp+58h] [rbp-51h] BYREF
  int v35; // [rsp+60h] [rbp-49h]
  size_t pcchLength; // [rsp+68h] [rbp-41h] BYREF
  const WCHAR *v37; // [rsp+70h] [rbp-39h] BYREF
  __int64 v38; // [rsp+78h] [rbp-31h] BYREF
  size_t v39; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v41; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-11h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+A0h] [rbp-9h]
  const WCHAR **v44; // [rsp+A8h] [rbp-1h]
  wchar_t Str2[12]; // [rsp+B0h] [rbp+7h] BYREF

  psz = a4;
  v7 = 0LL;
  v35 = a3;
  v8 = 0LL;
  v44 = a1;
  v30 = 0;
  Handle = 0LL;
  Str1 = 0LL;
  v39 = 0LL;
  pcchLength = 0LL;
  v32 = 0;
  v37 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v29 = 0LL;
  v38 = 0LL;
  v31 = 0LL;
  wcscpy(Str2, L"\\AppPatch\\");
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( a2 && a3 )
    *a2 = 0;
  String = -1073741772;
  FileNamePart = AslPathGetFileNamePart(a4);
  v13 = (const wchar_t *)FileNamePart;
  if ( (const wchar_t *)FileNamePart != a4 )
  {
    for ( i = (const wchar_t *)(FileNamePart - 4); ; --i )
    {
      if ( i < a4 )
        goto LABEL_16;
      v12 = (HANDLE)*i;
      if ( ((_WORD)v12 == 92 || (_WORD)v12 == 47) && !wcsnicmp(i, Str2, 0xAuLL) )
        break;
    }
    String = RtlStringCchLengthW(v13, 0x7FFFFFFFuLL, &pcchLength);
    if ( String < 0 )
    {
      v15 = "RtlStringCchLengthW failed [%x]";
      v16 = 1844;
LABEL_15:
      AslLogCallPrintf(1, (unsigned int)"SdbpGetMergeRedirectPathInternal", v16, (_DWORD)v15);
LABEL_16:
      v8 = v31;
      goto LABEL_17;
    }
    if ( a3 )
    {
      String = SdbpSafeAllocAndConcatW(&v31, L"StagedDelete_", 13LL, v13, pcchLength);
      if ( String < 0 )
      {
        v15 = "Failed to alloc and cat file to prefix [%x]";
        v16 = 1856;
        goto LABEL_15;
      }
      v18 = v31;
    }
    else
    {
      v18 = v13;
    }
    Key = AslRegistryGetKey(
            &Handle,
            L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
            2147483904LL,
            1LL);
    String = Key;
    if ( Key >= 0 )
    {
      String = AslRegistryGetString(&Str1, Handle, v18);
      if ( String >= 0 )
      {
        if ( wcsicmp(Str1, v13) )
        {
          if ( a3 && !wcsicmp(Str1, L"__NotRedirected__") && a2 )
          {
            *a2 = 1;
            String = 0;
          }
          else
          {
            String = SdbpSafeAllocAndConcatW(&v38, L"MergeVer_", 9LL, v18, 0LL);
            if ( String < 0 )
            {
              v20 = "Failed to alloc and cat file to prefix [%x]";
              v21 = 1907;
              goto LABEL_84;
            }
            v22 = Handle;
            UInt32 = AslRegistryGetUInt32(&v32, Handle, v38);
            String = UInt32;
            if ( UInt32 == -1073741772 )
            {
              v24 = 0;
            }
            else
            {
              if ( UInt32 < 0 )
              {
                v20 = "Failed to query reg value. [%x]";
                v21 = 1916;
                goto LABEL_84;
              }
              v24 = v32;
            }
            String = AslRegistryGetUInt32(&v30, v22, L"MergeVer");
            if ( String < 0 )
            {
              v20 = "Failed to query reg value. [%x]";
              v21 = 1922;
              goto LABEL_84;
            }
            if ( v30 < v24 )
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbpGetMergeRedirectPathInternal",
                1931,
                (unsigned int)"Merge target is too high of a version, this code might not handle it correctly.");
            String = AslRegistryGetUInt32(&v30, Handle, L"MinMergeVer");
            if ( String < 0 )
            {
              v20 = "Failed to query reg value. [%x]";
              v21 = 1937;
              goto LABEL_84;
            }
            if ( v24 < v30 )
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbpGetMergeRedirectPathInternal",
                1946,
                (unsigned int)"Merge target is too low of a version, it might not be possible to handle correctly.");
            v25 = psz;
            String = RtlStringCchLengthW(psz, 0x7FFFFFFFuLL, &v39);
            if ( String < 0 )
            {
              v20 = "RtlStringCchLengthW failed [%x]";
              v21 = 1953;
              goto LABEL_84;
            }
            if ( v39 < pcchLength )
            {
              String = -1073741675;
              v20 = "RtlSizeTSub failed [%x]";
              v21 = 1960;
              goto LABEL_84;
            }
            String = SdbpSafeAllocAndConcatW(&v37, v25, v39 - pcchLength, Str1, 0LL);
            if ( String >= 0 )
            {
              v7 = v37;
              FileTimestamp = SdbpGetFileTimestamp(&v41, v37, 1);
              String = FileTimestamp;
              if ( FileTimestamp >= 0 )
              {
                String = SdbpGetFileTimestamp(&v42, v25, 0);
                if ( String >= 0 )
                {
                  ManifestedMergeStubAlloc = SdbpGetManifestedMergeStubAlloc(&v29, v13);
                  String = ManifestedMergeStubAlloc;
                  if ( ManifestedMergeStubAlloc == -1073741772 )
                  {
                    v17 = v29;
                    v28 = 0LL;
                  }
                  else
                  {
                    if ( ManifestedMergeStubAlloc < 0 )
                    {
                      v20 = "Failed to get manifested stub [%x]";
                      v21 = 2006;
                      goto LABEL_84;
                    }
                    v17 = v29;
                    String = SdbpGetFileTimestamp(&v40, v29, 0);
                    if ( String < 0 )
                    {
                      AslLogCallPrintf(
                        1,
                        (unsigned int)"SdbpGetMergeRedirectPathInternal",
                        2016,
                        (unsigned int)"Failed to check timestamp [%x]");
LABEL_86:
                      v12 = Handle;
                      if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                        ZwClose(Handle);
                      v8 = v31;
                      goto LABEL_18;
                    }
                    v28 = v40;
                  }
                  if ( v41 < v42 || v41 < v28 )
                  {
                    String = -1073741772;
                  }
                  else
                  {
                    *v44 = v7;
                    if ( a2 && v35 )
                      *a2 = 1;
                    v7 = 0LL;
                    String = 0;
                  }
                  goto LABEL_86;
                }
                v20 = "Failed to check timestamp [%x]";
                v21 = 1992;
LABEL_84:
                AslLogCallPrintf(1, (unsigned int)"SdbpGetMergeRedirectPathInternal", v21, (_DWORD)v20);
                goto LABEL_85;
              }
              if ( FileTimestamp != -1073741772 )
              {
                v20 = "Failed to check timestamp [%x]";
                v21 = 1981;
                goto LABEL_84;
              }
            }
            else
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbpGetMergeRedirectPathInternal",
                1970,
                (unsigned int)"Failed to alloc and cat file to prefix [%x]");
              v7 = v37;
            }
          }
        }
        else
        {
          String = -1073741772;
        }
      }
    }
    else if ( Key != -1073741772 )
    {
      v20 = "AslRegistryGetKey failed to open SdbUpdates key [%x]";
      v21 = 1873;
      goto LABEL_84;
    }
LABEL_85:
    v17 = v29;
    goto LABEL_86;
  }
LABEL_17:
  v17 = v29;
LABEL_18:
  if ( Str1 )
    AslFree(v12, Str1);
  if ( v7 )
    AslFree(v12, v7);
  if ( v17 )
    AslFree(v12, v17);
  if ( v38 )
    AslFree(v12, v38);
  if ( v8 )
    AslFree(v12, v8);
  return (unsigned int)String;
}
