/*
 * XREFs of ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1400AC900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140044A3C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

__int64 __fastcall FxRelatedDeviceList::ProcessAdd(FxRelatedDeviceList *this, FxTransactionedEntry *NewEntry)
{
  FxRelatedDeviceList *v2; // r10
  _LIST_ENTRY *i; // r8
  FxTransactionedEntry *NextEntryLocked; // rcx
  __int64 v6; // r9

  v2 = this;
  for ( i = this->m_TransactionHead.Flink; ; i = i->Flink )
  {
    if ( i == &this->m_TransactionHead )
    {
      NextEntryLocked = 0LL;
      while ( 1 )
      {
        NextEntryLocked = FxTransactionedList::GetNextEntryLocked(v2, NextEntryLocked);
        if ( !NextEntryLocked )
          break;
        if ( NextEntryLocked[1].m_ListLink.Flink == *(_LIST_ENTRY **)(v6 + 48) )
          return 3221226026LL;
      }
      return 0LL;
    }
    if ( i[3].Flink == NewEntry[1].m_ListLink.Flink )
      break;
  }
  if ( LODWORD(i[2].Flink) != 2 )
    return 0LL;
  return 3221226026LL;
}
