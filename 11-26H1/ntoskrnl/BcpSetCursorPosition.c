/*
 * XREFs of BcpSetCursorPosition @ 0x140717E1C
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x140716734 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14071681C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140716B84 (BcpDisplayCriticalStringCentered.c)
 *     BcpDisplayErrorInformation @ 0x140716F38 (BcpDisplayErrorInformation.c)
 *     BcpDisplayErrorInformationModernized @ 0x1407171A0 (BcpDisplayErrorInformationModernized.c)
 *     BcpGetComponentOffsets @ 0x140717990 (BcpGetComponentOffsets.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x140717E40 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140717EE8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071840C (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpSetCursorPosition(int a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[16] = a1;
  *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[20] = a2;
  if ( a3 )
  {
    result = (unsigned int)*a3;
    *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24] = *a3;
  }
  return result;
}
