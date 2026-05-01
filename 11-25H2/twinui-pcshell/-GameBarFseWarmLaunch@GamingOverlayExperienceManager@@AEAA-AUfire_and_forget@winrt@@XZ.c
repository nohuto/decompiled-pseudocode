/*
 * XREFs of ?GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180344620
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18034F714 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_InitCoro$2 @ 0x18034435C (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_InitCoro$2.c)
 */

_BYTE *__fastcall GamingOverlayExperienceManager::GameBarFseWarmLaunch(__int64 a1, _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+A8h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x70uLL);
  v6 = 0;
  GamingOverlayExperienceManager::GameBarFseWarmLaunch__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
