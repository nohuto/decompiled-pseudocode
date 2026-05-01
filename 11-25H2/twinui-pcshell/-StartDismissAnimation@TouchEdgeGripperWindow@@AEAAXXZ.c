/*
 * XREFs of ?StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x180577628
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180572000 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     ?Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z @ 0x180576898 (-Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801C7F30 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ?GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@@Z @ 0x1802BFD78 (-GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x180492400 (-Completed@-$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Com.c)
 *     ?CreateScopedBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4CompositionBatchTypes@Composition@UI@Windows@3@@Z @ 0x180493B70 (-CreateScopedBatch@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?Compositor@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805754C0 (-Compositor@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@w.c)
 *     ?GripperDismissAnimationStarted@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180576A28 (-GripperDismissAnimationStarted@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x180577580 (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TouchEdgeGripperWindow::StartDismissAnimation(TouchEdgeGripperWindow *this)
{
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  const struct winrt::Windows::UI::Xaml::UIElement *ElementVisual; // rax
  __int64 *v4; // rax
  TouchEdgeGripperWindow *v5; // rax
  TouchEdgeGripperWindow *v6; // rcx
  TouchEdgeGripperWindow **v7; // rdx
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v9; // rcx
  __int64 *v10; // [rsp+28h] [rbp-30h] BYREF
  char v11[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF
  TouchEdgeGripperWindow **v14; // [rsp+80h] [rbp+28h] BYREF
  TouchEdgeGripperWindow *v15; // [rsp+88h] [rbp+30h] BYREF
  __int64 v16; // [rsp+90h] [rbp+38h] BYREF
  __int64 v17; // [rsp+98h] [rbp+40h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 15);
  if ( v2 )
  {
    v17 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, &v17);
    v16 = v17;
  }
  else
  {
    v16 = 0LL;
  }
  ElementVisual = winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview::GetElementVisual(
                    (const struct winrt::Windows::UI::Xaml::UIElement *)v11,
                    &v16);
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::Compositor(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))ElementVisual,
    &v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  LODWORD(v14) = 1;
  v4 = winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScopedBatch(
         &v10,
         &v12,
         (unsigned int *)&v14);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 19, v4);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  v5 = 0LL;
  if ( this )
  {
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)this);
    v5 = this;
  }
  v15 = v5;
  v14 = &v15;
  v14 = (TouchEdgeGripperWindow **)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v14 + 1));
  v6 = v15;
  v15 = 0LL;
  v7[2] = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v7 = (TouchEdgeGripperWindow *)off_18072DE40;
  v14 = v7;
  if ( v15 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v15);
  winrt::impl::consume_Windows_UI_Composition_ICompositionScopedBatch<winrt::Windows::UI::Composition::ICompositionScopedBatch>::Completed(
    (__int64 **)this + 19,
    v13,
    (__int64 *)&v14);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v14);
  v8 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*((_QWORD *)this + 18);
  if ( v8 )
  {
    v17 = 0LL;
    (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v17);
    v14 = (TouchEdgeGripperWindow **)v17;
  }
  else
  {
    v14 = 0LL;
  }
  winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 15,
    &v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  TouchEdgeGestureTelemetry::GripperDismissAnimationStarted(v9);
  winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
}
