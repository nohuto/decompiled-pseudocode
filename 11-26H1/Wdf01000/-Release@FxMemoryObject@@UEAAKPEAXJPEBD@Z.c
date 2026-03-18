/*
 * XREFs of ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x14002CAB0
 * Callers:
 *     ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z @ 0x140095960 (-Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x14002CB10 (-FinalRelease@FxObject@@AEAAXXZ.c)
 */

__int64 __fastcall FxMemoryObject::Release(FxMemoryObject *this, void *Tag, int Line, const char *File)
{
  _LIST_ENTRY *Flink; // rcx
  unsigned __int32 v6; // ebx

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Flink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v6 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v6 )
    FxObject::FinalRelease(this);
  return v6;
}
