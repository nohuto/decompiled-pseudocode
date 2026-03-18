/*
 * XREFs of PiSwIrpCancelStartCreate @ 0x1405DCA90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     PiSwLock @ 0x14090DC3C (PiSwLock.c)
 */

void __fastcall PiSwIrpCancelStartCreate(__int64 a1, IRP *a2)
{
  char v3; // di
  _QWORD *FsContext2; // rsi

  v3 = 0;
  FsContext2 = a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext2;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  PiSwLock();
  if ( FsContext2[18] )
  {
    v3 = 1;
    FsContext2[18] = 0LL;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( v3 )
  {
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = -1073741536;
    IofCompleteRequest(a2, 0);
  }
}
