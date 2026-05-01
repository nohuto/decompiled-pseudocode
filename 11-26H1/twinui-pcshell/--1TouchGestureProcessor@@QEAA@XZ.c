/*
 * XREFs of ??1TouchGestureProcessor@@QEAA@XZ @ 0x180267C18
 * Callers:
 *     ??R?$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z @ 0x18058B618 (--R-$default_delete@VTouchGestureProcessor@@@std@@QEBAXPEAVTouchGestureProcessor@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?TouchGesturesEnabled@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1801FB910 (-TouchGesturesEnabled@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGestur.c)
 *     ??1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ @ 0x180286768 (--1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchGestureProcessor::~TouchGestureProcessor(TouchGestureProcessor *this)
{
  __int64 *v2; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rsi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::TouchGesturesEnabled((__int64 *)this + 3);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 104LL))(*v2, *((_QWORD *)this + 6));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 120LL))(*v2, *((_QWORD *)this + 7));
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 136LL))(*v2, *((_QWORD *)this + 8));
    v3 = (TouchGestureProcessor *)((char *)this + 32);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 240LL))(
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 9));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v3 + 256LL))(*(_QWORD *)v3, *((_QWORD *)this + 10));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v3 + 272LL))(*(_QWORD *)v3, *((_QWORD *)this + 11));
    v4 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v2, &v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v4);
  }
  else
  {
    v3 = (TouchGestureProcessor *)((char *)this + 32);
  }
  TouchGestureProcessor::PointerEventsDetector::~PointerEventsDetector((TouchGestureProcessor *)((char *)this + 136));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TouchGestureProcessor *)((char *)this + 128));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((TouchGestureProcessor *)((char *)this + 40));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v2);
  if ( *((_QWORD *)this + 2) )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 2);
  if ( *((_QWORD *)this + 1) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 1);
  if ( *(_QWORD *)this )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
}
