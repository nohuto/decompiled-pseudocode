/*
 * XREFs of ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D8EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x14002BD10 (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMCoSendNetBufferListsCompleteToNdisPackets(_QWORD *a1, struct _NET_BUFFER_LIST *a2)
{
  __int64 v2; // rdi
  struct _NET_BUFFER_LIST *v3; // rax
  struct _NET_BUFFER_LIST *Alignment; // rbx
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  struct _NDIS_PACKET *v7; // [rsp+38h] [rbp+10h] BYREF
  struct _NDIS_STACK_RESERVED *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 )
  {
    v2 = a1[9];
    v3 = a2;
    v7 = 0LL;
    v6 = 0;
    v8 = 0LL;
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v3->Link.Alignment;
      ndisXlateSendCompleteNetBufferListToPacket(v3, &v7, &v6);
      NDIS_STACK_RESERVED_FROM_PACKET(v7, &v8);
      *((_DWORD *)v8 + 2) = 0;
      v5 = (unsigned int)v6;
      --*(_DWORD *)&v7[-1].ProtocolReserved[4];
      (*(void (__fastcall **)(__int64, _QWORD, struct _NDIS_PACKET *))(v2 + 48))(v5, *(_QWORD *)(v2 + 24), v7);
      v3 = Alignment;
    }
    while ( Alignment );
  }
}
