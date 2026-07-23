/*
 * XREFs of RtlFindAceByType @ 0x1404281B0
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14044DBF0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x14050EF38 (SepMandatorySubProcessToken.c)
 *     AdtpGetCapID @ 0x140530BFC (AdtpGetCapID.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1408E9740 (RtlpInheritAcl2.c)
 *     RtlpCopyAces @ 0x1408EA440 (RtlpCopyAces.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140A6AD40 (RtlpValidFilterAclSubjectContext.c)
 *     SeQueryMandatoryLabel @ 0x140AB936C (SeQueryMandatoryLabel.c)
 *     SepSDContainsAttributeACE @ 0x140B5CE18 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v3; // r11
  unsigned int i; // r9d

  if ( Acl )
  {
    v3 = Acl + 1;
    for ( i = 0; i < Acl->AceCount; ++i )
    {
      if ( Index )
      {
        if ( i >= *Index && v3->AclRevision == AceType )
        {
          *Index = i;
          return v3;
        }
      }
      else if ( v3->AclRevision == AceType )
      {
        return v3;
      }
      v3 = (PACL)((char *)v3 + v3->AclSize);
    }
  }
  return 0LL;
}
