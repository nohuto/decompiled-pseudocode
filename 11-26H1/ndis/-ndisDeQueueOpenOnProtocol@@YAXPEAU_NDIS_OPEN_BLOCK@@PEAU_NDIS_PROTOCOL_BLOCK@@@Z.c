/*
 * XREFs of ?ndisDeQueueOpenOnProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140179A90
 * Callers:
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F330 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181D90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisDeQueueOpenOnProtocol(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  KIRQL v4; // al
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  _NDIS_OPEN_BLOCK **p_ProtocolNextOpen; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x30u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      a2);
  v4 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  OpenQueue = a2->OpenQueue;
  if ( a1 == OpenQueue )
  {
    a2->OpenQueue = a1->ProtocolNextOpen;
  }
  else if ( OpenQueue )
  {
    while ( 1 )
    {
      p_ProtocolNextOpen = &OpenQueue->ProtocolNextOpen;
      OpenQueue = OpenQueue->ProtocolNextOpen;
      if ( a1 == OpenQueue )
        break;
      if ( !OpenQueue )
        goto LABEL_7;
    }
    *p_ProtocolNextOpen = OpenQueue->ProtocolNextOpen;
  }
LABEL_7:
  KeReleaseSpinLock(&a2->Ref.SpinLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x31u,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1,
      a2);
}
