/*
 * XREFs of RtlpAddKnownAce @ 0x18003CC00
 * Callers:
 *     RtlDefaultNpAcl @ 0x18005B710 (RtlDefaultNpAcl.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C7DAC (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAccessDeniedAceEx @ 0x180106040 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAuditAccessAceEx @ 0x180109270 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x180111310 (RtlAddAccessDeniedAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18013E0B0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18013E110 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x18013E370 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18013E3B0 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x18003D140 (RtlValidSid.c)
 *     RtlValidAcl @ 0x18003D180 (RtlValidAcl.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  unsigned __int8 v10; // al
  unsigned __int8 v11; // di
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // r9
  unsigned __int16 v15; // r8
  __int64 result; // rax
  unsigned int v17; // eax

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = a2;
  v11 = *a1;
  if ( (unsigned __int8)*a1 <= v10 )
    v11 = v10;
  if ( (a3 & 0xFFFFFFE0) == 0 )
    goto LABEL_7;
  if ( a6 == 2 )
  {
    v17 = a3 & 0xFFFFFF20;
  }
  else
  {
    if ( a6 )
      return 3221225485LL;
    v17 = a3 & 0xFFFFFFC0;
  }
  if ( v17 )
    return 3221225485LL;
LABEL_7:
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v12 = (unsigned __int64)(a1 + 8);
  v13 = 0;
  v14 = (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)];
  while ( v13 < *((unsigned __int16 *)a1 + 2) )
  {
    if ( v12 >= v14 )
      return 3221225591LL;
    ++v13;
    v12 += *(unsigned __int16 *)(v12 + 2);
  }
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (Src[1] + 4);
  if ( !v12 || v12 + v15 > v14 )
    return 3221225625LL;
  *(_WORD *)(v12 + 2) = v15;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = a6;
  *(_DWORD *)(v12 + 4) = a4;
  memmove((void *)(v12 + 8), Src, 4LL * Src[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v11;
  return result;
}
