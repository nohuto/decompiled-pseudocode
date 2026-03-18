/*
 * XREFs of ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180045F80
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleExpressionsAndStartingValue(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  CBaseExpression **v5; // rbp
  CBaseExpression **v6; // rsi
  unsigned __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // edi
  __int64 i; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 464) & 8) != 0 )
    return 0LL;
  v5 = (CBaseExpression **)*((_QWORD *)this + 40);
  v6 = (CBaseExpression **)*((_QWORD *)this + 39);
  v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 880LL);
  for ( i = 0LL; v6 != v5; ++v6 )
    CBaseExpression::CalculateValue(*v6, a2, v7, (struct CalculateValueResult *)&i);
  if ( (*((_BYTE *)this + 465) & 0x10) == 0 || (v8 = CKeyframeAnimation::SampleStartingValue(this), v9 = v8, v8 >= 0) )
  {
    *((_BYTE *)this + 464) |= 8u;
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x8D6u, 0LL);
  return v9;
}
