/*
 * XREFs of KiInitializeGlobalState @ 0x1405EB47C
 * Callers:
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

void *KiInitializeGlobalState()
{
  void *result; // rax

  *(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] = &dword_140F267E0;
  result = &unk_140F267E4;
  KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread = (struct _KTHREAD *)&unk_140F267E4;
  return result;
}
