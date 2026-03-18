/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@USourceCVI@CVisualSurface@@@detail@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@detail@@YAXV?$basic_iterator@USourceCVI@CVisualSurface@@@0@0V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@Z @ 0x18009B03C
 * Callers:
 *     ?reserve_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSourceCVI@CVisualSurface@@_K0@Z @ 0x18009AF20 (-reserve_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurf.c)
 * Callees:
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 */

__int64 *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<CVisualSurface::SourceCVI>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>(
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
    *a2 = result - 2;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(a3);
    v7 = *a2;
    v8 = (_QWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(a3);
    v9 = *v7;
    *v7 = 0LL;
    *v8 = v9;
    v8[1] = v7[1];
  }
  return result;
}
