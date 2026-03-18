/*
 * XREFs of ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x14002E6F8
 * Callers:
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x14003BB54 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxCollectionInternal::CleanupEntry(FxCollectionInternal *this, FxCollectionEntry *Entry)
{
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rax

  Flink = Entry->m_ListEntry.Flink;
  if ( Flink->Blink != &Entry->m_ListEntry || (Blink = Entry->m_ListEntry.Blink, Blink->Flink != &Entry->m_ListEntry) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Entry )
    FxPoolFree(Entry);
  --this->m_Count;
}
