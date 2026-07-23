/*
 * XREFs of RtlAddAccessFilterAce @ 0x140808BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1403AC0C0 (RtlIsValidProcessTrustLabelSid.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140A50810 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlAddAccessFilterAce(
        PACL Acl,
        unsigned int a2,
        int a3,
        __int64 a4,
        char a5,
        int a6,
        _DWORD *Src,
        unsigned __int16 a8)
{
  const void *v12; // rbp
  __int64 result; // rax
  int v14; // ecx
  unsigned int AclRevision; // eax
  UCHAR v16; // r14
  int v17; // r15d
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  char *v20; // rsi
  PVOID FirstFree; // [rsp+68h] [rbp+20h] BYREF

  FirstFree = 0LL;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  v12 = Src;
  if ( !Src || (unsigned __int16)(a8 - 6) > 0xFFF8u || *Src != 2020897377 || a5 != 21 )
    return 3221225485LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  if ( (a3 & 0x40) != 0 )
  {
    if ( !RtlIsValidProcessTrustLabelSid((PSID)a4) )
      return 3221225485LL;
  }
  else
  {
    v14 = *(_DWORD *)(a4 + 2);
    if ( !v14 )
      v14 = *(unsigned __int16 *)(a4 + 6) - 256;
    if ( v14 || *(_BYTE *)(a4 + 1) != 1 || *(_DWORD *)(a4 + 8) )
      return 3221225485LL;
  }
  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  v16 = Acl->AclRevision;
  if ( AclRevision <= a2 )
    v16 = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 )
    return 3221225485LL;
  v17 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v18 = (a8 + 3) & 0xFFFFFFFC;
  v19 = v18 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v19 < v18 )
    return 3221225621LL;
  if ( v19 > 0xFFFF )
    return 3221225485LL;
  v20 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v19 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v19;
  v20[1] = a3;
  *v20 = 21;
  *((_DWORD *)v20 + 1) = v17;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, v20 + 8, (PSID)a4);
  memmove(&v20[4 * *(unsigned __int8 *)(a4 + 1) + 16], v12, a8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = v16;
  return result;
}
