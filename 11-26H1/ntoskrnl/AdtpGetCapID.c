/*
 * XREFs of AdtpGetCapID @ 0x140530BFC
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1404FCAD4 (AdtpBuildContextFromSecurityDescriptor.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404281B0 (RtlFindAceByType.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140AA97C0 (RtlGetSaclSecurityDescriptor.c)
 */

__int64 __fastcall AdtpGetCapID(void *a1, _QWORD *a2)
{
  NTSTATUS SaclSecurityDescriptor; // esi
  bool v4; // zf
  _BYTE *AceByType; // rax
  ULONG Index; // [rsp+20h] [rbp-18h] BYREF
  PACL Acl; // [rsp+28h] [rbp-10h] BYREF
  BOOLEAN v9; // [rsp+50h] [rbp+18h] BYREF
  BOOLEAN v10; // [rsp+58h] [rbp+20h] BYREF

  Acl = 0LL;
  v9 = 0;
  Index = 0;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a1, &v9, &Acl, &v10);
  if ( SaclSecurityDescriptor >= 0 )
  {
    v4 = v9 == 0;
    *a2 = 0LL;
    if ( !v4 )
    {
      if ( Acl )
      {
        while ( 1 )
        {
          AceByType = RtlFindAceByType(Acl, 0x13u, &Index);
          if ( AceByType )
          {
            if ( (AceByType[1] & 8) == 0 )
              break;
          }
          ++Index;
          if ( !AceByType )
            return (unsigned int)SaclSecurityDescriptor;
        }
        *a2 = AceByType + 8;
      }
    }
  }
  return (unsigned int)SaclSecurityDescriptor;
}
