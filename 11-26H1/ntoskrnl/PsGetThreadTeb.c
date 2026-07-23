/*
 * XREFs of PsGetThreadTeb @ 0x14047EB60
 * Callers:
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x140800794 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     PspFindFirstThreadByTebValue @ 0x140949C14 (PspFindFirstThreadByTebValue.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B81560 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
