/*
 * XREFs of ?StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180688184
 * Callers:
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180688490 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180021D28 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x180103F28 (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801AAFC0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x18022771C (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ @ 0x1802B7B6C (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x180577580 (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     ??1?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@QEAA@XZ @ 0x180684D24 (--1-$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@QEAA@XZ.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ @ 0x180688CF4 (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall VirtualDesktopSwitcherHost::StartInvokeAnimation(VirtualDesktopSwitcherHost *this)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, __int64 *); // r14
  int v3; // ebx
  __int64 v4; // rdi
  char v5; // si
  __int64 (__fastcall ***v6)(_QWORD, void *, __int64 *); // rbx
  float QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ; // xmm1_4
  winrt *v8; // rbx
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  void (__fastcall ***v10)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp-8h]
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, void *, __int64 *); // [rsp+90h] [rbp+40h] BYREF

  LODWORD(v11) = 0;
  v2 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))__abi_winrt_cast_to(
                                                              0,
                                                              *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this
                                                              + 21),
                                                              (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v13 = v2;
  v3 = 1;
  LODWORD(v11) = 1;
  if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v2) == 0.0 )
  {
    v4 = v12;
LABEL_4:
    v5 = 0;
    goto LABEL_6;
  }
  v4 = __abi_winrt_cast_to(
         0,
         *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 21),
         (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v12 = v4;
  v3 = 3;
  LODWORD(v11) = 3;
  if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualWidth_FrameworkElement_234_UE_AAANXZ(v4) == 0.0 )
    goto LABEL_4;
  v5 = 1;
LABEL_6:
  if ( (v3 & 2) != 0 )
  {
    v3 &= ~2u;
    LODWORD(v11) = v3;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  }
  if ( (v3 & 1) != 0 )
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v2);
  if ( v5 )
  {
    v12 = 3000000LL;
    v6 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))__abi_winrt_cast_to(
                                                                0,
                                                                *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this
                                                                + 21),
                                                                (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
    v13 = v6;
    QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ = _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v6);
    *(float *)&v11 = QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ;
    VirtualDesktopSwitcherHost::CreateAnimation(
      (__int64)this,
      &v9,
      (__int64)&v11,
      (__int64)&unk_1807AAE60,
      (__int64)&v12,
      dword_1807AAE20,
      (__int64)&unk_1807AAE58,
      (__int64)&unk_1807AAE30);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>((__int64)v6);
    v8 = from_cx<winrt::Windows::UI::Xaml::UIElement>((winrt *)&v13, *((struct IUnknown **)this + 21));
    if ( v10 )
    {
      v12 = 0LL;
      (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v12);
      v11 = v12;
    }
    else
    {
      v11 = 0LL;
    }
    winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(
      (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v8,
      &v11);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    std::tuple<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation,winrt::Windows::UI::Composition::Compositor>::~tuple<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation,winrt::Windows::UI::Composition::Compositor>((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  }
}
