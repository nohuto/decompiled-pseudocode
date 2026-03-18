/*
 * XREFs of ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1801DAF7C
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@UEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180270D20 (-InsertDependenciesForAxis@CInteractionTracker@@UEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z.c)
 *     ?InsertDependenciesForAxis@CInteractionTracker2@@UEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180273E90 (-InsertDependenciesForAxis@CInteractionTracker2@@UEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@.c)
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CBaseExpression@@SAXAEBUExpressionWalkContext@@PEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18004D690 (-InsertExpressionsInOrderForTarget@CBaseExpression@@SAXAEBUExpressionWalkContext@@PEAVCResource@.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18013B010 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InteractionSourceManager::InsertDependenciesForAxis(
        __int64 *a1,
        const struct ExpressionWalkContext *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 SourceModifierConditionalAnimation; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int v14; // r8d

  v3 = a1[12];
  v6 = *a1;
  v7 = v3 + a1[13];
  while ( v3 != v7 )
  {
    v9 = v3 & 1;
    v10 = *(_QWORD *)(a1[10] + 8 * ((a1[11] - 1) & (v3 >> 1)));
    SourceModifierConditionalAnimation = CManipulation::GetSourceModifierConditionalAnimation(
                                           *(_QWORD **)(v10 + 8 * v9),
                                           a3);
    (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *, __int64))(*(_QWORD *)v6 + 280LL))(
      v6,
      a2,
      SourceModifierConditionalAnimation);
    v12 = *(_QWORD *)(v10 + 8 * v9);
    if ( a3 )
    {
      if ( a3 == 1 )
        v13 = *(_QWORD *)(v12 + 504);
      else
        v13 = 0LL;
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 496);
    }
    (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *, __int64))(*(_QWORD *)v6 + 280LL))(
      v6,
      a2,
      v13);
    if ( a3 < 2 )
    {
      v14 = 1;
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_13;
      v14 = 3;
    }
    CBaseExpression::InsertExpressionsInOrderForTarget(a2, *(_QWORD *)(v10 + 8 * v9), v14);
LABEL_13:
    CBaseExpression::InsertExpressionsInOrderForTarget(a2, *(_QWORD *)(v10 + 8 * v9), 9u);
    ++v3;
  }
}
