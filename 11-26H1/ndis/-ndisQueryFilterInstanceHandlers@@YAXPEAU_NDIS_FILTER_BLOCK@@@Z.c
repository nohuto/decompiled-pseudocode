/*
 * XREFs of ?ndisQueryFilterInstanceHandlers@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140055080
 * Callers:
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055000 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisFInvokeSetFilterModuleOptions@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140166320 (-ndisFInvokeSetFilterModuleOptions@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisQueryFilterInstanceHandlers(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_BLOCK *i; // rdi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      27,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
  if ( a1 )
  {
    for ( i = a1->Miniport->HighestFilter; i; i = i->LowerFilter )
    {
      ndisFInvokeSetFilterModuleOptions(i);
      if ( i == a1 )
        break;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      28,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
}
