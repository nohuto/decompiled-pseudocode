/*
 * XREFs of ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x14005DDD8
 * Callers:
 *     ?_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14005DD30 (-_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x14005DDA0 (-_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z.c)
 *     ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14005DDC0 (-_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1400A6DB8 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxEventQueue::EventQueueWorker(FxEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxPkgPnp *v4; // rdi
  KIRQL v5; // al
  KIRQL v6; // r8
  unsigned __int8 m_QueueFlags; // dl
  unsigned __int8 v8; // cl
  FxCREvent *m_DeviceRemoveProcessed; // rcx
  FxPostProcessInfo info; // [rsp+20h] [rbp-20h] BYREF
  _IRP *m_FireAndForgetIrp; // [rsp+50h] [rbp+10h] BYREF

  m_PkgPnp = this->m_PkgPnp;
  info.m_Event = 0LL;
  *(_WORD *)&info.m_DeleteObject = 0;
  info.m_FireAndForgetIrp = 0LL;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_QWORD *)((unsigned int)(unk_1400C9080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C9070) = m_Globals;
  v4 = this->m_PkgPnp;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags &= ~1u;
  ++this->m_WorkItemRunningCount;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v5);
  this->m_EventWorker(this->m_PkgPnp, &info, this->m_EventWorkerContext);
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  m_QueueFlags = this->m_QueueFlags;
  v8 = this->m_WorkItemRunningCount - 1;
  this->m_WorkItemRunningCount = v8;
  if ( (m_QueueFlags & 1) == 0 && !v8 && this->m_QueueHead == this->m_QueueTail )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      m_QueueFlags &= ~4u;
      info.m_DeleteObject = 1;
      this->m_QueueFlags = m_QueueFlags;
    }
    if ( (m_QueueFlags & 2) != 0 )
    {
      info.m_Event = this->m_WorkItemFinished;
      this->m_WorkItemFinished = 0LL;
    }
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v6);
  if ( info.m_SetRemovedEvent )
  {
    m_DeviceRemoveProcessed = (FxCREvent *)v4->m_DeviceRemoveProcessed;
LABEL_16:
    KeSetEvent(&m_DeviceRemoveProcessed->m_Event.m_Event, 0, 0);
    return;
  }
  if ( info.m_FireAndForgetIrp )
  {
    m_FireAndForgetIrp = info.m_FireAndForgetIrp;
    info.m_FireAndForgetIrp = 0LL;
    v4->FireAndForgetIrp(v4, (FxIrp *)&m_FireAndForgetIrp);
  }
  if ( info.m_DeleteObject )
    FxPkgPnp::ProcessDelayedDeletion(v4);
  m_DeviceRemoveProcessed = info.m_Event;
  if ( info.m_Event )
    goto LABEL_16;
}
