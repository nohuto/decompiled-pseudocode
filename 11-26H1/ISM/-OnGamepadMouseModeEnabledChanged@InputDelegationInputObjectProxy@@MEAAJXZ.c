/*
 * XREFs of ?OnGamepadMouseModeEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180136800
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A61E4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180109C88 (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010A0B0 (-SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?GetProcessId@InputSite@@QEBAIXZ @ 0x180132DE8 (-GetProcessId@InputSite@@QEBAIXZ.c)
 *     ?GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ @ 0x180135D60 (-GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnGamepadMouseModeEnabledChanged(InputSite **this)
{
  bool TailButtonLongPressedEventsRequired; // bl
  int ProcessId; // edi
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax

  TailButtonLongPressedEventsRequired = BamoPenEventsClientProxy::GetTailButtonLongPressedEventsRequired((BamoPenEventsClientProxy *)(this + 1));
  ProcessId = InputSite::GetProcessId(this[12]);
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  if ( TailButtonLongPressedEventsRequired )
    GamepadInterceptionHelper::SetGamepadMouseModeEnabled(GamepadInterceptionHelper, ProcessId);
  else
    GamepadInterceptionHelper::ClearGamepadMouseModeEnabled(GamepadInterceptionHelper, ProcessId);
  return 0LL;
}
