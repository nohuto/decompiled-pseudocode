/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@detail@@V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@detail@@YAXV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@0@0V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@Z @ 0x18015CF94
 * Callers:
 *     ?reserve_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUConstantBufferRow@CCustomKernelEffect@@_K0@Z @ 0x18015CC10 (-reserve_region@-$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V-$buffer_impl@UConstant.c)
 * Callees:
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 */

_OWORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<CCustomKernelEffect::ConstantBufferRow>,stdext::checked_array_iterator<CCustomKernelEffect::ConstantBufferRow *>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _OWORD *result; // rax
  _OWORD *v7; // rbx

  for ( result = (_OWORD *)*a2; *a2 != *a1; result = (_OWORD *)*a2 )
  {
    *a2 = result - 1;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(a3);
    v7 = (_OWORD *)*a2;
    *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(a3) = *v7;
  }
  return result;
}
