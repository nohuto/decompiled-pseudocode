/*
 * XREFs of ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x14002D380
 * Callers:
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x14002C330 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 * Callees:
 *     NdisAllocatePacket @ 0x14002D4A0 (NdisAllocatePacket.c)
 */

__int64 __fastcall ndisNetBufferToPacket(struct _NET_BUFFER *a1, char a2, struct _NDIS_PACKET **a3)
{
  NDIS_HANDLE v4; // r8
  __int64 result; // rax
  PNDIS_PACKET v8; // rdx
  $1D6D43BBFBDC271B1326278BE0F4D185 *ProtocolReserved; // r10
  _MDL *CurrentMdl; // rax
  __int64 CurrentMdlOffset; // r8
  unsigned int DataLength; // r9d
  unsigned int v13; // r8d
  unsigned int ByteCount; // ecx
  ULONG v15; // r11d
  int Status; // [rsp+48h] [rbp+10h] BYREF
  PNDIS_PACKET Packet; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = ndisRecvPacketPool;
  if ( a2 )
    v4 = ndisSendPacketPool;
  Status = 0;
  if ( !v4 )
    return 3221225626LL;
  Packet = 0LL;
  NdisAllocatePacket(&Status, &Packet, v4);
  result = (unsigned int)Status;
  if ( !Status )
  {
    v8 = Packet;
    Packet->Private.Head = 0LL;
    ProtocolReserved = ($1D6D43BBFBDC271B1326278BE0F4D185 *)v8->ProtocolReserved;
    if ( !a2 )
      ProtocolReserved = &v8->48;
    *(_DWORD *)ProtocolReserved->MiniportReserved = 0;
    *(_QWORD *)&ProtocolReserved->MacReserved[8] = 0LL;
    CurrentMdl = a1->CurrentMdl;
    CurrentMdlOffset = a1->CurrentMdlOffset;
    CurrentMdl->ByteOffset += CurrentMdlOffset;
    CurrentMdl->ByteCount -= CurrentMdlOffset;
    if ( (CurrentMdl->MdlFlags & 5) != 0 )
      CurrentMdl->MappedSystemVa = (char *)CurrentMdl->MappedSystemVa + CurrentMdlOffset;
    DataLength = a1->DataLength;
    v13 = 0;
    if ( DataLength )
      v8->Private.Head = CurrentMdl;
    while ( v13 < DataLength && CurrentMdl )
    {
      ByteCount = CurrentMdl->ByteCount;
      v15 = DataLength - v13;
      if ( ByteCount >= DataLength - v13 )
      {
        *(_DWORD *)ProtocolReserved->MiniportReserved = ByteCount;
        v13 = DataLength;
        *(_QWORD *)&ProtocolReserved->MacReserved[8] = CurrentMdl->Next;
        CurrentMdl->ByteCount = v15;
        CurrentMdl->Next = 0LL;
        break;
      }
      CurrentMdl = CurrentMdl->Next;
      v13 += ByteCount;
    }
    v8->Private.Head = a1->CurrentMdl;
    v8->Private.Tail = CurrentMdl;
    result = 0LL;
    v8->Private.TotalLength = v13;
    v8->Private.ValidCounts = 0;
    *a3 = v8;
  }
  return result;
}
