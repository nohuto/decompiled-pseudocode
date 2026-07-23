/*
 * XREFs of RtlpAreLegacyDosDeviceNamesEnabled @ 0x1801141C0
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x1800333F0 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800E5174 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1800E54C4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     RtlpInitializeLegacyDosDevicePathState @ 0x180123924 (RtlpInitializeLegacyDosDevicePathState.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F120 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

bool RtlpAreLegacyDosDeviceNamesEnabled()
{
  int v1; // eax
  unsigned __int8 v2; // [rsp+30h] [rbp-19h]
  ULONG ResultLength; // [rsp+38h] [rbp-11h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+78h] [rbp+2Fh] BYREF
  int v7; // [rsp+7Ch] [rbp+33h]
  int v8; // [rsp+80h] [rbp+37h]
  unsigned int v9; // [rsp+84h] [rbp+3Bh]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  if ( (NtCurrentPeb()->AppCompatFlags.QuadPart & 0x400000000LL) != 0 )
    return 1;
  v1 = dword_1801C6294;
  if ( !dword_1801C6294 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"|~";
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    KeyHandle = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
      && NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_180171E58,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v7 == 4
      && v8 == 4 )
    {
      RtlpInitializeLegacyDosDevicePathState(v9);
    }
    if ( KeyHandle )
      NtClose(KeyHandle);
    v1 = dword_1801C6294;
    if ( !dword_1801C6294 )
    {
      if ( (Feature_TreatDosDevicePathsAsNormalFiles__private_featureState & 0x10) == 0 )
      {
        v2 = Feature_TreatDosDevicePathsAsNormalFiles__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_TreatDosDevicePathsAsNormalFiles__private_descriptor,
          Feature_TreatDosDevicePathsAsNormalFiles__private_featureState | 1,
          3u,
          1LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v2,
          3,
          (__int64)&Feature_TreatDosDevicePathsAsNormalFiles__private_descriptor);
      }
      v1 = 2;
      dword_1801C6294 = 2;
    }
  }
  return v1 == 1;
}
