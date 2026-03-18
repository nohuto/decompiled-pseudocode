/*
 * XREFs of WmipAcquireSmbiosLockShared @ 0x140AC4E34
 * Callers:
 *     WmipFindSMBiosStructure @ 0x1408227A4 (WmipFindSMBiosStructure.c)
 *     WmipGetSMBiosTableData @ 0x140AC4C90 (WmipGetSMBiosTableData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN WmipAcquireSmbiosLockShared()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite((PERESOURCE)&EtwpSecurityLock.WpsFeedback, 1u);
}
