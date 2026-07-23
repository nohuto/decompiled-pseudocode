/*
 * XREFs of RtlGetPersistedStateLocation @ 0x140A0FF10
 * Callers:
 *     PopOpenThermalLoggingKey @ 0x1404F9FC4 (PopOpenThermalLoggingKey.c)
 *     PipUpdateDeviceProducts @ 0x1405DA6E0 (PipUpdateDeviceProducts.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140621C98 (RtlpGetPersistedRegistryLocation.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1406D7B84 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1407B9500 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PopOpenPersistedRegistryKey @ 0x1407CBEAC (PopOpenPersistedRegistryKey.c)
 *     PopInitHiberPersistedRegValues @ 0x1407D3344 (PopInitHiberPersistedRegValues.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14082A63C (WmipSaveGuidSecurityDescriptor.c)
 *     EtwpInitializeAutoLoggers @ 0x140833F20 (EtwpInitializeAutoLoggers.c)
 *     SpRegOpenRedirectedKey @ 0x140840930 (SpRegOpenRedirectedKey.c)
 *     ExpUuidLoadSequenceNumber @ 0x140847138 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x1408472A8 (ExpUuidSaveSequenceNumber.c)
 *     CmpRecordShutdownStopTime @ 0x14085A938 (CmpRecordShutdownStopTime.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140A0F458 (WmipGetGuidSecurityDescriptor.c)
 *     PiGetStateRootPath @ 0x140A10E38 (PiGetStateRootPath.c)
 *     PiCreateDriverRedirectedStateKey @ 0x140A11A78 (PiCreateDriverRedirectedStateKey.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x140A11E40 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x140A12764 (RtlpGetTimeZoneInfoHandle.c)
 *     IopUpdateSecureDeviceClassState @ 0x140AFAF20 (IopUpdateSecureDeviceClassState.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     IopGetPersistedStateLocation @ 0x140B3EBA4 (IopGetPersistedStateLocation.c)
 *     PopInitializePowerButtonHold @ 0x140CDB3CC (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140CE7E98 (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  WCHAR *Pool2; // rdi
  NTSTATUS v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  PCWSTR v16; // rdx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  ULONG v19; // esi
  ULONG Length; // ebx
  NTSTATUS v21; // eax
  unsigned __int64 v22; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  Pool2 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  if ( byte_140E67BBC )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140BE0CC8[2 * StateLocationType];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v17;
    if ( v17 == -1073741772 )
    {
      byte_140E67BBC = 1;
    }
    else
    {
      if ( v17 < 0 )
        goto LABEL_9;
      RtlInitUnicodeString(&DestinationString, SourceID);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v11 = v18;
      if ( v18 != -1073741772 )
      {
        if ( v18 < 0 )
          goto LABEL_9;
        if ( !CustomValue )
          CustomValue = L"TargetNtPath";
        RtlInitUnicodeString(&DestinationString, CustomValue);
        v19 = BufferLengthIn;
        Length = BufferLengthIn + 16;
        if ( BufferLengthIn + 16 < BufferLengthIn )
          goto LABEL_8;
        Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          v11 = -1073741801;
          goto LABEL_9;
        }
        v21 = ZwQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
        v11 = v21;
        if ( v21 < 0 )
        {
          if ( v21 != -2147483643 )
            goto LABEL_9;
        }
        else if ( *((_DWORD *)Pool2 + 1) != 1 )
        {
          v11 = -1073741788;
          goto LABEL_9;
        }
        v14 = *((_DWORD *)Pool2 + 2);
        ResultLength = v14;
        if ( v21 >= 0 && Pool2[((unsigned __int64)v14 >> 1) + 5] )
        {
          v22 = v14 + 2;
          ResultLength = v22;
          v14 += 2;
          if ( v19 < (unsigned int)v22 )
          {
            v11 = -2147483643;
          }
          else
          {
            Pool2[(v22 >> 1) + 5] = 0;
            v14 = ResultLength;
          }
        }
        if ( BufferLengthOut )
          *BufferLengthOut = v14;
        if ( v11 < 0 )
          goto LABEL_9;
        v16 = Pool2 + 6;
        goto LABEL_20;
      }
    }
  }
  if ( DefaultPath )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( DefaultPath[v12] );
    v13 = v12 + 1;
    v14 = 2 * v13;
    ResultLength = 2 * v13;
    if ( 2 * v13 < v13 )
    {
LABEL_8:
      v11 = -1073741675;
      goto LABEL_9;
    }
    v11 = BufferLengthIn < v14 ? 0x80000005 : 0;
    if ( BufferLengthOut )
      *BufferLengthOut = v14;
    if ( v14 > BufferLengthIn )
      goto LABEL_9;
    v16 = DefaultPath;
LABEL_20:
    memmove(TargetPath, v16, v14);
  }
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}
