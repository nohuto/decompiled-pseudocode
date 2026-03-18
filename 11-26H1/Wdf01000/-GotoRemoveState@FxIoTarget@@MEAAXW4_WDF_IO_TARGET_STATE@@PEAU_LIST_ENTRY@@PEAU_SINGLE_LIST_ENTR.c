/*
 * XREFs of ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x14005D900
 * Callers:
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x14009E5A0 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x140062D48 (-ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoTarget::GotoRemoveState(
        FxIoTarget *this,
        _WDF_IO_TARGET_STATE NewState,
        FxIrpQueue *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 Lock,
        _LIST_ENTRY *Wait)
{
  _LIST_ENTRY *p_m_Queue; // rbp
  unsigned __int8 v10; // si
  _LIST_ENTRY *v11; // r13
  FxIrpQueue *p_m_PendedQueue; // r14
  bool v13; // zf
  _LIST_ENTRY **p_Blink; // rax
  _LIST_ENTRY *v15; // rdx
  __int64 v16; // rcx
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY **v18; // rdi
  _LIST_ENTRY *v19; // rax
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 *p_m_SentIoListHead; // r15
  _SINGLE_LIST_ENTRY *v22; // rdi
  _LIST_ENTRY *p_m_IgnoredIoListHead; // r14
  _LIST_ENTRY *Flink; // rbp
  _SINGLE_LIST_ENTRY *i; // rdi
  unsigned int RefCount; // edx
  FxTagTracker *Next; // rcx
  unsigned int v28; // edx
  FxTagTracker *v29; // rcx
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  const void *v31; // rdx
  unsigned __int8 v32; // r8
  unsigned __int8 v33; // r8
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  p_m_Queue = &PendedRequestListHead->m_Queue;
  v10 = 0;
  irql = 0;
  if ( Lock )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, (unsigned __int8)PendedRequestListHead);
      v10 = irql;
    }
    else
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      irql = v10;
    }
  }
  if ( this->m_WaitingForSentIo )
  {
    v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v31 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 3u, 0xEu, 0x17u, WPP_FxIoTarget_cpp_Traceguids, v31);
    FxNonPagedObject::Unlock(this, v10, v32);
    this->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v33);
    v10 = irql;
  }
  v11 = Wait;
  p_m_PendedQueue = &this->m_PendedQueue;
  LOBYTE(Wait->Flink) = 0;
  this->m_State = NewState;
LABEL_4:
  v13 = p_m_PendedQueue->m_Queue.Flink == (_LIST_ENTRY *)p_m_PendedQueue;
  p_Blink = &p_m_PendedQueue->m_Queue.Flink[-11].Blink;
  while ( 1 )
  {
    if ( v13 )
      p_Blink = 0LL;
    if ( !p_Blink )
      break;
    v15 = (_LIST_ENTRY *)(p_Blink + 21);
    v16 = _InterlockedExchange64((volatile __int64 *)p_Blink + 13, 0LL);
    PendedRequestListHead = (FxIrpQueue *)p_Blink[21];
    if ( v16 )
    {
      if ( PendedRequestListHead->m_Queue.Blink != v15 )
        goto LABEL_37;
      v17 = p_Blink[22];
      if ( v17->Flink != v15 )
        goto LABEL_37;
      v17->Flink = &PendedRequestListHead->m_Queue;
      PendedRequestListHead->m_Queue.Blink = v17;
      p_Blink[22] = (_LIST_ENTRY *)(p_Blink + 21);
      v15->Flink = v15;
      --this->m_PendedQueue.m_RequestCount;
      v18 = (_LIST_ENTRY **)p_Blink[18];
      p_Blink[18] = 0LL;
      *v18 = (_LIST_ENTRY *)v18;
      v18[1] = (_LIST_ENTRY *)v18;
      v19 = v18[4];
      ++BYTE3(v19[4].Flink);
      v19[11].Blink = (_LIST_ENTRY *)((char *)v19[11].Blink + 72);
      *((_BYTE *)v18 + 92) &= ~2u;
      FxIoTarget::ClearCompletedRequestVerifierFlags(this, (FxRequestBase *)(v18 - 15));
      Blink = p_m_Queue->Blink;
      if ( Blink->Flink != p_m_Queue )
LABEL_37:
        __fastfail(3u);
      *v18 = p_m_Queue;
      v18[1] = Blink;
      Blink->Flink = (_LIST_ENTRY *)v18;
      p_m_Queue->Blink = (_LIST_ENTRY *)v18;
      goto LABEL_4;
    }
    p_Blink = (_LIST_ENTRY **)&PendedRequestListHead[-5].m_RequestCount;
    v13 = PendedRequestListHead == p_m_PendedQueue;
  }
  if ( (unsigned int)(NewState - 3) <= 2 )
  {
    p_m_SentIoListHead = (unsigned __int8 *)&this->m_SentIoListHead;
    v22 = (_SINGLE_LIST_ENTRY *)this->m_SentIoListHead.Blink;
    Wait = this->m_SentIoListHead.Flink;
    while ( v22 != (_SINGLE_LIST_ENTRY *)p_m_SentIoListHead )
    {
      RefCount = _InterlockedIncrement((volatile signed __int32 *)&v22[-14].Next + 1);
      if ( SLOBYTE(v22[-12].Next) < 0 )
      {
        Next = (FxTagTracker *)v22[-21].Next;
        if ( Next )
          FxTagTracker::UpdateTagHistory(
            Next,
            (void *)0x6C636E43,
            608,
            "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
            TagAddRef,
            RefCount);
      }
      v22[3].Next = SentRequestListHead->Next;
      SentRequestListHead->Next = v22 + 3;
      v22 = v22[1].Next;
    }
    p_m_IgnoredIoListHead = &this->m_IgnoredIoListHead;
    Flink = this->m_IgnoredIoListHead.Flink;
    for ( i = (_SINGLE_LIST_ENTRY *)this->m_IgnoredIoListHead.Blink;
          i != (_SINGLE_LIST_ENTRY *)p_m_IgnoredIoListHead;
          i = i[1].Next )
    {
      v28 = _InterlockedIncrement((volatile signed __int32 *)&i[-14].Next + 1);
      if ( SLOBYTE(i[-12].Next) < 0 )
      {
        v29 = (FxTagTracker *)i[-21].Next;
        if ( v29 )
          FxTagTracker::UpdateTagHistory(
            v29,
            (void *)0x6C636E43,
            608,
            "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
            TagAddRef,
            v28);
      }
      i[3].Next = SentRequestListHead->Next;
      SentRequestListHead->Next = i + 3;
    }
    if ( Wait == (_LIST_ENTRY *)p_m_SentIoListHead && Flink == p_m_IgnoredIoListHead )
    {
      this->ClearTargetPointers(this);
      KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
    }
    else
    {
      this->m_Removing = 1;
      LOBYTE(v11->Flink) = 1;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
    }
  }
  if ( Lock )
    FxNonPagedObject::Unlock(this, v10, (unsigned __int8)PendedRequestListHead);
}
