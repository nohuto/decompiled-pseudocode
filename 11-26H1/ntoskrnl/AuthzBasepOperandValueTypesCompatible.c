/*
 * XREFs of AuthzBasepOperandValueTypesCompatible @ 0x1402FB550
 * Callers:
 *     AuthzBasepValueInSet @ 0x1402FB070 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateExpression @ 0x1402FB3B8 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     <none>
 */

char __fastcall AuthzBasepOperandValueTypesCompatible(__int16 *a1)
{
  int v1; // eax
  __int16 *v2; // r9
  __int16 *v3; // r8
  __int16 v4; // dx
  __int16 v5; // r8
  __int64 v7; // rcx
  char v8; // al

  v1 = *((_DWORD *)a1 + 3);
  if ( v1 != 1 && *((_DWORD *)a1 + 13) != 1 )
    return *a1 == a1[20];
  v2 = a1;
  v3 = a1 + 20;
  if ( v1 != 1 )
  {
    v2 = a1 + 20;
    v3 = a1;
  }
  v4 = *v2;
  if ( *v2 == 16 && *((_BYTE *)v2 + 4) )
    return 1;
  v5 = *v3;
  if ( v5 == 16 )
  {
    if ( (unsigned __int16)(v4 - 2) <= 1u )
      return 1;
    return *a1 == a1[20];
  }
  if ( (unsigned __int16)(v5 - 1) > 1u || v4 != 2 )
  {
    if ( v5 == 6 )
    {
      if ( v4 == 2 )
        return 1;
    }
    else if ( v5 == 5 && v4 == 16 )
    {
      return 1;
    }
    return *a1 == a1[20];
  }
  v7 = *((_QWORD *)v2 + 4);
  v8 = *(_BYTE *)(v7 + 8);
  if ( v5 != 2 )
    return v5 == 1 && (v8 == 2 || *(_QWORD *)v7 <= 0x7FFFFFFFFFFFFFFFuLL);
  return v8 != 2;
}
