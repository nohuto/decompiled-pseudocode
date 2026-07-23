/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x14071CDA4
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405EA964 (KiDisplayBlueScreen.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     BgpGxDrawRectangle @ 0x1404B947C (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x1404B98EC (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x14071A834 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x14071B424 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14071B50C (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x14071BC28 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x14071C224 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x14071C680 (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x14071C800 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14071CB0C (BcpSetCursorPosition.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140D1A6A4 (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(__int64 a1, __int64 a2, __int64 a3, void ***a4, char a5)
{
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 DisplayType; // rdi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // r8
  _WORD *v16; // r10
  _WORD *p_WaitListHead; // rcx
  __int16 v18; // cx
  int v19; // r8d
  __int64 v20; // r8
  char v21; // r14
  _WORD *p_DueTime; // rcx
  _WORD *p_CycleTime; // rdx
  int v24; // r9d
  unsigned int BitsPerPixel; // eax
  __int64 v26; // r8
  int ComponentOffsets; // r15d
  __int64 v28; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v31[4]; // [rsp+40h] [rbp-38h] BYREF

  v30 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v7 = a1;
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 4) != 0
    && (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x400000) == 0 )
  {
    v8 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    IoSaveBugCheckProgress(131);
    return v8;
  }
  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x400000) != 0
    || (gLoadedDiffHivesLock.WaitBlockFill6[80] & 0x10) == 0 )
  {
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(132);
    return 0LL;
  }
  v31[0] = gLoadedDiffHivesLock.Timer.TimerListEntry.Blink;
  v31[1] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
  v31[2] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Blink);
  DisplayType = (int)BcpGetDisplayType(v31);
  v11 = 21 * DisplayType;
  v12 = *(_QWORD *)(*(_QWORD *)&stru_140E3EAA8.Timer.Processor + 24LL);
  if ( v7 == 456 )
    *(_DWORD *)(v12 + 40) = -16777216;
  BgpClearScreen(*(_DWORD *)(v12 + 40));
  IoSaveBugCheckProgress(133);
  BcpSetCursorPosition(dword_140E0F0A0[v11 + 4], dword_140E0F0A0[v11 + 5], &dword_140E0F0A0[v11 + 5]);
  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x20000) == 0 )
  {
    v14 = &qword_14000F3E8;
    if ( v7 == 456 )
      v14 = &qword_14000F5A0;
    BcpDisplayCriticalString(v14, dword_140E0F0A0[v11 + 3], v13, DisplayType);
  }
  BcpSetCursorPosition(
    dword_140E0F0A0[v11 + 4] + dword_140E0F0A0[v11 + 8],
    LODWORD(WheapPfaLock.ThreadListEntry.Blink) + dword_140E0F0A0[v11 + 9],
    0LL);
  if ( v7 == 456 )
  {
    p_WaitListHead = &stru_140E3EAA8.Timer.Header.WaitListHead;
  }
  else
  {
    p_WaitListHead = &stru_140E3EAA8.RelativeTimerBias;
    if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x10000000) == 0 )
      p_WaitListHead = v16;
  }
  BcpDisplayCriticalString(p_WaitListHead, dword_140E0F0A0[v11 + 2], v15, DisplayType);
  BcpDisplayCriticalCharacter(v18, dword_140E0F0A0[v11 + 2], v19);
  v21 = 1;
  if ( v7 == 456 )
  {
    p_DueTime = &stru_140E3EAA8.Timer.DueTime;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_25;
    if ( (a5 & 2) != 0 )
    {
      p_CycleTime = &stru_140E3EAA8.CycleTime;
      p_DueTime = &stru_140E3EAA8.SchedulingGroup;
    }
    else
    {
      p_DueTime = &stru_140E3EAA8.KernelStack;
      p_CycleTime = &stru_140E3EAA8.StackBase;
    }
    if ( (a5 & 4) == 0 )
      p_DueTime = p_CycleTime;
  }
  BcpDisplayCriticalString(p_DueTime, dword_140E0F0A0[v11 + 2], v20, DisplayType);
LABEL_25:
  v24 = 0;
  if ( !*(_QWORD *)&gLoadedDiffHivesLock.NextProcessor
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v26 + 8) < BitsPerPixel)
    && (*(_WORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0xC00) != 0 )
  {
    v21 = 0;
  }
  else
  {
    v24 = *(_DWORD *)(v26 + 4);
  }
  ComponentOffsets = BcpGetComponentOffsets(
                       (unsigned int *)&gLoadedDiffHivesLock.SwapListEntry + 2,
                       &gLoadedDiffHivesLock.Teb,
                       (int *)&v30,
                       DisplayType,
                       v24,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    BcpSetCursorPosition(
      (int)gLoadedDiffHivesLock.Teb,
      SHIDWORD(gLoadedDiffHivesLock.Teb),
      &gLoadedDiffHivesLock.RelativeTimerBias);
    if ( v7 != 456 )
    {
      BcpDisplayErrorInformation(DisplayType, v7, a2, a3, (__int64)a4, a5);
      if ( v21 )
        BgpGxDrawRectangle(*(__int64 *)&gLoadedDiffHivesLock.NextProcessor, (__int64)&v30);
    }
    IoSaveBugCheckProgress(134);
    if ( (a5 & 4) != 0 )
    {
      if ( (a5 & 2) == 0 )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        KeStallExecutionProcessor(10000000 * PerformanceFrequency.QuadPart / PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      BcpSetCursorPosition(
        *((int *)&gLoadedDiffHivesLock.SwapListEntry + 2),
        *((int *)&gLoadedDiffHivesLock.SwapListEntry + 3),
        &gLoadedDiffHivesLock.Queue);
      BcpDisplayProgress(0, DisplayType, v28);
      gLoadedDiffHivesLock.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)KeQueryPerformanceCounter(0LL).QuadPart;
      gLoadedDiffHivesLock.ApcState.ApcListHead[0].Blink = gLoadedDiffHivesLock.ApcState.ApcListHead[0].Flink;
      *(_DWORD *)&gLoadedDiffHivesLock.ApcStateFill[16] = 0;
    }
    *a4 = &stru_140E3EAA8.SListFaultAddress;
    a4[1] = &stru_140E3EAA8.InitialStack;
  }
  return (unsigned int)ComponentOffsets;
}
