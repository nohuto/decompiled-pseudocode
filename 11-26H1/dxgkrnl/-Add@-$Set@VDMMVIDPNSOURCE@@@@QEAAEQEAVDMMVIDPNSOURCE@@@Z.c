/*
 * XREFs of ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x14004A3D4
 * Callers:
 *     ??$Add@VDMMVIDPNSOURCE@@@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@@@Z @ 0x14004A364 (--$Add@VDMMVIDPNSOURCE@@@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?InsertTail@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x14004A48C (-InsertTail@-$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDelet.c)
 */

char __fastcall Set<DMMVIDPNSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  if ( v2 != a1 + 24 )
    v3 = v2 - 8;
  while ( v3 )
  {
    if ( v3 == a2 )
      return 0;
    v5 = *(_QWORD *)(v3 + 8);
    v3 = v5 - 8;
    if ( v5 == a1 + 24 )
      v3 = 0LL;
  }
  if ( (unsigned __int8)DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(a1 + 8) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 108;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 1;
}
