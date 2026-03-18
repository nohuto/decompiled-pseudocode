/*
 * XREFs of ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@PEA_N@Z @ 0x18026BBB0
 * Callers:
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEA_N@Z @ 0x18021387C (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEA_N@Z.c)
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18026BC80 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValue.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConditionalExpression::CalculateConditionValue(
        CConditionalExpression *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        bool *a4)
{
  __int64 v4; // rax
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 36);
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct CExpressionValueStack *, __int64 *))(**(_QWORD **)(v4 + 8LL * a2)
                                                                                    + 224LL))(
         *(_QWORD *)(v4 + 8LL * a2),
         a3,
         &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x181u, 0LL);
  }
  else
  {
    v9 = *((_DWORD *)a3 + 24);
    v10 = v9;
    v11 = *(_QWORD *)a3;
    v12 = v9 - 1;
    if ( v9 )
      v10 = v12;
    v13 = 9 * v10;
    if ( *(_DWORD *)(v11 + 8 * v13 + 64) == 17 )
    {
      *a4 = *(_BYTE *)(v11 + 8 * v13);
      if ( v9 )
        *((_DWORD *)a3 + 24) = v12;
      return 0;
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x187u, 0LL);
    }
  }
  return v8;
}
