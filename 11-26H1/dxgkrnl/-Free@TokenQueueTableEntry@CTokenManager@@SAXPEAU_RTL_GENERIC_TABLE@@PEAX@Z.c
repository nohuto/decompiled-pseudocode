/*
 * XREFs of ?Free@TokenQueueTableEntry@CTokenManager@@SAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x14001C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall CTokenManager::TokenQueueTableEntry::Free(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Buffer);
}
