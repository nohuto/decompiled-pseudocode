/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x1402FD210
 * Callers:
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402FB250 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepGetNextValue @ 0x1402FB294 (AuthzBasepGetNextValue.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402FBC90 (AuthzBasepEvaluateAceCondition.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1402FD040 (SepCanTokenMatchAllPackageSid.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1403B1D1C (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 * Callees:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1402FB610 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B1F88 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x140A83974 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 *v5; // r14
  char v6; // r15
  const UNICODE_STRING *v7; // rcx
  const UNICODE_STRING *v8; // rdx
  BOOLEAN v9; // al
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return AuthzBasepQueryTokenAttributeAndValues(a1);
  if ( *(_DWORD *)a1 == 7 )
    return AuthzBasepQuerySystemSecurityAttributeAndValues();
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    v14 = **(_QWORD **)(a1 + 64);
    if ( v14 == v2 + 72 )
      return 2147483674LL;
LABEL_19:
    *(_QWORD *)(a1 + 48) = v14 + 40;
    result = 0LL;
    *(_QWORD *)(a1 + 64) = v14;
    return result;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(_QWORD **)(v3 + 8);
    v5 = 0LL;
    v6 = 0;
    while ( v4 != (_QWORD *)(v3 + 8) )
    {
      v5 = v4;
      v7 = (const UNICODE_STRING *)(v4 + 4);
      v8 = (const UNICODE_STRING *)(a1 + 16);
      if ( KeGetCurrentIrql() >= 2u )
        v9 = AuthzBasepEqualUnicodeStringCaseSensitive(v7, v8);
      else
        v9 = RtlEqualUnicodeString(v7, v8, 1u);
      if ( v9 )
      {
LABEL_21:
        v6 = 1;
        goto LABEL_13;
      }
      v4 = (_QWORD *)*v4;
    }
    v10 = *(__int64 **)(v3 + 32);
    v11 = (__int64 *)(v3 + 32);
    while ( v10 != v11 )
    {
      v5 = v10 - 2;
      if ( (v10[5] & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(v5 + 4, a1 + 16) )
        goto LABEL_21;
      v10 = (__int64 *)*v10;
    }
LABEL_13:
    v12 = 0LL;
    if ( v6 )
      v12 = v5;
    if ( v12 )
    {
      v14 = v12[9];
      *(_DWORD *)(a1 + 40) = *((_DWORD *)v12 + 15);
      *(_WORD *)(a1 + 32) = *((_WORD *)v12 + 24);
      *(_DWORD *)(a1 + 36) = *((_DWORD *)v12 + 13);
      *(_QWORD *)(a1 + 56) = v12;
      goto LABEL_19;
    }
  }
  return 3221226021LL;
}
