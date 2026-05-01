/*
 * XREFs of ?UnsubscribeFromServices@InteractionTracker@SnapInteraction@@QEAAXXZ @ 0x1802AD294
 * Callers:
 *     ?UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1805A35E0 (-UnsubscribeFromServices@CShellSnapComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A6A8 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SnapInteraction::InteractionTracker::UnsubscribeFromServices(SnapInteraction::InteractionTracker *this)
{
  __int64 *v1; // rbx
  char *v3; // rbx
  char v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 56);
  if ( *((_DWORD *)this + 16) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 72LL))(*v1);
  if ( v1 != (__int64 *)&v4 )
  {
    if ( *v1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v1);
    *v1 = 0LL;
  }
  v3 = (char *)this + 40;
  if ( *((_DWORD *)this + 12) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 104LL))(*(_QWORD *)v3);
  if ( v3 != &v5 )
  {
    if ( *(_QWORD *)v3 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 5);
    *(_QWORD *)v3 = 0LL;
  }
  if ( *((_QWORD *)this + 14) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 14);
    v6 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 14, &v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
}
