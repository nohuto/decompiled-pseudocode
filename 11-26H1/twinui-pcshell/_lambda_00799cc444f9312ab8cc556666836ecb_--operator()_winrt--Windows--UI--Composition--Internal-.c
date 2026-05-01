/*
 * XREFs of _lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x18069C34C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___::Invoke @ 0x18069D180 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18069D180.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x18028B044 (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ?AnimateView@?$consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator@UIShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@AEBUShellViewCoordinator@5673@_KAEBUGestureAnimationData@Input@673@AEBUPoint@Foundation@Windows@3@@Z @ 0x18069CD5C (-AnimateView@-$consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator@UIShellAnima.c)
 *     ?EdgeGestureOffset@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18069CE5C (-EdgeGestureOffset@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Sh.c)
 *     ?at@?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAAAEAUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBW4ShellView@4567@@Z @ 0x18069E074 (-at@-$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U-$hash@W4.c)
 *     ?get@?$weak_ref@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18069E144 (-get@-$weak_ref@UEdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windo.c)
 *     ?get@?$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18069E1D4 (-get@-$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const___winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  int v5; // edi
  int v6; // eax
  _QWORD *v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  winrt::weak_ref<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager>::get(
    a1,
    &v7);
  if ( v7 )
  {
    winrt::weak_ref<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::get(
      *(_QWORD *)(a1 + 8) + 240LL,
      &v8);
    if ( v8 )
    {
      LODWORD(v9) = 16;
      v4 = std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::at(
             *(_QWORD *)(a1 + 8) + 152LL,
             &v9);
      v5 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::EdgeGestureOffset(v4);
      v6 = std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::at(
             *(_QWORD *)(a1 + 8) + 152LL,
             a1 + 32);
      winrt::impl::consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>::AnimateView(
        (unsigned int)&v8,
        a1 + 32,
        v6,
        v5,
        a1 + 16,
        a1 + 36);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  if ( v7 )
    winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(&v7);
}
