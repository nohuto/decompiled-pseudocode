/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1409E0730
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1404050D0 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1404C97D0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14050D6DC (WdipAccessCheck.c)
 *     SepInitProcessAuditSd @ 0x14063DADC (SepInitProcessAuditSd.c)
 *     ExpPlRunOnceInit @ 0x1406D0C60 (ExpPlRunOnceInit.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140C27C44 (ViInitializeLocalSystemDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140CC2EA4 (IopCreateUmdfDirectory.c)
 *     IopApplySystemPartitionProt @ 0x140CC5004 (IopApplySystemPartitionProt.c)
 *     PopUmpoInitializeChannel @ 0x140CDB714 (PopUmpoInitializeChannel.c)
 *     SshpAlpcInitialize @ 0x140CDDA0C (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140CDEAB4 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140CDF5A8 (PspInitializeSystemPartitionPhase0.c)
 *     SepInitSystemDacls @ 0x140CE0608 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140CE3688 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140CE3908 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140CE3B68 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140CE6910 (WmipInitializeSecurity.c)
 *     ExpKeyedEventInitialization @ 0x140CED750 (ExpKeyedEventInitialization.c)
 * Callees:
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpValidCompoundAce @ 0x14077FD24 (RtlpValidCompoundAce.c)
 *     RtlpValidAccessFilterAce @ 0x14077FD94 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1409E0CF0 (RtlpValidAttributeAce.c)
 *     RtlpValidObjectAce @ 0x1409E0E98 (RtlpValidObjectAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  UCHAR AclRevision; // cl
  UCHAR v8; // r13
  USHORT *p_AclSize; // rbp
  PACL v10; // rbx
  PACL v11; // r14
  unsigned int v12; // r15d
  int v13; // r8d
  int v14; // r9d
  unsigned int AceCount; // ecx
  ACL *v16; // rdx
  USHORT *v17; // r12
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 Sbz1; // rax
  unsigned int v21; // edx
  ACL *v22; // r8
  USHORT v23; // cx
  NTSTATUS result; // eax

  if ( !MmIsKernelAddress((unsigned __int64)Sid) || !Sid || (*(_BYTE *)Sid & 0xF) != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return -1073741704;
  AclRevision = Acl->AclRevision;
  if ( AceRevision > 4 || AclRevision > 4u )
    return -1073741735;
  v8 = Acl->AclRevision;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    v8 = AceRevision;
  if ( (unsigned __int8)(AclRevision - 2) > 2u )
    return -1073741705;
  p_AclSize = &Acl->AclSize;
  if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize || *p_AclSize < 8u )
    return -1073741705;
  v10 = Acl + 1;
  v11 = Acl + 1;
  v12 = 0;
  v13 = 1730048;
  v14 = 104928;
  while ( 1 )
  {
    AceCount = Acl->AceCount;
    if ( v12 >= AceCount )
      break;
    v16 = (PACL)((char *)Acl + *p_AclSize);
    if ( &v11->AceCount > (USHORT *)v16 )
      return -1073741705;
    v17 = &v11->AclSize;
    if ( (USHORT *)(((unsigned __int64)&v11->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v11->AclSize )
      return -1073741705;
    v18 = *v17;
    if ( (PACL)((char *)v11 + v18) > v16 )
      return -1073741705;
    v19 = v11->AclRevision;
    if ( (unsigned __int8)v19 <= 3u || (unsigned __int8)v19 <= 0x14u && _bittest(&v13, v19) )
    {
      if ( ((v18 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
        return -1073741705;
      if ( (unsigned int)v18 < 0x10 )
        return -1073741705;
      if ( v11[1].AclRevision != 1 )
        return -1073741705;
      Sbz1 = v11[1].Sbz1;
      if ( (unsigned __int8)Sbz1 > 0xFu || v18 < 4 * Sbz1 + 16 )
        return -1073741705;
    }
    else if ( (_BYTE)v19 == 4 )
    {
      if ( Acl->AclRevision < 3u || !RtlpValidCompoundAce((__int64)v11) )
        return -1073741705;
      v13 = 1730048;
    }
    else if ( (unsigned __int8)v19 <= 0x10u && _bittest(&v14, v19) )
    {
      if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v11) )
        return -1073741705;
      v13 = 1730048;
      v14 = 104928;
    }
    else if ( (_BYTE)v19 == 18 )
    {
      if ( !(unsigned __int8)RtlpValidAttributeAce(v11) )
        return -1073741705;
      v13 = 1730048;
      v14 = 104928;
    }
    else if ( (_BYTE)v19 == 21 )
    {
      if ( !RtlpValidAccessFilterAce((__int64)v11) )
        return -1073741705;
      v13 = 1730048;
    }
    else if ( (unsigned int)v18 < 4 )
    {
      return -1073741705;
    }
    v11 = (PACL)((char *)v11 + *v17);
    ++v12;
  }
  v21 = 0;
  v22 = (PACL)((char *)Acl + *p_AclSize);
  while ( v21 < AceCount )
  {
    if ( v10 >= v22 )
      return -1073741705;
    ++v21;
    v10 = (PACL)((char *)v10 + v10->AclSize);
  }
  if ( v10 > v22 )
    v10 = 0LL;
  v23 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
  if ( !v10 || (PACL)((char *)v10 + v23) > v22 )
    return -1073741671;
  v10->AclSize = v23;
  *(_DWORD *)&v10->AceCount = AccessMask;
  *(_WORD *)&v10->AclRevision = 0;
  memmove(&v10[1], Sid, 4LL * *((unsigned __int8 *)Sid + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = v8;
  return result;
}
