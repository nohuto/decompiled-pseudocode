/*
 * XREFs of _lambda_8dfae0f1a0c35483e19f36087ce437d3_::_lambda_8dfae0f1a0c35483e19f36087ce437d3_ @ 0x1803043F0
 * Callers:
 *     ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801A1B60 (-SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfig.c)
 * Callees:
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180285F98 (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall lambda_8dfae0f1a0c35483e19f36087ce437d3_::_lambda_8dfae0f1a0c35483e19f36087ce437d3_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *result; // rax

  wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(a1, a2);
  result = a1;
  a1[1] = a3;
  return result;
}
