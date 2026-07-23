/*
 * XREFs of BgpDisplaySafeToPowerOffScreen @ 0x14071CB30
 * Callers:
 *     BgDisplaySafeToPowerOffScreen @ 0x14071A6C0 (BgDisplaySafeToPowerOffScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x14071A834 (BgpClearScreen.c)
 *     BcpDisplayCriticalString @ 0x14071B50C (BcpDisplayCriticalString.c)
 *     BcpGetDisplayType @ 0x14071C800 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14071CB0C (BcpSetCursorPosition.c)
 */

__int64 BgpDisplaySafeToPowerOffScreen()
{
  int DisplayType; // edi
  __int64 v2; // rbx
  __int64 v3; // r10
  __int64 v4; // r8
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) == 0 )
    return 3221225473LL;
  v5[0] = gLoadedDiffHivesLock.Timer.TimerListEntry.Blink;
  v5[1] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
  v5[2] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Blink);
  DisplayType = BcpGetDisplayType(v5);
  v2 = 21LL * DisplayType;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&stru_140E3EAA8.Timer.Processor + 24LL) + 40LL) = -16777216;
  BgpClearScreen(0xFF000000);
  BcpSetCursorPosition(dword_140E0F0A0[v2 + 4], dword_140E0F0A0[v2 + 5], &dword_140E0F0A0[v2 + 5]);
  BcpDisplayCriticalString(&stru_140E3EAA8.Timer.TimerListEntry.Blink, *(_DWORD *)(v2 * 4 + v3 + 8), v4, DisplayType);
  return 0LL;
}
