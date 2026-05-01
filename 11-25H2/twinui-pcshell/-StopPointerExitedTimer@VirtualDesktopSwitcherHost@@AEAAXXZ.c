/*
 * XREFs of ?StopPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18068843C
 * Callers:
 *     _lambda_070e192e9fba98d43315428c14debf7b_::operator() @ 0x180685224 (_lambda_070e192e9fba98d43315428c14debf7b_--operator().c)
 *     _lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator() @ 0x1806852B0 (_lambda_28e2deb1c60008eafa8d487ea9ad6bb5_--operator().c)
 *     _lambda_72e1dcf1d191a1fe628d31ef24d41038_::operator() @ 0x180685428 (_lambda_72e1dcf1d191a1fe628d31ef24d41038_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 */

void __fastcall VirtualDesktopSwitcherHost::StopPointerExitedTimer(VirtualDesktopSwitcherHost *this)
{
  __int64 *v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 400);
  if ( *((_QWORD *)this + 50) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 50);
    v2 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v1, &v2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v2);
  }
}
