/*
 * XREFs of __std_find_trivial_8 @ 0x18002F400
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180015DB4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x1800166F0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x180029EDC (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCApplication@@@std@@@std@@@std@@PEAVCApplication@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCApplication@@@std@@@std@@@0@V10@V10@AEBQEAVCApplication@@@Z @ 0x180029FE0 (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVCApplication@@@std@@@std@@@std@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
const __m128i *__fastcall _std_find_trivial_8(const __m128i *a1, const __m128i *a2, unsigned __int64 _R8)
{
  return anonymous_namespace_::__std_find_trivial_impl__anonymous_namespace_::_Find_traits_8_unsigned___int64_(
           a1,
           a2,
           _R8);
}
