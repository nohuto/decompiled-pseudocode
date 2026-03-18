/*
 * XREFs of ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140037850
 * Callers:
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x140037310 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x140037660 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1400384AC (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x14003874C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x140035F00 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x140037B4C (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140037F00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x14003842C (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1400384AC (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140038708 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxObject::PerformDisposingDisposeChildrenLocked(
        FxObject *this,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  bool v6; // zf
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *i; // rsi
  unsigned __int16 m_ObjectFlags; // cx
  FxObject *v12; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  FxDisposeList *m_DisposeList; // rcx
  KIRQL v15; // dl
  KIRQL v16; // di
  _FX_DRIVER_GLOBALS *v17; // rcx
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v20; // rdx

  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v20 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v20, this->m_ObjectState, 4u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 4;
  }
  v6 = (this->m_ObjectFlags & 0x20) == 0;
  this->m_ObjectState = 4;
  if ( v6 || !OldIrql )
  {
    Flink = this->m_ChildListHead.Flink;
    p_m_ChildListHead = &this->m_ChildListHead;
    while ( 1 )
    {
      if ( Flink == p_m_ChildListHead )
      {
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
        for ( i = this->m_ChildListHead.Flink; i != p_m_ChildListHead; i = i->Flink )
        {
          if ( !FxObject::PerformEarlyDispose((FxObject *)&i[-5].Blink) )
          {
            v16 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
            if ( CanDefer )
              FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
            else
              FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDisposing);
            v15 = v16;
            goto LABEL_24;
          }
        }
        if ( (!_bittest16((const signed __int16 *)&this->24, 0xBu) || this->Dispose(this))
          && _bittest16((const signed __int16 *)&this->24, 0xAu) )
        {
          FxObject::CallCleanupCallbacks(this);
        }
        m_ObjectFlags = this->m_ObjectFlags;
        if ( (m_ObjectFlags & 0x104) == 0x104 )
        {
          FxObject::DeletedAndDisposedWorkerLocked(this, OldIrql, 0);
        }
        else
        {
          if ( (m_ObjectFlags & 0x200) != 0 )
          {
            v17 = this->m_Globals;
            if ( v17->FxVerboseOn )
            {
              _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                _a2 = 0LL;
              WPP_IFR_SF_qqLL(v17, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 2u);
            }
            if ( SLOBYTE(this->m_ObjectFlags) < 0 )
              *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 2;
          }
          this->m_ObjectState = 2;
        }
        return 1;
      }
      if ( OldIrql && ((__int64)Flink[-3].Flink & 0x10) != 0 )
        break;
      Flink = Flink->Flink;
    }
    v12 = this;
    if ( !CanDefer )
      goto LABEL_48;
    FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDisposing);
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase )
      m_DisposeList = m_DeviceBase->m_DisposeList;
    else
      m_DisposeList = this->m_Globals->Driver->m_DisposeList;
    FxDisposeList::Add(m_DisposeList, this);
  }
  else
  {
    v12 = this;
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
    else
LABEL_48:
      FxObject::SetObjectStateLocked(v12, FxObjectStateDeferedDisposing);
  }
  v15 = OldIrql;
LABEL_24:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v15);
  return 0;
}
