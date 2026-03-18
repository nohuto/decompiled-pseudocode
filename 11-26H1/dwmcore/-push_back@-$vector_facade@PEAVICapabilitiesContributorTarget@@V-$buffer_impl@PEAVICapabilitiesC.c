/*
 * XREFs of ?push_back@?$vector_facade@PEAVICapabilitiesContributorTarget@@V?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAPEAVICapabilitiesContributorTarget@@@Z @ 0x180175048
 * Callers:
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180175074 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800FCA84 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 */

_QWORD *__fastcall detail::vector_facade<ICapabilitiesContributorTarget *,detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>>::push_back(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *result; // rax

  result = (_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                       a1,
                       (a1[1] - *a1) >> 3,
                       a3);
  *result = *a2;
  return result;
}
