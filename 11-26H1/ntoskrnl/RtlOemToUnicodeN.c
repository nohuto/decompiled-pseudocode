/*
 * XREFs of RtlOemToUnicodeN @ 0x14096E4D0
 * Callers:
 *     RtlOemStringToCountedUnicodeString @ 0x14096F2D0 (RtlOemStringToCountedUnicodeString.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140B0EDBC (FsRtlNotifyUpdateBuffer.c)
 *     RtlOemStringToUnicodeString @ 0x140B1D890 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x14096CC40 (RtlpIsUtf8Process.c)
 *     RtlCustomCPToUnicodeN @ 0x14096D090 (RtlCustomCPToUnicodeN.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _CPTABLEINFO *p_Blink; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    p_Blink = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v12, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    p_Blink = (struct _CPTABLEINFO *)&CurrentServerSiloGlobals[64].Blink;
    if ( LOWORD(CurrentServerSiloGlobals[64].Blink) != 1 )
      p_Blink = (struct _CPTABLEINFO *)&CurrentServerSiloGlobals[68].Blink;
  }
  return RtlCustomCPToUnicodeN(
           p_Blink,
           UnicodeString,
           MaxBytesInUnicodeString,
           BytesInUnicodeString,
           (PCH)OemString,
           BytesInOemString);
}
