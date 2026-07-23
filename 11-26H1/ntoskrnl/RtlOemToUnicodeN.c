/*
 * XREFs of RtlOemToUnicodeN @ 0x14097E070
 * Callers:
 *     RtlOemStringToCountedUnicodeString @ 0x14097E170 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x14097E860 (RtlOemStringToUnicodeString.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140B105EC (FsRtlNotifyUpdateBuffer.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 *     RtlCustomCPToUnicodeN @ 0x14097D9D0 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _CPTABLEINFO *p_Blink; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    p_Blink = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v12, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    p_Blink = (_CPTABLEINFO *)&CurrentServerSiloGlobals[64].Blink;
    if ( LOWORD(CurrentServerSiloGlobals[64].Blink) != 1 )
      p_Blink = (_CPTABLEINFO *)&CurrentServerSiloGlobals[68].Blink;
  }
  return RtlCustomCPToUnicodeN(
           p_Blink,
           UnicodeString,
           MaxBytesInUnicodeString,
           BytesInUnicodeString,
           (PCH)OemString,
           BytesInOemString);
}
