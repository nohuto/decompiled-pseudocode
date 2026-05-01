/*
 * XREFs of ?UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180355D68
 * Callers:
 *     ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x18034B39C (-HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1 @ 0x180355C10 (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1.c)
 */

_BYTE *__fastcall GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground(
        void (__fastcall *a1)(void *a1),
        _BYTE *a2)
{
  void (__fastcall **v4)(void *); // rax

  v4 = (void (__fastcall **)(void *))operator new(0x40uLL);
  v4[7] = a1;
  *v4 = GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__ResumeCoro_1;
  *((_DWORD *)v4 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v4 + 48) = 0;
  GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__ResumeCoro_1(v4);
  return a2;
}
