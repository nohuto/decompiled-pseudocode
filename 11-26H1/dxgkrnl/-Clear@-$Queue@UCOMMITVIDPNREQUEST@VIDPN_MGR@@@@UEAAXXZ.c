/*
 * XREFs of ?Clear@?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAAXXZ @ 0x1400964B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@QEAAXXZ @ 0x14006A034 (-Clear@-$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDeleter@UCOMM.c)
 */

void __fastcall Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::Clear(__int64 a1)
{
  DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::Clear(a1 + 8);
}
