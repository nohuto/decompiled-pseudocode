/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x1408FE3E0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14041F320 (AdtpBuildAccessReasonAuditString.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1407AB078 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407AB2C0 (PiAuGetStateDirectorySecurityObject.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14082A63C (WmipSaveGuidSecurityDescriptor.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14089D748 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408A3318 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x1408A5E48 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408A5F2C (DrvDbGetSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1408FCCF0 (ObLogSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1408FCFF0 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x1408FD750 (SeDefaultObjectMethod.c)
 *     ObpSetObjectAuditInfo @ 0x140901D14 (ObpSetObjectAuditInfo.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409A72B0 (BiCreateKeySecurityDescriptor.c)
 *     _CmSetDeviceRegPropWorker @ 0x1409AC878 (_CmSetDeviceRegPropWorker.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x1409CBBBC (ExpWnfRegisterPermanentName.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140A0F458 (WmipGetGuidSecurityDescriptor.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A49800 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopUpdateSecureDeviceClassState @ 0x140AFAF20 (IopUpdateSecureDeviceClassState.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140B0B638 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140B25B1C (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140CCB8D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CCBA74 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140CCC254 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r10
  __int16 v3; // r9
  ULONG result; // eax
  unsigned int *v5; // rcx
  __int64 v6; // r8
  char *v7; // r8
  __int64 v8; // r8
  char *v9; // rcx
  unsigned int *v10; // r8
  __int64 v11; // rcx
  char *v12; // rcx
  __int64 v13; // rcx
  char *v14; // rcx

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v3 = v1 & 0x8000;
  result = 20;
  if ( v1 >= 0 )
    result = 40;
  v5 = (unsigned int *)((char *)SecurityDescriptor + 8);
  if ( v3 )
  {
    v6 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v6 )
      goto LABEL_9;
    v7 = (char *)SecurityDescriptor + v6;
  }
  else
  {
    v7 = *(char **)v5;
  }
  if ( v7 )
  {
    result += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
    v5 = (unsigned int *)((char *)SecurityDescriptor + 8);
  }
  if ( !v3 )
  {
    v9 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    v10 = (unsigned int *)((char *)SecurityDescriptor + 16);
    goto LABEL_11;
  }
LABEL_9:
  v8 = *v5;
  if ( !(_DWORD)v8 )
  {
    v10 = (unsigned int *)((char *)SecurityDescriptor + 16);
    goto LABEL_13;
  }
  v9 = (char *)SecurityDescriptor + v8;
  v10 = (unsigned int *)((char *)SecurityDescriptor + 16);
LABEL_11:
  if ( v9 )
    result += (4 * (unsigned __int8)v9[1] + 11) & 0xFFFFFFFC;
LABEL_13:
  if ( (v1 & 4) == 0 )
    goto LABEL_19;
  if ( v3 )
  {
    v11 = *v10;
    if ( !(_DWORD)v11 )
      goto LABEL_19;
    v12 = (char *)SecurityDescriptor + v11;
  }
  else
  {
    v12 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  if ( v12 )
    result += (*((unsigned __int16 *)v12 + 1) + 3) & 0xFFFFFFFC;
LABEL_19:
  if ( (v1 & 0x10) == 0 )
    return result;
  if ( v3 )
  {
    v13 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v13 )
      return result;
    v14 = (char *)SecurityDescriptor + v13;
  }
  else
  {
    v14 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  if ( v14 )
    result += (*((unsigned __int16 *)v14 + 1) + 3) & 0xFFFFFFFC;
  return result;
}
