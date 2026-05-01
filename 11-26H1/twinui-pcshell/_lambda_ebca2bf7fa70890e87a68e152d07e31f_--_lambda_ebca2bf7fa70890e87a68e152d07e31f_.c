/*
 * XREFs of _lambda_ebca2bf7fa70890e87a68e152d07e31f_::_lambda_ebca2bf7fa70890e87a68e152d07e31f_ @ 0x18050E988
 * Callers:
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18050F820 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@PEAUIUnknown@@@Z @ 0x180510900 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_ebca2bf7fa70890e87a68e152d07e31f_::_lambda_ebca2bf7fa70890e87a68e152d07e31f_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  a1[5] = a7;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
