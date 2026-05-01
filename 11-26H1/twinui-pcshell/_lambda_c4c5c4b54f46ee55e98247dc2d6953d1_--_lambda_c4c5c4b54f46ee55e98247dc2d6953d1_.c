/*
 * XREFs of _lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_ @ 0x1801B6C34
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___ @ 0x1801B6B80 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animati.c)
 * Callees:
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18009D9A4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

_QWORD *__fastcall lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(
        _QWORD *a1,
        __int64 *a2)
{
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(a1, *a2);
  a1[1] = __abi_winrt_ptr_ctor(a2[1]);
  return a1;
}
