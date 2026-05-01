/*
 * XREFs of ?StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18059AE24
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180595910 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     ?Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z @ 0x180599FEC (-Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A6A8 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ?GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@@Z @ 0x1802B5924 (-GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x1804A3228 (-Completed@-$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Com.c)
 *     ?CreateScopedBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4CompositionBatchTypes@Composition@UI@Windows@3@@Z @ 0x1804A4A28 (-CreateScopedBatch@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?Compositor@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180598C1C (-Compositor@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@w.c)
 *     ?GripperDismissAnimationStarted@TouchEdgeGestureTelemetry@@SAXXZ @ 0x18059A1AC (-GripperDismissAnimationStarted@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x18059AD64 (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TouchEdgeGripperWindow::StartDismissAnimation(TouchEdgeGripperWindow *this)
{
  void (__fastcall ***v2)(_QWORD, void *, TouchEdgeGripperWindow **); // rcx
  const struct winrt::Windows::UI::Xaml::UIElement *ElementVisual; // rax
  __int64 *v4; // rax
  TouchEdgeGripperWindow *v5; // rax
  TouchEdgeGripperWindow *v6; // rcx
  TouchEdgeGripperWindow **v7; // rdx
  void (__fastcall ***v8)(_QWORD, void *, TouchEdgeGripperWindow **); // rcx
  __int64 v9; // rcx
  __int64 *v10; // [rsp+20h] [rbp-28h] BYREF
  char v11[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  TouchEdgeGripperWindow *v13; // [rsp+70h] [rbp+28h] BYREF
  TouchEdgeGripperWindow *v14; // [rsp+78h] [rbp+30h] BYREF
  TouchEdgeGripperWindow *v15; // [rsp+80h] [rbp+38h] BYREF
  TouchEdgeGripperWindow **v16; // [rsp+88h] [rbp+40h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, void *, TouchEdgeGripperWindow **))*((_QWORD *)this + 15);
  if ( v2 )
  {
    v13 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, &v13);
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  ElementVisual = winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview::GetElementVisual(
                    (const struct winrt::Windows::UI::Xaml::UIElement *)v11,
                    (__int64)&v14);
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::Compositor(
    (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))ElementVisual,
    &v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  LODWORD(v13) = 1;
  v4 = winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScopedBatch(
         &v10,
         &v15,
         (unsigned int *)&v13);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 19, v4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  v15 = 0LL;
  v5 = 0LL;
  if ( this )
  {
    v15 = this;
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)this);
    v5 = this;
  }
  v15 = 0LL;
  v13 = v5;
  v16 = &v13;
  v16 = (TouchEdgeGripperWindow **)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v16 + 1));
  v6 = v13;
  v13 = 0LL;
  v7[2] = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v7 = (TouchEdgeGripperWindow *)off_180757E58;
  v16 = v7;
  if ( v13 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v13);
  winrt::impl::consume_Windows_UI_Composition_ICompositionScopedBatch<winrt::Windows::UI::Composition::ICompositionScopedBatch>::Completed(
    (__int64 **)this + 19,
    v12,
    (__int64 *)&v16);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v16);
  v8 = (void (__fastcall ***)(_QWORD, void *, TouchEdgeGripperWindow **))*((_QWORD *)this + 18);
  v13 = 0LL;
  if ( v8 )
    (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v13);
  winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 15,
    &v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  TouchEdgeGestureTelemetry::GripperDismissAnimationStarted(v9);
  winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
}
