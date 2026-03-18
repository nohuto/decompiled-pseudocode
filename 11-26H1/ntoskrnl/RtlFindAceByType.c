/*
 * XREFs of RtlFindAceByType @ 0x1404330E0
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140455AC0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x1405154C8 (SepMandatorySubProcessToken.c)
 *     AdtpGetCapID @ 0x14052E6DC (AdtpGetCapID.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x1408E3180 (RtlpInheritAcl2.c)
 *     RtlpCopyAces @ 0x1408E3E80 (RtlpCopyAces.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140A5DD80 (RtlpValidFilterAclSubjectContext.c)
 *     SeQueryMandatoryLabel @ 0x140AB7D2C (SeQueryMandatoryLabel.c)
 *     SepSDContainsAttributeACE @ 0x140B59F30 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v3; // r11
  unsigned int i; // r9d

  if ( a1 )
  {
    v3 = (unsigned __int8 *)(a1 + 8);
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
    {
      if ( a3 )
      {
        if ( i >= *a3 && *v3 == a2 )
        {
          *a3 = i;
          return v3;
        }
      }
      else if ( *v3 == a2 )
      {
        return v3;
      }
      v3 += *((unsigned __int16 *)v3 + 1);
    }
  }
  return 0LL;
}
