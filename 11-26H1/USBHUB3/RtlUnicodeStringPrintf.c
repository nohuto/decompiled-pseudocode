/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14000FA34
 * Callers:
 *     HUBID_BuildClassCompatibleID @ 0x14001E47C (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x14001E9B8 (HUBID_BuildContainerID.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x14001EE7C (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildDeviceID @ 0x14001F0E4 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x14001F278 (HUBID_BuildHardwareID.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x14007FF2C (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_RegisterSleepstudyBlockerReason @ 0x1400805C4 (HUBFDO_RegisterSleepstudyBlockerReason.c)
 *     HUBPDO_MakePdoName @ 0x1400848CC (HUBPDO_MakePdoName.c)
 *     HUBREG_DeleteUxdDeviceKey @ 0x1400876D8 (HUBREG_DeleteUxdDeviceKey.c)
 *     HUBREG_DeleteUxdPortKey @ 0x14008783C (HUBREG_DeleteUxdPortKey.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x14008860C (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 *     HUBREG_OpenPortSubkey @ 0x140088A40 (HUBREG_OpenPortSubkey.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x14008A250 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x14008A81C (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryUxdDeviceKey @ 0x14008B33C (HUBREG_QueryUxdDeviceKey.c)
 *     HUBREG_QueryUxdPortKey @ 0x14008B4B8 (HUBREG_QueryUxdPortKey.c)
 *     HUBACPI_EvaluateDSD @ 0x14008DEBC (HUBACPI_EvaluateDSD.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x140090D54 (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x140091124 (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x140092B90 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 * Callees:
 *     <none>
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
  v7 = _vsnwprintf(DestinationString->Buffer, MaximumLength >> 1, pszFormat, Args);
  if ( v7 < 0 || v7 > v6 )
  {
    LOWORD(v7) = v6;
    v5 = -2147483643;
  }
  DestinationString->Length = 2 * v7;
  return v5;
}
