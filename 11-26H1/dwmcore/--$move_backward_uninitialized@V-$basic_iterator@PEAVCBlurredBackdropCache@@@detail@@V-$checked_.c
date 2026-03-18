/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@PEAVCBlurredBackdropCache@@@detail@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@detail@@YAXV?$basic_iterator@PEAVCBlurredBackdropCache@@@0@0V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@Z @ 0x180018410
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1800188D8 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 * Callees:
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 */

_QWORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<CBlurredBackdropCache *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v7; // rbx

  for ( result = (_QWORD *)*a2; *a2 != *a1; result = (_QWORD *)*a2 )
  {
    *a2 = result - 1;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(a3);
    v7 = (_QWORD *)*a2;
    *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(a3) = *v7;
  }
  return result;
}
