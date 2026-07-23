/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x1409C9C60
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     NtCreateWnfStateName @ 0x1409CAAE0 (NtCreateWnfStateName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14047FDF0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x1409C9D00 (RtlpApplyAclToObject.c)
 */

int __fastcall ExpWnfSpecializeSecurityDescriptor(_BYTE *a1)
{
  __int64 v2; // rax
  _BYTE *v3; // rcx
  BOOLEAN v5; // [rsp+30h] [rbp+8h] BYREF
  BOOLEAN v6; // [rsp+38h] [rbp+10h] BYREF
  PACL v7; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v7 = 0LL;
  LODWORD(v2) = RtlGetDaclSecurityDescriptor(a1, &v5, &v7, &v6);
  if ( (int)v2 >= 0 && v5 && v7 )
    LODWORD(v2) = RtlpApplyAclToObject(v7, &ExpWnfNotificationMapping);
  if ( *a1 == 1 )
  {
    LODWORD(v2) = *((unsigned __int16 *)a1 + 1);
    if ( (v2 & 0x10) != 0 )
    {
      if ( (v2 & 0x8000u) == 0LL )
      {
        v3 = (_BYTE *)*((_QWORD *)a1 + 3);
      }
      else
      {
        v2 = *((unsigned int *)a1 + 3);
        if ( (_DWORD)v2 )
          v3 = &a1[v2];
        else
          v3 = 0LL;
      }
      if ( v3 )
        LODWORD(v2) = RtlpApplyAclToObject(v3, &ExpWnfNotificationMapping);
    }
  }
  return v2;
}
