/*
 * XREFs of RtlpAddKnownObjectAce @ 0x18013E990
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x18013DF60 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18013DFC0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18013E260 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800C6480 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800C7650 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlpAddKnownObjectAce(
        PACL Acl,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        char a8)
{
  __int64 result; // rax
  int v13; // r9d
  ULONG v14; // r11d
  unsigned __int16 v15; // r8
  char *v16; // rdx
  _OWORD *v17; // rdx
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  FirstFree = 0LL;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v13 = a5 != 0LL;
  v14 = 4 * Sid[1] + 8;
  v15 = 4 * Sid[1] + 8 + (a5 != 0LL ? 28 : 12);
  if ( a6 )
  {
    v13 |= 2u;
    v15 += 16;
  }
  v16 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v15 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *v16 = a8;
  *((_WORD *)v16 + 1) = v15;
  *((_DWORD *)v16 + 1) = a4;
  *((_DWORD *)v16 + 2) = v13;
  v17 = v16 + 12;
  if ( a5 )
    *v17++ = *a5;
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(v14, v17, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
