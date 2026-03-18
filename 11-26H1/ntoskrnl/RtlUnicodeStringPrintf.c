/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1404B9F90
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14078F6B0 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1407B78DC (PiDrvDbResolveNodeFilePaths.c)
 *     CmpOpenDevicesControlSet @ 0x14084CA20 (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmSetAcpiHwProfile @ 0x140851648 (CmSetAcpiHwProfile.c)
 *     CmpDeleteCorruptedLogfile @ 0x140862DE8 (CmpDeleteCorruptedLogfile.c)
 *     ExProcessCounterSetCallback @ 0x140969300 (ExProcessCounterSetCallback.c)
 *     PiDevCfgBuildIndirectString @ 0x14098838C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140988F70 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A88E8C (SshpGenerateDeviceFriendlyName.c)
 *     PopGetCallerContextFromBuffer @ 0x140ABC0A8 (PopGetCallerContextFromBuffer.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AD39B4 (PiDevCfgBuildDriverConfigurationId.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x140B28AFC (PopIdleWakeGenerateDescriptionString.c)
 *     PopSleepstudyUlongFormatter @ 0x140B2C140 (PopSleepstudyUlongFormatter.c)
 *     PopSleepstudyUlong64Formatter @ 0x140B31320 (PopSleepstudyUlong64Formatter.c)
 *     PopIdleWakeSystemImageCallback @ 0x140B31A90 (PopIdleWakeSystemImageCallback.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 *     IopStoreBootDriveLetter @ 0x140CBE1A0 (IopStoreBootDriveLetter.c)
 *     CmpAddAliasEntry @ 0x140CE9408 (CmpAddAliasEntry.c)
 *     CmpCreateControlSet @ 0x140CE9794 (CmpCreateControlSet.c)
 *     CmpCreateControlSetOverride @ 0x140CE9B4C (CmpCreateControlSetOverride.c)
 *     CmpCreateHardwareProfiles @ 0x140CE9D78 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     _vsnwprintf @ 0x1405353B0 (_vsnwprintf.c)
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
