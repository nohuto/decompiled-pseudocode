/*
 * XREFs of GetOverlayFilePathUsingChecksum @ 0x1800327F0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x180035170 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x180032AC0 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlGetNtSystemRoot @ 0x180032E30 (RtlGetNtSystemRoot.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800331CC (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x180033318 (_GetOverlayPackagePathFromKey.c)
 *     _BuildCumulativeOverlayFilePath @ 0x1800333EC (_BuildCumulativeOverlayFilePath.c)
 *     _IsProgramFilesPath @ 0x18009AF84 (_IsProgramFilesPath.c)
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x1800E5DE4 (_StartPathWithLongPathPrefixIfNeeded.c)
 *     _AppendStandardOverlayFilePath @ 0x1800E5E58 (_AppendStandardOverlayFilePath.c)
 *     _wcsnicmp @ 0x180129080 (_wcsnicmp.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall GetOverlayFilePathUsingChecksum(
        __int64 a1,
        const wchar_t *a2,
        wchar_t *a3,
        __int64 a4,
        unsigned int *a5,
        wchar_t *Destination)
{
  __int64 result; // rax
  const wchar_t *NtSystemRoot; // rax
  __int64 v10; // rdi
  size_t v11; // rbx
  wchar_t *v12; // r14
  wchar_t v13; // cx
  wchar_t *Source; // rsi
  wchar_t *v15; // rbx
  unsigned int v16; // r14d
  int OverlayPackageKeyForLanguage; // ebp
  int OverlayPackagePathFromKey; // eax
  int started; // r8d
  __int64 v20; // rax
  int v21; // eax
  int v22; // edi
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  rsize_t v27; // rdx
  HANDLE Handle; // [rsp+50h] [rbp-348h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-340h] BYREF
  int v30; // [rsp+5Ch] [rbp-33Ch] BYREF
  __int64 v31; // [rsp+60h] [rbp-338h] BYREF
  wchar_t *String1; // [rsp+68h] [rbp-330h]
  __int64 v33; // [rsp+70h] [rbp-328h]
  char v34; // [rsp+80h] [rbp-318h] BYREF

  v33 = a4;
  v31 = 46006272LL;
  String1 = (wchar_t *)&v34;
  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  result = RtlAppendUnicodeToString((unsigned __int16 *)&v31, a2);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741789 )
      return 3221225659LL;
  }
  else
  {
    Handle = 0LL;
    NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
    v10 = -1LL;
    v11 = -1LL;
    do
      ++v11;
    while ( NtSystemRoot[v11] );
    v12 = String1;
    if ( wcsnicmp(String1, NtSystemRoot, v11) )
    {
      if ( (int)IsProgramFilesPath(v12) < 0 )
        return 3221225659LL;
      v13 = aProgramFiles[0];
      Source = L"\\Program Files";
      v11 = (size_t)Handle;
    }
    else
    {
      v13 = aWindows[0];
      Source = (wchar_t *)L"\\Windows";
    }
    v15 = &v12[v11];
    result = 0LL;
    if ( v13 != 92 || *v15 != 92 )
      result = 3221225659LL;
    if ( (int)result >= 0 )
    {
      v16 = *a5;
      v29 = *a5;
      v30 = 0;
      if ( Destination && v16 >= 2 )
        *Destination = 0;
      Handle = 0LL;
      OverlayPackageKeyForLanguage = GetOverlayPackageKeyForLanguage(a1, &Handle);
      if ( OverlayPackageKeyForLanguage >= 0 )
      {
        OverlayPackageKeyForLanguage = GetOverlayPackageTypeFromKey(Handle, &v30);
        if ( OverlayPackageKeyForLanguage >= 0 )
        {
          OverlayPackagePathFromKey = GetOverlayPackagePathFromKey(Handle, &v29, Destination);
          v16 = v29;
          OverlayPackageKeyForLanguage = OverlayPackagePathFromKey;
        }
        if ( Handle )
          NtClose(Handle);
      }
      started = -1073741789;
      if ( OverlayPackageKeyForLanguage < 0 )
      {
        if ( Destination && *a5 >= 2 )
          *Destination = 0;
        if ( OverlayPackageKeyForLanguage != -1073741789 )
          return (unsigned int)OverlayPackageKeyForLanguage;
      }
      v20 = -1LL;
      do
        ++v20;
      while ( v15[v20] );
      v21 = 2 * v20;
      do
        ++v10;
      while ( Source[v10] );
      v22 = 2 * v10;
      if ( (v30 & 1) != 0 && v33 && a3 )
      {
        return (unsigned int)BuildCumulativeOverlayFilePath(v16, Source, a3, v33, (__int64)a5, Destination);
      }
      else
      {
        v24 = v22 + v21;
        v25 = *a5;
        v26 = v16 + v24;
        v27 = v26 + 8;
        if ( v26 < 0x208 )
          v27 = v26;
        *a5 = v27;
        if ( (unsigned int)v27 > v25 )
          return (unsigned int)started;
        started = StartPathWithLongPathPrefixIfNeeded(v16, v27, Destination);
        if ( started < 0 )
          return (unsigned int)started;
        return (unsigned int)AppendStandardOverlayFilePath(v15, Source);
      }
    }
  }
  return result;
}
