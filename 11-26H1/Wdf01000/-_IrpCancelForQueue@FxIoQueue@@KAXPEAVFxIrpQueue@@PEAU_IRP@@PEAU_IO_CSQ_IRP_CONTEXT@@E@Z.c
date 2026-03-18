/*
 * XREFs of ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x14004EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004EFB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueue::_IrpCancelForQueue(
        FxIrpQueue *IrpQueue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        unsigned __int8 Irql)
{
  FxIoQueue *p_Blink; // rbx
  unsigned int RefCount; // r10d
  _LIST_ENTRY *Flink; // rcx

  p_Blink = (FxIoQueue *)&IrpQueue[-5].m_Queue.Blink;
  RefCount = _InterlockedIncrement((volatile signed __int32 *)&IrpQueue[-5].m_LockObject + 1);
  if ( SLOBYTE(IrpQueue[-5].m_RequestCount) < 0 )
  {
    Flink = IrpQueue[-6].m_Queue.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Flink,
        Irp,
        4483,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagAddRef,
        RefCount);
  }
  FxIoQueue::CancelForQueue(p_Blink, (FxRequest *)&CsqContext[-5], Irql);
  p_Blink->Release(p_Blink, Irp, 4495, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
}
