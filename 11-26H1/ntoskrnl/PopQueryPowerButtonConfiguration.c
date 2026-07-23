/*
 * XREFs of PopQueryPowerButtonConfiguration @ 0x14061024C
 * Callers:
 *     PopPowerButtonBugcheckConfigure @ 0x1407DE904 (PopPowerButtonBugcheckConfigure.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 */

__int64 __fastcall PopQueryPowerButtonConfiguration(HANDLE KeyHandle, _BYTE *a2)
{
  ULONG v4; // ebx
  NTSTATUS v5; // edx
  int v6; // ecx
  int v7; // eax
  NTSTATUS v8; // edi
  ULONG ResultLength; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING v13; // [rsp+68h] [rbp-11h] BYREF
  UNICODE_STRING v14; // [rsp+78h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+Fh] BYREF
  int v16; // [rsp+98h] [rbp+1Fh]

  v16 = 0;
  ResultLength = 0;
  v4 = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  KeyValueInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PowerButtonBugcheck");
  RtlInitUnicodeString(&ValueName, L"OneSettingPowerButtonBugcheck");
  RtlInitUnicodeString(&v13, L"PowerButtonLiveDump");
  RtlInitUnicodeString(&v14, L"OneSettingPowerButtonLiveDump");
  v5 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength);
  if ( v5 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
  {
    *(_DWORD *)&PopPdcDeviceListLock.SavedApcStateFill[40] = 0;
    v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( v5 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
    {
      *(_DWORD *)&PopPdcDeviceListLock.SuspendCount = 0;
      v5 = -1073741823;
      *(_DWORD *)&PopPdcDeviceListLock.ApcStateFill[40] = 0;
      goto LABEL_14;
    }
    v7 = HIDWORD(KeyValueInformation);
    *a2 = 1;
    if ( v7 )
    {
      *(_DWORD *)&PopPdcDeviceListLock.SuspendCount = 2;
      goto LABEL_10;
    }
    *(_DWORD *)&PopPdcDeviceListLock.SuspendCount = 1;
LABEL_12:
    *(_DWORD *)&PopPdcDeviceListLock.ApcStateFill[40] = 1;
    goto LABEL_14;
  }
  v6 = HIDWORD(KeyValueInformation);
  *a2 = 1;
  if ( !v6 )
  {
    *(_DWORD *)&PopPdcDeviceListLock.SavedApcStateFill[40] = 1;
    goto LABEL_12;
  }
  *(_DWORD *)&PopPdcDeviceListLock.SavedApcStateFill[40] = 2;
LABEL_10:
  *(_DWORD *)&PopPdcDeviceListLock.ApcStateFill[40] = 2;
LABEL_14:
  DbgPrintEx(
    0x92u,
    2u,
    "%s (Bugcheck) completed with Status: %08x, ManualBugcheckConfig: %08x, OneSettingBugcheckConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    v5,
    *(_DWORD *)&PopPdcDeviceListLock.SavedApcStateFill[40],
    *(_DWORD *)&PopPdcDeviceListLock.SuspendCount);
  v8 = ZwQueryValueKey(KeyHandle, &v13, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( v8 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
  {
    v4 = WORD6(KeyValueInformation) & 0x1FF;
    PopPdcDeviceListLock.SchedulerApc.SpareByte0 = 1;
    PopPdcDeviceListLock.SchedulerApc.SpareLong0 = v4;
  }
  else
  {
    PopPdcDeviceListLock.SchedulerApc.SpareByte0 = 0;
    PopPdcDeviceListLock.SchedulerApc.SpareLong0 = 0;
    v8 = ZwQueryValueKey(KeyHandle, &v14, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
    if ( v8 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
    {
      PopPdcDeviceListLock.SchedulerApcFill3[8] = 0;
      v8 = -1073741823;
      *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[12] = 0;
      goto LABEL_22;
    }
    v4 = WORD6(KeyValueInformation) & 0x1FF;
    PopPdcDeviceListLock.SchedulerApcFill3[8] = 1;
    *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[12] = v4;
  }
  *a2 = 1;
LABEL_22:
  LODWORD(PopPdcDeviceListLock.WaitBlockList) = v4;
  DbgPrintEx(
    0x92u,
    2u,
    "%s (LiveDump) completed with Status: %08x, ManualLiveDumpConfig %08x, OneSettingLiveDumpConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    v8,
    PopPdcDeviceListLock.SchedulerApc.SpareLong0,
    *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[12]);
  if ( (PopPdcDeviceListLock.SchedulerApcFill3[4] & 1) != 0
    && !*(_DWORD *)&PopPdcDeviceListLock.SavedApcStateFill[40]
    && *(_DWORD *)&PopPdcDeviceListLock.ApcStateFill[40] == 2 )
  {
    *(_DWORD *)&PopPdcDeviceListLock.ApcStateFill[40] = 1;
  }
  DbgPrintEx(
    0x92u,
    2u,
    "%s completed with settings: PopPowerButtonBugcheckConfig: %08x, PopPowerButtonLiveDumpConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    *(_DWORD *)&PopPdcDeviceListLock.ApcStateFill[40],
    LODWORD(PopPdcDeviceListLock.WaitBlockList));
  return (unsigned int)v8;
}
