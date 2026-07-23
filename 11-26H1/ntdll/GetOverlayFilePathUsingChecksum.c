/*
 * XREFs of GetOverlayFilePathUsingChecksum @ 0x18001D950
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x1800202D0 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18001DC20 (_GetOverlayPackageKeyForLanguage.c)
 *     RtlGetNtSystemRoot @ 0x18001DF90 (RtlGetNtSystemRoot.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18001E32C (_GetOverlayPackageTypeFromKey.c)
 *     _GetOverlayPackagePathFromKey @ 0x18001E478 (_GetOverlayPackagePathFromKey.c)
 *     _BuildCumulativeOverlayFilePath @ 0x18001E54C (_BuildCumulativeOverlayFilePath.c)
 *     _IsProgramFilesPath @ 0x18009A0B4 (_IsProgramFilesPath.c)
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x1800E3FF4 (_StartPathWithLongPathPrefixIfNeeded.c)
 *     _AppendStandardOverlayFilePath @ 0x1800E4068 (_AppendStandardOverlayFilePath.c)
 *     _wcsnicmp @ 0x180128DF0 (_wcsnicmp.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall GetOverlayFilePathUsingChecksum(
        PCWSTR Source,
        const WCHAR *a2,
        wchar_t *a3,
        __int64 a4,
        unsigned int *a5,
        wchar_t *a6)
{
  NTSTATUS result; // eax
  const wchar_t *NtSystemRoot; // rax
  __int64 v10; // rdi
  size_t v11; // rbx
  wchar_t *Buffer; // r14
  wchar_t v13; // cx
  wchar_t *v14; // rsi
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
  __int64 v29; // [rsp+58h] [rbp-340h] BYREF
  _UNICODE_STRING Destination; // [rsp+60h] [rbp-338h] BYREF
  __int64 v31; // [rsp+70h] [rbp-328h]
  char v32; // [rsp+80h] [rbp-318h] BYREF

  v31 = a4;
  *(_QWORD *)&Destination.Length = 46006272LL;
  Destination.Buffer = (wchar_t *)&v32;
  if ( !Source || !a2 || !a5 )
    return -1073741811;
  result = RtlAppendUnicodeToString(&Destination, a2);
  if ( result < 0 )
  {
    if ( result == -1073741789 )
      return -1073741637;
  }
  else
  {
    Handle = 0LL;
    NtSystemRoot = RtlGetNtSystemRoot();
    v10 = -1LL;
    v11 = -1LL;
    do
      ++v11;
    while ( NtSystemRoot[v11] );
    Buffer = Destination.Buffer;
    if ( wcsnicmp(Destination.Buffer, NtSystemRoot, v11) )
    {
      if ( (int)IsProgramFilesPath(Buffer) < 0 )
        return -1073741637;
      v13 = aProgramFiles[0];
      v14 = L"\\Program Files";
      v11 = (size_t)Handle;
    }
    else
    {
      v13 = aWindows[0];
      v14 = (wchar_t *)L"\\Windows";
    }
    v15 = &Buffer[v11];
    result = 0;
    if ( v13 != 92 || *v15 != 92 )
      result = -1073741637;
    if ( result >= 0 )
    {
      v16 = *a5;
      v29 = *a5;
      if ( a6 && v16 >= 2 )
        *a6 = 0;
      Handle = 0LL;
      OverlayPackageKeyForLanguage = GetOverlayPackageKeyForLanguage(Source, &Handle);
      if ( OverlayPackageKeyForLanguage >= 0 )
      {
        OverlayPackageKeyForLanguage = GetOverlayPackageTypeFromKey(Handle, (char *)&v29 + 4);
        if ( OverlayPackageKeyForLanguage >= 0 )
        {
          OverlayPackagePathFromKey = GetOverlayPackagePathFromKey(Handle, (__int64)&v29);
          v16 = v29;
          OverlayPackageKeyForLanguage = OverlayPackagePathFromKey;
        }
        if ( Handle )
          NtClose(Handle);
      }
      started = -1073741789;
      if ( OverlayPackageKeyForLanguage < 0 )
      {
        if ( a6 && *a5 >= 2 )
          *a6 = 0;
        if ( OverlayPackageKeyForLanguage != -1073741789 )
          return OverlayPackageKeyForLanguage;
      }
      v20 = -1LL;
      do
        ++v20;
      while ( v15[v20] );
      v21 = 2 * v20;
      do
        ++v10;
      while ( v14[v10] );
      v22 = 2 * v10;
      if ( (v29 & 0x100000000LL) != 0 && v31 && a3 )
        return BuildCumulativeOverlayFilePath(v16, v14, a3, v31, (__int64)a5, a6);
      v24 = v22 + v21;
      v25 = *a5;
      v26 = v16 + v24;
      v27 = v26 + 8;
      if ( v26 < 0x208 )
        v27 = v26;
      *a5 = v27;
      if ( (unsigned int)v27 > v25 )
        return started;
      started = StartPathWithLongPathPrefixIfNeeded(v16, v27, a6);
      if ( started < 0 )
        return started;
      return AppendStandardOverlayFilePath(v15, v14);
    }
  }
  return result;
}
