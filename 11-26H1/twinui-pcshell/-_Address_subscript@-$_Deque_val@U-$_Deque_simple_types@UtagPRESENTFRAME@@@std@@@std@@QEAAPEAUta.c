/*
 * XREFs of ?_Address_subscript@?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUtagPRESENTFRAME@@_K@Z @ 0x180357948
 * Callers:
 *     ??D?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBAAEBUguid@winrt@@XZ @ 0x1800CBBF4 (--D-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@st.c)
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180162E20 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 *     ??$_Emplace_front_internal@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@AEAAX$$QEAUApplicationViewHistory@SnapEducationHandler@@@Z @ 0x1801B6C70 (--$_Emplace_front_internal@UApplicationViewHistory@SnapEducationHandler@@@-$deque@UApplicationVi.c)
 *     ??$_Emplace_front_internal@AEBUguid@winrt@@@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXAEBUguid@winrt@@@Z @ 0x1801F3340 (--$_Emplace_front_internal@AEBUguid@winrt@@@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@.c)
 *     ??$_Emplace_front_internal@AEBUtagPRESENTFRAME@@@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXAEBUtagPRESENTFRAME@@@Z @ 0x18033D3CC (--$_Emplace_front_internal@AEBUtagPRESENTFRAME@@@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRES.c)
 *     ??$_Emplace_back_internal@AEAUForegroundSwitchData@Discover@PenWorkspace@@@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAXAEAUForegroundSwitchData@Discover@PenWorkspace@@@Z @ 0x1803EA994 (--$_Emplace_back_internal@AEAUForegroundSwitchData@Discover@PenWorkspace@@@-$deque@UForegroundSw.c)
 *     ??$_Emplace_back_internal@AEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@AEAAXAEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@Z @ 0x180477800 (--$_Emplace_back_internal@AEBUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@-$deque@UP.c)
 *     ??$_Emplace_back_internal@AEAUCRect@Geometry@@@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEAUCRect@Geometry@@@Z @ 0x1805A5BF8 (--$_Emplace_back_internal@AEAUCRect@Geometry@@@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@s.c)
 *     ??$_Emplace_front_internal@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAX$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@@Z @ 0x1805E0BD0 (--$_Emplace_front_internal@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Ustea.c)
 *     ??$_Emplace_back_internal@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX$$QEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x180638720 (--$_Emplace_back_internal@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>::_Address_subscript(
        __int64 a1,
        __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 & (*(_QWORD *)(a1 + 16) - 1LL)));
}
