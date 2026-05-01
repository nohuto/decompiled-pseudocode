/*
 * XREFs of ?LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUfire_and_forget@7@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@7@AEBUCRect@Geometry@@I@Z @ 0x1805BAC30
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x1805BA650 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launch.c)
 *     ?_Tidy@?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1805BB984 (-_Tidy@-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync(
        void (__fastcall **a1)(unsigned int *a1, __int64 a2, __int64 a3, const char *a4),
        __int64 *a2,
        void (__fastcall *a3)(unsigned int *a1, __int64 a2, __int64 a3, const char *a4),
        int a4)
{
  __int64 v8; // rdx
  void (__fastcall *v9)(unsigned int *, __int64, __int64, const char *); // rcx
  void (__fastcall *v10)(unsigned int *, __int64, __int64, const char *); // rax
  __int64 v11; // rax
  const char *v12; // r9
  void (__fastcall **v14)(unsigned int *, __int64, __int64, const char *); // [rsp+20h] [rbp-38h]

  v14 = (void (__fastcall **)(unsigned int *, __int64, __int64, const char *))operator new(0x100uLL);
  v8 = (__int64)a1[2];
  a1[2] = 0LL;
  v9 = a1[1];
  a1[1] = 0LL;
  v10 = *a1;
  *a1 = 0LL;
  v14[25] = v10;
  v14[26] = v9;
  v14[27] = (void (__fastcall *)(unsigned int *, __int64, __int64, const char *))v8;
  v11 = *a2;
  *a2 = 0LL;
  v14[28] = (void (__fastcall *)(unsigned int *, __int64, __int64, const char *))v11;
  v14[29] = a3;
  *((_DWORD *)v14 + 60) = a4;
  *v14 = winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__ResumeCoro_1;
  *((_DWORD *)v14 + 2) = 65538;
  *((_BYTE *)v14 + 192) = 0;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__ResumeCoro_1(
    (unsigned int *)v14,
    v8,
    (__int64)v14,
    v12);
  std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::_Tidy(a1);
  if ( *a2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a2);
  return 0;
}
