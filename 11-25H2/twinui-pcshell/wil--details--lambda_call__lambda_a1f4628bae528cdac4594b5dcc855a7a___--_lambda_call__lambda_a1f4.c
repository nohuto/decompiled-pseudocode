/*
 * XREFs of wil::details::lambda_call__lambda_a1f4628bae528cdac4594b5dcc855a7a___::_lambda_call__lambda_a1f4628bae528cdac4594b5dcc855a7a___ @ 0x1802CD0E4
 * Callers:
 *     _UwpWindowWrapperBase::FlushStashedWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x1806B4652 (_UwpWindowWrapperBase--FlushStashedWindowingEnvironmentSettings_--_1_--dtor$0.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_a1f4628bae528cdac4594b5dcc855a7a___::_lambda_call__lambda_a1f4628bae528cdac4594b5dcc855a7a___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(*(_QWORD *)a1 + 144LL));
  }
  return result;
}
