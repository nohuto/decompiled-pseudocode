/*
 * XREFs of LogFwReport @ 0x140C4F030
 * Callers:
 *     BgpFwLibraryDisable @ 0x140C50AAC (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140C528B8 (ResFwFreeContext.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     BgpGetBitsPerPixel @ 0x1404C009C (BgpGetBitsPerPixel.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F84EC (BgpFwQueryPerformanceCounter.c)
 *     BgpGetResolution @ 0x140514D98 (BgpGetResolution.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  struct _SINGLE_LIST_ENTRY *v1; // xmm0_8
  _DWORD v2[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 0x80u) != 0 )
  {
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140E0F1D0);
    Resolution = BgpGetResolution(v2);
    v1 = *(struct _SINGLE_LIST_ENTRY **)Resolution;
    LODWORD(Resolution) = Resolution[2];
    WheapPfaLock.IoSelfBoostsEntry.Next = v1;
    *(_DWORD *)WheapPfaLock.PriorityFloorCounts = (_DWORD)Resolution;
    *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[76] = BgpGetBitsPerPixel();
    LODWORD(WheapPfaLock.ThreadListEntry.Flink) = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80];
    stru_140E64FD8.Parameter = 0LL;
    stru_140E64FD8.List.Flink = 0LL;
    LODWORD(WheapPfaLock.SchedulerSharedSystemSlot) = 1000000
                                                    * (__int64)WheapPfaLock.SchedulerApc.SystemArgument1
                                                    / qword_140E0F1D0;
    HIDWORD(WheapPfaLock.SchedulerSharedSystemSlot) = 1000000LL
                                                    * *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16]
                                                    / qword_140E0F1D0;
    *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[72] = 1000000LL
                                                   * *(_QWORD *)&WheapPfaLock.PriorityFloorSummary
                                                   / qword_140E0F1D0;
    stru_140E64FD8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140E64FD8, DelayedWorkQueue);
    if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        LODWORD(WheapPfaLock.IoSelfBoostsEntry.Next),
        HIDWORD(WheapPfaLock.IoSelfBoostsEntry.Next),
        *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[76]);
      DbgPrintEx(
        0x65u,
        0,
        "|  LogoSize:         %8u  |\n|                              |\n",
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[168]);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressProlog:   %8u  |\n",
        1000000LL * *(_QWORD *)&WheapPfaLock.AbWaitEntryCount / qword_140E0F1D0);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", LODWORD(WheapPfaLock.PropagateBoostsEntry.Next));
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[112]);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140E0F1C8 / qword_140E0F1D0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressHigh:     %8u  |\n",
        1000000 * (__int64)WheapPfaLock.SchedulerApc.NormalContext / qword_140E0F1D0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * (__int64)WheapPfaLock.SuspendEvent.Header.WaitListHead.Flink / qword_140E0F1D0,
        1000000 * (__int64)WheapPfaLock.MutantListHead.Blink / qword_140E0F1D0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeProlog:       %8u  |\n",
        1000000LL * *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[8] / qword_140E0F1D0);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", WheapPfaLock.SuspendEvent.Header.LockNV);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[108],
        HIDWORD(WheapPfaLock.SchedulerSharedSystemSlot),
        *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[72]);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140E0F1D8 / qword_140E0F1D0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeHigh:         %8u  |\n",
        1000000LL * *(_QWORD *)&WheapPfaLock.SchedulerApcFill5[80] / qword_140E0F1D0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        LODWORD(WheapPfaLock.SchedulerSharedSystemSlot),
        1000000 * (__int64)WheapPfaLock.SuspendEvent.Header.WaitListHead.Blink / qword_140E0F1D0);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * (__int64)WheapPfaLock.MutantListHead.Flink / qword_140E0F1D0);
      if ( gLoadedDiffHivesLock.WaitBlock[2].Object )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)gLoadedDiffHivesLock.WaitBlock[2].Object);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140E64F88 / qword_140E0F1D0);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
