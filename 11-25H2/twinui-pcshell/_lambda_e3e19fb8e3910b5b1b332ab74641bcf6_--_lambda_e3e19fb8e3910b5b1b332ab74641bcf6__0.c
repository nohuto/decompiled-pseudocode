/*
 * XREFs of _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::_lambda_e3e19fb8e3910b5b1b332ab74641bcf6__0 @ 0x180694BF8
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806954B4 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 */

_QWORD *__fastcall lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::_lambda_e3e19fb8e3910b5b1b332ab74641bcf6__0(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(a1, *a2);
  a1[1] = *a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1 + 1);
  a1[2] = *a4;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1 + 2);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    a1 + 3,
    *a5);
  return a1;
}
