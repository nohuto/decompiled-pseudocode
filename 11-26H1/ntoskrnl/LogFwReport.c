/*
 * XREFs of LogFwReport @ 0x140C55030
 * Callers:
 *     BgpFwLibraryDisable @ 0x140C56AAC (BgpFwLibraryDisable.c)
 *     ResFwFreeContext @ 0x140C588B8 (ResFwFreeContext.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     BgpGetBitsPerPixel @ 0x1404B98EC (BgpGetBitsPerPixel.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404F1AFC (BgpFwQueryPerformanceCounter.c)
 *     BgpGetResolution @ 0x14050E808 (BgpGetResolution.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  _DWORD v2[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 0x80u) != 0 )
  {
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140E0F250);
    Resolution = BgpGetResolution(v2);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    *(_QWORD *)&WheapPfaLock.ForegroundLossTime = v1;
    LODWORD(WheapPfaLock.GlobalForegroundListEntry.Flink) = (_DWORD)Resolution;
    *(_DWORD *)WheapPfaLock.PriorityFloorCounts = BgpGetBitsPerPixel();
    LODWORD(WheapPfaLock.WriteOperationCount) = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80];
    stru_140E651D8.Parameter = 0LL;
    stru_140E651D8.List.Flink = 0LL;
    LODWORD(WheapPfaLock.QueuedScb) = 1000000 * (__int64)WheapPfaLock.SchedulerSharedSystemSlot / qword_140E0F250;
    LODWORD(WheapPfaLock.ReadOperationCount) = 1000000 * WheapPfaLock.ReadTransferCount / qword_140E0F250;
    HIDWORD(WheapPfaLock.IoSelfBoostsEntry.Next) = 1000000 * WheapPfaLock.WriteTransferCount / qword_140E0F250;
    stru_140E651D8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140E651D8, DelayedWorkQueue);
    if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        WheapPfaLock.ForegroundLossTime,
        *(&WheapPfaLock.ForegroundLossTime + 1),
        *(_DWORD *)WheapPfaLock.PriorityFloorCounts);
      DbgPrintEx(
        0x65u,
        0,
        "|  LogoSize:         %8u  |\n|                              |\n",
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[168]);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressProlog:   %8u  |\n",
        1000000LL * *(_QWORD *)&WheapPfaLock.ThreadTimerDelay / qword_140E0F250);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", HIDWORD(WheapPfaLock.ReadOperationCount));
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[112]);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140E0F248 / qword_140E0F250);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressHigh:     %8u  |\n",
        1000000LL * *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[8] / qword_140E0F250);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * WheapPfaLock.OtherOperationCount / qword_140E0F250,
        1000000LL * *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] / qword_140E0F250);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeProlog:       %8u  |\n",
        (signed __int64)(1000000 * WheapPfaLock.InGlobalForegroundList) / qword_140E0F250);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", LODWORD(WheapPfaLock.IoSelfBoostsEntry.Next));
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[108],
        LODWORD(WheapPfaLock.ReadOperationCount),
        HIDWORD(WheapPfaLock.IoSelfBoostsEntry.Next));
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140E0F258 / qword_140E0F250);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeHigh:         %8u  |\n",
        1000000 * (__int64)WheapPfaLock.PropagateBoostsEntry.Next / qword_140E0F250);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        LODWORD(WheapPfaLock.QueuedScb),
        1000000LL * *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16] / qword_140E0F250);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000LL * *(_QWORD *)&WheapPfaLock.AbCompletedIoQoSBoostCount / qword_140E0F250);
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
        1000000 * qword_140E651F8 / qword_140E0F250);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
