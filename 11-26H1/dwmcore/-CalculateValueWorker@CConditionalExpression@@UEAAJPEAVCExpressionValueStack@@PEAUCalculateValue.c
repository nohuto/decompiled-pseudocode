/*
 * XREFs of ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18026BC80
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBVCExpressionValue@@@Z @ 0x18010BF90 (-PushConstant@CExpressionValueStack@@QEAAXAEBVCExpressionValue@@@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEA_N@Z @ 0x18021387C (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18026B8E0 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@PEA_N@Z @ 0x18026BBB0 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConditionalExpression::CalculateValueWorker(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        struct CalculateValueResult *a3,
        const char *a4)
{
  unsigned __int64 v5; // r15
  unsigned int v8; // ebx
  int v9; // ecx
  char v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  CConditionalExpression *v16; // rcx
  const char *v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int IsAnyConditionSatisfied; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  bool v28; // [rsp+30h] [rbp-49h] BYREF
  __int64 v29; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v30[64]; // [rsp+40h] [rbp-39h] BYREF
  int v31; // [rsp+80h] [rbp+7h]

  v5 = 0LL;
  v8 = 0;
  v9 = *((_DWORD *)this + 86) - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v10 = 1;
      v11 = (__int64)(*((_QWORD *)this + 40) - *((_QWORD *)this + 39)) >> 3;
      v12 = (__int64)(*((_QWORD *)this + 37) - *((_QWORD *)this + 36)) >> 3;
      v31 = 0;
      v29 = 0LL;
      if ( v12 < v11 )
        v11 = v12;
      while ( v5 < v11 )
      {
        v28 = 0;
        v13 = CConditionalExpression::CalculateConditionValue(this, v5, a2, &v28);
        v8 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x144u, 0LL);
          goto LABEL_14;
        }
        if ( v28 )
        {
          v10 = 0;
          v14 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v5);
          v15 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, __int64 *))(*(_QWORD *)v14 + 224LL))(
                  v14,
                  a2,
                  &v29);
          v8 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x14Bu, 0LL);
            goto LABEL_14;
          }
          v18 = CConditionalExpression::AddStackValueToSum(v16, (struct CExpressionValue *)v30, a2, v17);
          v8 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x14Cu, 0LL);
            goto LABEL_14;
          }
        }
        ++v5;
      }
      if ( v10 )
      {
        v19 = *((_QWORD *)this + 42);
        if ( v19 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, struct CalculateValueResult *))(*(_QWORD *)v19 + 224LL))(
                  v19,
                  a2,
                  a3);
          v8 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x155u, 0LL);
        }
        else
        {
          *((_BYTE *)a3 + 1) = 1;
        }
      }
      else
      {
        CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)v30, (__int64)a3, a4);
      }
LABEL_14:
      CExpressionValue::DestroyCurrent((CExpressionValue *)v30);
    }
  }
  else
  {
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(this, a2, 0LL);
    v8 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IsAnyConditionSatisfied, 0x119u, 0LL);
    }
    else
    {
      v22 = *((int *)this + 87);
      if ( (int)v22 < 0 )
      {
        v25 = *((_QWORD *)this + 42);
        if ( v25 )
        {
          v26 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, struct CalculateValueResult *))(*(_QWORD *)v25 + 224LL))(
                  v25,
                  a2,
                  a3);
          v8 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x121u, 0LL);
        }
        else
        {
          *((_BYTE *)a3 + 1) = 1;
        }
      }
      else
      {
        v23 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v22);
        v24 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, struct CalculateValueResult *))(*(_QWORD *)v23 + 224LL))(
                v23,
                a2,
                a3);
        v8 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x11Du, 0LL);
      }
    }
  }
  return v8;
}
