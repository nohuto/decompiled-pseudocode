/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1404B3820
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x1407921E0 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1407BA93C (PiDrvDbResolveNodeFilePaths.c)
 *     CmpOpenDevicesControlSet @ 0x140852D30 (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmSetAcpiHwProfile @ 0x140857958 (CmSetAcpiHwProfile.c)
 *     CmpDeleteCorruptedLogfile @ 0x1408691C8 (CmpDeleteCorruptedLogfile.c)
 *     ExProcessCounterSetCallback @ 0x14091D960 (ExProcessCounterSetCallback.c)
 *     PiDevCfgBuildIndirectString @ 0x140A42AB8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140A43690 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A8FD7C (SshpGenerateDeviceFriendlyName.c)
 *     PopGetCallerContextFromBuffer @ 0x140ABDDA8 (PopGetCallerContextFromBuffer.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AEACE8 (PiDevCfgBuildDriverConfigurationId.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140B2AFCC (PopIdleWakeGenerateDescriptionString.c)
 *     PopSleepstudyUlongFormatter @ 0x140B2E1C0 (PopSleepstudyUlongFormatter.c)
 *     PopSleepstudyUlong64Formatter @ 0x140B33520 (PopSleepstudyUlong64Formatter.c)
 *     PopIdleWakeSystemImageCallback @ 0x140B33C90 (PopIdleWakeSystemImageCallback.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 *     IopStoreBootDriveLetter @ 0x140CC4270 (IopStoreBootDriveLetter.c)
 *     CmpAddAliasEntry @ 0x140CEF7A8 (CmpAddAliasEntry.c)
 *     CmpCreateControlSet @ 0x140CEFB34 (CmpCreateControlSet.c)
 *     CmpCreateControlSetOverride @ 0x140CEFEEC (CmpCreateControlSetOverride.c)
 *     CmpCreateHardwareProfiles @ 0x140CF0118 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     _vsnwprintf @ 0x140537830 (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // cx
  unsigned __int64 MaximumLength; // rax
  NTSTATUS v5; // ebx
  unsigned __int64 v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > (unsigned __int16)MaximumLength )
    return -1073741811;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return -1073741811;
  v5 = 0;
  if ( !DestinationString->Buffer && (Length || (_WORD)MaximumLength) )
    return -1073741811;
  v6 = MaximumLength >> 1;
  v7 = vsnwprintf(DestinationString->Buffer, MaximumLength >> 1, pszFormat, Args);
  if ( v7 < 0 || v7 > v6 )
  {
    LOWORD(v7) = v6;
    v5 = -2147483643;
  }
  DestinationString->Length = 2 * v7;
  return v5;
}
