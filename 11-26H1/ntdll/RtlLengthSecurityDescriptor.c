/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x1800D74D0
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x18013CFD0 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r10
  __int16 v3; // r9
  ULONG result; // eax
  __int16 v5; // bx
  unsigned int *v6; // rcx
  __int64 v7; // r8
  char *v8; // r8
  __int64 v9; // r8
  char *v10; // rcx
  unsigned int *v11; // r8
  __int64 v12; // rcx
  char *v13; // rcx
  __int64 v14; // rcx
  char *v15; // rcx

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v3 = v1 & 0x8000;
  result = 20;
  v5 = v1 & 0x8000;
  if ( v1 >= 0 )
    result = 40;
  v6 = (unsigned int *)((char *)SecurityDescriptor + 8);
  if ( v3 )
  {
    v7 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v7 )
      goto LABEL_9;
    v8 = (char *)SecurityDescriptor + v7;
  }
  else
  {
    v8 = *(char **)v6;
  }
  if ( v8 )
  {
    result += (4 * (unsigned __int8)v8[1] + 11) & 0xFFFFFFFC;
    v6 = (unsigned int *)((char *)SecurityDescriptor + 8);
  }
  if ( !v3 )
  {
    v10 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    v11 = (unsigned int *)((char *)SecurityDescriptor + 16);
    goto LABEL_11;
  }
LABEL_9:
  v9 = *v6;
  if ( !(_DWORD)v9 )
  {
    v11 = (unsigned int *)((char *)SecurityDescriptor + 16);
    goto LABEL_13;
  }
  v10 = (char *)SecurityDescriptor + v9;
  v11 = (unsigned int *)((char *)SecurityDescriptor + 16);
LABEL_11:
  if ( v10 )
    result += (4 * (unsigned __int8)v10[1] + 11) & 0xFFFFFFFC;
LABEL_13:
  if ( (v1 & 4) == 0 )
    goto LABEL_19;
  if ( v5 )
  {
    v12 = *v11;
    if ( !(_DWORD)v12 )
      goto LABEL_19;
    v13 = (char *)SecurityDescriptor + v12;
  }
  else
  {
    v13 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  if ( v13 )
    result += (*((unsigned __int16 *)v13 + 1) + 3) & 0xFFFFFFFC;
LABEL_19:
  if ( (v1 & 0x10) == 0 )
    return result;
  if ( v5 )
  {
    v14 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v14 )
      return result;
    v15 = (char *)SecurityDescriptor + v14;
  }
  else
  {
    v15 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  if ( v15 )
    result += (*((unsigned __int16 *)v15 + 1) + 3) & 0xFFFFFFFC;
  return result;
}
