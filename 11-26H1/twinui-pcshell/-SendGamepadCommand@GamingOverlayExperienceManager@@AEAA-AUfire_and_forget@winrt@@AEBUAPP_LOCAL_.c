/*
 * XREFs of ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@AEBUAPP_LOCAL_DEVICE_ID@@W4SystemButtons@Gaming@Internal@Windows@@W4GamepadButtonEventKind@@@Z @ 0x1803536AC
 * Callers:
 *     ?HandleNexusButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x18034B1A0 (-HandleNexusButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadB.c)
 *     ?HandleShareButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x18034B1D0 (-HandleShareButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadB.c)
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x18034B2C8 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 *     ?OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x18034EF20 (-OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Window.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180353120 (GamingOverlayExperienceManager--SendGamepadCommand$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall GamingOverlayExperienceManager::SendGamepadCommand(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        void (__fastcall *a3)(char *a1),
        int a4,
        int a5)
{
  void (__fastcall **v10)(char *); // [rsp+20h] [rbp-28h]

  v10 = (void (__fastcall **)(char *))operator new(0x110uLL);
  v10[31] = a1;
  v10[32] = a3;
  *((_DWORD *)v10 + 66) = a4;
  *((_DWORD *)v10 + 67) = a5;
  *v10 = GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1;
  *((_DWORD *)v10 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v10 + 240) = 0;
  GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1((char *)v10);
  return a2;
}
