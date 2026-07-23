/*
 * XREFs of SddlAddProcessTrustLabelAce @ 0x14081E61C
 * Callers:
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140A50810 (RtlFirstFreeAce.c)
 */

__int64 __fastcall SddlAddProcessTrustLabelAce(PACL Acl, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  int v10; // ecx
  UCHAR AclRevision; // bp
  int v12; // r14d
  __int16 v13; // ax
  _WORD *v14; // rbx
  unsigned __int16 v15; // ax
  ULONG v16; // eax
  PVOID FirstFree; // [rsp+68h] [rbp+20h] BYREF

  FirstFree = 0LL;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2);
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - 4864;
  if ( v10 )
    return 3221225485LL;
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  AclRevision = 2;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  v12 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v13 = RtlLengthSid((PSID)a4);
  v14 = FirstFree;
  v15 = v13 + 8;
  if ( !FirstFree || (char *)FirstFree + v15 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *(_BYTE *)v14 = 20;
  v14[1] = v15;
  *((_DWORD *)v14 + 1) = v12;
  v16 = RtlLengthSid((PSID)a4);
  RtlCopySid(v16, v14 + 4, (PSID)a4);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
