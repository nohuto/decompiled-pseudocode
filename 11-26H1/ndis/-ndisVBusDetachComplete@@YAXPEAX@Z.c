/*
 * XREFs of ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x140144F10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x140158860 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void __fastcall ndisVBusDetachComplete(void *a1)
{
  LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  ndisBindEnumerateProtocolDrivers(lambda_9290c0fce5c4450c26ce3c7312f90185_::_lambda_invoker_cdecl_, 0LL);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&WPP_MAIN_CB.DeviceQueue.32);
  NmrClientDetachProviderComplete(*(HANDLE *)&WPP_MAIN_CB.DeviceQueue.Type);
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = 0LL;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
}
