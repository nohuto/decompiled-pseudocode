/*
 * XREFs of SddlAddScopedPolicyIDAce @ 0x14081E764
 * Callers:
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140A50810 (RtlFirstFreeAce.c)
 */

__int64 __fastcall SddlAddScopedPolicyIDAce(PACL Acl, __int64 a2, int a3, int a4, char *Sid)
{
  __int64 result; // rax
  int v9; // ecx
  UCHAR AclRevision; // bp
  __int16 v11; // ax
  _WORD *v12; // rbx
  unsigned __int16 v13; // ax
  ULONG v14; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  FirstFree = 0LL;
  if ( !Acl )
    return 3221225591LL;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  v9 = *(_DWORD *)(Sid + 2);
  if ( !v9 )
    v9 = *((unsigned __int16 *)Sid + 3) - 4352;
  if ( v9 )
    return 3221225485LL;
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  AclRevision = 2;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v11 = RtlLengthSid(Sid);
  v12 = FirstFree;
  v13 = v11 + 8;
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *(_BYTE *)v12 = 19;
  v12[1] = v13;
  *((_DWORD *)v12 + 1) = 0;
  v14 = RtlLengthSid(Sid);
  RtlCopySid(v14, v12 + 4, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
