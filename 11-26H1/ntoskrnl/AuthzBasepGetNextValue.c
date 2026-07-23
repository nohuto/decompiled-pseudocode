/*
 * XREFs of AuthzBasepGetNextValue @ 0x1402FB294
 * Callers:
 *     AuthzBasepEvaluateSetRelationship @ 0x1402FA0CC (AuthzBasepEvaluateSetRelationship.c)
 *     AuthzBasepValueInSet @ 0x1402FB070 (AuthzBasepValueInSet.c)
 *     AuthzBasepMemberOf @ 0x140511550 (AuthzBasepMemberOf.c)
 *     AuthzBasepDeviceMemberOf @ 0x14051165C (AuthzBasepDeviceMemberOf.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1402FD210 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepGetConstantOperand @ 0x14045FFDC (AuthzBasepGetConstantOperand.c)
 */

__int64 __fastcall AuthzBasepGetNextValue(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rsi
  unsigned int ConstantOperand; // r8d
  bool v6; // zf
  unsigned int v9; // edx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 8);
  v3 = (_BYTE *)(a1 + 4);
  ConstantOperand = 0;
  v6 = *(_DWORD *)(a1 + 12) == 1;
  v10 = 0;
  if ( v6 )
  {
    if ( *v3 )
    {
      v9 = *(_DWORD *)(a1 + 24);
      if ( (unsigned int)v2 < v9 )
      {
        ConstantOperand = AuthzBasepGetConstantOperand(*(_QWORD *)(a1 + 32) + v2, v9 - (unsigned int)v2, a2, &v10);
        if ( *(_BYTE *)(a2 + 4) )
          return (unsigned int)-1073741406;
        else
          *(_DWORD *)(a1 + 8) += v10;
        return ConstantOperand;
      }
    }
    else if ( !(_DWORD)v2 )
    {
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 24);
      *(_OWORD *)a2 = *(_OWORD *)a1;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
      return ConstantOperand;
    }
    return (unsigned int)-2147483622;
  }
  if ( (_DWORD)v2 || !*(_DWORD *)v3 )
  {
    if ( (unsigned int)v2 >= *(_DWORD *)v3 )
    {
      return (_DWORD)v2 != 0 ? -2147483622 : -1073741275;
    }
    else
    {
      ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(*(_QWORD *)(a1 + 16));
      *(_WORD *)a2 = *(_WORD *)a1;
      *(_BYTE *)(a2 + 4) = *v3;
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
      ++*(_DWORD *)(a1 + 8);
    }
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)a1;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
    ++*(_DWORD *)(a1 + 8);
  }
  return ConstantOperand;
}
