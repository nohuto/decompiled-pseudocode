/*
 * XREFs of WmipAcquireSmbiosLockShared @ 0x140A3D324
 * Callers:
 *     WmipFindSMBiosStructure @ 0x140794DA4 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosTableData @ 0x140A3D178 (WmipGetSMBiosTableData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN WmipAcquireSmbiosLockShared()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
}
