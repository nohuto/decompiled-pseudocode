/*
 * XREFs of ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140037F00
 * Callers:
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x14002CB10 (-FinalRelease@FxObject@@AEAAXXZ.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x14002D660 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14002DF70 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x140036B80 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140036CE0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x140037310 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140037850 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1400381E0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140038708 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x14003874C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::SetObjectStateLocked(FxObject *this, unsigned int NewState)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx

  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, NewState);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = NewState;
    this->m_ObjectState = NewState;
  }
  else
  {
    this->m_ObjectState = NewState;
  }
}
