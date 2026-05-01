/*
 * XREFs of ?CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ @ 0x1804E1F90
 * Callers:
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2E50 (-HandleViewFallback@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E3B24 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z @ 0x1804E5950 (-unsubscribe_from_services@GamingPosturePositioner@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 */

void __fastcall GamingPosturePositioner::CancelViewFallbackTimer(GamingPosturePositioner *this)
{
  __int64 *v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 728);
  if ( *((_QWORD *)this + 91) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 91);
    v2 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v1, &v2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v2);
  }
}
