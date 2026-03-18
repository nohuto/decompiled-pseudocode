/*
 * XREFs of ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x14005B9E0
 * Callers:
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x140260A88 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x14001CB9C (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x14004AF34 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 *     ?InsertTail@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x14005BA90 (-InsertTail@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U-$DoubleLinkedL.c)
 */

char __fastcall Queue<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::Enqueue(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r10
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rax

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
  if ( (unsigned __int8)DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>>::InsertTail(a1 + 1) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 113;
  }
  v6 = a1[7];
  if ( v6 )
  {
    if ( a1[5] > v6 )
    {
      v7 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead((__int64)(a1 + 1));
      NonReferenceCounted::Release((NonReferenceCounted *)(v7 + 3));
    }
  }
  return 1;
}
