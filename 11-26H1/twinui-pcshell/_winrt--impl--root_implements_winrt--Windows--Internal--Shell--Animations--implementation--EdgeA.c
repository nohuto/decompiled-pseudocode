/*
 * XREFs of _winrt::impl::root_implements_winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager_winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager_::get_weak_winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager__::_1_::dtor$1 @ 0x1806CFC20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802118F4 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::root_implements_winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager_winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager_::get_weak_winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 88));
  }
  return result;
}
