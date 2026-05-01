/*
 * XREFs of GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_InitCoro$2 @ 0x180350DEC
 * Callers:
 *     ?UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180350F98 (-UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA-AUfire_and_.c)
 * Callees:
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1 @ 0x180350E40 (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 49) = a4;
  *(_QWORD *)a2 = GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[48] = 0;
  return GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__ResumeCoro_1(a2);
}
