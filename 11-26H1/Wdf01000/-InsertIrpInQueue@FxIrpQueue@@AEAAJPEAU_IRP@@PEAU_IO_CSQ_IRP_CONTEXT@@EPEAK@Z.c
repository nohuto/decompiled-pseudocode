/*
 * XREFs of ?InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z @ 0x140050260
 * Callers:
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x140050074 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x1400838A8 (-PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIrpQueue::InsertIrpInQueue(
        FxIrpQueue *this,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *Context,
        unsigned __int8 InsertInHead)
{
  _LIST_ENTRY *p_ListEntry; // r9
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // r10
  _LIST_ENTRY *v10; // rax

  if ( Context )
  {
    Irp->Tail.Overlay.DriverContext[3] = Context;
    Context->Irp = Irp;
    Context->Csq = (_IO_CSQ *)this;
    Context->Type = 1;
  }
  else
  {
    Irp->Tail.Overlay.DriverContext[3] = this;
  }
  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  if ( InsertInHead )
  {
    Flink = this->m_Queue.Flink;
    if ( (FxIrpQueue *)this->m_Queue.Flink->Blink != this )
      goto LABEL_9;
    p_ListEntry->Flink = Flink;
    Irp->Tail.Overlay.ListEntry.Blink = &this->m_Queue;
    Flink->Blink = p_ListEntry;
    this->m_Queue.Flink = p_ListEntry;
  }
  else
  {
    Blink = this->m_Queue.Blink;
    if ( (FxIrpQueue *)Blink->Flink != this )
      goto LABEL_9;
    p_ListEntry->Flink = &this->m_Queue;
    Irp->Tail.Overlay.ListEntry.Blink = Blink;
    Blink->Flink = p_ListEntry;
    this->m_Queue.Blink = p_ListEntry;
  }
  ++this->m_RequestCount;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
  if ( !Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    return 0LL;
  v9 = p_ListEntry->Flink;
  if ( p_ListEntry->Flink->Blink != p_ListEntry || (v10 = Irp->Tail.Overlay.ListEntry.Blink, v10->Flink != p_ListEntry) )
LABEL_9:
    __fastfail(3u);
  v10->Flink = v9;
  v9->Blink = v10;
  Irp->Tail.Overlay.ListEntry.Blink = &Irp->Tail.Overlay.ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  --this->m_RequestCount;
  if ( Context )
    Context->Irp = 0LL;
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  return 3221225760LL;
}
