/*
 * XREFs of WmipAcquireSmbiosLockShared @ 0x140AC6AA4
 * Callers:
 *     WmipFindSMBiosStructure @ 0x1408289B4 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosTableData @ 0x140AC6900 (WmipGetSMBiosTableData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN WmipAcquireSmbiosLockShared()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
}
