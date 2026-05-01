/*
 * XREFs of _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::__lambda_2a8f8fa06f2e0b1768a49123f6915af2_ @ 0x1802C566C
 * Callers:
 *     std::unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______::_unique_ptr_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std::default_delete_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2_______ @ 0x1802C5514 (std--unique_ptr_std--tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____std--default_delete_std--.c)
 *     std::thread::_Invoke_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_ @ 0x1802C6460 (std--thread--_Invoke_std--tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1806D4576 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall lambda_2a8f8fa06f2e0b1768a49123f6915af2_::__lambda_2a8f8fa06f2e0b1768a49123f6915af2_(__int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1);
}
