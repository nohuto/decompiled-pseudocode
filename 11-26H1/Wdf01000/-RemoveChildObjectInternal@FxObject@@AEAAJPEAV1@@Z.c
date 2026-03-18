/*
 * XREFs of ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x140038A68
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x140036B80 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x140036CE0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 * Callees:
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1400375F8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

__int64 __fastcall FxObject::RemoveChildObjectInternal(FxObject *this, FxObject *ChildObject)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v5; // si
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
  {
    p_m_ChildEntry = &ChildObject->m_ChildEntry;
    Flink = ChildObject->m_ChildEntry.Flink;
    if ( Flink->Blink != &ChildObject->m_ChildEntry
      || (Blink = ChildObject->m_ChildEntry.Blink, Blink->Flink != p_m_ChildEntry) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    ChildObject->m_ChildEntry.Blink = &ChildObject->m_ChildEntry;
    p_m_ChildEntry->Flink = p_m_ChildEntry;
    KeReleaseSpinLock(p_m_Lock, v5);
    return 0LL;
  }
  else
  {
    FxObject::TraceDroppedEvent(this, 2u);
    KeReleaseSpinLock(p_m_Lock, v5);
    return 3221225558LL;
  }
}
