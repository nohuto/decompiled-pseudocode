/*
 * XREFs of RtlUnicodeToOemN @ 0x14096A6D0
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x14096A750 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToOemString @ 0x140B3CB50 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlUnicodeToCustomCPN @ 0x14096B500 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x14096CC40 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  struct _CPTABLEINFO *p_Blink; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    p_Blink = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    p_Blink = (struct _CPTABLEINFO *)&PsGetCurrentServerSiloGlobals()[64].Blink;
  }
  return RtlUnicodeToCustomCPN(
           p_Blink,
           OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (PWCH)UnicodeString,
           BytesInUnicodeString);
}
