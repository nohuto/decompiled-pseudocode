/*
 * XREFs of ??$insert_unchecked@AEBVCVIRenderList@@@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VCVIRenderList@@@1@V?$basic_iterator@$$CBVCVIRenderList@@@1@AEBVCVIRenderList@@@Z @ 0x180170794
 * Callers:
 *     ?AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z @ 0x180170760 (-AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x180170818 (-reserve_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_.c)
 */

_QWORD *__fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::insert_unchecked<CVIRenderList const &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // rax
  _QWORD *result; // rax

  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*a3 - *a1) >> 3);
  v8 = detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::reserve_region(
         a1,
         v6);
  *(_OWORD *)v8 = *(_OWORD *)a4;
  *(_OWORD *)(v8 + 16) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(a4 + 32);
  result = a2;
  *a2 = *a1 + 40 * v6;
  return result;
}
