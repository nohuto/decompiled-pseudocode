/*
 * XREFs of _lambda_c46833f4c9ea63983b862330b23aa69b_::__lambda_c46833f4c9ea63983b862330b23aa69b_ @ 0x1804F74F4
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___ @ 0x1804F591C (CreationThreadDispatcher--RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_61aaaea7faa44b78167a0b42c2312525___ @ 0x1804F5A04 (CreationThreadDispatcher--RunAsync__lambda_61aaaea7faa44b78167a0b42c2312525___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___::_CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___ @ 0x1804F751C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c46833f4c9ea63983b862330b23aa69b___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180024574 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall lambda_c46833f4c9ea63983b862330b23aa69b_::__lambda_c46833f4c9ea63983b862330b23aa69b_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
