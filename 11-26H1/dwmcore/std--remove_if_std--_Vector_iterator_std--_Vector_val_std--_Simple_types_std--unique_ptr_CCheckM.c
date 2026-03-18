/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________CD3DDevice::RemoveStaleCheckMPOCaches_::_5_::_lambda_1___ @ 0x180212E78
 * Callers:
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x18006A464 (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ??$?4U?$default_delete@VCCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180126E48 (--$-4U-$default_delete@VCCheckMPOCache@@@std@@$0A@@-$unique_ptr@VCCheckMPOCache@@U-$default_dele.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________CD3DDevice::RemoveStaleCheckMPOCaches_::_5_::_lambda_1___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rsi
  __int64 *j; // r14
  __int64 **result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( (unsigned __int64)(a4 - *(_QWORD *)(*i + 480)) > 0x1E )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( (unsigned __int64)(a4 - *(_QWORD *)(*j + 480)) <= 0x1E )
        std::unique_ptr<CCheckMPOCache>::operator=<std::default_delete<CCheckMPOCache>,0>(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
