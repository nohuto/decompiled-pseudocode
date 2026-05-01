/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18056CAA0
 * Callers:
 *     ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x18056CE08 (-ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x18056CFC8 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18056D094 (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x18056DF68 (-HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ.c)
 *     ?PointersDown@TouchGestureProcessor@@QEAAXI@Z @ 0x18056E864 (-PointersDown@TouchGestureProcessor@@QEAAXI@Z.c)
 *     ?PointersUp@TouchGestureProcessor@@QEAAXXZ @ 0x18056EAA0 (-PointersUp@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18056F4EC (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?close@?$test_data_control@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18056FD18 (-close@-$test_data_control@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@QEAAX.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::~test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>(
        void **a1)
{
  tip2::test_data_control<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>::close();
  return wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(a1);
}
