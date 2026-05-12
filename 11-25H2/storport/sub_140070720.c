/*
 * XREFs of sub_140070720 @ 0x140070720
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_1400566F8 @ 0x1400566F8 (sub_1400566F8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140070720(HANDLE KeyHandle)
{
  __int64 v2; // rax
  int v3; // ecx
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v8; // [rsp+54h] [rbp-ACh]
  __int64 v9; // [rsp+5Ch] [rbp-A4h]

  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"LogControlEnable");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 11
    && ResultLength >= 8 )
  {
    qword_140168458 = v9;
    if ( !v9 )
      dword_14016843C = 0;
  }
  RtlInitUnicodeString(&DestinationString, L"LogSize");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4 )
  {
    dword_14016843C = v9;
    if ( (unsigned int)v9 <= 0x60000 )
    {
      if ( (_DWORD)v9 )
      {
        if ( (unsigned int)v9 < 0x40 )
          dword_14016843C = 64;
      }
      else
      {
        qword_140168458 = 0LL;
      }
    }
    else
    {
      dword_14016843C = 393216;
    }
  }
  RtlInitUnicodeString(&DestinationString, L"DeviceQueueIoWaitThreshold");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 11
    && ResultLength >= 8
    && v9 )
  {
    _InterlockedExchange64(&qword_140168430, v9);
  }
  RtlInitUnicodeString(&DestinationString, L"HighLatencyIoThreshold");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 11
    && ResultLength >= 8
    && v9 )
  {
    _InterlockedExchange64(&qword_140168428, v9);
  }
  RtlInitUnicodeString(&DestinationString, L"TelemetryDeviceLogPagesPeriod");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4 )
  {
    v2 = (unsigned int)v9;
    if ( (_DWORD)v9 )
    {
      if ( (unsigned int)v9 >= 0x18uLL )
        v2 = 24LL;
      _InterlockedExchange64(&qword_1401684A0, 36000000000LL * v2);
    }
  }
  RtlInitUnicodeString(&DestinationString, L"DeviceTelemetryLiveDumpEnable");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4 )
  {
    dword_140168420 = v9 != 0;
  }
  RtlInitUnicodeString(&DestinationString, L"StorportEtwErrorThrottleLimit");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4
    && (_DWORD)v9 )
  {
    _InterlockedExchange(&dword_140168474, v9);
  }
  RtlInitUnicodeString(&DestinationString, L"StorportEtwWarningThrottleLimit");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4
    && (_DWORD)v9 )
  {
    _InterlockedExchange(&dword_14016846C, v9);
  }
  RtlInitUnicodeString(&DestinationString, L"StorportEtwInfoThrottleLimit");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4
    && (_DWORD)v9 )
  {
    _InterlockedExchange(&dword_140168470, v9);
  }
  RtlInitUnicodeString(&DestinationString, L"ReportAllWheaErrorsAsNonFatal");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4 )
  {
    byte_140168D34 = (_DWORD)v9 != 0;
  }
  RtlInitUnicodeString(&DestinationString, L"DisableExtensionDriver");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) < 0 )
  {
    byte_1401687EA = 0;
  }
  else if ( v8 == 4 && ResultLength >= 4 )
  {
    byte_1401687EA = (_DWORD)v9 != 0;
  }
  RtlInitUnicodeString(&DestinationString, L"KsrPowerDownOptimizationEnabled");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4 )
  {
    byte_14016841D = (_DWORD)v9 != 0;
  }
  RtlInitUnicodeString(&DestinationString, L"FirmwareActivateTimeout");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4 )
  {
    dword_140168444 = v9;
  }
  RtlInitUnicodeString(&DestinationString, L"TestFlags");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 11
    && ResultLength >= 8 )
  {
    qword_140168890 = v9;
  }
  RtlInitUnicodeString(&DestinationString, L"NvmeKeepAliveTimeoutDefault");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 4
    && ResultLength >= 4 )
  {
    v3 = 60000;
    dword_140168404 = 1000 * v9;
    if ( (unsigned int)(1000 * v9) < 0xEA60 || (v3 = 600000, (unsigned int)(1000 * v9) > 0x927C0) )
      dword_140168404 = v3;
  }
  if ( (unsigned int)sub_1400566F8() )
  {
    RtlInitUnicodeString(&DestinationString, L"DlrmScaleUpThresholdFactorPercent");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v8 == 4
      && ResultLength >= 4
      && (unsigned int)(v9 - 5) <= 0x5F )
    {
      _InterlockedExchange(&dword_1401684F0, v9);
    }
    RtlInitUnicodeString(&DestinationString, L"DlrmScaleDownThresholdFactorPercent");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v8 == 4
      && ResultLength >= 4
      && (unsigned int)(v9 - 5) <= 0x5F )
    {
      _InterlockedExchange(&dword_1401684F4, v9);
    }
    RtlInitUnicodeString(&DestinationString, L"DlrmScaleUpTimeWindow100ns");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v8 == 11
      && ResultLength >= 8
      && (unsigned __int64)(v9 - 100000) <= 0xDBBA0 )
    {
      _InterlockedExchange64(&qword_140168500, v9);
    }
    RtlInitUnicodeString(&DestinationString, L"DlrmScaleDownTimeWindow100ns");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v8 == 11
      && ResultLength >= 8
      && (unsigned __int64)(v9 - 2000000) <= 0x2DC6C00 )
    {
      _InterlockedExchange64(&qword_1401684F8, v9);
    }
  }
  RtlInitUnicodeString(&DestinationString, L"StorLivedumpCodesEnabled");
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &ResultLength);
  if ( result >= 0 && v8 == 4 && ResultLength >= 4 )
    return _InterlockedExchange(&dword_140168408, v9);
  return result;
}
