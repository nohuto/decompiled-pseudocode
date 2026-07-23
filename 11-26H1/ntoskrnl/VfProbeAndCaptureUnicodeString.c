/*
 * XREFs of VfProbeAndCaptureUnicodeString @ 0x140C2747C
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     VfSetVerifierInformationEx @ 0x140C3FB28 (VfSetVerifierInformationEx.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140C274E4 (VfProbeAndCaptureUnicodeStringBuffer.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeString(_OWORD *a1, unsigned int *a2, unsigned int a3)
{
  __int128 v7; // [rsp+20h] [rbp-18h]

  DWORD1(v7) = 0;
  LODWORD(v7) = RtlReadULongFromUser(a2);
  *((_QWORD *)&v7 + 1) = RtlReadULong64FromUser(a2 + 2);
  *a1 = v7;
  return VfProbeAndCaptureUnicodeStringBuffer(a1, a3);
}
