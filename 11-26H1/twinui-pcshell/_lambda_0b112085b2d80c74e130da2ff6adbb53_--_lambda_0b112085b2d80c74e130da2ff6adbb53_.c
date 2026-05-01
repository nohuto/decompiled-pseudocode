/*
 * XREFs of _lambda_0b112085b2d80c74e130da2ff6adbb53_::_lambda_0b112085b2d80c74e130da2ff6adbb53_ @ 0x180438878
 * Callers:
 *     ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x18043DA10 (-RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@Vi.c)
 *     ?RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x180447170 (-RequestCloseAsync@UwpWindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180285F98 (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall lambda_0b112085b2d80c74e130da2ff6adbb53_::_lambda_0b112085b2d80c74e130da2ff6adbb53_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  *a1 = a2;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    a1 + 1,
    a3);
  wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
    a1 + 2,
    a4);
  return a1;
}
