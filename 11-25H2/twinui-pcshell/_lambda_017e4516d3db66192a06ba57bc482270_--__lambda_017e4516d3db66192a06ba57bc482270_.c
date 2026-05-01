/*
 * XREFs of _lambda_017e4516d3db66192a06ba57bc482270_::__lambda_017e4516d3db66192a06ba57bc482270_ @ 0x180231BB8
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___::_CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___ @ 0x1802AE6C0 (CMultitaskingViewTaskCallback__lambda_017e4516d3db66192a06ba57bc482270___--_CMultitaskingViewTas.c)
 *     _GuidedSnapAssistControl::Show_::_1_::dtor$7 @ 0x1806AEEB9 (_GuidedSnapAssistControl--Show_--_1_--dtor$7.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180287BF8 (--1-$com_ptr_t@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 */

void __fastcall lambda_017e4516d3db66192a06ba57bc482270_::__lambda_017e4516d3db66192a06ba57bc482270_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(a1 + 5);
  v2 = (std::_Ref_count_base *)a1[4];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
}
