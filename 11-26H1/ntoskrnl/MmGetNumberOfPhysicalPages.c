/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1404AF740
 * Callers:
 *     PopEnlargeHiberFile @ 0x1407D0204 (PopEnlargeHiberFile.c)
 *     SmpSystemStoreCreate @ 0x14081A360 (SmpSystemStoreCreate.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x140A6DAC8 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpInitLoggerContext @ 0x140A6DD54 (EtwpInitLoggerContext.c)
 *     CmpCanGrowHive @ 0x140AE0CAC (CmpCanGrowHive.c)
 *     PopCalculateHiberFileSize @ 0x140B01358 (PopCalculateHiberFileSize.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     PopRequestWrite @ 0x140BFB804 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140BFCC1C (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140C2A668 (ViPtInitCircularPoolTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * a1) + 22288LL);
}
