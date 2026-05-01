/*
 * XREFs of ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x18005A334
 * Callers:
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180059DB0 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     ?ResultFromWin32FromStatus@@YAJJ@Z @ 0x18005B968 (-ResultFromWin32FromStatus@@YAJJ@Z.c)
 */

__int64 __fastcall CImmersiveMode::_RegisterForLauncherVisibilityNotifications(CImmersiveMode *this)
{
  int v2; // eax
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v2 = RtlQueryWnfStateData(&v4, WNF_IMSN_LAUNCHERVISIBILITY, CImmersiveMode::ImmersiveLauncherWNFCallback, this, 0LL);
  if ( v2 >= 0 )
    v2 = RtlSubscribeWnfStateChangeNotification(
           (char *)this + 360,
           WNF_IMSN_LAUNCHERVISIBILITY,
           v4,
           CImmersiveMode::ImmersiveLauncherWNFCallback);
  return ResultFromWin32FromStatus(v2);
}
