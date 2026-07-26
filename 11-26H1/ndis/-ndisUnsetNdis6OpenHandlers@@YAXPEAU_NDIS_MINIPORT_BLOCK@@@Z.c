/*
 * XREFs of ?ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140179CE0
 * Callers:
 *     ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140179BD0 (-ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

void __fastcall ndisUnsetNdis6OpenHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  bool v3; // si
  bool v4; // cf
  unsigned __int8 v5; // dl
  void (__fastcall *Ndis5PacketIndicateHandler)(void *, _NDIS_PACKET **, unsigned int); // rax
  void (__fastcall *ReturnPacketHandler)(void *, _NDIS_PACKET *); // rcx

  OpenQueue = a1->OpenQueue;
  v3 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      153,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
  if ( !OpenQueue )
    goto LABEL_18;
  do
  {
    if ( !v3 )
      v3 = OpenQueue->ProtocolHandle->MajorNdisVersion >= 6u;
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  while ( OpenQueue );
  if ( !v3 )
  {
LABEL_18:
    if ( !a1->HighestFilter )
    {
      a1->Ndis6ProtocolsBound = 0;
      v4 = (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x20000000) != 0;
      Ndis5PacketIndicateHandler = a1->Ndis5PacketIndicateHandler;
      a1->SavedPacketIndicateHandler = Ndis5PacketIndicateHandler;
      if ( v4 )
        a1->PacketIndicateHandler = Ndis5PacketIndicateHandler;
      if ( !a1->HighestFilter && v5 < 6u )
      {
        ReturnPacketHandler = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.ReturnPacketHandler;
        a1->SynchronousReturnPacketContext = a1->MiniportAdapterContext;
        a1->SynchronousReturnPacketHandler = ReturnPacketHandler;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      154,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1);
}
