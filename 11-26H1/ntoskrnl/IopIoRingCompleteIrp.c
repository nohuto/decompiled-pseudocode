/*
 * XREFs of IopIoRingCompleteIrp @ 0x1404113E8
 * Callers:
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     IopSynchronousServiceTail @ 0x1409B2704 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     IopDequeueIrpFromThread @ 0x14032F1A0 (IopDequeueIrpFromThread.c)
 *     IopDequeueIrpFromFileObject @ 0x1403DE5B0 (IopDequeueIrpFromFileObject.c)
 *     IopProcessBufferedIoCompletion @ 0x1404111D0 (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x140411290 (IopUpdateIrpTransferCount.c)
 *     IopMcReleaseMdl @ 0x1404114C8 (IopMcReleaseMdl.c)
 *     IopCompleteIoRingEntry @ 0x140411574 (IopCompleteIoRingEntry.c)
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
