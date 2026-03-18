/*
 * XREFs of ?pop_back@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180175384
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?erase@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCPreComputeSubTreeContext@@@2@V?$basic_iterator@$$CBVCPreComputeSubTreeContext@@@2@@Z @ 0x1801753B4 (-erase@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCPreComputeSubTreeContext@@$0.c)
 */

__int64 __fastcall detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 8) - 352LL;
  return detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::erase(
           a1,
           &v3,
           &v2);
}
