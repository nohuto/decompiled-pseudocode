/*
 * XREFs of ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140179BD0
 * Callers:
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F330 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181D90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140034420 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140179CE0 (-ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDeQueueOpenOnMiniport(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rax
  _NDIS_OPEN_BLOCK **p_MiniportNextOpen; // rcx
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x11u,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1,
      a2);
  OpenQueue = a2->OpenQueue;
  if ( OpenQueue == a1 )
  {
    a2->OpenQueue = a1->MiniportNextOpen;
  }
  else
  {
    if ( !OpenQueue )
      goto LABEL_8;
    while ( 1 )
    {
      p_MiniportNextOpen = &OpenQueue->MiniportNextOpen;
      OpenQueue = OpenQueue->MiniportNextOpen;
      if ( OpenQueue == a1 )
        break;
      if ( !OpenQueue )
        goto LABEL_8;
    }
    *p_MiniportNextOpen = OpenQueue->MiniportNextOpen;
  }
  --a2->NumOpens;
LABEL_8:
  ndisUpdateCheckForLoopbackFlag(a2);
  ndisUnsetNdis6OpenHandlers(v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x12u,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1,
      a2);
}
