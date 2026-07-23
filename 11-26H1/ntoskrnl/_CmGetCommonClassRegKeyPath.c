/*
 * XREFs of _CmGetCommonClassRegKeyPath @ 0x1409620B0
 * Callers:
 *     _CmDeleteCommonClassRegKeyWorker @ 0x14089CA4C (_CmDeleteCommonClassRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140953200 (PiDqGetRelativeObjectRegPath.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140960FE0 (_CmOpenCommonClassRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     PnpIsValidGuidString @ 0x140963020 (PnpIsValidGuidString.c)
 */

__int64 __fastcall CmGetCommonClassRegKeyPath(
        __int64 a1,
        const WCHAR *a2,
        __int16 a3,
        int a4,
        __int64 a5,
        wchar_t *pszDest,
        unsigned int cchDest,
        _DWORD *a8)
{
  int v11; // esi
  char IsValidGuidString; // al
  int v13; // ecx
  const wchar_t *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  GUID Guid; // [rsp+60h] [rbp-48h] BYREF

  if ( (a3 & 0x60) == 0x60 )
    return (unsigned int)-1073741811;
  if ( (unsigned __int8)a3 == 32 )
  {
    v11 = 2;
    DestinationString = 0LL;
    Guid = 0LL;
    IsValidGuidString = RtlInitUnicodeStringEx(&DestinationString, a2) >= 0
                     && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
                     && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
      return (unsigned int)-1073741811;
    v11 = 4;
    IsValidGuidString = PnpIsValidGuidString(a2);
  }
  v13 = 0;
  if ( !IsValidGuidString )
    v13 = -1073741773;
  if ( v13 >= 0 )
  {
    v14 = L"System\\CurrentControlSet\\Control\\Class";
    if ( v11 != 2 )
      v14 = L"System\\CurrentControlSet\\Control\\DeviceClasses";
    if ( (a3 & 0x200) == 0 )
    {
      v15 = -1LL;
      v16 = -1LL;
      do
        ++v16;
      while ( v14[v16] );
      v17 = v16 + 1;
      if ( a2 )
      {
        do
          ++v15;
        while ( a2[v15] );
        v17 += v15 + 1;
      }
      if ( v17 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
        *a8 = v17;
      if ( (unsigned int)v17 <= cchDest )
      {
        if ( a2 )
          return (unsigned int)RtlStringCchPrintfExW(pszDest, cchDest, 0LL, 0LL, 0x800u, L"%s\\%s", v14, a2);
        return (unsigned int)RtlStringCchPrintfExW(pszDest, cchDest, 0LL, 0LL, 0x800u, L"%s", v14);
      }
      return (unsigned int)-1073741789;
    }
    if ( !a4 )
    {
      v20 = -1LL;
      v21 = -1LL;
      do
        ++v21;
      while ( v14[v21] );
      v23 = v21 + 52;
      if ( a2 )
      {
        do
          ++v20;
        while ( a2[v20] );
        v23 += v20 + 1;
      }
      if ( v23 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
        *a8 = v23;
      if ( (unsigned int)v23 <= cchDest )
      {
        if ( !a2 )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                                 v14);
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               cchDest,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%s\\%s",
                               L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                               v14,
                               a2);
      }
      return (unsigned int)-1073741789;
    }
    if ( a4 != -1 )
    {
      v24 = -1LL;
      v25 = -1LL;
      do
        ++v25;
      while ( v14[v25] );
      v26 = v25 + 49;
      if ( a2 )
      {
        do
          ++v24;
        while ( a2[v24] );
        v26 += v24 + 1;
      }
      if ( v26 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      if ( a8 )
        *a8 = v26;
      if ( (unsigned int)v26 <= cchDest )
      {
        if ( a2 )
          return (unsigned int)RtlStringCchPrintfExW(
                                 pszDest,
                                 cchDest,
                                 0LL,
                                 0LL,
                                 0x800u,
                                 L"%s\\%04u\\%s\\%s",
                                 L"System\\CurrentControlSet\\Hardware Profiles",
                                 a4,
                                 v14,
                                 a2);
        return (unsigned int)RtlStringCchPrintfExW(
                               pszDest,
                               cchDest,
                               0LL,
                               0LL,
                               0x800u,
                               L"%s\\%04u\\%s",
                               L"System\\CurrentControlSet\\Hardware Profiles",
                               a4,
                               v14);
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v13;
}
