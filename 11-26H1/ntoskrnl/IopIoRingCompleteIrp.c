/*
 * XREFs of IopIoRingCompleteIrp @ 0x140410B08
 * Callers:
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IopDequeueIrpFromThread @ 0x1403311D0 (IopDequeueIrpFromThread.c)
 *     IopDequeueIrpFromFileObject @ 0x1403E17A0 (IopDequeueIrpFromFileObject.c)
 *     IopProcessBufferedIoCompletion @ 0x1404108F0 (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x1404109B0 (IopUpdateIrpTransferCount.c)
 *     IopMcReleaseMdl @ 0x140410BE8 (IopMcReleaseMdl.c)
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 */

void __fastcall IopIoRingCompleteIrp(PIRP Irp, ULONG_PTR BugCheckParameter2, unsigned int a3)
{
  volatile signed __int64 *v3; // rsi
  void *v4; // rbp
  __int64 v8; // rdx

  v3 = 0LL;
  v4 = (void *)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Irp->Flags & 0x2000) != 0 )
    v3 = (volatile signed __int64 *)(Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL);
  IopProcessBufferedIoCompletion((__int64)Irp);
  if ( BugCheckParameter2 )
    *(_DWORD *)(BugCheckParameter2 + 56) = Irp->IoStatus.Status;
  IopUpdateIrpTransferCount((__int64)Irp, v3);
  if ( (Irp->Flags & 0x2000) != 0 )
    IopDequeueIrpFromFileObject((__int64)Irp, BugCheckParameter2);
  else
    IopDequeueIrpFromThread(Irp, v8);
  IopCompleteIoRingEntry(v4, Irp->UserIosb, &Irp->IoStatus, a3);
  if ( (*(_DWORD *)(&Irp->Overlay.AllocationSize + 1) & 1) != 0 )
  {
    IopMcReleaseMdl((ULONG_PTR)Irp->MdlAddress);
    Irp->MdlAddress = 0LL;
  }
  ObfDereferenceObjectWithTag(v4, 0x49526F49u);
  Irp->Flags &= ~0x200000u;
  IopDropIrp(Irp, BugCheckParameter2);
}
