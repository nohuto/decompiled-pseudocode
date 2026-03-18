/*
 * XREFs of RtlValidSecurityDescriptor @ 0x140926EB0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1404322F0 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpIsSDValidSelfRelative @ 0x140517D2C (AdtpIsSDValidSelfRelative.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1407A84C8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407A8710 (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x140842E8C (CMFCreateSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14089CF18 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14089FB2C (DrvDbGetSecurityDescriptor.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     ObpSetObjectAuditInfo @ 0x140926204 (ObpSetObjectAuditInfo.c)
 *     ObpAdjustAccessMask @ 0x140926E40 (ObpAdjustAccessMask.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     _PnpOpenPropertiesKey @ 0x140995B20 (_PnpOpenPropertiesKey.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A74998 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140B07DD0 (PnpInitializeInheritedRestrictedSd.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140B09878 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140B2371C (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140CC57F4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CC5994 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140CC6174 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140928000 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  unsigned int *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rcx
  __int16 v8; // ax
  __int64 v10; // rax
  char *v11; // rcx
  char *v12; // rcx
  char *v13; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( v2 >= 0 )
  {
    v4 = (unsigned int *)((char *)SecurityDescriptor + 8);
    v12 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
    {
      v4 = (unsigned int *)((char *)SecurityDescriptor + 8);
      goto LABEL_6;
    }
    v12 = (char *)SecurityDescriptor + v3;
    v4 = (unsigned int *)((char *)SecurityDescriptor + 8);
  }
  if ( v12 && !RtlValidSid(v12) )
    return 0;
  if ( v2 >= 0 )
  {
    v13 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_26;
  }
LABEL_6:
  v5 = *v4;
  if ( !(_DWORD)v5 )
    goto LABEL_7;
  v13 = (char *)SecurityDescriptor + v5;
LABEL_26:
  if ( v13 && !RtlValidSid(v13) )
    return 0;
LABEL_7:
  if ( (v2 & 4) == 0 )
    goto LABEL_12;
  if ( v2 >= 0 )
  {
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v6 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v6 )
      goto LABEL_12;
    v7 = (char *)SecurityDescriptor + v6;
  }
  if ( v7 && !(unsigned __int8)RtlValidAcl(v7) )
    return 0;
LABEL_12:
  v8 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v8 & 0x10) == 0 )
    return 1;
  if ( v8 >= 0 )
  {
    v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v10 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v10 )
      return 1;
    v11 = (char *)SecurityDescriptor + v10;
  }
  if ( !v11 )
    return 1;
  return (unsigned __int8)RtlValidAcl(v11) != 0;
}
