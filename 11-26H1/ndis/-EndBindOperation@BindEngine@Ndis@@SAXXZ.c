/*
 * XREFs of ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x14015C390
 * Callers:
 *     NdisReEnumerateProtocolBindings @ 0x1400BBE70 (NdisReEnumerateProtocolBindings.c)
 *     NdisFRetryAttach @ 0x14013ACC0 (NdisFRetryAttach.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x14015BFA0 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015C1E0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x140158860 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void Ndis::BindEngine::EndBindOperation(void)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress, 0xFFFFFFFF) <= 1 )
    ndisBindEnumerateProtocolDrivers(
      (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_,
      0LL);
}
