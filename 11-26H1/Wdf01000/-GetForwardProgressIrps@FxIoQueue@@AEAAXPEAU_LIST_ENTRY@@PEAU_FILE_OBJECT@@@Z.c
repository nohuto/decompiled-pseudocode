/*
 * XREFs of ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x14004BCE4
 * Callers:
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x14004BC44 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14004DD20 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z @ 0x14004BD80 (-GetForwardProgressIrpLocked@FxIoQueue@@AEAAPEAU_IRP@@PEAU_FILE_OBJECT@@@Z.c)
 */

void __fastcall FxIoQueue::GetForwardProgressIrps(FxIoQueue *this, _LIST_ENTRY *IrpListHead, _FILE_OBJECT *FileObject)
{
  _IRP *ForwardProgressIrpLocked; // rax
  KIRQL v7; // r11
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *Blink; // rax

  KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  while ( 1 )
  {
    ForwardProgressIrpLocked = FxIoQueue::GetForwardProgressIrpLocked(this, FileObject);
    if ( !ForwardProgressIrpLocked )
      break;
    p_ListEntry = &ForwardProgressIrpLocked->Tail.Overlay.ListEntry;
    Blink = IrpListHead->Blink;
    if ( Blink->Flink != IrpListHead )
      __fastfail(3u);
    p_ListEntry->Flink = IrpListHead;
    p_ListEntry->Blink = Blink;
    Blink->Flink = p_ListEntry;
    IrpListHead->Blink = p_ListEntry;
  }
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v7);
}
