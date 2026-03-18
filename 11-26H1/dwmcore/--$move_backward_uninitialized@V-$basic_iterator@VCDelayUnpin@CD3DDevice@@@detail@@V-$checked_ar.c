/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@detail@@YAXV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@0@0V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@Z @ 0x1800D81A4
 * Callers:
 *     ?reserve_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCDelayUnpin@CD3DDevice@@_K0@Z @ 0x1800D7FB4 (-reserve_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@.c)
 * Callees:
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@QEBAPEAVCDelayUnpin@CD3DDevice@@XZ @ 0x18021FD70 (--C-$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@QEBAPEAVCDelayUnpin@CD3DDevice@.c)
 *     ??0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z @ 0x1802963A0 (--0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z.c)
 */

const struct CD3DDevice::CDelayUnpin *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<CD3DDevice::CDelayUnpin>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
        const struct CD3DDevice::CDelayUnpin **a1,
        const struct CD3DDevice::CDelayUnpin **a2,
        _QWORD *a3)
{
  const struct CD3DDevice::CDelayUnpin *result; // rax
  const struct CD3DDevice::CDelayUnpin *v7; // rbx
  CD3DDevice::CDelayUnpin *v8; // rax

  for ( result = *a2; *a2 != *a1; result = *a2 )
  {
    *a2 = (const struct CD3DDevice::CDelayUnpin *)((char *)result - 24);
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(a3);
    v7 = *a2;
    v8 = (CD3DDevice::CDelayUnpin *)stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>::operator->(a3);
    CD3DDevice::CDelayUnpin::CDelayUnpin(v8, v7);
  }
  return result;
}
