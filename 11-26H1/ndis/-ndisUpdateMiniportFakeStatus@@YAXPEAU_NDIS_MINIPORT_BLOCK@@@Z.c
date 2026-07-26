/*
 * XREFs of ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004C4C0
 * Callers:
 *     ?ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14004C450 (-ndisMiniportXStateClearFlag@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140058680 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007DF60 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 * Callees:
 *     WPP_RECORDER_SF_qLL @ 0x14004CC70 (WPP_RECORDER_SF_qLL.c)
 */

void __fastcall ndisUpdateMiniportFakeStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char XState; // al
  int v2; // edx

  XState = a1->XState;
  v2 = -1073741823;
  if ( (XState & 4) != 0 )
  {
    v2 = -1071448017;
  }
  else if ( (XState & 2) != 0 )
  {
    v2 = -1071448033;
  }
  else if ( (XState & 1) != 0 )
  {
    v2 = -1073676275;
  }
  else if ( (XState & 8) != 0 )
  {
    v2 = -1073741285;
  }
  a1->FakeStatus = v2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      78,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1,
      XState,
      v2);
}
