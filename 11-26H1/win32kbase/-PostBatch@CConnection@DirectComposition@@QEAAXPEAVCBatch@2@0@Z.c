/*
 * XREFs of ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1400B4E50
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1400B4790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400B4CB8 (-OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::PostBatch(
        union _SLIST_HEADER *this,
        struct _SLIST_ENTRY *a2,
        struct DirectComposition::CBatch *a3)
{
  struct _SLIST_ENTRY *Next; // rax

  Next = a2->Next;
  *((_QWORD *)&a2[1].Next + 1) = a2->Next;
  if ( Next )
    *((_QWORD *)&Next[1].Next + 1) = a3;
  ExpInterlockedPushEntrySList(this + 6, a2);
  KeSetEvent(*(PRKEVENT *)(this[5].Region + 8), 1, 0);
}
