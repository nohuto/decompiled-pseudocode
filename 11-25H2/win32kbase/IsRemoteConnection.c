/*
 * XREFs of IsRemoteConnection @ 0x14002AFE4
 * Callers:
 *     CleanupRemoteHandles @ 0x14002ACB0 (CleanupRemoteHandles.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__&DrvSampleDisplayState_ @ 0x14002AE8C (InitDisplayBrokerMessage_DispBroker--AlpcDatagram_1___lambda_0389f40e646f18740e1f12cb9d5b37a1__-.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x14002AF30 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ProcessKeyboardInputWorker @ 0x1400FAA64 (ProcessKeyboardInputWorker.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x14012F12C (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 *     UpdateKeyLights @ 0x14018D000 (UpdateKeyLights.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 *     UpdateToggleKeyAndLights @ 0x140217B90 (UpdateToggleKeyAndLights.c)
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*IsRemoteConnection())(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 4584LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
