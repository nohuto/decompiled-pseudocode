/*
 * XREFs of AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A3C358
 * Callers:
 *     SeCompareTokens @ 0x140A3BAE0 (SeCompareTokens.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1403B1DF0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140A3C424 (AuthzBasepIsCompareRelevantAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140A3CEE0 (AuthzBasepCompareSecurityAttribute.c)
 */

bool __fastcall AuthzBasepCompareLegacySecurityAttributesInformation(int *a1, _DWORD *a2)
{
  int v2; // ebp
  char v3; // bl
  int v4; // edi
  __int64 *v6; // r15
  const UNICODE_STRING *i; // rsi
  _QWORD **v8; // r14
  _QWORD *v9; // rsi
  char IsCompareRelevantAttribute; // al
  int v11; // ecx
  const UNICODE_STRING *SecurityAttribute; // rax

  v2 = *a1;
  v3 = 0;
  v4 = *a2;
  if ( !*a1 && !v4 )
    return 1;
  v6 = (__int64 *)(a1 + 2);
  for ( i = (const UNICODE_STRING *)*((_QWORD *)a1 + 1);
        i != (const UNICODE_STRING *)v6;
        i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( (unsigned __int8)AuthzBasepIsCompareRelevantAttribute(i) )
    {
      SecurityAttribute = AuthzBasepFindSecurityAttribute((__int64)a2, i + 2);
      if ( !SecurityAttribute || !(unsigned __int8)AuthzBasepCompareSecurityAttribute(i, SecurityAttribute) )
        return v3;
    }
    else
    {
      --v2;
    }
  }
  v8 = (_QWORD **)(a2 + 2);
  v9 = *v8;
  while ( v9 != v8 )
  {
    IsCompareRelevantAttribute = AuthzBasepIsCompareRelevantAttribute(v9);
    v9 = (_QWORD *)*v9;
    v11 = v4 - 1;
    if ( IsCompareRelevantAttribute )
      v11 = v4;
    v4 = v11;
  }
  return v2 == v4;
}
