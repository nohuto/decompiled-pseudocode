/*
 * XREFs of ??1InputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18063913C
 * Callers:
 *     ?_Tidy@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1802862EC (-_Tidy@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allocat.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x18063982C (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?pop_front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAXXZ @ 0x18063A868 (-pop_front@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$all.c)
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InsertActionToQueue_::_1_::dtor$5 @ 0x180703369 (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--InsertActi_ea_180703369.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180638FDC (--1-$com_ptr_t@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction::~InputSwitcherAsyncAction(
        void **this)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>,wil::err_returncode_policy>(this + 3);
  wil::com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>,wil::err_returncode_policy>(this + 2);
}
