/*
 * XREFs of AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A92DC4
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A92D0C (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A92E6C (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetClaimAttributesCopyoutBufferSize(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // rdx
  unsigned int *v7; // rdi
  __int64 result; // rax
  unsigned int *v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v12 = 0LL;
  v5 = v2;
  v4 = 32 * v2;
  if ( !is_mul_ok(0x20uLL, v5) )
    return 3221225621LL;
  v6 = v4 + 16;
  if ( v4 >= 0xFFFFFFFFFFFFFFF0uLL )
    return 3221225621LL;
  v7 = a1 + 2;
  result = 0LL;
  v9 = (unsigned int *)*((_QWORD *)a1 + 1);
  while ( v9 != v7 )
  {
    v10 = (v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 < v6 )
      return 3221225621LL;
    v11 = v10 + *((unsigned __int16 *)v9 + 16);
    if ( v11 < v10 || v11 + 2 < v11 )
      return 3221225621LL;
    v12 = v11 + 2;
    result = AuthzBasepGetClaimAttributeValueCopyoutBufferSize(v9, &v12);
    if ( (int)result < 0 )
      return result;
    v9 = *(unsigned int **)v9;
    v6 = v12;
  }
  *a2 = v6;
  return result;
}
