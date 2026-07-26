/*
 * XREFs of ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400D7EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14002C330 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     NdisMCoSendNetBufferListsComplete @ 0x140060170 (NdisMCoSendNetBufferListsComplete.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400D8040 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisCoSendNetBufferListsToNdisPacket(_QWORD *a1, struct _NET_BUFFER_LIST *a2, int a3)
{
  int v6; // edx
  char v7; // bl
  PNET_BUFFER_LIST Alignment; // rbx
  PNET_BUFFER_LIST v9; // rax
  struct _NDIS_PACKET **v10[2]; // [rsp+30h] [rbp-D0h] BYREF
  PNET_BUFFER_LIST NetBufferLists; // [rsp+40h] [rbp-C0h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+48h] [rbp-B8h]
  unsigned int v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+54h] [rbp-ACh]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  _BYTE v16[512]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v16, 0, sizeof(v16));
  v10[1] = (struct _NDIS_PACKET **)64;
  v10[0] = (struct _NDIS_PACKET **)v16;
  FirstNetBuffer = a2->FirstNetBuffer;
  v15 = a1[24];
  NetBufferLists = a2;
  v13 = 0;
  v14 = a3;
  do
  {
    v7 = ndisXlateSendNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)v10, 0);
    if ( v13 )
      ndisCoSendPacketsToNdisPackets(a1, v10[0], v13);
  }
  while ( v7 );
  Alignment = NetBufferLists;
  if ( NetBufferLists )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        3,
        12,
        (struct _GUID *)&WPP_04789eb9d50d37f5e019db2d2af48132_Traceguids);
    }
    if ( FirstNetBuffer != Alignment->FirstNetBuffer )
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
    if ( Alignment )
    {
      v9 = Alignment;
      do
      {
        v9->Status = -1073741823;
        v9 = (PNET_BUFFER_LIST)v9->Link.Alignment;
      }
      while ( v9 );
      NdisMCoSendNetBufferListsComplete(a1, Alignment, a3 & 1);
    }
  }
}
