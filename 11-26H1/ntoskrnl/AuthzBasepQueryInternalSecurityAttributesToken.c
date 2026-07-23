/*
 * XREFs of AuthzBasepQueryInternalSecurityAttributesToken @ 0x140A4F210
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x140A4E3E8 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x14048B68C (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140A4F30C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepQueryInternalSecurityAttributesToken(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned int *v11; // r15
  __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || !a4 || a3 && !a2 )
    return 3221225485LL;
  *a4 = 0;
  v8 = 112LL * *a1;
  if ( v8 > 0xFFFFFFFF )
    return 3221225621LL;
  v10 = v8 + 48;
  if ( v10 < 0x30 )
    return 3221225621LL;
  v11 = a1 + 2;
  v12 = *((_QWORD *)a1 + 1);
  while ( (unsigned int *)v12 != v11 )
  {
    v13 = (v10 + 1) & 0xFFFFFFFE;
    if ( v13 < v10 || v13 + *(unsigned __int16 *)(v12 + 32) < v13 )
      return 3221225621LL;
    v14 = v13 + *(unsigned __int16 *)(v12 + 32);
    result = AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(v12, &v14);
    if ( (int)result < 0 )
      return result;
    v12 = *(_QWORD *)v12;
    v10 = v14;
  }
  if ( a3 >= v10 )
  {
    result = AuthzBasepCopyoutInternalSecurityAttributes(a1, a2, a3);
    *a4 = v10;
  }
  else
  {
    *a4 = v10;
    return 3221225507LL;
  }
  return result;
}
