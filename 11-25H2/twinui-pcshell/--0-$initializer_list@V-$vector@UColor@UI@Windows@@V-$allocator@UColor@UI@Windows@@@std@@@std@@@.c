/*
 * XREFs of ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x180230458
 * Callers:
 *     _dynamic_initializer_for__thinking__ @ 0x180164F40 (_dynamic_initializer_for__thinking__.c)
 *     ?SetFocusState@UwpWindowWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1801D6620 (-SetFocusState@UwpWindowWrapperBase@@UEAAXW4FocusState@@@Z.c)
 *     ?get_ExperienceId@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801D6EA0 (-get_ExperienceId@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?get_PersistingStateName@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801E6C00 (-get_PersistingStateName@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?SetActivationTimeoutPolicy@UwpWindowWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801EE1E0 (-SetActivationTimeoutPolicy@UwpWindowWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInte.c)
 *     ?get_WindowTitle@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180205660 (-get_WindowTitle@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?put_IsOccluded@UwpWindowWrapperBase@@UEAAJE@Z @ 0x180208180 (-put_IsOccluded@UwpWindowWrapperBase@@UEAAJE@Z.c)
 *     ?SetDehydrationPolicy@UwpWindowWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18020CCF0 (-SetDehydrationPolicy@UwpWindowWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@In.c)
 *     ?put_WindowResizingState@UwpWindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18022FC30 (-put_WindowResizingState@UwpWindowWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@She.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1802ECEEC (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x18034D10C (-QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA-AU-$pair@GG@std@@XZ.c)
 *     ?TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z @ 0x180413B90 (-TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z.c)
 *     ?TerminateApp@UwpWindowEventDispatcher@@UEAAJ_K@Z @ 0x180419BA0 (-TerminateApp@UwpWindowEventDispatcher@@UEAAJ_K@Z.c)
 *     ?ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x18043A2F0 (-ApplyPresenter@UwpWindowWrapperBase@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnv.c)
 *     ?SetWindowPropagatableProperties@UwpWindowWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18043B730 (-SetWindowPropagatableProperties@UwpWindowWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundat.c)
 *     ?get_WindowProperties@UwpWindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18043C5B0 (-get_WindowProperties@UwpWindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Wind.c)
 *     ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1805305B0 (-OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805AA350 (-CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x1805BA984 (--$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
