/*
 * XREFs of RtlAddAccessFilterAce @ 0x18013E020
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x180047B40 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x1800C6480 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800C7650 (RtlFirstFreeAce.c)
 *     memmove @ 0x180164600 (memmove.c)
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
  unsigned __int8 AclRevision; // r14
  int v16; // r15d
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  char *v19; // rsi
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
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= a2 )
    AclRevision = a2;
  if ( (a3 & 0xFFFFFFA0) != 0 )
    return 3221225485LL;
  v16 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v17 = (a8 + 3) & 0xFFFFFFFC;
  v18 = v17 + 4 * (*(unsigned __int8 *)(a4 + 1) + 4);
  if ( v18 < v17 )
    return 3221225621LL;
  if ( v18 > 0xFFFF )
    return 3221225485LL;
  v19 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v18 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v18;
  v19[1] = a3;
  *v19 = 21;
  *((_DWORD *)v19 + 1) = v16;
  RtlCopySid(4 * *(unsigned __int8 *)(a4 + 1) + 8, v19 + 8, (PSID)a4);
  memmove(&v19[4 * *(unsigned __int8 *)(a4 + 1) + 16], v12, a8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
