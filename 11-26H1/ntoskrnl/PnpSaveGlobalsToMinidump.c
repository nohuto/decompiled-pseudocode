/*
 * XREFs of PnpSaveGlobalsToMinidump @ 0x1405D9A20
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14044A38C (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 */

char PnpSaveGlobalsToMinidump()
{
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceActionThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceEventThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDelayedRemoveWorkerThread, (PVOID)8);
  return IoAddTriageDumpDataBlock((ULONG)&PnpDeviceCompletionQueue, (PVOID)0x50);
}
