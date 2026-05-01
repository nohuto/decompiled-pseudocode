/*
 * XREFs of ?get@?$weak_ref@UShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18069E1D4
 * Callers:
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x18069C34C (_lambda_00799cc444f9312ab8cc556666836ecb_--operator()_winrt--Windows--UI--Composition--Internal-.c)
 *     ?ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069D22C (-ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 *     ?ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069D630 (-ReportViewDragGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
