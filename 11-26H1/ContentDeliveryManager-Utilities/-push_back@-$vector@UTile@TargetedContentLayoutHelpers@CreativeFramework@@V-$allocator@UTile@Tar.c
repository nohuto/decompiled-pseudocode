/*
 * XREFs of ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B1F74
 * Callers:
 *     _lambda_12e028b79b04ba515e9d372c1a557575_::operator() @ 0x1800AE4D8 (_lambda_12e028b79b04ba515e9d372c1a557575_--operator().c)
 *     std::_Func_impl_std::_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std::allocator_std::_Func_class_bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__HSTRING_____std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800B1A50 (std--_Func_impl_std--_Callable_obj__lambda_c9fa2bf29d200210640ad6f6e69aec9a__0__std_ea_1800B1A50.c)
 * Callees:
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z @ 0x1800ADFCC (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z.c)
 *     ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800B1D20 (-_Reserve@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Targ.c)
 */

__int64 __fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::push_back(
        __int64 *a1,
        unsigned __int64 a2)
{
  bool v4; // al
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 result; // rax

  v4 = a2 < a1[1] && *a1 <= a2;
  v5 = a1[2];
  if ( v4 )
  {
    v6 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a2 - *a1) >> 3);
    if ( a1[1] == v5 )
      std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reserve(a1);
    v7 = *a1 + 56 * v6;
  }
  else
  {
    if ( a1[1] == v5 )
      std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reserve(a1);
    v7 = a2;
  }
  result = CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(a1[1], v7);
  a1[1] += 56LL;
  return result;
}
