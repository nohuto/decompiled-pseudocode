/*
 * XREFs of ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180226F08
 * Callers:
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x1806ADAD0 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18009D964 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18009D988 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x1800A11B8 (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x1800B71C4 (-Completed@-$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Com.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801A2AD0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x1802184F4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ @ 0x1802AE49C (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ.c)
 *     _lambda_37bafbeb3dd0776f24b59a9d11710915_::_lambda_37bafbeb3dd0776f24b59a9d11710915_ @ 0x1803F5670 (_lambda_37bafbeb3dd0776f24b59a9d11710915_--_lambda_37bafbeb3dd0776f24b59a9d11710915_.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x18059AD64 (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915___ @ 0x1806AAB80 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspecta_ea_1806AAB80.c)
 *     ??1?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@QEAA@XZ @ 0x1806AC128 (--1-$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@QEAA@XZ.c)
 *     ?GetCommitBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4CompositionBatchTypes@Composition@UI@Windows@3@@Z @ 0x1806AE0A0 (-GetCommitBatch@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ @ 0x1806B00C0 (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall VirtualDesktopSwitcherHost::StartDismissAnimation(VirtualDesktopSwitcherHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  char v3; // r12
  int v4; // r13d
  __int64 (__fastcall ***v5)(_QWORD, void *, VirtualDesktopSwitcherHost **); // rcx
  __int64 v6; // rsi
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r15
  __int64 v10; // rbx
  float QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ; // xmm1_4
  __int64 *CommitBatch; // rax
  __int64 v13; // rax
  winrt *v14; // rbx
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  void (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+58h] [rbp-20h]
  _BYTE v19[24]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+48h] BYREF
  VirtualDesktopSwitcherHost *v21; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v22; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+60h] BYREF

  LODWORD(v20) = 0;
  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  v17 = v2;
  v3 = 1;
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v18 = v4;
  *((_DWORD *)this + 132) = 1;
  v5 = (__int64 (__fastcall ***)(_QWORD, void *, VirtualDesktopSwitcherHost **))*((_QWORD *)this + 21);
  v6 = 0LL;
  v21 = 0LL;
  if ( v5 )
  {
    v7 = (**v5)(v5, &_uuidof__AUIFrameworkElement_Xaml_UI_Windows__, &v21);
    __abi_ThrowIfFailed(v7);
    v6 = (__int64)v21;
  }
  v23 = v6;
  v8 = 1;
  LODWORD(v20) = 1;
  if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v6) == 0.0 )
  {
    v9 = v22;
  }
  else
  {
    v9 = __abi_winrt_cast_to(
           0,
           *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 21),
           (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
    v22 = v9;
    v8 = 3;
    LODWORD(v20) = 3;
    if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualWidth_FrameworkElement_234_UE_AAANXZ(v9) != 0.0 )
      goto LABEL_7;
  }
  v3 = 0;
LABEL_7:
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    LODWORD(v20) = v8;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
  }
  if ( (v8 & 1) != 0 )
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
  if ( v3 )
  {
    v22 = 1500000LL;
    v10 = __abi_winrt_cast_to(
            0,
            *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 21),
            (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
    v21 = (VirtualDesktopSwitcherHost *)v10;
    QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ = _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v10);
    *(float *)&v20 = QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ;
    VirtualDesktopSwitcherHost::CreateAnimation(
      (__int64)this,
      &v15,
      (__int64)&unk_1807D7950,
      (__int64)&v20,
      (__int64)&v22,
      dword_1807D7910,
      (__int64)"333?",
      (__int64)&unk_1807D7920);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v10);
    LODWORD(v20) = 1;
    CommitBatch = (__int64 *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::GetCommitBatch(
                               &v15,
                               &v21,
                               &v20);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 53, CommitBatch);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    v21 = this;
    (*(void (__fastcall **)(VirtualDesktopSwitcherHost *))(*(_QWORD *)this + 8LL))(this);
    v13 = lambda_37bafbeb3dd0776f24b59a9d11710915_::_lambda_37bafbeb3dd0776f24b59a9d11710915_(v19, this, &v21);
    winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915___(
      &v20,
      v13);
    *((_QWORD *)this + 54) = *winrt::impl::consume_Windows_UI_Composition_ICompositionCommitBatch<winrt::Windows::UI::Composition::ICompositionCommitBatch>::Completed(
                                (__int64 **)this + 53,
                                &v23,
                                &v20);
    if ( v20 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    v14 = from_cx<winrt::Windows::UI::Xaml::UIElement>((winrt *)&v21, *((struct IUnknown **)this + 21));
    v20 = 0LL;
    if ( v16 )
      (**v16)(v16, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v20);
    winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(v14, &v20);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    std::tuple<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation,winrt::Windows::UI::Composition::Compositor>::~tuple<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation,winrt::Windows::UI::Composition::Compositor>((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v2);
}
