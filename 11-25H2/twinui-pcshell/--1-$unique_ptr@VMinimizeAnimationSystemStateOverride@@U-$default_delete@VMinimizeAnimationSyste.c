/*
 * XREFs of ??1?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAA@XZ @ 0x1802CF34C
 * Callers:
 *     ??1MultitaskingViewGestureHandler@@UEAA@XZ @ 0x180078C90 (--1MultitaskingViewGestureHandler@@UEAA@XZ.c)
 *     _lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator() @ 0x180489B44 (_lambda_abbb930ddb92e06fa07b01ae54ef43e0_--operator().c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x180497498 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     _MultitaskingViewGestureHandler::MultitaskingViewGestureHandler_::_1_::dtor$14 @ 0x1806AC51F (_MultitaskingViewGestureHandler--MultitaskingViewGestureHandler_--_1_--dtor$14.c)
 *     __lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator()_::_1_::dtor$0 @ 0x1806C7D38 (__lambda_abbb930ddb92e06fa07b01ae54ef43e0_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x180489BE4 (--R-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSyste.c)
 */

__int64 __fastcall std::unique_ptr<MinimizeAnimationSystemStateOverride>::~unique_ptr<MinimizeAnimationSystemStateOverride>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<MinimizeAnimationSystemStateOverride>::operator()();
  return result;
}
