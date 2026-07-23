/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1404A8DD0
 * Callers:
 *     PopEnlargeHiberFile @ 0x1407D32A4 (PopEnlargeHiberFile.c)
 *     SmpSystemStoreCreate @ 0x140820570 (SmpSystemStoreCreate.c)
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140AB286C (EtwpGetSystemMaximumBufferCount.c)
 *     CmpCanGrowHive @ 0x140ADE2DC (CmpCanGrowHive.c)
 *     PopCalculateHiberFileSize @ 0x140B03088 (PopCalculateHiberFileSize.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     PopRequestWrite @ 0x140C01804 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140C02C1C (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140C30678 (ViPtInitCircularPoolTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * a1) + 22288LL);
}
