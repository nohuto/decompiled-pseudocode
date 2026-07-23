/*
 * XREFs of KiUnassignProcessorNumberFromPrcb @ 0x1405F28E8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall KiUnassignProcessorNumberFromPrcb(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  struct _LIST_ENTRY *result; // rax

  v1 = *(unsigned __int8 *)(a1 + 208);
  v2 = *(unsigned __int8 *)(a1 + 209);
  *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + *(unsigned int *)(a1 + 36)) = 0;
  result = KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink;
  *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int64)v1].Flink + v2) = 0;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
