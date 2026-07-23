/*
 * XREFs of SddlAddAccessFilterAce @ 0x14081E3F8
 * Callers:
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140A50810 (RtlFirstFreeAce.c)
 */

__int64 __fastcall SddlAddAccessFilterAce(
        PACL Acl,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  __int64 result; // rax
  UCHAR AclRevision; // r15
  int v13; // ecx
  bool v14; // zf
  int v15; // ecx
  unsigned int v16; // ebx
  ULONG v17; // edx
  _WORD *v18; // r14
  ULONG v19; // eax
  ULONG v20; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-10h] BYREF
  char v22; // [rsp+80h] [rbp+50h]

  v22 = a3;
  FirstFree = 0LL;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  AclRevision = 2;
  if ( (a3 & 0x40) != 0 )
  {
    if ( *(_BYTE *)(a4 + 1) != 2 )
      return 3221225485LL;
    v13 = *(_DWORD *)(a4 + 2);
    if ( !v13 )
      v13 = *(unsigned __int16 *)(a4 + 6) - 4864;
    if ( v13 )
      return 3221225485LL;
    if ( *(_DWORD *)(a4 + 8) )
      goto LABEL_21;
    v14 = *(_DWORD *)(a4 + 12) == 0;
  }
  else
  {
    v15 = *(_DWORD *)(a4 + 2);
    if ( !v15 )
      v15 = *(unsigned __int16 *)(a4 + 6) - 256;
    if ( v15 || *(_BYTE *)(a4 + 1) != 1 )
      return 3221225485LL;
    v14 = *(_DWORD *)(a4 + 8) == 0;
  }
  if ( !v14 )
    return 3221225485LL;
LABEL_21:
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFA0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v16 = (a8 + 3) & 0xFFFFFFFC;
  v17 = RtlLengthSid((PSID)a4) + v16 + 8;
  if ( v17 < v16 )
    return 534LL;
  if ( v17 > 0xFFFF )
    return 3221225485LL;
  v18 = FirstFree;
  if ( !FirstFree || (char *)FirstFree + v17 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = v22;
  *(_BYTE *)v18 = 21;
  v18[1] = v17;
  *((_DWORD *)v18 + 1) = a6;
  v19 = RtlLengthSid((PSID)a4);
  RtlCopySid(v19, v18 + 4, (PSID)a4);
  v20 = RtlLengthSid((PSID)a4);
  memmove((char *)v18 + v20 + 8, Src, a8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
