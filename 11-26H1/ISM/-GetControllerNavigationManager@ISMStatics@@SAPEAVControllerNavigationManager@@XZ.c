/*
 * XREFs of ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800292A0
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180028BC0 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x18004EDB0 (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180069F14 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180109C88 (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010A0B0 (-SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18017B3F0 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18017B420 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18017B4B0 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 *     ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18017B620 (-OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18017C944 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017CD7C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017E658 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 */

struct ControllerNavigationManager *ISMStatics::GetControllerNavigationManager(void)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  return (struct ControllerNavigationManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                                + 31)
                                                                                              + 8LL)
                                                                                  + 40LL))(*((_QWORD *)BamoServerConnection
                                                                                           + 31) + 8LL);
}
