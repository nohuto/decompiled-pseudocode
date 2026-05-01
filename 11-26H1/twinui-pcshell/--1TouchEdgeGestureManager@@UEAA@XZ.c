/*
 * XREFs of ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x1800B75AC
 * Callers:
 *     ??_E?$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@UEAAPEAXI@Z @ 0x18058B680 (--_E-$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x1800B76CC (--1-$_Hash@V-$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V-$.c)
 *     ??$_Destroy_range@V?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAU123@AEAV?$allocator@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@@0@@Z @ 0x1800B77A4 (--$_Destroy_range@V-$allocator@U-$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winr.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18028A570 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??1TouchEdgeGestureProcessor@@QEAA@XZ @ 0x1802B185C (--1TouchEdgeGestureProcessor@@QEAA@XZ.c)
 */

void __fastcall TouchEdgeGestureManager::~TouchEdgeGestureManager(TouchEdgeGestureManager *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &TouchEdgeGestureManager::`vftable'{for `winrt::impl::producer_convert<TouchEdgeGestureManager,ITouchEdgeGesture,void>'};
  *((_QWORD *)this + 1) = &TouchEdgeGestureManager::`vftable'{for `winrt::impl::producer_convert<TouchEdgeGestureManager,IGameFocusEvents,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchEdgeGestureManager>::`vftable';
  v2 = *((_QWORD *)this + 52);
  if ( v2 )
  {
    ____Destroy_range_V__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___std___std__YAXPEAU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAU123_AEAV__allocator_U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt___0__Z(
      v2,
      *((_QWORD *)this + 53));
    std::_Deallocate<16>(
      *((_QWORD *)this + 52),
      (*((_QWORD *)this + 54) - *((_QWORD *)this + 52)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
  }
  std::_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>::~_Hash<std::_Umap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,std::_Uhash_compare<enum winrt::WindowsUdk::UI::Shell::ShellView,std::hash<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::equal_to<enum winrt::WindowsUdk::UI::Shell::ShellView>>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>,0>>((char *)this + 352);
  SmartCookie::~SmartCookie((TouchEdgeGestureManager *)((char *)this + 216));
  TouchEdgeGestureProcessor::~TouchEdgeGestureProcessor((TouchEdgeGestureManager *)((char *)this + 96));
  winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((char *)this + 88);
  if ( *((_QWORD *)this + 10) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 10);
  if ( *((_QWORD *)this + 9) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 9);
  if ( *((_QWORD *)this + 8) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 8);
  if ( *((_QWORD *)this + 7) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 7);
  if ( *((_QWORD *)this + 6) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 6);
  if ( *((_QWORD *)this + 5) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 5);
  winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::~root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>((char *)this + 24);
}
