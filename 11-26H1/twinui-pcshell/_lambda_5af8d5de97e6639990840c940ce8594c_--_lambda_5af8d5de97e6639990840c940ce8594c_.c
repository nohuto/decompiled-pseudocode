/*
 * XREFs of _lambda_5af8d5de97e6639990840c940ce8594c_::_lambda_5af8d5de97e6639990840c940ce8594c_ @ 0x1803042B0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___ @ 0x1801A1CBC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180285F98 (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall lambda_5af8d5de97e6639990840c940ce8594c_::_lambda_5af8d5de97e6639990840c940ce8594c_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = a3;
  wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
    a1 + 2,
    a4);
  a1[3] = a4[1];
  return a1;
}
