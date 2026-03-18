/*
 * XREFs of ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x140050688
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1402D6908 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Remove@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAPEAVDMMVIDPN@@QEAV2@@Z @ 0x1400506E0 (-Remove@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAPEAVD.c)
 */

__int64 __fastcall Set<DMMVIDPN>::Remove(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v6; // r8

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 != a1 + 24 )
    v3 = v4 - 8;
  while ( v3 && v3 != a2 )
  {
    v6 = *(_QWORD *)(v3 + 8);
    v3 = v6 - 8;
    if ( v6 == a1 + 24 )
      v3 = 0LL;
  }
  return DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Remove();
}
