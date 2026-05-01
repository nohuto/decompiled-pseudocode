/*
 * XREFs of _lambda_799586314299042aa0ed2a24b32e5288_::__lambda_799586314299042aa0ed2a24b32e5288_ @ 0x1804EA750
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___ @ 0x1804EA2B8 (CreationThreadDispatcher--RunAsync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___::_CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___ @ 0x1804EA7A8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_799586314299042aa0ed2a24b32e5288___--_CTask.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6de8a3c9a7f2afeabfb52c8d09309e45___ @ 0x1804F5AEC (CreationThreadDispatcher--RunAsync__lambda_6de8a3c9a7f2afeabfb52c8d09309e45___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e7b9edbfb0e1dadcbf069f212f8bd4bd___ @ 0x1804F5BD0 (CreationThreadDispatcher--RunAsync__lambda_e7b9edbfb0e1dadcbf069f212f8bd4bd___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall lambda_799586314299042aa0ed2a24b32e5288_::__lambda_799586314299042aa0ed2a24b32e5288_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
