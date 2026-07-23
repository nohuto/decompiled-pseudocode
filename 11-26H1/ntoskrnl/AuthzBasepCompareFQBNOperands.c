/*
 * XREFs of AuthzBasepCompareFQBNOperands @ 0x14045FD34
 * Callers:
 *     AuthzBasepValueInSet @ 0x1402FB070 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x1402FB3B8 (AuthzBasepEvaluateExpression.c)
 * Callees:
 *     RtlIsNameInExpression @ 0x1402FA830 (RtlIsNameInExpression.c)
 *     AuthzBasepGetConstantOperand @ 0x14045FFDC (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1404600D0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepGetOperandStringCaseForEvaluation @ 0x140460258 (AuthzBasepGetOperandStringCaseForEvaluation.c)
 *     AuthzBasepCompareUnsigned @ 0x1404602B8 (AuthzBasepCompareUnsigned.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCompareFQBNOperands(char a1, __int64 a2, BOOL *a3)
{
  wchar_t **p_Buffer; // rax
  __int64 v6; // r12
  __int64 v7; // rcx
  int OperandStringCaseForEvaluation; // r15d
  __int64 i; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  UNICODE_STRING *p_Expression; // rdx
  UNICODE_STRING *p_Name; // rcx
  BOOLEAN IsNameInExpression; // al
  __int64 v17; // rcx
  BOOL v18; // eax
  _BYTE *v19; // rdi
  wchar_t **v20; // rsi
  __int64 v22; // rcx
  int v23; // eax
  _WORD v24[2]; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-90h] BYREF
  int v26; // [rsp+2Ch] [rbp-8Ch]
  __int64 v27; // [rsp+30h] [rbp-88h]
  __int64 v28; // [rsp+38h] [rbp-80h]
  _OWORD v29[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v30; // [rsp+60h] [rbp-58h]
  UNICODE_STRING Expression; // [rsp+68h] [rbp-50h] BYREF
  UNICODE_STRING Name; // [rsp+78h] [rbp-40h] BYREF
  char v34; // [rsp+D8h] [rbp+20h] BYREF

  v25 = 0;
  memset(v29, 0, sizeof(v29));
  LODWORD(v30) = 0;
  WORD2(v30) = 0;
  v27 = 0LL;
  v28 = 0LL;
  v24[0] = 0;
  v34 = 0;
  *a3 = 0;
  p_Buffer = &Expression.Buffer;
  v6 = 2LL;
  v7 = 2LL;
  do
  {
    *p_Buffer = 0LL;
    p_Buffer += 2;
    --v7;
  }
  while ( v7 );
  OperandStringCaseForEvaluation = AuthzBasepGetOperandStringCaseForEvaluation(a2, &v34);
  if ( OperandStringCaseForEvaluation < 0 )
  {
LABEL_33:
    *a3 = -1;
  }
  else
  {
    for ( i = 0LL; ; i = (unsigned int)(v26 + 1) )
    {
      v26 = i;
      if ( (unsigned int)i >= 2 )
        break;
      v10 = (unsigned int)i;
      v11 = 5 * i;
      if ( *(_DWORD *)(a2 + 40 * i + 12) == 1 )
      {
        if ( !*(_BYTE *)(a2 + 40 * i + 4) )
        {
          OperandStringCaseForEvaluation = -1073741406;
          goto LABEL_33;
        }
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(
                                           *(_QWORD *)(a2 + 40 * i + 32),
                                           *(unsigned int *)(a2 + 40 * i + 24),
                                           v29,
                                           &v25);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_33;
        if ( LOWORD(v29[0]) != 3 )
          goto LABEL_33;
        LOBYTE(v12) = v34 == 0;
        OperandStringCaseForEvaluation = AuthzBasepUnicodeStringFromOperandValue(
                                           v29,
                                           v12,
                                           &Expression + (unsigned int)v10,
                                           (char *)v24 + v10);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_33;
        OperandStringCaseForEvaluation = AuthzBasepGetConstantOperand(
                                           *(_QWORD *)(a2 + 8 * v11 + 32) + v25,
                                           *(_DWORD *)(a2 + 8 * v11 + 24) - v25,
                                           v29,
                                           &v25);
        if ( OperandStringCaseForEvaluation < 0 )
          goto LABEL_33;
        if ( LOWORD(v29[0]) != 2 )
          goto LABEL_33;
        v13 = v30;
        *(&v27 + v10) = *v30;
        if ( *((_BYTE *)v13 + 8) == 2 )
          goto LABEL_33;
      }
      else
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a2 + 40 * i + 16) + 48LL);
        *(&v27 + (unsigned int)i) = *(_QWORD *)v22;
        *(&Expression + (unsigned int)i) = *(UNICODE_STRING *)(v22 + 8);
      }
    }
    if ( *(_DWORD *)(a2 + 52) == 1 )
    {
      p_Expression = &Expression;
      p_Name = &Name;
    }
    else
    {
      p_Expression = &Name;
      p_Name = &Expression;
    }
    IsNameInExpression = RtlIsNameInExpression(p_Name, p_Expression, v34 == 0, 0LL);
    LOBYTE(v17) = IsNameInExpression;
    v18 = v27 == v28 && IsNameInExpression;
    *a3 = v18;
    if ( a1 == -127 )
    {
      v23 = !v18;
    }
    else
    {
      if ( a1 == (char)0x80 )
        goto LABEL_24;
      if ( !(_BYTE)v17 )
      {
        *a3 = 0;
        goto LABEL_24;
      }
      LOBYTE(v17) = a1;
      v23 = AuthzBasepCompareUnsigned(v17);
    }
    *a3 = v23;
  }
LABEL_24:
  v19 = v24;
  v20 = &Expression.Buffer;
  do
  {
    if ( *v19 )
      ExFreePoolWithTag(*v20, 0);
    ++v19;
    v20 += 2;
    --v6;
  }
  while ( v6 );
  return (unsigned int)OperandStringCaseForEvaluation;
}
