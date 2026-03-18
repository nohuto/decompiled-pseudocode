/*
 * XREFs of PsGetThreadTeb @ 0x1404851F0
 * Callers:
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x1407FAD64 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     PspFindFirstThreadByTebValue @ 0x140955E54 (PspFindFirstThreadByTebValue.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B792F0 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspWow64SetContextThread @ 0x140B796B0 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
