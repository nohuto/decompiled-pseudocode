/*
 * XREFs of _lambda_c455d037a1b864dd5cc5867b63d5951d_::_lambda_c455d037a1b864dd5cc5867b63d5951d_ @ 0x1806BC120
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806BCBC4 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 */

_QWORD *__fastcall lambda_c455d037a1b864dd5cc5867b63d5951d_::_lambda_c455d037a1b864dd5cc5867b63d5951d_(
        _QWORD *a1,
        __int64 *a2)
{
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(a1, *a2);
  a1[1] = a2[1];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1 + 1);
  a1[2] = a2[2];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1 + 2);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    a1 + 3,
    a2[3]);
  return a1;
}
