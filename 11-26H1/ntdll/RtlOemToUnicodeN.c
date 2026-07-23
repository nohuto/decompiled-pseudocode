/*
 * XREFs of RtlOemToUnicodeN @ 0x18009EDD0
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18009E1A0 (RtlCreateEnvironmentEx.c)
 *     RtlOemStringToUnicodeString @ 0x18009EC30 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlCustomCPToUnicodeN @ 0x180026080 (RtlCustomCPToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlOemToUnicodeN(
        PWSTR UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  ULONG v5; // edx
  ULONG *v6; // r8
  CHAR *CustomCPString; // r9
  WCHAR *v8; // r10
  _CPTABLEINFO *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    v9 = (_CPTABLEINFO *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &CodePageTable;
    if ( GlobalRtlNlsState.CodePage == 1 )
      v9 = &GlobalRtlNlsState;
  }
  return RtlCustomCPToUnicodeN(v9, v8, v5, v6, CustomCPString, BytesInOemString);
}
