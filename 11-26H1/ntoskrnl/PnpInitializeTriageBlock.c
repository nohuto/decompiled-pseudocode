/*
 * XREFs of PnpInitializeTriageBlock @ 0x1405DC1A4
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404424BC (IopAddBugcheckTriageDataFromParameters.c)
 *     PnpWatchdogBugcheck @ 0x1405DC274 (PnpWatchdogBugcheck.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PnpInitializeTriageBlock(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x50uLL);
  *a1 = 1347309655;
  a1[1] = 1;
  *((_QWORD *)a1 + 2) = *(_QWORD *)&PnpDeviceEventThread;
  *((_QWORD *)a1 + 3) = *(_QWORD *)&PnpDeviceActionThread;
  *((_QWORD *)a1 + 4) = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
  *((_QWORD *)a1 + 5) = &PnpDeviceCompletionQueue;
  result = *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64];
  *((_QWORD *)a1 + 6) = *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64];
  return result;
}
