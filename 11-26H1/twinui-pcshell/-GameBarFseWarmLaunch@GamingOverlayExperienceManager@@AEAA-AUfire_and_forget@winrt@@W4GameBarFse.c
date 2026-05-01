/*
 * XREFs of ?GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@W4GameBarFseWarmLaunchKind@@@Z @ 0x1803472AC
 * Callers:
 *     wistd::__function::__func__lambda_98227cc44fc411baa733b74fce958f12__void___cdecl(void)_::operator() @ 0x180344CF0 (wistd--__function--__func__lambda_98227cc44fc411baa733b74fce958f12__void___cdecl(void)_--operato.c)
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180353E2C (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::GameBarFseWarmLaunch$_ResumeCoro$1 @ 0x180347020 (GamingOverlayExperienceManager--GameBarFseWarmLaunch$_ResumeCoro$1.c)
 */

_BYTE *__fastcall GamingOverlayExperienceManager::GameBarFseWarmLaunch(
        void (__fastcall *a1)(char *a1),
        _BYTE *a2,
        int a3)
{
  void (__fastcall **v6)(char *); // rax

  v6 = (void (__fastcall **)(char *))operator new(0x80uLL);
  v6[13] = a1;
  *((_DWORD *)v6 + 28) = a3;
  *v6 = GamingOverlayExperienceManager::GameBarFseWarmLaunch__ResumeCoro_1;
  *((_DWORD *)v6 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v6 + 96) = 0;
  GamingOverlayExperienceManager::GameBarFseWarmLaunch__ResumeCoro_1((char *)v6);
  return a2;
}
