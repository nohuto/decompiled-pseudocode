/*
 * XREFs of _CmGetDeviceHardwareKeyPath @ 0x14095335C
 * Callers:
 *     _CmGetDeviceRegKeyPath @ 0x140954D90 (_CmGetDeviceRegKeyPath.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140957750 (_CmOpenDeviceRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 */

NTSTATUS __fastcall CmGetDeviceHardwareKeyPath(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        int a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  int v8; // r8d
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax

  if ( (a3 & 0x200) != 0 )
  {
    if ( a4 )
    {
      if ( a4 == -1 )
        return -1073741811;
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(a2 + 2 * v15) );
      v16 = v15 + 79;
      if ( v16 > 0xFFFFFFFF )
        return -1073741675;
      if ( a8 )
        *a8 = v16;
      if ( (unsigned int)v16 <= (unsigned int)cchDest )
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%04u\\%s\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles",
                 a4,
                 L"System\\CurrentControlSet\\Enum",
                 a2);
    }
    else
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(a2 + 2 * v13) );
      v14 = v13 + 82;
      if ( v14 > 0xFFFFFFFF )
        return -1073741675;
      if ( a8 )
        *a8 = v14;
      if ( (unsigned int)v14 <= (unsigned int)cchDest )
        return RtlStringCchPrintfExW(
                 pszDest,
                 (unsigned int)cchDest,
                 0LL,
                 0LL,
                 0x800u,
                 L"%s\\%s\\%s",
                 L"System\\CurrentControlSet\\Hardware Profiles\\Current",
                 L"System\\CurrentControlSet\\Enum",
                 a2);
    }
    return -1073741789;
  }
  v8 = a3 & 0x100;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)(a2 + 2 * v9) );
  if ( v8 )
  {
    v12 = v9 + 31;
    if ( v12 > 0xFFFFFFFF )
      return -1073741675;
    if ( a8 )
      *a8 = v12;
    if ( (unsigned int)v12 <= (unsigned int)cchDest )
      return RtlStringCchPrintfExW(
               pszDest,
               (unsigned int)cchDest,
               0LL,
               0LL,
               0x800u,
               L"%s\\%s",
               L"System\\CurrentControlSet\\Enum",
               a2);
    return -1073741789;
  }
  v10 = v9 + 49;
  if ( v10 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v10;
  if ( (unsigned int)v10 > (unsigned int)cchDest )
    return -1073741789;
  return RtlStringCchPrintfExW(
           pszDest,
           (unsigned int)cchDest,
           0LL,
           0LL,
           0x800u,
           L"%s\\%s\\%s",
           L"System\\CurrentControlSet\\Enum",
           a2,
           L"Device Parameters");
}
