/*
 * XREFs of RtlUnicodeToOemN @ 0x180021780
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x180140490 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToCustomCPN @ 0x18001F960 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x18007A650 (RtlpIsUtf8Process.c)
 */

NTSTATUS __cdecl RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // edx
  ULONG *v6; // r8
  WCHAR *v7; // r9
  CHAR *v8; // r10
  _CPTABLEINFO *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(OemString, MaxBytesInOemString, BytesInOemString) )
  {
    v9 = (_CPTABLEINFO *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &GlobalRtlNlsState;
  }
  return RtlUnicodeToCustomCPN(v9, v8, v5, v6, v7, BytesInUnicodeString);
}
