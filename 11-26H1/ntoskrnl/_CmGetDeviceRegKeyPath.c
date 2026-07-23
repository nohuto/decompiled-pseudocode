/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x140954D90
 * Callers:
 *     PiDqGetRelativeObjectRegPath @ 0x140953200 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A3D94C (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x14095335C (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140956880 (_CmGetDeviceSoftwareKeyPath.c)
 */

NTSTATUS __fastcall CmGetDeviceRegKeyPath(
        int a1,
        unsigned __int16 *a2,
        int a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _DWORD *a8)
{
  __int64 v8; // r10
  int v10; // r11d
  int v11; // ebx
  __int64 v12; // rcx
  _WORD *i; // rax
  __int64 v14; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  size_t v20; // rcx
  const wchar_t *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  ULONG dwFlags; // [rsp+20h] [rbp-38h]
  size_t v29; // [rsp+30h] [rbp-28h]

  v8 = (__int64)a2;
  if ( !a3 )
    return -1073741811;
  if ( (a3 & 0xFFFFFCE8) != 0 )
    return -1073741811;
  v10 = 0;
  v11 = 1;
  if ( !a2 )
    return -1073741811;
  v12 = 200LL;
  for ( i = a2; *i; ++i )
  {
    if ( !--v12 )
      return -1073741773;
  }
  while ( 1 )
  {
    v14 = *a2;
    if ( !(_WORD)v14 )
      break;
    if ( (unsigned __int16)(v14 - 33) > 0x5Eu || (_WORD)v14 == 44 )
      return -1073741773;
    if ( (_WORD)v14 == 92 )
    {
      if ( !v10 )
        return -1073741773;
      v10 = 0;
      ++v11;
      ++a2;
    }
    else
    {
      ++v10;
      ++a2;
    }
  }
  if ( !v10 || v11 != 3 )
    return -1073741773;
  if ( (unsigned __int8)a3 != 16 )
  {
    switch ( (unsigned __int8)a3 )
    {
      case 0x12u:
        LODWORD(v29) = cchDest;
        return CmGetDeviceSoftwareKeyPath(a1, v8, a3, a4, a5, pszDest, v29, (__int64)a8);
      case 0x11u:
        LODWORD(v29) = cchDest;
        return CmGetDeviceHardwareKeyPath(v14, v8, a3, a4, dwFlags, pszDest, v29, a8);
      case 0x13u:
        if ( (a3 & 0xFFFFFFEC) != 0 )
          return -1073741811;
        v22 = -1LL;
        do
          ++v22;
        while ( *(_WORD *)(v8 + 2 * v22) );
        v23 = v22 + 39;
        if ( v23 > 0xFFFFFFFF )
          return -1073741675;
        if ( a8 )
          *a8 = v23;
        v20 = (unsigned int)cchDest;
        if ( (unsigned int)v23 > (unsigned int)cchDest )
          return -1073741789;
        v21 = L"Control";
        break;
      default:
        if ( (unsigned __int8)a3 != 20 || (a3 & 0xFFFFFFEB) != 0 )
          return -1073741811;
        v18 = -1LL;
        do
          ++v18;
        while ( *(_WORD *)(v8 + 2 * v18) );
        v19 = v18 + 39;
        if ( v19 > 0xFFFFFFFF )
          return -1073741675;
        if ( a8 )
          *a8 = v19;
        v20 = (unsigned int)cchDest;
        if ( (unsigned int)v19 > (unsigned int)cchDest )
          return -1073741789;
        v21 = L"LogConf";
        break;
    }
    return RtlStringCchPrintfExW(
             pszDest,
             v20,
             0LL,
             0LL,
             0x800u,
             L"%s\\%s\\%s",
             L"System\\CurrentControlSet\\Enum",
             v8,
             v21);
  }
  if ( (a3 & 0x200) == 0 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(v8 + 2 * v16) );
    v17 = v16 + 31;
    if ( v17 > 0xFFFFFFFF )
      return -1073741675;
    if ( a8 )
      *a8 = v17;
    if ( (unsigned int)v17 <= (unsigned int)cchDest )
      return RtlStringCchPrintfExW(
               pszDest,
               (unsigned int)cchDest,
               0LL,
               0LL,
               0x800u,
               L"%s\\%s",
               L"System\\CurrentControlSet\\Enum",
               v8);
    return -1073741789;
  }
  if ( !a4 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_WORD *)(v8 + 2 * v24) );
    v25 = v24 + 82;
    if ( v25 > 0xFFFFFFFF )
      return -1073741675;
    if ( a8 )
      *a8 = v25;
    if ( (unsigned int)v25 <= (unsigned int)cchDest )
      return RtlStringCchPrintfExW(
               pszDest,
               (unsigned int)cchDest,
               0LL,
               0LL,
               0x800u,
               L"%s\\%s\\%s",
               L"System\\CurrentControlSet\\Hardware Profiles\\Current",
               L"System\\CurrentControlSet\\Enum",
               v8);
    return -1073741789;
  }
  if ( a4 == -1 )
    return -1073741811;
  v26 = -1LL;
  do
    ++v26;
  while ( *(_WORD *)(v8 + 2 * v26) );
  v27 = v26 + 79;
  if ( v27 > 0xFFFFFFFF )
    return -1073741675;
  if ( a8 )
    *a8 = v27;
  if ( (unsigned int)v27 > (unsigned int)cchDest )
    return -1073741789;
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
           v8);
}
