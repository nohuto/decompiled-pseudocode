/*
 * XREFs of ?HandleShareButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x180347D40
 * Callers:
 *     <none>
 * Callees:
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@AEBUAPP_LOCAL_DEVICE_ID@@W4SystemButtons@Gaming@Internal@Windows@@W4GamepadButtonEventKind@@@Z @ 0x18034EF90 (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@AEBUAPP_LOCAL_.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::HandleShareButtonEvent(__int64 a1, __int64 a2, int a3)
{
  char v4; // [rsp+58h] [rbp+20h] BYREF

  return GamingOverlayExperienceManager::SendGamepadCommand(a1, &v4, a2, 1LL, a3);
}
