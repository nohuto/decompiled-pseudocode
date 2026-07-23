/*
 * XREFs of RtlAddMandatoryAce @ 0x1409027C0
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140861458 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14091BFD0 (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140AD1CF0 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepInitSystemDacls @ 0x140CE0608 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140CED750 (ExpKeyedEventInitialization.c)
 * Callees:
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 */

NTSTATUS __cdecl RtlAddMandatoryAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID Sid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  int v10; // ecx
  UCHAR AclRevision; // cl
  NTSTATUS result; // eax
  UCHAR v13; // al
  UCHAR v14; // si
  PACL v15; // rcx
  unsigned int v16; // edx
  ACL *v17; // r9
  USHORT v18; // dx

  if ( !Acl )
    return -1073741705;
  if ( AceType != 17 )
    return -1073741811;
  if ( !MmIsKernelAddress((unsigned __int64)Sid) || !Sid || (*(_BYTE *)Sid & 0xF) != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return -1073741704;
  v10 = *(_DWORD *)((char *)Sid + 2);
  if ( !v10 )
    v10 = *((unsigned __int16 *)Sid + 3) - 4096;
  if ( v10 )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( AceRevision > 4 || AclRevision > 4u )
    return -1073741735;
  v13 = AceRevision;
  v14 = Acl->AclRevision;
  if ( AclRevision <= v13 )
    v14 = v13;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !RtlValidAcl(Acl) )
    return -1073741705;
  v15 = Acl + 1;
  v16 = 0;
  v17 = (PACL)((char *)Acl + Acl->AclSize);
  while ( v16 < Acl->AceCount )
  {
    if ( v15 >= v17 )
      return -1073741705;
    ++v16;
    v15 = (PACL)((char *)v15 + v15->AclSize);
  }
  if ( v15 > v17 )
    v15 = 0LL;
  v18 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !v15 || (PACL)((char *)v15 + v18) > v17 )
    return -1073741671;
  v15->AclSize = v18;
  v15->Sbz1 = AceFlags;
  v15->AclRevision = 17;
  *(_DWORD *)&v15->AceCount = AccessMask;
  memmove(&v15[1], Sid, 4LL * *((unsigned __int8 *)Sid + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = v14;
  return result;
}
