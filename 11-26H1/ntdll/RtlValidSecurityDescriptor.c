/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1800D5FF0
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x18013CFD0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013D6AC (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 */

BOOLEAN __cdecl RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int64 v2; // rax
  char *v3; // rcx
  __int64 v4; // rax
  char *v5; // rcx
  __int16 v6; // ax
  __int64 v7; // rax
  ACL *v8; // rcx
  __int16 v9; // ax
  __int64 v10; // rax
  ACL *v11; // rcx
  BOOLEAN result; // al

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v2 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v2 )
      goto LABEL_7;
    v3 = (char *)SecurityDescriptor + v2;
  }
  if ( v3 && !RtlValidSid(v3) )
    return 0;
LABEL_7:
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v4 )
      goto LABEL_12;
    v5 = (char *)SecurityDescriptor + v4;
  }
  if ( v5 && !RtlValidSid(v5) )
    return 0;
LABEL_12:
  v6 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v6 & 4) == 0 )
    goto LABEL_17;
  if ( v6 >= 0 )
  {
    v8 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v7 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v7 )
      goto LABEL_17;
    v8 = (ACL *)((char *)SecurityDescriptor + v7);
  }
  if ( !v8 || (result = RtlValidAcl(v8)) != 0 )
  {
LABEL_17:
    v9 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v9 & 0x10) != 0 )
    {
      if ( v9 >= 0 )
      {
        v11 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v10 = *((unsigned int *)SecurityDescriptor + 3);
        if ( !(_DWORD)v10 )
          return 1;
        v11 = (ACL *)((char *)SecurityDescriptor + v10);
      }
      if ( v11 )
      {
        result = RtlValidAcl(v11);
        if ( !result )
          return result;
      }
    }
    return 1;
  }
  return result;
}
