/*
 * XREFs of IopCopyCompleteReadRequest @ 0x14040F450
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14040F120 (IopCopyCompleteReadIrp.c)
 *     IopCopyAbortCopyReadRequest @ 0x1405CE870 (IopCopyAbortCopyReadRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     IopDequeueIrpFromThread @ 0x1403311D0 (IopDequeueIrpFromThread.c)
 *     IopDequeueIrpFromFileObject @ 0x1403E17A0 (IopDequeueIrpFromFileObject.c)
 *     IopProcessBufferedIoCompletion @ 0x1404108F0 (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x1404109B0 (IopUpdateIrpTransferCount.c)
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
