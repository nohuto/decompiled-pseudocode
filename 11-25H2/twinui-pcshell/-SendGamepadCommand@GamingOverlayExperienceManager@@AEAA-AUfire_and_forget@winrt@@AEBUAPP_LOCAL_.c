/*
 * XREFs of ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@AEBUAPP_LOCAL_DEVICE_ID@@W4SystemButtons@Gaming@Internal@Windows@@W4GamepadButtonEventKind@@@Z @ 0x18034EF90
 * Callers:
 *     ?HandleNexusButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x180347D10 (-HandleNexusButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadB.c)
 *     ?HandleShareButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x180347D40 (-HandleShareButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadB.c)
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180347E38 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 *     ?OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x18034B370 (-OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Window.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_InitCoro$2 @ 0x18034EA4C (GamingOverlayExperienceManager--SendGamepadCommand$_InitCoro$2.c)
 */

_BYTE *GamingOverlayExperienceManager::SendGamepadCommand(__int64 a1, _BYTE *a2, __int64 a3, int a4, ...)
{
  char *v7; // rax
  int v9; // [rsp+168h] [rbp+10h] BYREF
  int v10; // [rsp+178h] [rbp+20h] BYREF
  va_list va; // [rsp+180h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a4;
  v7 = (char *)operator new(0x100uLL);
  v9 = 0;
  GamingOverlayExperienceManager::SendGamepadCommand__InitCoro_2(&v9, v7, a2, a3, &v10, (int *)va, a1);
  return a2;
}
