/*
 * XREFs of RawShutdown @ 0x1408058B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     IoUnregisterFileSystem @ 0x140799780 (IoUnregisterFileSystem.c)
 *     RawScanDeletedList @ 0x14091B194 (RawScanDeletedList.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2)
{
  RawScanDeletedList();
  IoUnregisterFileSystem((PDEVICE_OBJECT)NormalizationListLock.WaitBlock[0].WaitListEntry.Flink);
  IoUnregisterFileSystem((PDEVICE_OBJECT)NormalizationListLock.WaitBlock[0].WaitListEntry.Blink);
  IoUnregisterFileSystem(*(PDEVICE_OBJECT *)&NormalizationListLock.WaitBlockFill11[16]);
  IoDeleteDevice(*(PDEVICE_OBJECT *)&NormalizationListLock.WaitBlockFill11[16]);
  IoDeleteDevice((PDEVICE_OBJECT)NormalizationListLock.WaitBlock[0].WaitListEntry.Blink);
  IoDeleteDevice((PDEVICE_OBJECT)NormalizationListLock.WaitBlock[0].WaitListEntry.Flink);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
