/*
 * XREFs of ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1801018C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800A7EDC (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?revoke_impl@?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@AEAAXUIListViewBase@Controls@Xaml@UI@Windows@3@@Z @ 0x180101760 (-revoke_impl@-$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UILis.c)
 *     ?get@?$weak_ref@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180101790 (-get@-$weak_ref@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBHA@AA@impl@winrt@@AEAAXUIFrameworkElement@Xaml@UI@Windows@3@@Z @ 0x1801017DC (-revoke_impl@-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFramewor.c)
 *     ?revoke_impl@?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@impl@winrt@@AEAAXUITileCollection@StartScreen@UI@WindowsUdk@3@@Z @ 0x18010180C (-revoke_impl@-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UI.c)
 *     ?get@?$weak_ref@UIUIElement3@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18010183C (-get@-$weak_ref@UIUIElement3@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@AEAAXUIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@3@@Z @ 0x180101888 (-revoke_impl@-$event_revoker@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@$MP8type@-.c)
 *     ?revoke@?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCBA@AA@impl@winrt@@QEAAXXZ @ 0x180102340 (-revoke@-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement@Xaml@UI@Wi.c)
 *     ?revoke@?$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIFrameworkElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBGA@AA@impl@winrt@@QEAAXXZ @ 0x1801023B8 (-revoke@-$event_revoker@UIFrameworkElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIFrameworkElem.c)
 *     ?get@?$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18010256C (-get@-$weak_ref@UIUIElement@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?TransparentBackground@?$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180103500 (-TransparentBackground@-$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@.c)
 *     ?TintOpacity@?$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@N@Z @ 0x180106240 (-TintOpacity@-$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18029419C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ?get@?$weak_ref@UIUIElement4@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1802A90E4 (-get@-$weak_ref@UIUIElement4@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement4@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BII@AA@impl@winrt@@AEAAXUIUIElement4@Xaml@UI@Windows@3@@Z @ 0x1802A9130 (-revoke_impl@-$event_revoker@UIUIElement4@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIElement4@Xam.c)
 *     ?get@?$weak_ref@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1802AFDBC (-get@-$weak_ref@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke@?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BCAA@AA@impl@winrt@@QEAAXXZ @ 0x1802B1450 (-revoke@-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUIEleme_ea_1802B1450.c)
 *     ?revoke_impl@?$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIUIElement@Xaml@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BBIA@AA@impl@winrt@@AEAAXUIUIElement@Xaml@UI@Windows@3@@Z @ 0x1802B15B0 (-revoke_impl@-$event_revoker@UIUIElement@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIUI_ea_1802B15B0.c)
 *     ??R?$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z @ 0x180685800 (--R-$default_delete@VVirtualDesktopSwitcherHook@@@std@@QEBAXPEAVVirtualDesktopSwitcherHook@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall VirtualDesktopSwitcherHost::v_DismissView(VirtualDesktopSwitcherHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  int v3; // r12d
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  char *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v15; // rax
  __int64 v16; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v17; // rax
  __int64 v18; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v23; // rax
  char v24; // [rsp+20h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+28h] [rbp-18h]
  int v26; // [rsp+30h] [rbp-10h]
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  __int64 v28; // [rsp+88h] [rbp+48h] BYREF
  __int64 v29; // [rsp+90h] [rbp+50h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != (VirtualDesktopSwitcherHost *)8));
  v25 = v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v26 = v3;
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((char *)this + 176) )
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete((char *)this + 176);
  v4 = *((_QWORD *)this + 52);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 72LL))(v4, *((_QWORD *)this + 53));
    v27 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 52, &v27);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
  }
  v5 = *((_QWORD *)this + 36);
  if ( v5 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v5 + 24LL))(
      v5,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IDragStartingEventArgs>,
      &v28);
    v6 = v28;
    v27 = v28;
  }
  else
  {
    v27 = 0LL;
    v6 = 0LL;
  }
  if ( v6 )
  {
    winrt::impl::consume_Windows_UI_Xaml_IWindowPrivate<winrt::Windows::UI::Xaml::IWindowPrivate>::TransparentBackground(&v27);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
  }
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 20) = 0LL;
  }
  v8 = *((_QWORD *)this + 19);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 19) = 0LL;
  }
  v9 = *((_QWORD *)this + 21);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 21) = 0LL;
  }
  v10 = *((_QWORD *)this + 64);
  *((_QWORD *)this + 64) = 0LL;
  if ( v10 )
    std::default_delete<VirtualDesktopSwitcherHook>::operator()();
  v11 = (char *)this + 216;
  if ( *((_QWORD *)this + 27) )
    winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrush<winrt::Windows::UI::Xaml::Media::IAcrylicBrush>::TintOpacity(
      (char *)this + 216,
      0LL);
  _revoke___event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BCBA_AA_impl_winrt__QEAAXXZ((char *)this + 240);
  _revoke___event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BCAA_AA_impl_winrt__QEAAXXZ((char *)this + 256);
  v27 = 0LL;
  v12 = *((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = 0LL;
  v28 = v12;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 41, &v27);
  v13 = winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement4>::get(&v28, &v29);
  _revoke_impl___event_revoker_UIUIElement4_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement4_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BII_AA_impl_winrt__AEAAXUIUIElement4_Xaml_UI_Windows_3__Z(
    (char *)this + 328,
    v13);
  if ( v12 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
  _revoke___event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBGA_AA_impl_winrt__QEAAXXZ((char *)this + 400);
  v27 = 0LL;
  v14 = *((_QWORD *)this + 37);
  *((_QWORD *)this + 37) = 0LL;
  v28 = v14;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 37, &v27);
  v15 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase>::get(
                                                                                              &v28,
                                                                                              &v29);
  _revoke_impl___event_revoker_UIListViewBase_Controls_Xaml_UI_Windows_winrt___MP8type___abi_UIListViewBase_Controls_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__AEAAXUIListViewBase_Controls_Xaml_UI_Windows_3__Z(
    (__int64)this + 296,
    v15);
  if ( v14 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
  v27 = 0LL;
  v16 = *((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = 0LL;
  v28 = v16;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 39, &v27);
  v17 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase4>::get(
                                                                                              &v28,
                                                                                              &v29);
  _revoke_impl___event_revoker_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt___MP8type___abi_UIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFA_AA_impl_winrt__AEAAXUIDesktopWindowXamlSource_Hosting_Xaml_UI_Windows_3__Z(
    (__int64)this + 312,
    v17);
  if ( v16 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
  v27 = 0LL;
  v18 = *((_QWORD *)this + 43);
  *((_QWORD *)this + 43) = 0LL;
  v28 = v18;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 43, &v27);
  v19 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement>::get(
                                                                                              &v28,
                                                                                              &v29);
  _revoke_impl___event_revoker_UIFrameworkElement_Xaml_UI_Windows_winrt___MP8type___abi_UIFrameworkElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBHA_AA_impl_winrt__AEAAXUIFrameworkElement_Xaml_UI_Windows_3__Z(
    (__int64)this + 344,
    v19);
  if ( v18 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
  v27 = 0LL;
  v20 = *((_QWORD *)this + 45);
  *((_QWORD *)this + 45) = 0LL;
  v28 = v20;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 45, &v27);
  v21 = winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement>::get(&v28, &v29);
  _revoke_impl___event_revoker_UIUIElement_Xaml_UI_Windows_winrt___MP8type___abi_UIUIElement_Xaml_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BBIA_AA_impl_winrt__AEAAXUIUIElement_Xaml_UI_Windows_3__Z(
    (char *)this + 360,
    v21);
  if ( v20 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
  v27 = 0LL;
  v22 = *((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  v28 = v22;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 34, &v27);
  v23 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)winrt::weak_ref<winrt::Windows::UI::Xaml::IUIElement3>::get(
                                                                                              &v28,
                                                                                              &v29);
  _revoke_impl___event_revoker_UITileCollection_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITileCollection_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFI_AA_impl_winrt__AEAAXUITileCollection_StartScreen_UI_WindowsUdk_3__Z(
    (__int64)this + 272,
    v23);
  if ( v22 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
  if ( v27 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
  if ( *((_QWORD *)this + 49) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 49);
    v27 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 49, &v27);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v27);
  }
  if ( v11 != &v24 )
  {
    if ( *(_QWORD *)v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 27);
    *(_QWORD *)v11 = 0LL;
  }
  *((_DWORD *)this + 130) = 2;
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
}
