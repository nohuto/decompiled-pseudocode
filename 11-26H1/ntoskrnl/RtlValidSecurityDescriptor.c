/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1409029C0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14041F320 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpIsSDValidSelfRelative @ 0x14051179C (AdtpIsSDValidSelfRelative.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1407AB078 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407AB2C0 (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x14084831C (CMFCreateSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408A3318 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408A5F2C (DrvDbGetSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x140901D14 (ObpSetObjectAuditInfo.c)
 *     ObpAdjustAccessMask @ 0x140902950 (ObpAdjustAccessMask.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     _PnpOpenPropertiesKey @ 0x140956580 (_PnpOpenPropertiesKey.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A49800 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140B09F00 (PnpInitializeInheritedRestrictedSd.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140B0B638 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140B25B1C (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140CCB8D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CCBA74 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140CCC254 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  unsigned int *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  ACL *v7; // rcx
  __int16 v8; // ax
  __int64 v10; // rax
  ACL *v11; // rcx
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
    v7 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v6 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v6 )
      goto LABEL_12;
    v7 = (ACL *)((char *)SecurityDescriptor + v6);
  }
  if ( v7 && !RtlValidAcl(v7) )
    return 0;
LABEL_12:
  v8 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v8 & 0x10) == 0 )
    return 1;
  if ( v8 >= 0 )
  {
    v11 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v10 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v10 )
      return 1;
    v11 = (ACL *)((char *)SecurityDescriptor + v10);
  }
  if ( !v11 )
    return 1;
  return RtlValidAcl(v11) != 0;
}
