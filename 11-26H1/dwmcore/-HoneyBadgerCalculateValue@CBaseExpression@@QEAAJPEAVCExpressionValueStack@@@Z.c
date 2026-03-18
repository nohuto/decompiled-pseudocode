/*
 * XREFs of ?HoneyBadgerCalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@@Z @ 0x18013E6AC
 * Callers:
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D338 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x180272FC0 (-DestroyDefaultAnimations@CInteractionTracker2@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z @ 0x180277668 (-TransitionToInertia@CInteractionTracker2@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ @ 0x18013E700 (-GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ.c)
 */

__int64 __fastcall CBaseExpression::HoneyBadgerCalculateValue(CBaseExpression *this, struct CExpressionValueStack *a2)
{
  __int64 v2; // rbx
  CComposition *v4; // rcx
  __int64 EffectiveCompositionFrameId; // rax
  struct CExpressionValueStack *v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 21);
  v4 = (CComposition *)*((_QWORD *)this + 3);
  v8 = 0LL;
  EffectiveCompositionFrameId = CComposition::GetEffectiveCompositionFrameId(v4);
  result = CBaseExpression::CalculateValue(this, v6, EffectiveCompositionFrameId, (struct CalculateValueResult *)&v8);
  *((_QWORD *)this + 21) = v2;
  return result;
}
