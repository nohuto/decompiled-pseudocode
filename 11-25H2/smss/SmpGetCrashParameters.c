/*
 * XREFs of SmpGetCrashParameters @ 0x14001227C
 * Callers:
 *     SmpCheckForCrashDump @ 0x1400119EC (SmpCheckForCrashDump.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400058D0 (RtlStringCbPrintfW.c)
 *     SmpQueryDwordFromRegistry @ 0x14001262C (SmpQueryDwordFromRegistry.c)
 *     SmpQueryPathFromRegistry @ 0x14001286C (SmpQueryPathFromRegistry.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpGetCrashParameters(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-C0h] BYREF

  result = RtlStringCbPrintfW(
             pszDest,
             0x208uLL,
             L"%s\\MEMORY.DMP",
             SmpSystemRoot.Buffer,
             1179664LL,
             L"DumpFile",
             1310738LL,
             L"Overwrite");
  if ( result >= 0 )
  {
    result = SmpQueryPathFromRegistry(v3, &v5, pszDest, a1);
    if ( result >= 0 )
    {
      result = SmpQueryDwordFromRegistry(v4, &v6, 1LL, a1 + 16);
      if ( result >= 0 )
      {
        *(_DWORD *)(a1 + 20) = 0;
        return 0;
      }
    }
  }
  return result;
}
