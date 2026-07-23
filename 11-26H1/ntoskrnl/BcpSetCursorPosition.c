/*
 * XREFs of BcpSetCursorPosition @ 0x14071CB0C
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x14071B424 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14071B50C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x14071B874 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayErrorInformation @ 0x14071BC28 (BcpDisplayErrorInformation.c)
 *     BcpDisplayErrorInformationModernized @ 0x14071BE90 (BcpDisplayErrorInformationModernized.c)
 *     BcpGetComponentOffsets @ 0x14071C680 (BcpGetComponentOffsets.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x14071CB30 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14071CBD8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071D0FC (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpSetCursorPosition(int a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  LODWORD(WheapPfaLock.ThreadListEntry.Flink) = a1;
  HIDWORD(WheapPfaLock.ThreadListEntry.Flink) = a2;
  if ( a3 )
  {
    result = (unsigned int)*a3;
    LODWORD(WheapPfaLock.ThreadListEntry.Blink) = *a3;
  }
  return result;
}
