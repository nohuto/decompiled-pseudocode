/*
 * XREFs of ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180219270
 * Callers:
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180045A40 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 */

void __fastcall CKeyframeAnimation::ProcessExpressionKeyFrames(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  CBaseExpression **v3; // rdi
  CBaseExpression **v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (CBaseExpression **)*((_QWORD *)this + 40);
  v4 = (CBaseExpression **)*((_QWORD *)this + 39);
  v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 880LL);
  v6 = 0LL;
  while ( v4 != v3 )
    CBaseExpression::CalculateValue(*v4++, a2, v5, (struct CalculateValueResult *)&v6);
}
