/*
 * XREFs of _CInteractionTracker2::InsertDependenciesForProperty_::_2_::_lambda_1_::operator() @ 0x1801E0D60
 * Callers:
 *     ?InsertDependenciesForProperty@CInteractionTracker@@UEAAXAEBUExpressionWalkContext@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801B3C00 (-InsertDependenciesForProperty@CInteractionTracker@@UEAAXAEBUExpressionWalkContext@@UDCOMPOSITIO.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker2@@UEAAXAEBUExpressionWalkContext@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180273F80 (-InsertDependenciesForProperty@CInteractionTracker2@@UEAAXAEBUExpressionWalkContext@@UDCOMPOSITI.c)
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CBaseExpression@@SAXAEBUExpressionWalkContext@@PEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18004D690 (-InsertExpressionsInOrderForTarget@CBaseExpression@@SAXAEBUExpressionWalkContext@@PEAVCResource@.c)
 */

void __fastcall CInteractionTracker2::InsertDependenciesForProperty_::_2_::_lambda_1_::operator()(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int *v2; // rbx
  unsigned int *v4; // rsi

  v2 = (unsigned int *)a2[1];
  v4 = &v2[*a2];
  while ( v2 != v4 )
    CBaseExpression::InsertExpressionsInOrderForTarget(
      *(const struct ExpressionWalkContext **)a1,
      *(_QWORD *)(a1 + 8),
      *v2++);
}
