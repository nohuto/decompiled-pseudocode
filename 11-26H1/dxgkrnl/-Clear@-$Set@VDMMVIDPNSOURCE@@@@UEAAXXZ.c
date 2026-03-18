/*
 * XREFs of ?Clear@?$Set@VDMMVIDPNSOURCE@@@@UEAAXXZ @ 0x140097A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x14004BC80 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@.c)
 */

__int64 __fastcall Set<DMMVIDPNSOURCE>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(a1 + 8);
}
