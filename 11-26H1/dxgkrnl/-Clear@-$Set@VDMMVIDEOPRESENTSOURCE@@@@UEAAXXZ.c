/*
 * XREFs of ?Clear@?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAXXZ @ 0x140096510
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x14004B6A4 (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRE.c)
 */

__int64 __fastcall Set<DMMVIDEOPRESENTSOURCE>::Clear(__int64 a1)
{
  return DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear(a1 + 8);
}
