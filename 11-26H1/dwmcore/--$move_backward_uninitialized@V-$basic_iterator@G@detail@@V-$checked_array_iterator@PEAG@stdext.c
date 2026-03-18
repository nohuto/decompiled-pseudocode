/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@G@detail@@V?$checked_array_iterator@PEAG@stdext@@@detail@@YAXV?$basic_iterator@G@0@0V?$checked_array_iterator@PEAG@stdext@@@Z @ 0x18000A588
 * Callers:
 *     ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x18000A288 (-reserve_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@deta.c)
 * Callees:
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAG@stdext@@QEBAPEAGXZ @ 0x1801DCFF8 (--C-$checked_array_iterator@PEAG@stdext@@QEBAPEAGXZ.c)
 */

_WORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<unsigned short>,stdext::checked_array_iterator<unsigned short *>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _WORD *result; // rax
  _WORD *v7; // rbx

  for ( result = (_WORD *)*a2; *a2 != *a1; result = (_WORD *)*a2 )
  {
    *a2 = result - 1;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(a3);
    v7 = (_WORD *)*a2;
    *(_WORD *)stdext::checked_array_iterator<unsigned short *>::operator->(a3) = *v7;
  }
  return result;
}
