/*
 * XREFs of CmpVolumeManagerInitialize @ 0x140857620
 * Callers:
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **CmpVolumeManagerInitialize()
{
  struct _LIST_ENTRY **result; // rax

  result = &KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Flink = 0LL;
  *(_QWORD *)&KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor = &KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList = (unsigned __int64)&KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList;
  return result;
}
