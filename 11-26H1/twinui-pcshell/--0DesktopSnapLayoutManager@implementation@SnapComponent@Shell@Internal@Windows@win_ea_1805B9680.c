/*
 * XREFs of ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBURect@Foundation@56@@Z @ 0x1805B9680
 * Callers:
 *     ??$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEBURect@Foundation@67@@impl@winrt@@YAPEAUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@AEBURect@Foundation@71@@Z @ 0x180213824 (--$create_and_initialize@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@W.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180208D68 (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??$capture@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBUguid@6@@winrt@@YA?AUImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@AEBUguid@0@@Z @ 0x18026AE3C (--$capture@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@A6AJPEAUI.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??0?$producers_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@V?$tuple@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@USnapLayoutManagerExtension@PlatformExtensions@3456@@std@@@impl@winrt@@QEAA@XZ @ 0x1805B93A4 (--0-$producers_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Window.c)
 *     ??0?$root_implements_composable_inner@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$00@impl@winrt@@QEAA@XZ @ 0x1805B93F8 (--0-$root_implements_composable_inner@UDesktopSnapLayoutManager@implementation@SnapComponent@She.c)
 */

// Hidden C++ exception states: #wind=5
winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::DesktopSnapLayoutManager(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  _OWORD *v3; // r9
  int v4; // r8d
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 v8[2]; // [rsp+20h] [rbp-30h] BYREF
  GUID v9; // [rsp+30h] [rbp-20h] BYREF

  v8[1] = (__int64)this;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>>::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>>();
  *((_QWORD *)this + 1) = 0LL;
  winrt::impl::root_implements_composable_inner<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,1>::root_implements_composable_inner<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,1>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)this + 32, 1LL);
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 72) = *v3;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = v4;
  v9 = CLSID_ImmersiveShell;
  v5 = (__int64 *)winrt::create_instance<IServiceProvider>((__int64)v8, (int)&v9);
  winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)this + 7, v5);
  if ( v8[0] )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v8);
  v8[0] = *((_QWORD *)this + 7);
  v6 = winrt::capture<winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,winrt::guid const &>(
         &v9,
         (__int64 (__fastcall *)(__int64, __int64, __int128 *, __int64 *))IUnknown_QueryService,
         v8,
         (__int64)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 11, v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return this;
}
