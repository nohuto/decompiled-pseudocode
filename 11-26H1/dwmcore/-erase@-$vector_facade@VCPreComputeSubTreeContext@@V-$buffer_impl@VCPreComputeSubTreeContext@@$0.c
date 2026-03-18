/*
 * XREFs of ?erase@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCPreComputeSubTreeContext@@@2@V?$basic_iterator@$$CBVCPreComputeSubTreeContext@@@2@@Z @ 0x1801753B4
 * Callers:
 *     ?pop_back@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180175384 (-pop_back@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCPreComputeSubTreeContext@.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180175724 (-clear_region@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCPreComputeSubTreeCont.c)
 */

_QWORD *__fastcall detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rbx

  v4 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*a3 - *a1) >> 5);
  detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v4,
    1LL);
  *a2 = *a1 + 352 * v4;
  return a2;
}
