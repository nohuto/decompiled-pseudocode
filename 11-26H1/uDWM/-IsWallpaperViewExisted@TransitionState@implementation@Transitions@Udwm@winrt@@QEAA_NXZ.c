/*
 * XREFs of ?IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1800DB7FC
 * Callers:
 *     ?get_IsWallpaperViewExisted@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800DCE70 (-get_IsWallpaperViewExisted@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UI.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180035D04 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18004D0EC (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

char __fastcall winrt::Udwm::Transitions::implementation::TransitionState::IsWallpaperViewExisted(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  char v1; // bl
  __int64 ShellWindowForDesktop; // rax
  winrt::Udwm::Transitions::implementation::TransitionState *pvParam; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  pvParam = this;
  v1 = 1;
  v5 = 0LL;
  GetDesktopID(1LL, &v5);
  if ( CDesktopManager::IsLogonDesktop(v5) )
    return 0;
  LODWORD(pvParam) = 0;
  if ( !SystemParametersInfoW(0xAAu, 0, &pvParam, 0) )
    LODWORD(pvParam) = 0;
  GetDesktopID(1LL, &v5);
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                            v5);
  if ( (_DWORD)pvParam || !ShellWindowForDesktop )
    return 0;
  return v1;
}
