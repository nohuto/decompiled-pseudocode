/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x18028B044
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800B77DC (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 *     ?CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@CA?AU134567@AEBUShellAnimationCoordinator@34567@AEBV?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@@Z @ 0x18027CA68 (-CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Sh.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18028A570 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     _lambda_e6a671098150e4fafb7216c3a0d06112_::__lambda_e6a671098150e4fafb7216c3a0d06112_ @ 0x18028AEA0 (_lambda_e6a671098150e4fafb7216c3a0d06112_--__lambda_e6a671098150e4fafb7216c3a0d06112_.c)
 *     ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x18028AF1C (-GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA-AUDeferr.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::_implements_delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___ @ 0x1803CFA20 (winrt--impl--implements_delegate_winrt--Windows--Foundation--DeferralCompletedHandl_ea_1803CFA20.c)
 *     ??1MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805F3AD0 (--1MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1iterator@?$iterable_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@UEAA@XZ @ 0x18063EFE4 (--1iterator@-$iterable_base@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$ve.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x18069C34C (_lambda_00799cc444f9312ab8cc556666836ecb_--operator()_winrt--Windows--UI--Composition--Internal-.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@impl@winrt@@IEAAIXZ @ 0x1800E6BA8 (-subtract_final_reference@-$root_implements@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?store@?$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z @ 0x1800E713C (-store@-$_Atomic_storage@_K$07@std@@QEAAX_KW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(_QWORD **a1)
{
  _QWORD *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( !(unsigned int)winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::subtract_final_reference((__int64)v1) )
  {
    std::_Atomic_storage<unsigned __int64,8>::store(v1 + 1);
    if ( v1 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v1 + 8LL))(v1, 1LL);
  }
}
