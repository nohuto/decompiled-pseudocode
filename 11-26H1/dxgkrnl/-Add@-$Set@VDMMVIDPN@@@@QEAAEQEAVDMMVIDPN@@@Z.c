/*
 * XREFs of ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x14004ED44
 * Callers:
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403444C8 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403446C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x14004EDFC (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAE.c)
 */

char __fastcall Set<DMMVIDPN>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  if ( v2 != a1 + 24 )
    v3 = v2 - 8;
  while ( v3 )
  {
    if ( v3 == a2 )
      return 0;
    v6 = *(_QWORD *)(v3 + 8);
    v3 = v6 - 8;
    if ( v6 == a1 + 24 )
      v3 = 0LL;
  }
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::InsertTail(a1 + 8) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 108;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 1;
}
