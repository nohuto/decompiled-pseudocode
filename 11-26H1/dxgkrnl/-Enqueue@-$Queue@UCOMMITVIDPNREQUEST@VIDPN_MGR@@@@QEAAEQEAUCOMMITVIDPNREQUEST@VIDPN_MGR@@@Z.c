/*
 * XREFs of ?Enqueue@?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@QEAAEQEAUCOMMITVIDPNREQUEST@VIDPN_MGR@@@Z @ 0x14004FE70
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x14002E274 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x14001CB9C (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@QEAAPEAUCOMMITVIDPNREQUEST@VIDPN_MGR@@XZ @ 0x14004FF20 (-RemoveHead@-$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDeleter@.c)
 *     ?InsertTail@?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUCOMMITVIDPNREQUEST@VIDPN_MGR@@@Z @ 0x14004FF6C (-InsertTail@-$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDeleter@.c)
 */

char __fastcall Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::Enqueue(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r10
  _QWORD *v5; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax

  v2 = (_QWORD *)a1[3];
  v3 = 0LL;
  if ( v2 != a1 + 3 )
    v3 = v2 - 1;
  while ( v3 )
  {
    if ( v3 == a2 )
      return 0;
    v5 = (_QWORD *)v3[1];
    v3 = v5 - 1;
    if ( v5 == a1 + 3 )
      v3 = 0LL;
  }
  if ( (unsigned __int8)DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::InsertTail(a1 + 1) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 113;
  }
  v7 = a1[7];
  if ( v7 && a1[5] > v7 )
  {
    v8 = DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::RemoveHead(a1 + 1);
    NonReferenceCounted::Release((NonReferenceCounted *)(v8 + 24));
  }
  return 1;
}
