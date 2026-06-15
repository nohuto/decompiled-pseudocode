/*
 * XREFs of std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_034c87b344bb69cb11fef3b63041d359___ @ 0x1800BB330
 * Callers:
 *     ?EnsureProcessSubmixNotInSubmixContext@CProcessSubmixManager@@AEAAJAEBV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A94D4 (-EnsureProcessSubmixNotInSubmixContext@CProcessSubmixManager@@AEAAJAEBV-$unique_ptr@VCAppSubmixC.c)
 * Callees:
 *     _lambda_034c87b344bb69cb11fef3b63041d359_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800BA930 (_lambda_034c87b344bb69cb11fef3b63041d359_--operator()_std--unique_ptr_CAppSubmixClient_std--defa.c)
 */

__int64 __fastcall std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_034c87b344bb69cb11fef3b63041d359___(
        __int64 a1,
        _QWORD **a2,
        _QWORD **a3,
        __int64 a4)
{
  _QWORD **i; // rdi
  __int64 result; // rax
  __int64 v9; // xmm1_8

  for ( i = a2; i != a3; ++i )
    lambda_034c87b344bb69cb11fef3b63041d359_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__(
      a4,
      i);
  result = a1;
  v9 = *(_QWORD *)(a4 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
