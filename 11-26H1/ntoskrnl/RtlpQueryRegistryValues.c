/*
 * XREFs of RtlpQueryRegistryValues @ 0x140A10F94
 * Callers:
 *     FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14078F6B0 (FsRtlOpenFileSystemRegistryKeyFromFsGuid.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1407A3BE4 (IopQueryPassiveInterruptRegistryOptions.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1407B672C (PiDrvDbQuerySystemPathWin32.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1407EF5DC (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x1407EF678 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     PspQueryForwardersEnabled @ 0x1407F08E0 (PspQueryForwardersEnabled.c)
 *     RtlSetActiveTimeBias @ 0x140804C34 (RtlSetActiveTimeBias.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408054A0 (RtlpUpdateDynamicTimeZones.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14081AA98 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14081F17C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x140825F8C (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408266A4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408269B8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpReadTimeZoneInformation @ 0x140836298 (ExpReadTimeZoneInformation.c)
 *     ExIsStateSeparationEnabled @ 0x1408376E4 (ExIsStateSeparationEnabled.c)
 *     ExpGetNumberOfInitialSessionsFromRegistry @ 0x140837780 (ExpGetNumberOfInitialSessionsFromRegistry.c)
 *     VRegSetup @ 0x1408A5210 (VRegSetup.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14098BEFC (PiDevCfgClearDeviceMigrationNode.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140A10268 (WmipGetGuidSecurityDescriptor.c)
 *     RtlQueryRegistryValues @ 0x140A10F10 (RtlQueryRegistryValues.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140A13354 (RtlpQueryTimeZoneInformationWorker.c)
 *     ExpPcwDisabledStatus @ 0x140A69904 (ExpPcwDisabledStatus.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140A70B50 (PiDevCfgQueryDeviceMigrationNode.c)
 *     WmipQueryWmiDataBlock @ 0x140AC49C0 (WmipQueryWmiDataBlock.c)
 *     PiDevCfgQueryDriverNode @ 0x140AD009C (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140AD2E94 (PiDevCfgQueryDriverConfiguration.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140AD7354 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140AD7724 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD7C68 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140AD83D0 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwStartAutoLogger @ 0x140B42448 (EtwStartAutoLogger.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B48EE0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140723650 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x140724FD0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpCallQueryRegistryRoutine @ 0x140A11494 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, ULONG a5, char a6)
{
  __int64 v6; // r12
  const WCHAR *v8; // rbx
  int v9; // r15d
  __int64 result; // rax
  bool v11; // zf
  int v12; // esi
  int v13; // r15d
  __int64 Pool2; // rax
  __int64 v15; // rdi
  int v16; // ebx
  ULONG Length; // r13d
  int v18; // eax
  int v19; // eax
  const WCHAR *v20; // rdx
  int v21; // eax
  NTSTATUS v22; // eax
  ULONG v23; // esi
  __int64 v24; // rax
  int v25; // r12d
  ULONG i; // esi
  NTSTATUS v27; // eax
  ULONG v28; // r15d
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  char v32; // al
  int ResultLength; // [rsp+30h] [rbp-61h]
  int ResultLengtha; // [rsp+30h] [rbp-61h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-19h] BYREF
  int v40; // [rsp+E8h] [rbp+57h]

  v40 = a1;
  v6 = a4;
  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  v8 = a2;
  a5 = 0;
  v9 = a1;
  DestinationString = 0LL;
  ValueName = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  if ( (int)result >= 0 )
  {
    v11 = (v9 & 0x40000000) == 0;
    v12 = v9 & 0x40000000;
    v13 = 0;
    if ( !v11 )
      v8 = 0LL;
    RtlInitUnicodeString(&DestinationString, v8);
    Pool2 = ExAllocatePool2(0x100uLL);
    v15 = Pool2;
    if ( !Pool2 )
    {
      v16 = -1073741801;
      if ( !v12 )
        ZwClose(Handle);
      return (unsigned int)v16;
    }
    *(_DWORD *)(Pool2 + 8) = 0;
    v16 = 0;
    Length = 134;
    KeyHandle = Handle;
LABEL_19:
    if ( !*(_QWORD *)a3 && (*(_DWORD *)(a3 + 8) & 0x21) == 0 )
      goto LABEL_8;
    v18 = *(_DWORD *)(a3 + 8);
    if ( (v18 & 0x20) != 0 && (!*(_QWORD *)(a3 + 16) || (v18 & 1) != 0 || *(_QWORD *)a3) )
      goto LABEL_42;
    if ( (v18 & 3) != 0 && KeyHandle != Handle )
    {
      ZwClose(KeyHandle);
      KeyHandle = Handle;
    }
    v19 = *(_DWORD *)(a3 + 8);
    v20 = *(const WCHAR **)(a3 + 16);
    if ( (v19 & 1) == 0 )
    {
      if ( !v20 )
      {
        if ( (v19 & 8) == 0 )
        {
LABEL_46:
          v25 = 0;
          for ( i = 0; ; ++i )
          {
            v27 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, (PVOID)v15, Length, &a5);
            v16 = v27;
            if ( v27 == -2147483643 )
              goto LABEL_48;
            if ( v27 == -2147483622 )
            {
              if ( i || (*(_DWORD *)(a3 + 8) & 4) == 0 )
                v16 = 0;
              else
                v16 = -1073741772;
              goto LABEL_43;
            }
            if ( v27 >= 0 )
            {
              a5 = Length;
              v27 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&a5, a4, ResultLengtha, a6);
              v16 = v27;
            }
            if ( v27 == -1073741789 )
            {
LABEL_48:
              v28 = a5;
              if ( v15 )
                ExFreePoolWithTag((PVOID)v15, 0);
              v29 = ExAllocatePool2(0x100uLL);
              v15 = v29;
              if ( !v29 )
              {
LABEL_7:
                v16 = -1073741801;
                goto LABEL_8;
              }
              v16 = 0;
              Length = v28 + 8;
              *(_DWORD *)(v29 + 8) = 0;
              --i;
              v30 = v25++;
              if ( v30 > 4 )
              {
                DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1646);
                v13 = 0;
                goto LABEL_44;
              }
              v13 = 0;
            }
            else
            {
              if ( v27 < 0 )
                goto LABEL_43;
              v25 = 0;
              if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
              {
                ValueName.Buffer = (wchar_t *)(v15 + 20);
                ValueName.Length = *(_WORD *)(v15 + 16);
                ValueName.MaximumLength = *(_WORD *)(v15 + 16);
                if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
                  --i;
              }
            }
          }
        }
        v16 = guard_dispatch_icall_no_overrides(0LL, 0LL);
        goto LABEL_43;
      }
      RtlInitUnicodeString(&ValueName, v20);
      while ( 1 )
      {
        v21 = v13++;
        if ( v21 > 4 )
        {
          DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1459);
          goto LABEL_8;
        }
        v22 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v15, Length, &a5);
        v16 = v22;
        if ( v22 == -2147483643 )
          goto LABEL_30;
        if ( v22 < 0 )
          break;
        if ( *(_DWORD *)(v15 + 4) == 7 )
        {
          *(_WORD *)(a5 + v15) = 0;
          *(_DWORD *)(v15 + 12) += 2;
        }
        a5 = Length;
        v31 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&a5, v6, ResultLength, a6);
        v16 = v31;
        if ( v31 != -1073741789 )
        {
          v13 = 0;
          if ( v31 < 0 )
            goto LABEL_8;
          if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
            ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_44:
          v6 = a4;
          a3 += 56LL;
          goto LABEL_19;
        }
        v23 = a5;
LABEL_35:
        ExFreePoolWithTag((PVOID)v15, 0);
LABEL_36:
        v24 = ExAllocatePool2(0x100uLL);
        v15 = v24;
        if ( !v24 )
          goto LABEL_7;
        v16 = 0;
        *(_DWORD *)(v24 + 8) = 0;
        Length = v23 + 8;
      }
      if ( v22 == -1073741772 )
      {
        v32 = a6;
        *(_DWORD *)(v15 + 4) = 0;
        *(_DWORD *)(v15 + 12) = 0;
        a5 = Length;
        v22 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&a5, v6, ResultLength, v32);
        v16 = v22;
      }
      if ( v22 != -1073741789 )
      {
        v13 = 0;
        goto LABEL_43;
      }
LABEL_30:
      v23 = a5;
      if ( !v15 )
        goto LABEL_36;
      goto LABEL_35;
    }
    if ( !v20 )
    {
LABEL_42:
      v16 = -1073741811;
      goto LABEL_8;
    }
    RtlInitUnicodeString(&DestinationString, v20);
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
    if ( v16 >= 0 )
    {
      if ( !*(_QWORD *)a3 )
        goto LABEL_44;
      goto LABEL_46;
    }
LABEL_43:
    if ( v16 >= 0 )
      goto LABEL_44;
LABEL_8:
    if ( Handle && (v40 & 0x40000000) == 0 )
      ZwClose(Handle);
    if ( KeyHandle && KeyHandle != Handle )
      ZwClose(KeyHandle);
    if ( v15 )
      ExFreePoolWithTag((PVOID)v15, 0);
    return (unsigned int)v16;
  }
  return result;
}
