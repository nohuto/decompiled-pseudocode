/*
 * XREFs of AuthzBasepEvaluateExpression @ 0x1402FB3B8
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepEvaluateSetRelationship @ 0x1402FA0CC (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402FA444 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepOperandValueTypesCompatible @ 0x1402FB550 (AuthzBasepOperandValueTypesCompatible.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14045FD34 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1404ECA3C (AuthzBasepCompareOctetStringOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x140719E8C (AuthzBasepCompareIntegerOperands.c)
 */

__int64 __fastcall AuthzBasepEvaluateExpression(unsigned __int8 a1, __int64 a2, _DWORD *a3)
{
  int v3; // ebp
  unsigned int v4; // r14d
  bool v5; // zf
  unsigned __int16 *v6; // r9
  unsigned int v9; // ebx
  int v10; // r15d
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax

  v3 = 0;
  v4 = a1;
  v5 = *(_DWORD *)(a2 + 12) == 1;
  v6 = (unsigned __int16 *)(a2 + 40);
  *a3 = 0;
  if ( !v5 )
    v6 = (unsigned __int16 *)a2;
  v9 = 0;
  v10 = *v6;
  if ( !(unsigned __int8)AuthzBasepOperandValueTypesCompatible(a2) )
    goto LABEL_4;
  if ( v4 > 0x85 )
  {
    if ( v4 != 134 )
    {
      if ( v4 != 136 )
      {
        if ( v4 == 142 )
          goto LABEL_11;
        if ( v4 != 143 )
          return v9;
      }
      v9 = AuthzBasepEvaluateSetRelationship(2, a2, a3);
      if ( (v9 & 0x80000000) == 0 )
        return v9;
      goto LABEL_5;
    }
LABEL_11:
    v12 = AuthzBasepEvaluateSetRelationship(1, a2, a3);
    goto LABEL_12;
  }
  if ( v4 == 133 )
  {
LABEL_19:
    v13 = (unsigned int)(v10 - 1);
    if ( v10 == 1 || (v13 = (unsigned int)(v10 - 2), v10 == 2) )
    {
      LOBYTE(v13) = v4;
      v16 = AuthzBasepCompareIntegerOperands(v13, a2);
    }
    else
    {
      if ( v10 == 3 )
      {
        v12 = AuthzBasepCompareUnicodeStringOperands(v4, a2, a3);
LABEL_12:
        v9 = v12;
        if ( v12 >= 0 )
          return v9;
        goto LABEL_5;
      }
      v14 = (unsigned int)(v10 - 4);
      if ( v10 == 4 )
      {
        LODWORD(v14) = (unsigned __int8)v4;
        v12 = AuthzBasepCompareFQBNOperands(v14, a2, a3);
        goto LABEL_12;
      }
      v15 = (unsigned int)(v10 - 5);
      if ( v10 != 5 && v10 != 16 )
      {
LABEL_4:
        v9 = -1073741406;
LABEL_5:
        *a3 = -1;
        return v9;
      }
      LOBYTE(v15) = v4;
      v16 = AuthzBasepCompareOctetStringOperands(v15, a2);
    }
    *a3 = v16;
    return v9;
  }
  if ( v4 == 128 || v4 == 129 )
  {
    v9 = AuthzBasepEvaluateSetRelationship(0, a2, a3);
    if ( (v9 & 0x80000000) != 0 )
      goto LABEL_5;
    if ( (_BYTE)v4 == 0x81 && *a3 != -1 )
    {
      LOBYTE(v3) = *a3 == 0;
      *a3 = v3;
    }
  }
  else if ( v4 == 130 || v4 - 131 <= 1 )
  {
    goto LABEL_19;
  }
  return v9;
}
