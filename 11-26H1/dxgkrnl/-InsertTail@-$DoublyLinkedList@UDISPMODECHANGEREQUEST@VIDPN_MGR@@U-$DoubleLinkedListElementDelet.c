/*
 * XREFs of ?InsertTail@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x14004A48C
 * Callers:
 *     ?Add@?$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x14004A3D4 (-Add@-$Set@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x14004AE84 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x14004C4C8 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  char result; // al

  v2 = a1 + 2;
  if ( a2 )
  {
    v5 = 0LL;
    if ( (_QWORD *)*v2 != v2 )
      v5 = *v2 - 8LL;
    while ( v5 )
    {
      if ( v5 == a2 )
        return 0;
      v8 = *(_QWORD **)(v5 + 8);
      v5 = (__int64)(v8 - 1);
      if ( v8 == v2 )
        v5 = 0LL;
    }
  }
  v6 = (_QWORD *)a1[3];
  v7 = (_QWORD *)(a2 + 8);
  if ( (_QWORD *)*v6 != v2 )
    __fastfail(3u);
  *v7 = v2;
  *(_QWORD *)(a2 + 16) = v6;
  *v6 = v7;
  v2[1] = v7;
  result = 1;
  ++a1[4];
  return result;
}
