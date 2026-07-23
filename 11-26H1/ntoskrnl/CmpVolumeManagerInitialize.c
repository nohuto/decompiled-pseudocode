/*
 * XREFs of CmpVolumeManagerInitialize @ 0x14085D9B0
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

int *CmpVolumeManagerInitialize()
{
  int *result; // rax

  result = &KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor;
  KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList = 0LL;
  KiSystemServiceTraceCallbackLock.KernelShadowStack = &KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor = &KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor;
  return result;
}
