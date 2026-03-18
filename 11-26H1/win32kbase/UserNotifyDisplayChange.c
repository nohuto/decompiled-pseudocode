/*
 * XREFs of UserNotifyDisplayChange @ 0x14007F1A0
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     DxgkEngNotifyDisplayChange @ 0x1401C5CE0 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1400486C0 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x14007F20C (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x14007F244 (DwmAsyncNotifyDisplayModeChange.c)
 */

__int64 UserNotifyDisplayChange()
{
  __int64 v0; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    v0 = ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange(v0);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
}
