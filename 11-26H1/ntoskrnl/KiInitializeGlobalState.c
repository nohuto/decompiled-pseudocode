/*
 * XREFs of KiInitializeGlobalState @ 0x1405EDDEC
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

void *KiInitializeGlobalState()
{
  void *result; // rax

  KiSupervisorXStateFeaturesLock.SchedulerApc.Thread = (struct _KTHREAD *)&dword_140F26C20;
  result = &unk_140F26C24;
  KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink = (struct _LIST_ENTRY *)&unk_140F26C24;
  return result;
}
