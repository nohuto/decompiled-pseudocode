/*
 * XREFs of ??0CExpressionValueStack@@QEAA@XZ @ 0x18010B9C0
 * Callers:
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D338 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1801A0C3C (--0CExpressionManager@@AEAA@XZ.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x180272FC0 (-DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18010C430 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expa.c)
 */

CExpressionValueStack *__fastcall CExpressionValueStack::CExpressionValueStack(CExpressionValueStack *this)
{
  *(_QWORD *)this = (char *)this + 24;
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 96;
  *((_DWORD *)this + 24) = 0;
  detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
    this,
    1LL);
  return this;
}
