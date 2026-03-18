/*
 * XREFs of ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002DF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x14002E440 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1400336A0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x140037B4C (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140037F00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x140053D90 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x140081B70 (-PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x14008263C (--1FxTagTracker@@QEAA@XZ.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x140082B78 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequest::Release(FxRequest *this, void *Tag, __int64 Line, const char *File)
{
  char m_ObjectFlags; // al
  unsigned __int8 m_CanComplete; // r14
  unsigned __int8 m_Reserved; // bp
  unsigned __int8 m_IrpAllocation; // r12
  _LIST_ENTRY *Blink; // rcx
  unsigned __int32 v10; // esi
  FxIoQueue *m_ForwardProgressQueue; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v14; // r8
  _LIST_ENTRY *p_m_PendedIrpList; // rcx
  _LIST_ENTRY *j; // rdx
  _LIST_ENTRY **p_Blink; // r14
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // ax
  _LIST_ENTRY *v20; // r14
  _QWORD *i; // r15
  void (__fastcall *v22)(unsigned __int64, void *, __int64, const char *); // rax
  void (__fastcall *v23)(unsigned __int64, void *, __int64, const char *); // rax
  __int64 m_ObjectSize; // rcx
  char v25; // al
  _QWORD *v26; // rcx
  _QWORD *v27; // r15
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rbp
  _IRP *m_Irp; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v32; // r8
  char v33; // al
  unsigned __int8 v34; // r8
  KIRQL v35; // r9
  FxVerifierLock *v36; // rcx
  FxObjectExcessiveAllocation *ObjectExcessiveAllocation; // rcx
  FxVerifierLock *v38; // rcx
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v40; // rax
  FxRequestBase *v41; // rcx
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  m_CanComplete = this->m_CanComplete;
  m_Reserved = this->m_Reserved;
  m_IrpAllocation = this->m_IrpAllocation;
  PreviousIrql = m_CanComplete;
  if ( m_ObjectFlags < 0 )
  {
    Blink = this[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Blink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v10 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v10 )
  {
    v18 = this->m_ObjectFlags;
    if ( (v18 & 0x20) != 0 || (v18 & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      v19 = this->m_ObjectFlags;
      if ( (v19 & 0x80u) != 0 )
      {
        v20 = this[-1].m_OwnerListEntry2.Blink;
        if ( v20 )
        {
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_OwnerListEntry2.Blink);
          v19 = this->m_ObjectFlags;
        }
      }
      else
      {
        v20 = 0LL;
      }
      if ( this->m_ObjectSize && (v19 & 8) != 0 )
      {
        for ( i = (FxRequest_vtbl **)((char *)&this->__vftable + this->m_ObjectSize); i; i = (_QWORD *)i[1] )
        {
          v22 = (void (__fastcall *)(unsigned __int64, void *, __int64, const char *))i[2];
          if ( v22 )
          {
            v22((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[2] = 0LL;
          }
          v23 = (void (__fastcall *)(unsigned __int64, void *, __int64, const char *))i[3];
          if ( v23 )
          {
            v23((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[3] = 0LL;
          }
        }
        m_ObjectSize = this->m_ObjectSize;
        v25 = 1;
        if ( (_WORD)m_ObjectSize )
        {
          v26 = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize);
          if ( v26 )
          {
            do
            {
              v27 = (_QWORD *)v26[1];
              if ( !v25 )
                FxPoolFree(v26);
              v25 = 0;
              v26 = v27;
            }
            while ( v27 );
          }
        }
      }
      if ( (this->m_ObjectFlags & 0x40) != 0 )
      {
        ObjectExcessiveAllocation = this->m_Globals->ObjectExcessiveAllocation;
        _InterlockedDecrement(&ObjectExcessiveAllocation->ObjectCnt);
        if ( this->m_Type == 4098 && _InterlockedExchangeAdd(&ObjectExcessiveAllocation->DeviceCnt, 0xFFFFFFFF) != 1 )
          _InterlockedAdd(&ObjectExcessiveAllocation->LimitScaled, -ObjectExcessiveAllocation->Limit);
      }
      if ( v20 )
      {
        this[-1].m_OwnerListEntry2.Blink = 0LL;
        FxTagTracker::~FxTagTracker((FxTagTracker *)v20);
        FxPoolFree(v20);
      }
      ((void (__fastcall *)(FxRequest *, void *, __int64, const char *))this->SelfDestruct)(this, Tag, Line, File);
      m_CanComplete = PreviousIrql;
    }
  }
  if ( m_Reserved && v10 == 1 && this->m_Completed )
  {
    m_ForwardProgressQueue = this->m_ForwardProgressQueue;
    m_Globals = m_ForwardProgressQueue->m_Globals;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(this, 1024);
    v14 = KeAcquireSpinLockRaiseToDpc(&m_ForwardProgressQueue->m_FwdProgContext->m_PendedReserveLock.m_Lock);
    p_m_PendedIrpList = &m_ForwardProgressQueue->m_FwdProgContext->m_PendedIrpList;
    for ( j = p_m_PendedIrpList->Flink; ; j = Flink )
    {
      p_Blink = 0LL;
      if ( j == p_m_PendedIrpList )
        break;
      Flink = j->Flink;
      p_Blink = &j[-11].Blink;
      if ( j->Flink->Blink != j || (v40 = j->Blink, v40->Flink != j) )
        __fastfail(3u);
      v40->Flink = Flink;
      Flink->Blink = v40;
      j->Blink = j;
      j->Flink = j;
      if ( _InterlockedExchange64((volatile __int64 *)p_Blink + 13, 0LL) )
      {
        p_Blink[18] = 0LL;
        break;
      }
    }
    KeReleaseSpinLock(&m_ForwardProgressQueue->m_FwdProgContext->m_PendedReserveLock.m_Lock, v14);
    this->m_SystemBuffer.m_Buffer = 0LL;
    this->m_OutputBuffer.m_Buffer = 0LL;
    FxRequestBase::ClearFieldsForReuse(this);
    if ( p_Blink )
    {
      this->m_Irp.m_Irp = (_IRP *)p_Blink;
      FxRequest::AssignMemoryBuffers(this, (_WDF_DEVICE_IO_TYPE)m_ForwardProgressQueue->m_DeviceBase[1].m_Refcnt);
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(v41, 1024);
      FxIoQueue::QueueRequest(m_ForwardProgressQueue, this);
    }
    else
    {
      FxIoQueue::PutBackReservedRequest(m_ForwardProgressQueue, this);
    }
  }
  else if ( m_IrpAllocation )
  {
    if ( m_CanComplete )
    {
      if ( v10 == 1 )
      {
        if ( this->m_Completed )
        {
          m_CompletionState = this->m_CompletionState;
          m_IoQueue = this->m_IoQueue;
          m_Irp = this->m_Irp.m_Irp;
          m_PriorityBoost = this->m_PriorityBoost;
          this->m_CompletionState = 0;
          this->m_IoQueue = 0LL;
          this->m_Irp.m_Irp = 0LL;
          IofCompleteRequest(m_Irp, m_PriorityBoost);
          if ( m_CompletionState == 1 )
          {
            v33 = m_IoQueue->m_ObjectFlags;
            PreviousIrql = 0;
            if ( v33 < 0 && (v36 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
            {
              FxVerifierLock::Lock(v36, &PreviousIrql, v32);
              v35 = PreviousIrql;
            }
            else
            {
              v35 = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
            }
            --m_IoQueue->m_TwoPhaseCompletions;
            --m_IoQueue->m_DriverIoCount;
            if ( m_IoQueue->m_Dispatching )
            {
              if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
                && (v38 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Unlock(v38, v35, v34);
              }
              else
              {
                KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, v35);
              }
            }
            else
            {
              FxIoQueue::DispatchEvents(m_IoQueue, v35, 0LL);
            }
          }
        }
      }
    }
  }
  return v10;
}
