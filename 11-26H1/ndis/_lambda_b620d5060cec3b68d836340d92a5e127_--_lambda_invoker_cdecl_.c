/*
 * XREFs of _lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_ @ 0x140161870
 * Callers:
 *     <none>
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1401618B0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140161920 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 */

__int64 __fastcall lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_(
        __int64 a1,
        struct NDIS_BIND_PROTOCOL_DRIVER **a2,
        __int64 a3)
{
  if ( (*a2)->NeedsBindCompleteEvent )
  {
    (*a2)->NeedsBindCompleteEvent = 0;
    ndisDeliverBindCompleteEvent(*a2);
  }
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a2, a2, a3);
}
