/*
 * XREFs of AdtpGetCapID @ 0x14052E6DC
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140503204 (AdtpBuildContextFromSecurityDescriptor.c)
 * Callees:
 *     RtlFindAceByType @ 0x1404330E0 (RtlFindAceByType.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140AAC210 (RtlGetSaclSecurityDescriptor.c)
 */

__int64 __fastcall AdtpGetCapID(void *a1, _QWORD *a2)
{
  NTSTATUS SaclSecurityDescriptor; // esi
  bool v4; // zf
  unsigned __int8 *AceByType; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF
  BOOLEAN v9; // [rsp+50h] [rbp+18h] BYREF
  BOOLEAN v10; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0;
  v7 = 0;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a1, &v9, (PACL *)&v8, &v10);
  if ( SaclSecurityDescriptor >= 0 )
  {
    v4 = v9 == 0;
    *a2 = 0LL;
    if ( !v4 )
    {
      if ( v8 )
      {
        while ( 1 )
        {
          AceByType = RtlFindAceByType(v8, 19, &v7);
          if ( AceByType )
          {
            if ( (AceByType[1] & 8) == 0 )
              break;
          }
          ++v7;
          if ( !AceByType )
            return (unsigned int)SaclSecurityDescriptor;
        }
        *a2 = AceByType + 8;
      }
    }
  }
  return (unsigned int)SaclSecurityDescriptor;
}
