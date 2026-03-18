/*
 * XREFs of ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x14003874C
 * Callers:
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x140038810 (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 * Callees:
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x14002D4F0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x140035F00 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x140037850 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140037F00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1400381E0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 */

void __fastcall FxObject::DeferredDisposeWorkItem(FxObject *this)
{
  KIRQL v2; // al
  KIRQL v3; // di
  bool v4; // si

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v3 = v2;
  if ( this->m_ObjectState == 5 )
  {
    FxObject::PerformDisposingDisposeChildrenLocked(this, v2, 0);
  }
  else if ( this->m_ObjectState == 6 )
  {
    FxObject::SetObjectStateLocked(this, 9u);
    FxObject::DisposeChildrenWorker(this, 6u, v3, 0);
    FxObject::DeletedAndDisposedWorkerLocked(this, v3, 0);
  }
  else
  {
    v4 = this->m_ObjectState == 11;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
    if ( v4 )
      FxObject::ProcessDestroy(this);
  }
}
