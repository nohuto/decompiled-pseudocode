/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x1409C9570
 * Callers:
 *     CmpVerifyLogRecord @ 0x140864BDC (CmpVerifyLogRecord.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14089D748 (_CmSetInstallerClassRegPropWorker.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14096FE40 (PipGetRegistrySecurityWithFallback.c)
 *     _CmSetDeviceRegPropWorker @ 0x1409AC878 (_CmSetDeviceRegPropWorker.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409C9150 (CmpValidateHiveSecurityDescriptors.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 * Callees:
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  __int16 v5; // dx
  __int64 v6; // rax
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax

  if ( SecurityDescriptorLength < 0x14 )
    return 0;
  if ( *(_BYTE *)SecurityDescriptorInput != 1 )
    return 0;
  v5 = *((_WORD *)SecurityDescriptorInput + 1);
  if ( v5 >= 0 )
    return 0;
  v6 = *((unsigned int *)SecurityDescriptorInput + 1);
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)v6 < 0x14 )
      return 0;
    if ( (unsigned int)v6 >= SecurityDescriptorLength )
      return 0;
    v7 = SecurityDescriptorLength - v6;
    if ( SecurityDescriptorLength - (unsigned int)v6 < 0xC )
      return 0;
    if ( (v6 & 3) != 0 )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v6) != 1 )
      return 0;
    v8 = *((unsigned __int8 *)SecurityDescriptorInput + v6 + 1);
    if ( (unsigned __int8)v8 > 0xFu || v7 < 4 * v8 + 8 )
      return 0;
  }
  else if ( (RequiredInformation & 1) != 0 )
  {
    return 0;
  }
  v9 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v9 )
  {
    if ( (unsigned int)v9 >= 0x14 && (unsigned int)v9 < SecurityDescriptorLength )
    {
      v10 = SecurityDescriptorLength - v9;
      if ( SecurityDescriptorLength - (unsigned int)v9 >= 0xC
        && (v9 & 3) == 0
        && *((_BYTE *)SecurityDescriptorInput + v9) == 1 )
      {
        v11 = *((unsigned __int8 *)SecurityDescriptorInput + v9 + 1);
        if ( (unsigned __int8)v11 <= 0xFu && v10 >= 4 * v11 + 8 )
          goto LABEL_20;
      }
    }
    return 0;
  }
  if ( (RequiredInformation & 2) != 0 )
    return 0;
LABEL_20:
  if ( (v5 & 4) != 0 )
  {
    v12 = *((unsigned int *)SecurityDescriptorInput + 4);
    if ( (_DWORD)v12 )
    {
      if ( (unsigned int)v12 >= SecurityDescriptorLength
        || (unsigned int)v12 < 0x14
        || SecurityDescriptorLength - (unsigned int)v12 < 8
        || (v12 & 3) != 0
        || SecurityDescriptorLength - (unsigned int)v12 < *(unsigned __int16 *)((char *)SecurityDescriptorInput + v12 + 2)
        || !RtlValidAcl((PACL)((char *)SecurityDescriptorInput + v12)) )
      {
        return 0;
      }
    }
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
    return 1;
  v15 = *((unsigned int *)SecurityDescriptorInput + 3);
  if ( !(_DWORD)v15 )
    return 1;
  if ( (unsigned int)v15 >= SecurityDescriptorLength )
    return 0;
  if ( (unsigned int)v15 < 0x14 )
    return 0;
  v14 = SecurityDescriptorLength - v15;
  if ( v14 < 8 || (v15 & 3) != 0 || v14 < *(unsigned __int16 *)((char *)SecurityDescriptorInput + v15 + 2) )
    return 0;
  return RtlValidAcl((PACL)((char *)SecurityDescriptorInput + v15)) != 0;
}
