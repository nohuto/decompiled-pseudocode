/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x14047FDF0
 * Callers:
 *     ObCleanupSecurityDescriptor @ 0x1407C5184 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407C5AAC (ObpCreateDosDevicesDirectory.c)
 *     RtlReplaceSidInSd @ 0x140809D00 (RtlReplaceSidInSd.c)
 *     ExpInitFullProcessSecurityInfo @ 0x140838DC0 (ExpInitFullProcessSecurityInfo.c)
 *     CmpCopySaclToVirtualKey @ 0x140861014 (CmpCopySaclToVirtualKey.c)
 *     MiInitializeMemoryEvents @ 0x140885C60 (MiInitializeMemoryEvents.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14096F9D8 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1409C9C60 (ExpWnfSpecializeSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A49800 (PiDevCfgGetKeySecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A6ED34 (LocalConvertSDToStringSD_Rev1.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A992E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     IopGetSecurityDescriptorInformation @ 0x140AFAC84 (IopGetSecurityDescriptorInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  ACL *v4; // rax
  __int16 v5; // dx
  __int64 v6; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0 )
  {
    *DaclPresent = 1;
    v5 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v5 & 4) != 0 )
    {
      if ( v5 >= 0 )
      {
        v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v6 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v6 )
          v4 = (ACL *)((char *)SecurityDescriptor + v6);
      }
    }
    *Dacl = v4;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  else
  {
    *DaclPresent = 0;
  }
  return 0;
}
