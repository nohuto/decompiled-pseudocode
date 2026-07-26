/*
 * XREFs of ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x140033B50
 * Callers:
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400339F0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x14005A410 (-ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D8A20 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14002D010 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x14002D870 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisCoIndicatePromiscNetBuffer(
        _QWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // r15
  bool v11; // zf
  __int64 v12; // rsi
  struct _NDIS_OPEN_BLOCK *v13; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v15; // rax
  unsigned __int8 v16; // r12
  _NDIS_PACKET **v17; // r13
  __int64 v18; // rsi
  _NDIS_PACKET *v19; // rdi
  __int64 v20; // [rsp+38h] [rbp-2A0h]
  struct _NDIS_OPEN_BLOCK *v21; // [rsp+40h] [rbp-298h]
  _NDIS_PACKET **v22; // [rsp+48h] [rbp-290h] BYREF
  int v23; // [rsp+50h] [rbp-288h]
  int v24; // [rsp+54h] [rbp-284h]
  struct _NET_BUFFER_LIST *v25; // [rsp+58h] [rbp-280h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+60h] [rbp-278h]
  __int64 v27; // [rsp+68h] [rbp-270h]
  struct _NDIS_MINIPORT_BLOCK *v28; // [rsp+70h] [rbp-268h]
  _BYTE v29[512]; // [rsp+80h] [rbp-258h] BYREF

  v7 = a1[9];
  v27 = 0LL;
  memset(v29, 0, sizeof(v29));
  v22 = (_NDIS_PACKET **)v29;
  v11 = a2->PmodeOpens == 0;
  FirstNetBuffer = a4->FirstNetBuffer;
  v23 = 64;
  v24 = -1073741670;
  v25 = a4;
  v28 = a2;
  if ( !v11 && a3 )
  {
    v12 = 424LL;
    if ( !a7 )
      v12 = 392LL;
    v20 = v12;
    do
    {
      v13 = *(struct _NDIS_OPEN_BLOCK **)((char *)&a3->MacHandle + v12);
      v21 = v13;
      if ( (a3->OpenFlags & 4) != 0 )
      {
        *((_BYTE *)a3->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
        if ( a3->ProtocolHandle->MajorNdisVersion < 6u )
        {
          do
          {
            v16 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v22);
            if ( (_DWORD)v27 )
            {
              v17 = v22;
              v18 = (unsigned int)v27;
              do
              {
                v19 = *v17;
                v19->Private.Flags |= 0x100u;
                a3->ProtocolHandle->CoReceivePacketHandler(a3->ProtocolBindingContext, (void *)(v7 + 136), v19);
                ndisXlateReturnPacketToNetBufferList(v19);
                ++v17;
                --v18;
              }
              while ( v18 );
            }
          }
          while ( v16 );
          v12 = v20;
          v13 = v21;
        }
        else
        {
          Alignment = a4;
          do
          {
            Alignment->Flags |= 0x80u;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          a4->NblFlags |= 0x8000u;
          a3->ProtocolHandle->CoReceiveNetBufferListsHandler(
            a3->ProtocolBindingContext,
            (void *)(v7 + 136),
            a4,
            a5,
            a6 | 2);
          v15 = a4;
          do
          {
            v15->Flags &= ~0x80u;
            v15 = (struct _NET_BUFFER_LIST *)v15->Link.Alignment;
          }
          while ( v15 );
          a4->NblFlags &= ~0x8000u;
        }
      }
      a3 = v13;
    }
    while ( v13 );
  }
}
