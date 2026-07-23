/*
 * XREFs of RtlValidAcl @ 0x1800276F0
 * Callers:
 *     RtlAddAce @ 0x1800269A0 (RtlAddAce.c)
 *     RtlAddAccessAllowedAce @ 0x180027040 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180027170 (RtlpAddKnownAce.c)
 *     RtlCheckTokenCapability @ 0x180059240 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180059E10 (RtlCheckTokenMembershipEx.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800C5DC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddMandatoryAce @ 0x1800C62E0 (RtlAddMandatoryAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x1800C9A90 (RtlAddAccessAllowedAceEx.c)
 *     RtlValidSecurityDescriptor @ 0x1800D5FF0 (RtlValidSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1800DBB40 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1800E9120 (RtlDeleteAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x180124828 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x18013E020 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013E2D0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013E450 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013E7E0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013E990 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     RtlpValidObjectAce @ 0x18011205C (RtlpValidObjectAce.c)
 *     RtlpValidCompoundAce @ 0x1801216FC (RtlpValidCompoundAce.c)
 *     RtlpValidAccessFilterAce @ 0x180122B28 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x180122C28 (RtlpValidAttributeAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  unsigned __int16 *p_AclSize; // r14
  PACL v3; // rdi
  unsigned int v4; // esi
  int v5; // r12d
  int v6; // r13d
  ACL *v7; // rdx
  unsigned __int16 *v8; // r15
  unsigned __int64 v9; // rcx
  unsigned int AclRevision; // edx
  __int64 Sbz1; // rax
  BOOLEAN result; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (unsigned __int16 *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize )
      return 0;
    if ( *p_AclSize < 8u )
      return 0;
    v3 = Acl + 1;
    v4 = 0;
    v5 = 1730048;
    v6 = 104928;
    while ( 1 )
    {
      if ( v4 >= Acl->AceCount )
        return 1;
      v7 = (PACL)((char *)Acl + *p_AclSize);
      if ( &v3->AceCount > (unsigned __int16 *)v7 )
        return 0;
      v8 = &v3->AclSize;
      if ( (unsigned __int16 *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
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
        if ( Acl->AclRevision < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)AclRevision <= 0x10u && _bittest(&v6, AclRevision) )
      {
        if ( Acl->AclRevision < 4u )
          return 0;
        result = RtlpValidObjectAce(v3);
        if ( !result )
          return result;
      }
      else if ( (_BYTE)AclRevision == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( (_BYTE)AclRevision == 21 )
      {
        result = RtlpValidAccessFilterAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v9 < 4 )
      {
        return 0;
      }
      v3 = (PACL)((char *)v3 + *v8);
      ++v4;
    }
  }
  return 0;
}
