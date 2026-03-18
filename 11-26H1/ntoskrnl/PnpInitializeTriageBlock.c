/*
 * XREFs of PnpInitializeTriageBlock @ 0x1405D99A4
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14044A38C (IopAddBugcheckTriageDataFromParameters.c)
 *     PnpWatchdogBugcheck @ 0x1405D9A74 (PnpWatchdogBugcheck.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

struct _LIST_ENTRY *__fastcall PnpInitializeTriageBlock(_DWORD *a1)
{
  struct _LIST_ENTRY *result; // rax

  memset_0(a1, 0, 0x50uLL);
  *a1 = 1347309655;
  a1[1] = 1;
  *((_QWORD *)a1 + 2) = *(_QWORD *)&PnpDeviceEventThread;
  *((_QWORD *)a1 + 3) = *(_QWORD *)&PnpDeviceActionThread;
  *((_QWORD *)a1 + 4) = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
  *((_QWORD *)a1 + 5) = &PnpDeviceCompletionQueue;
  result = ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.WaitListHead.Blink;
  *((_QWORD *)a1 + 6) = ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.WaitListHead.Blink;
  return result;
}
