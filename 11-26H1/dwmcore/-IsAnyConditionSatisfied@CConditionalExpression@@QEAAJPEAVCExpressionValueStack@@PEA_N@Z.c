/*
 * XREFs of ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEA_N@Z @ 0x18021387C
 * Callers:
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4OutputCoordinate@@PEA_NPEAM@Z @ 0x18013B1A4 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@W4Outp.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1801FE5E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18026BC80 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValue.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@PEAPEAUIScalarForce@@@Z @ 0x1802756A0 (-SelectInertiaModifierForAxis@CInteractionTracker2@@UEAAJW4ScrollAxis@@PEAVCExpressionValueStack.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@PEA_N@Z @ 0x18026BBB0 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@PEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::IsAnyConditionSatisfied(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        bool *a3)
{
  int v6; // ecx
  unsigned int v7; // ebp
  int v8; // eax
  bool v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 i; // rsi
  int v12; // eax
  bool v14; // [rsp+60h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0;
  v6 = *((_DWORD *)this + 71);
  v7 = 0;
  v8 = *((_DWORD *)this + 87);
  v9 = 1;
  if ( v8 == v6 )
  {
    v10 = (__int64)(*((_QWORD *)this + 40) - *((_QWORD *)this + 39)) >> 3;
    if ( (__int64)(*((_QWORD *)this + 37) - *((_QWORD *)this + 36)) >> 3 < v10 )
      v10 = (__int64)(*((_QWORD *)this + 37) - *((_QWORD *)this + 36)) >> 3;
    for ( i = 0LL; i < v10; ++i )
    {
      v14 = 0;
      v12 = CConditionalExpression::CalculateConditionValue(this, i, a2, &v14);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x226u, 0LL);
        return v7;
      }
      if ( v14 )
      {
        *((_DWORD *)this + 87) = i;
        break;
      }
    }
    v6 = *((_DWORD *)this + 71);
    v8 = *((_DWORD *)this + 87);
    if ( v8 == v6 )
    {
      v8 = *((_DWORD *)this + 70);
      *((_DWORD *)this + 87) = v8;
    }
  }
  if ( a3 )
  {
    if ( (v8 == *((_DWORD *)this + 70) || v8 == v6) && !*((_QWORD *)this + 42) )
      v9 = 0;
    *a3 = v9;
  }
  return v7;
}
