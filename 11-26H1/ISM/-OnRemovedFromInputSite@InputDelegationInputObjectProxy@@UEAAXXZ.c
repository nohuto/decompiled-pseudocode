/*
 * XREFs of ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180085630
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180068A98 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x18006E694 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A61E4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x180109AFC (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180109C34 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180109C88 (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?GetProcessId@InputSite@@QEBAIXZ @ 0x180132DE8 (-GetProcessId@InputSite@@QEBAIXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@details@wil@@QEAA_NXZ @ 0x1801373B0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@.c)
 */

void __fastcall InputDelegationInputObjectProxy::OnRemovedFromInputSite(struct InputSite **this)
{
  ForegroundManager *ForegroundManager; // rax
  const char *v3; // r9
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  GamepadInterceptionHelper *v5; // rbx
  unsigned int ProcessId; // eax
  GamepadInterceptionHelper *v7; // rbx
  unsigned int v8; // eax

  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::ClearInputDelegation(ForegroundManager, this[4], *((_DWORD *)this + 15), v3);
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  GamepadInterceptionHelper::ClearGamepadInterceptionTarget(
    GamepadInterceptionHelper,
    (struct IGamepadInterceptionTarget *)((unsigned __int64)(this + 1) & -(__int64)(this != (struct InputSite **)64)));
  v5 = ISMStatics::GetGamepadInterceptionHelper();
  ProcessId = InputSite::GetProcessId(this[4]);
  GamepadInterceptionHelper::ClearGamepadKeyRoutingEnabled(v5, ProcessId);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetImpl'::`2'::impl) )
  {
    v7 = ISMStatics::GetGamepadInterceptionHelper();
    v8 = InputSite::GetProcessId(this[4]);
    GamepadInterceptionHelper::ClearGamepadMouseModeEnabled(v7, v8);
  }
  this[4] = 0LL;
}
