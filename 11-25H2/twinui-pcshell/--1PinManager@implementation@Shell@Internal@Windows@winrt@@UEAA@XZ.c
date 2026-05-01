/*
 * XREFs of ??1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805BF7CC
 * Callers:
 *     ??1?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1805BF350 (--1-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@.c)
 *     ??_EPinManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805C04E8 (--_EPinManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::PinManager___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::PinManager____::_1_::dtor$1 @ 0x1806B7F2F (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1806B7F2F.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1PinHistory@@QEAA@XZ @ 0x1805BF6E4 (--1PinHistory@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::~PinManager(
        winrt::Windows::Internal::Shell::implementation::PinManager *this)
{
  std::_Ref_count_base *v2; // rcx

  PinHistory::~PinHistory((winrt::Windows::Internal::Shell::implementation::PinManager *)((char *)this + 128));
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 14);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>::~MeetAndChatManager_base<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>((__int64)this);
}
