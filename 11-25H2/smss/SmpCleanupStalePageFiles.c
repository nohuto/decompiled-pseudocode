/*
 * XREFs of SmpCleanupStalePageFiles @ 0x14000F3F0
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     RtlStringCbPrintfW @ 0x1400058D0 (RtlStringCbPrintfW.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D6BC (SmpFreeSavedRegistryEntry.c)
 *     SmpDeletePagingFile @ 0x140010C88 (SmpDeletePagingFile.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

void SmpCleanupStalePageFiles()
{
  __int64 *v0; // rbx
  struct _UNICODE_STRING *v1; // rdi
  signed int v2; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  v0 = (__int64 *)SmpExistingPageFilesList;
  DestinationString = 0LL;
  while ( v0 != &SmpExistingPageFilesList )
  {
    v1 = (struct _UNICODE_STRING *)v0;
    v2 = SmpDeletePagingFile(v0 + 2);
    if ( v2 < 0 )
      SmpLogFailureString((__int64)"SmpCleanupStalePageFiles", 0x1093u, v0[3], v2);
    v0 = (__int64 *)*v0;
    SmpFreeSavedRegistryEntry(v1);
  }
  if ( !SmpWsSwapPagefileCreated )
  {
    RtlStringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%c:\\%s", (unsigned __int16)SmpOsVolumeLetter, L"swapfile.sys");
    RtlInitUnicodeString(&DestinationString, pszDest);
    SmpDeletePagingFile(&DestinationString);
  }
}
