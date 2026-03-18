/*
 * XREFs of ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1400384AC
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140036CE0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140037850 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1400381E0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1400375F8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x140037660 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140037850 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 */

char __fastcall FxObject::PerformEarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rbp
  char v3; // di
  KIRQL v4; // al
  unsigned int m_ObjectState; // edx
  KIRQL v6; // si
  unsigned int v7; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = 1;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  v6 = v4;
  if ( m_ObjectState > 7 )
    goto LABEL_19;
  if ( m_ObjectState == 7 )
    return FxObject::PerformEarlyDisposeWorkerAndUnlock(this, v4, 0);
  if ( !this->m_ObjectState )
    goto LABEL_19;
  v7 = m_ObjectState - 1;
  if ( !v7 )
  {
    if ( _bittest16((const signed __int16 *)&this->24, 9u) )
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, 1u, 3u);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 3;
    }
    this->m_ObjectState = 3;
    return FxObject::PerformDisposingDisposeChildrenLocked(this, v6, 0);
  }
  if ( v7 != 4 )
  {
LABEL_19:
    FxObject::TraceDroppedEvent(this, 4u);
    KeReleaseSpinLock(p_m_Lock, v6);
    return v3;
  }
  return FxObject::PerformDisposingDisposeChildrenLocked(this, v6, 0);
}
