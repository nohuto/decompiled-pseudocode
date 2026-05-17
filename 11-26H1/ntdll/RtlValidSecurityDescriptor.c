/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1800D9030
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x18013D120 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x18013D7FC (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 */

char __fastcall RtlValidSecurityDescriptor(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *v3; // rcx
  __int64 v4; // rax
  _BYTE *v5; // rcx
  __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rcx
  char result; // al

  if ( *(_BYTE *)a1 != 1 )
    return 0;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v3 = *(_BYTE **)(a1 + 8);
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v2 )
      goto LABEL_7;
    v3 = (_BYTE *)(v2 + a1);
  }
  if ( v3 && !RtlValidSid(v3) )
    return 0;
LABEL_7:
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v5 = *(_BYTE **)(a1 + 16);
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 8);
    if ( !(_DWORD)v4 )
      goto LABEL_12;
    v5 = (_BYTE *)(a1 + v4);
  }
  if ( v5 && !RtlValidSid(v5) )
    return 0;
LABEL_12:
  v6 = *(_WORD *)(a1 + 2);
  if ( (v6 & 4) == 0 )
    goto LABEL_17;
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v7 )
      goto LABEL_17;
    v8 = a1 + v7;
  }
  if ( !v8 || (result = RtlValidAcl(v8)) != 0 )
  {
LABEL_17:
    v9 = *(_WORD *)(a1 + 2);
    if ( (v9 & 0x10) != 0 )
    {
      if ( v9 >= 0 )
      {
        v11 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v10 = *(unsigned int *)(a1 + 12);
        if ( !(_DWORD)v10 )
          return 1;
        v11 = a1 + v10;
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
