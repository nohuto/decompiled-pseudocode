/*
 * XREFs of _lambda_04d9d8ca76e4934c047f88587232d4c0_::_lambda_04d9d8ca76e4934c047f88587232d4c0_ @ 0x180411E10
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18041BC74 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180423BD4 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall lambda_04d9d8ca76e4934c047f88587232d4c0_::_lambda_04d9d8ca76e4934c047f88587232d4c0_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  *a1 = a2;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    a1 + 1,
    a3);
  a1[2] = *a4;
  return a1;
}
