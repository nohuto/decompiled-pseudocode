/*
 * XREFs of ?erase@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCExpressionValue@@@2@V?$basic_iterator@$$CBVCExpressionValue@@@2@0@Z @ 0x1802147F8
 * Callers:
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBVCExpressionValue@@@Z @ 0x18010C490 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00_ea_18010C490.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18010BBE4 (-clear_region@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vlibera.c)
 */

_QWORD *__fastcall detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = 0x8E38E38E38E38E39uLL * ((*a3 - *a1) >> 3);
  detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v5,
    0x8E38E38E38E38E39uLL * ((__int64)(*a4 - *a3) >> 3));
  result = a2;
  *a2 = *a1 + 72 * v5;
  return result;
}
