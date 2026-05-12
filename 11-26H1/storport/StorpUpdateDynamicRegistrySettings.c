/*
 * XREFs of StorpUpdateDynamicRegistrySettings @ 0x140077550
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorpUpdateDynamicRegistrySettings(HANDLE KeyHandle)
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
    qword_140172448 = v9;
    if ( !v9 )
      RaidLogListSize = 0;
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
    RaidLogListSize = v9;
    if ( (unsigned int)v9 <= 0x60000 )
    {
      if ( (_DWORD)v9 )
      {
        if ( (unsigned int)v9 < 0x40 )
          RaidLogListSize = 64;
      }
      else
      {
        qword_140172448 = 0LL;
      }
    }
    else
    {
      RaidLogListSize = 393216;
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
    _InterlockedExchange64(&DeviceQueueIoWaitThreshold, v9);
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
    _InterlockedExchange64(&HighLatencyIoThreshold, v9);
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
      _InterlockedExchange64(&g_StorpTraceLoggingDeviceLogPagesPeriod, 36000000000LL * v2);
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
    DeviceTelemetryLiveDumpConfig = v9 != 0;
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
    _InterlockedExchange(&StorEtwErrorEventThrottleLimit, v9);
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
    _InterlockedExchange(&StorEtwWarningEventThrottleLimit, v9);
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
    _InterlockedExchange(&StorEtwInfoEventThrottleLimit, v9);
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
    ReportAllWheaErrorsAsNonFatal = (_DWORD)v9 != 0;
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
    DisableExtensionDriver = 0;
  }
  else if ( v8 == 4 && ResultLength >= 4 )
  {
    DisableExtensionDriver = (_DWORD)v9 != 0;
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
    KsrPowerDownOptimizationEnabled = (_DWORD)v9 != 0;
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
    FirmwareActivateTimeout = v9;
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
    StorageTestFlags = v9;
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
    NvmeKeepAliveTimeoutDefaultMillisecs = 1000 * v9;
    if ( (unsigned int)(1000 * v9) < 0xEA60 || (v3 = 600000, (unsigned int)(1000 * v9) > 0x927C0) )
      NvmeKeepAliveTimeoutDefaultMillisecs = v3;
  }
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
    _InterlockedExchange(&g_DlrmScaleUpThresholdFactorPercent, v9);
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
    _InterlockedExchange(&g_DlrmScaleDownThresholdFactorPercent, v9);
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
    _InterlockedExchange64(&g_DlrmScaleUpTimeWindow100ns, v9);
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
    _InterlockedExchange64(&g_DlrmScaleDownTimeWindow100ns, v9);
  }
  RtlInitUnicodeString(&DestinationString, L"DlrmIdleDetectionTimeout100ns");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v8 == 11
    && ResultLength >= 8
    && (unsigned __int64)(v9 - 50000000) <= 0xEE6B280 )
  {
    _InterlockedExchange64(&g_DlrmIdleDetectionTimeout100ns, v9);
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
    return _InterlockedExchange(&StorLivedumpCodesEnabled, v9);
  return result;
}
