/*
 * XREFs of GamingOverlayExperienceManager::GameBarFseWarmLaunch$_InitCoro$2 @ 0x18034435C
 * Callers:
 *     ?GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180344620 (-GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x1803443B0 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::GameBarFseWarmLaunch__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 97) = a4;
  *(_QWORD *)a2 = GamingOverlayExperienceManager::GameBarFseWarmLaunch__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[96] = 0;
  return GamingOverlayExperienceManager::GameBarFseWarmLaunch__ResumeCoro_1(a2);
}
