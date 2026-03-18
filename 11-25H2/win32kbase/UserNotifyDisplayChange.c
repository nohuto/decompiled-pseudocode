/*
 * XREFs of UserNotifyDisplayChange @ 0x1400AC800
 * Callers:
 *     DrvEnableMDEV @ 0x1400879E0 (DrvEnableMDEV.c)
 *     DxgkEngNotifyDisplayChange @ 0x1400ACA40 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x14003F9B0 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1400AC868 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1400ACA90 (DwmAsyncNotifyDisplayModeChange.c)
 */

__int64 UserNotifyDisplayChange()
{
  __int64 v1; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    v1 = ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange(v1);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId);
}
