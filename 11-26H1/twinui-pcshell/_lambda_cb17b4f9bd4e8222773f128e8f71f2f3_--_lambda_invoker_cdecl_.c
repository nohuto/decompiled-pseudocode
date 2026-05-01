/*
 * XREFs of _lambda_cb17b4f9bd4e8222773f128e8f71f2f3_::_lambda_invoker_cdecl_ @ 0x1804F2600
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0VGamingPosturePositioner@@@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVGamingPosturePositioner@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804F271C (--$-0VGamingPosturePositioner@@@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEA.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e7b9edbfb0e1dadcbf069f212f8bd4bd___ @ 0x1804F5BD0 (CreationThreadDispatcher--RunAsync__lambda_e7b9edbfb0e1dadcbf069f212f8bd4bd___.c)
 */

void __fastcall lambda_cb17b4f9bd4e8222773f128e8f71f2f3_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 744);
  wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(&v4, a1);
  v3[0] = v4;
  v4 = 0LL;
  v3[1] = a1;
  CreationThreadDispatcher::RunAsync__lambda_e7b9edbfb0e1dadcbf069f212f8bd4bd___(v1, v3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v4);
}
