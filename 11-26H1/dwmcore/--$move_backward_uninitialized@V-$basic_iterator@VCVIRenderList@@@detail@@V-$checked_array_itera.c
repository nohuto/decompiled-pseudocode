/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@VCVIRenderList@@@detail@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@detail@@YAXV?$basic_iterator@VCVIRenderList@@@0@0V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@Z @ 0x1801709B0
 * Callers:
 *     ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x180170818 (-reserve_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_.c)
 * Callees:
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEBAPEAUCpuClipStackState@CScopedClipStack@@XZ @ 0x180246414 (--C-$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEBAPEAUCpuClipStac.c)
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CVIRenderList>,stdext::checked_array_iterator<CVIRenderList *>>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rax

  for ( result = *a2; *a2 != *a1; result = *a2 )
  {
    *a2 = result - 40;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(a3);
    v7 = *a2;
    v8 = stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>::operator->(a3);
    *(_OWORD *)v8 = *(_OWORD *)v7;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(v7 + 16);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(v7 + 32);
  }
  return result;
}
