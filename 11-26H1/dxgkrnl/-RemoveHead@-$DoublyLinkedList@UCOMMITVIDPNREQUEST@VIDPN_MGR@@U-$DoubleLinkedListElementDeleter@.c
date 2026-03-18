/*
 * XREFs of ?RemoveHead@?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@QEAAPEAUCOMMITVIDPNREQUEST@VIDPN_MGR@@XZ @ 0x14004FF20
 * Callers:
 *     ?Enqueue@?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@QEAAEQEAUCOMMITVIDPNREQUEST@VIDPN_MGR@@@Z @ 0x14004FE70 (-Enqueue@-$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@QEAAEQEAUCOMMITVIDPNREQUEST@VIDPN_MGR@@@Z.c)
 *     ?Clear@?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@QEAAXXZ @ 0x14006A034 (-Clear@-$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDeleter@UCOMM.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::RemoveHead(
        __int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rax
  __int64 v3; // r8

  v1 = (_QWORD *)(a1 + 16);
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 == (_QWORD *)(a1 + 16) )
    return 0LL;
  if ( (_QWORD *)v2[1] != v1 || (v3 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
    __fastfail(3u);
  *v1 = v3;
  *(_QWORD *)(v3 + 8) = v1;
  --*(_QWORD *)(a1 + 32);
  *v2 = 0LL;
  v2[1] = 0LL;
  return v2 - 1;
}
