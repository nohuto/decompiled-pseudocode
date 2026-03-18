/*
 * XREFs of ?InsertExpressionsInOrderForTarget@CBaseExpression@@SAXAEBUExpressionWalkContext@@PEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18004D690
 * Callers:
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1801DAF7C (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 *     _CInteractionTracker2::InsertDependenciesForProperty_::_2_::_lambda_1_::operator() @ 0x1801E0D60 (_CInteractionTracker2--InsertDependenciesForProperty_--_2_--_lambda_1_--operator().c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x180279D50 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x18004D81C (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBaseExpression::InsertExpressionsInOrderForTarget(
        const struct ExpressionWalkContext *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  CBaseExpression **v8; // rbx
  CBaseExpression *v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  CBaseExpression **v12; // rdi
  __int64 v13; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a2 + 48);
  if ( !v3 )
  {
    v7 = 0LL;
    goto LABEL_35;
  }
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v3 + 16);
  if ( *(_DWORD *)v3 )
  {
    while ( v5 != v6 )
    {
      if ( *(_DWORD *)(v5 + 16) == a3 )
      {
        v7 = 0LL;
        goto LABEL_7;
      }
      v5 += 24LL;
    }
    v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
    if ( a3 < (unsigned __int64)((v6 - v5) >> 4) )
    {
      v5 += 16LL * a3;
      goto LABEL_7;
    }
  }
  v5 = 0LL;
LABEL_7:
  if ( v5 )
  {
    v8 = (CBaseExpression **)(v5 + 8);
    goto LABEL_9;
  }
LABEL_35:
  v8 = (CBaseExpression **)&CAnimationDependency::EmptyList;
LABEL_9:
  v9 = *v8;
  v10 = (unsigned __int64)*v8 & 3;
  if ( v10 )
  {
    if ( (*(_DWORD *)v8 & 3) == 1LL )
    {
      v8 = (CBaseExpression **)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_15;
    }
    if ( (*(_DWORD *)v8 & 3) == 2LL )
    {
      v8 = 0LL;
LABEL_13:
      v11 = 0LL;
      goto LABEL_17;
    }
    if ( (*(_DWORD *)v8 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  switch ( v10 )
  {
    case 0LL:
      break;
    case 1LL:
LABEL_15:
      v11 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_16:
      v7 = *(_QWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_17;
    case 2LL:
      goto LABEL_13;
  }
  v11 = (unsigned __int64)v8;
  if ( !v10 )
  {
    v7 = 1LL;
    goto LABEL_17;
  }
  v13 = v10 - 1;
  if ( !v13 )
    goto LABEL_16;
  if ( (unsigned __int64)(v13 - 1) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_17:
  v12 = (CBaseExpression **)(v11 + 8 * v7);
  while ( v8 != v12 )
    CBaseExpression::InsertInOrder(*v8++, a1);
}
