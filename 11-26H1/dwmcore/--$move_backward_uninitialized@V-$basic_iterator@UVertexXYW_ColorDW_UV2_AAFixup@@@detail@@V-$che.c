/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@detail@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@detail@@YAXV?$basic_iterator@UVertexXYW_ColorDW_UV2_AAFixup@@@0@0V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@Z @ 0x1801DB9D0
 * Callers:
 *     ?reserve_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexXYW_ColorDW_UV2_AAFixup@@_K0@Z @ 0x18000A36C (-reserve_region@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorD.c)
 * Callees:
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@QEBAPEAUVertexXYW_ColorDW_UV2_AAFixup@@XZ @ 0x18025DD34 (--C-$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@QEBAPEAUVertexXYW_ColorD.c)
 */

_OWORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<VertexXYW_ColorDW_UV2_AAFixup>,stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _OWORD *result; // rax
  _OWORD *v7; // rbx
  _OWORD *v8; // rax

  for ( result = (_OWORD *)*a2; *a2 != *a1; result = (_OWORD *)*a2 )
  {
    *a2 = result - 4;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(a3);
    v7 = (_OWORD *)*a2;
    v8 = (_OWORD *)stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>::operator->(a3);
    *v8 = *v7;
    v8[1] = v7[1];
    v8[2] = v7[2];
    v8[3] = v7[3];
  }
  return result;
}
