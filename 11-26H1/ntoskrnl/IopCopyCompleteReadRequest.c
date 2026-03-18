/*
 * XREFs of IopCopyCompleteReadRequest @ 0x14040FD30
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14040FA00 (IopCopyCompleteReadIrp.c)
 *     IopCopyAbortCopyReadRequest @ 0x1405CC000 (IopCopyAbortCopyReadRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     IopDequeueIrpFromThread @ 0x14032F1A0 (IopDequeueIrpFromThread.c)
 *     IopDequeueIrpFromFileObject @ 0x1403DE5B0 (IopDequeueIrpFromFileObject.c)
 *     IopProcessBufferedIoCompletion @ 0x1404111D0 (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x140411290 (IopUpdateIrpTransferCount.c)
 */

void __fastcall IopCopyCompleteReadRequest(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  IRP *v5; // rbx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  PKEVENT UserEvent; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (IRP *)(a1 - 120);
  v6 = *a4;
  v7 = 0LL;
  if ( (*(_DWORD *)(*a4 + 80) & 0x4000000) == 0 )
    KeSetEvent((PRKEVENT)(v6 + 152), 0, 0);
  *(_DWORD *)(v6 + 56) = v5->IoStatus.Status;
  if ( (v5->Flags & 0x2000) != 0 )
    v7 = v5->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  IopProcessBufferedIoCompletion(v5);
  IopUpdateIrpTransferCount(v5, v7);
  if ( (v5->Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject((__int64)v5, v6);
  }
  else
  {
    v5->Tail.Overlay.Thread = CurrentThread;
    IopDequeueIrpFromThread(v5, v8);
  }
  UserEvent = v5->UserEvent;
  if ( UserEvent )
  {
    ObfDereferenceObjectWithTag(UserEvent, 0x746C6644u);
    v5->UserEvent = 0LL;
  }
  IopDropIrp(v5, v6);
}
