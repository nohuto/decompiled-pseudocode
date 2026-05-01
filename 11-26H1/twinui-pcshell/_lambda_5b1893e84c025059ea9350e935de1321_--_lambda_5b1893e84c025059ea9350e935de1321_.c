/*
 * XREFs of _lambda_5b1893e84c025059ea9350e935de1321_::_lambda_5b1893e84c025059ea9350e935de1321_ @ 0x1806BC0D8
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x1801ACEE0 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_5b1893e84c025059ea9350e935de1321_::_lambda_5b1893e84c025059ea9350e935de1321_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = __abi_winrt_ptr_ctor(*a2);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    a1 + 1,
    a2[1]);
  a1[2] = a2[2];
  return a1;
}
