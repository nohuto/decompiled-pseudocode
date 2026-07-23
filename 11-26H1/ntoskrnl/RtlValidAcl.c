/*
 * XREFs of RtlValidAcl @ 0x140903B10
 * Callers:
 *     RtlAddAccessFilterAce @ 0x140808BD0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140808EE0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408092A4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x14081E3F8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x14081E61C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x14081E764 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x14084831C (CMFCreateSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     RtlAddAccessAllowedAceEx @ 0x140901890 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddProcessTrustLabelAce @ 0x140901BA0 (RtlAddProcessTrustLabelAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1409027C0 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140902B30 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1409033E0 (SepCreateImpersonationTokenDacl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1409C9570 (RtlValidRelativeSecurityDescriptor.c)
 *     SddlAddMandatoryAce @ 0x140A3DD24 (SddlAddMandatoryAce.c)
 *     SeValidSecurityDescriptor @ 0x140A8DAC0 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x140AF4160 (RtlDeleteAce.c)
 * Callees:
 *     RtlpValidCompoundAce @ 0x14077FD24 (RtlpValidCompoundAce.c)
 *     RtlpValidAccessFilterAce @ 0x14077FD94 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1409E0CF0 (RtlpValidAttributeAce.c)
 *     RtlpValidObjectAce @ 0x1409E0E98 (RtlpValidObjectAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // rbp
  PACL v3; // rdi
  unsigned int v4; // esi
  int v5; // r15d
  int v6; // r12d
  ACL *v7; // rdx
  USHORT *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned int AclRevision; // edx
  __int64 Sbz1; // rax

  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u )
    return 0;
  p_AclSize = &Acl->AclSize;
  if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize || *p_AclSize < 8u )
    return 0;
  v3 = Acl + 1;
  v4 = 0;
  v5 = 1730048;
  v6 = 104928;
  while ( v4 < Acl->AceCount )
  {
    v7 = (PACL)((char *)Acl + *p_AclSize);
    if ( &v3->AceCount > (USHORT *)v7 )
      return 0;
    v8 = &v3->AclSize;
    if ( (USHORT *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
      return 0;
    v9 = *v8;
    if ( (PACL)((char *)v3 + v9) > v7 )
      return 0;
    AclRevision = v3->AclRevision;
    if ( (unsigned __int8)AclRevision <= 3u || (unsigned __int8)AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
    {
      if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
        return 0;
      if ( (unsigned int)v9 < 0x10 )
        return 0;
      if ( v3[1].AclRevision != 1 )
        return 0;
      Sbz1 = v3[1].Sbz1;
      if ( (unsigned __int8)Sbz1 > 0xFu || v9 < 4 * Sbz1 + 16 )
        return 0;
    }
    else if ( (_BYTE)AclRevision == 4 )
    {
      if ( Acl->AclRevision < 3u || !RtlpValidCompoundAce((__int64)v3) )
        return 0;
    }
    else if ( (unsigned __int8)AclRevision <= 0x10u && _bittest(&v6, AclRevision) )
    {
      if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v3) )
        return 0;
    }
    else if ( (_BYTE)AclRevision == 18 )
    {
      if ( !(unsigned __int8)RtlpValidAttributeAce(v3) )
        return 0;
    }
    else if ( (_BYTE)AclRevision == 21 )
    {
      if ( !RtlpValidAccessFilterAce((__int64)v3) )
        return 0;
    }
    else if ( (unsigned int)v9 < 4 )
    {
      return 0;
    }
    v3 = (PACL)((char *)v3 + *v8);
    ++v4;
  }
  return 1;
}
