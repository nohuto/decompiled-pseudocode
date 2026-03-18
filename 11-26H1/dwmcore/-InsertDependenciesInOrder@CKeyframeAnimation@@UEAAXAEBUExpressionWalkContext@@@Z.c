/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x180279D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CBaseExpression@@SAXAEBUExpressionWalkContext@@PEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18004D690 (-InsertExpressionsInOrderForTarget@CBaseExpression@@SAXAEBUExpressionWalkContext@@PEAVCResource@.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(
        CKeyframeAnimation *this,
        const struct ExpressionWalkContext *a2)
{
  CBaseExpression **v2; // rsi
  CBaseExpression **i; // rbx
  __int64 v6; // rdx

  v2 = (CBaseExpression **)*((_QWORD *)this + 40);
  for ( i = (CBaseExpression **)*((_QWORD *)this + 39); i != v2; ++i )
    CBaseExpression::InsertInOrder(*i, a2);
  v6 = *((_QWORD *)this + 35);
  if ( v6 )
  {
    CBaseExpression::InsertExpressionsInOrderForTarget(a2, v6, 1u);
    CBaseExpression::InsertExpressionsInOrderForTarget(a2, *((_QWORD *)this + 35), 2u);
  }
}
