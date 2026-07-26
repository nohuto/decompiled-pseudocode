/*
 * XREFs of NdisSetPacketPoolProtocolId @ 0x1400DB110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisSetPacketPoolProtocolId(NDIS_HANDLE PacketPoolHandle, UINT ProtocolId)
{
  _QWORD *i; // r8
  int v4; // edx
  _QWORD *v5; // r11

  *((_DWORD *)PacketPoolHandle + 4) = ProtocolId;
  for ( i = (_QWORD *)*((_QWORD *)PacketPoolHandle + 5); i != (_QWORD *)((char *)PacketPoolHandle + 40); i = (_QWORD *)*i )
  {
    v4 = *((unsigned __int16 *)PacketPoolHandle + 3);
    v5 = i + 8;
    if ( *((_WORD *)PacketPoolHandle + 3) )
    {
      do
      {
        HIDWORD(v5[6 * ndisPacketStackSize + 6]) |= ProtocolId;
        v5 = (_QWORD *)((char *)v5 + *((unsigned __int16 *)PacketPoolHandle + 2));
        --v4;
      }
      while ( v4 );
    }
  }
}
