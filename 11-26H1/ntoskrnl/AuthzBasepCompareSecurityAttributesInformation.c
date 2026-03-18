/*
 * XREFs of AuthzBasepCompareSecurityAttributesInformation @ 0x140B4F6F4
 * Callers:
 *     SepCompareClaimAttributes @ 0x140A28D7C (SepCompareClaimAttributes.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1403CD4D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x140A29E40 (AuthzBasepCompareSecurityAttribute.c)
 */

char __fastcall AuthzBasepCompareSecurityAttributesInformation(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  __int64 v4; // rsi
  __int64 i; // rdi
  const UNICODE_STRING *SecurityAttribute; // rax

  v2 = 0;
  if ( *(_DWORD *)a1 == *a2 )
  {
    if ( *(_DWORD *)a1 )
    {
      v4 = a1 + 8;
      for ( i = *(_QWORD *)(a1 + 8); i != v4; i = *(_QWORD *)i )
      {
        SecurityAttribute = AuthzBasepFindSecurityAttribute((__int64)a2, (const UNICODE_STRING *)(i + 32));
        if ( !SecurityAttribute || !AuthzBasepCompareSecurityAttribute(i, (__int64)SecurityAttribute) )
          return v2;
      }
    }
    return 1;
  }
  return v2;
}
