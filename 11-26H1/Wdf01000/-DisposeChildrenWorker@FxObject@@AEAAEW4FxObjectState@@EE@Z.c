/*
 * XREFs of ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1400381E0
 * Callers:
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x14003874C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x140037B4C (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140037F00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x14003842C (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1400384AC (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140038708 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxObject::DisposeChildrenWorker(
        FxObject *this,
        unsigned __int32 NewDeferedState,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  unsigned __int16 m_ObjectFlags; // r8
  FxObject *_a1; // rbx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *j; // rsi
  FxDeviceBase *m_DeviceBase; // rax
  FxDisposeList *m_DisposeList; // rcx
  KIRQL v15; // di
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx

  m_ObjectFlags = this->m_ObjectFlags;
  _a1 = this;
  if ( (m_ObjectFlags & 0x20) != 0 && OldIrql )
  {
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(this, (FxObjectState)NewDeferedState);
    else
LABEL_38:
      FxObject::SetObjectStateLocked(this, NewDeferedState);
  }
  else
  {
    p_m_ChildListHead = &this->m_ChildListHead;
    for ( i = this->m_ChildListHead.Flink; ; i = i->Flink )
    {
      if ( i == p_m_ChildListHead )
      {
        KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, OldIrql);
        for ( j = _a1->m_ChildListHead.Flink; j != p_m_ChildListHead; j = j->Flink )
        {
          if ( !FxObject::PerformEarlyDispose((FxObject *)&j[-5].Blink) )
          {
            v15 = KeAcquireSpinLockRaiseToDpc(&_a1->m_SpinLock.m_Lock);
            if ( CanDefer )
              FxObject::QueueDeferredDisposeLocked(_a1, (FxObjectState)NewDeferedState);
            else
              FxObject::SetObjectStateLocked(_a1, NewDeferedState);
            KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, v15);
            return 0;
          }
        }
        if ( !_bittest16((const signed __int16 *)&_a1->24, 0xBu) || _a1->Dispose(_a1) )
        {
          if ( _bittest16((const signed __int16 *)&_a1->24, 0xAu) )
            FxObject::CallCleanupCallbacks(_a1);
        }
        return 1;
      }
      if ( OldIrql && ((__int64)i[-3].Flink & 0x10) != 0 )
        break;
    }
    if ( !CanDefer )
    {
      this = _a1;
      goto LABEL_38;
    }
    if ( (m_ObjectFlags & 0x200) != 0 )
    {
      m_Globals = _a1->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = (const void *)((unsigned __int64)_a1 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !_a1->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqLL(
          m_Globals,
          5u,
          0x14u,
          0xAu,
          WPP_FxObject_hpp_Traceguids,
          _a1,
          _a2,
          _a1->m_ObjectState,
          NewDeferedState);
      }
      if ( SLOBYTE(_a1->m_ObjectFlags) < 0 )
        *((_BYTE *)_a1 + _InterlockedIncrement((volatile signed __int32 *)&_a1[-1].m_ChildEntry.Blink) - 32) = NewDeferedState;
    }
    m_DeviceBase = _a1->m_DeviceBase;
    _a1->m_ObjectState = NewDeferedState;
    if ( m_DeviceBase )
      m_DisposeList = m_DeviceBase->m_DisposeList;
    else
      m_DisposeList = _a1->m_Globals->Driver->m_DisposeList;
    FxDisposeList::Add(m_DisposeList, _a1, m_ObjectFlags);
  }
  KeReleaseSpinLock(&_a1->m_SpinLock.m_Lock, OldIrql);
  return 0;
}
