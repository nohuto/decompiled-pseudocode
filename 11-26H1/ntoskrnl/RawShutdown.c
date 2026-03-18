/*
 * XREFs of RawShutdown @ 0x1407FFE80
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     IoUnregisterFileSystem @ 0x140796C50 (IoUnregisterFileSystem.c)
 *     RawScanDeletedList @ 0x140A36128 (RawScanDeletedList.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2)
{
  RawScanDeletedList();
  IoUnregisterFileSystem((PDEVICE_OBJECT)NormalizationListLock.Timer.Dpc);
  IoUnregisterFileSystem(*(PDEVICE_OBJECT *)&NormalizationListLock.Timer.Processor);
  IoUnregisterFileSystem((PDEVICE_OBJECT)NormalizationListLock.Timer.TimerListEntry.Blink);
  IoDeleteDevice((PDEVICE_OBJECT)NormalizationListLock.Timer.TimerListEntry.Blink);
  IoDeleteDevice(*(PDEVICE_OBJECT *)&NormalizationListLock.Timer.Processor);
  IoDeleteDevice((PDEVICE_OBJECT)NormalizationListLock.Timer.Dpc);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
