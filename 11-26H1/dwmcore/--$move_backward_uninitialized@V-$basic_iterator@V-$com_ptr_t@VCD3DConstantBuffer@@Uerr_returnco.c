/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@detail@@YAXV?$basic_iterator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@0V?$checked_array_iterator@PEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@Z @ 0x1800F87CC
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1800F8660 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 */

__int64 *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>,stdext::checked_array_iterator<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy> *>>(
        __int64 **a1,
        __int64 **a2,
        _QWORD *a3)
{
  __int64 *result; // rax
  __int64 *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx

  for ( result = *a2; *a2 != *a1; result = *a2 )
  {
    *a2 = result - 1;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(a3);
    v7 = *a2;
    v8 = (_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(a3);
    v9 = *v7;
    *v7 = 0LL;
    *v8 = v9;
  }
  return result;
}
