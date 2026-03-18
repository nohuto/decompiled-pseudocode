/*
 * XREFs of ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4OutputCoordinate@@PEA_NPEAM@Z @ 0x18013B1A4
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18013A2CC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18027054C (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180271EA8 (-CalculateCenterPointForAxis@CInteractionTracker2@@AEAAJPEAVCExpressionValueStack@@W4ScrollState.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@W4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x18028C0B0 (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@W4ModifierT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEA_N@Z @ 0x18021387C (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEA_N@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEAM@Z @ 0x18026BF9C (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEAM@Z.c)
 */

__int64 __fastcall CConditionalExpression::ProcessConditionalExpression(
        CConditionalExpression *a1,
        struct CExpressionValueStack *a2,
        int a3,
        bool *a4,
        float *a5)
{
  int IsAnyConditionSatisfied; // eax
  unsigned int v10; // ebx
  int Value; // eax
  unsigned int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)a1 + 87) = *((_DWORD *)a1 + 71);
  IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(a1, a2, a4);
  v10 = IsAnyConditionSatisfied;
  if ( IsAnyConditionSatisfied < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x276,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\conditionalexpression.cpp",
      (const char *)(unsigned int)IsAnyConditionSatisfied);
    return v10;
  }
  if ( !*a4 )
    return 0LL;
  Value = CConditionalExpression::GetValue(a1, a2, a5);
  v13 = Value;
  if ( Value >= 0 )
  {
    if ( a3 == 1 )
      *a5 = *a5 * -1.0;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\conditionalexpression.cpp",
    (const char *)(unsigned int)Value);
  return v13;
}
