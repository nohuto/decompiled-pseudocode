/*
 * XREFs of RtlpFtInitialize @ 0x18011D618
 * Callers:
 *     RtlpFtInitOnceCallback @ 0x180147B10 (RtlpFtInitOnceCallback.c)
 * Callees:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18008EECC (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpFcAllocateChangeRegistration @ 0x18008EF18 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpFcInsertChangeRegistration @ 0x18008EFB4 (RtlpFcInsertChangeRegistration.c)
 *     RtlQueryFeatureConfiguration @ 0x1800ECBC0 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 RtlpFtInitialize()
{
  unsigned int v0; // ebx
  int v1; // eax
  int v2; // eax
  bool v3; // sf
  PTP_WORK *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  ULONGLONG v8; // [rsp+20h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION v9; // [rsp+28h] [rbp-20h] BYREF

  v0 = 0;
  *(_QWORD *)&v9.FeatureId = 0LL;
  v8 = 0LL;
  if ( RtlQueryFeatureConfiguration(0x303579Au, RtlFeatureConfigurationBoot, &v8, &v9) < 0
    || (v1 = 1, (v9.Flags & 0x30) != 0x20) )
  {
    v1 = 0;
  }
  _ft_g_isTestReadyMedia = v1;
  if ( byte_1801CA908 )
  {
    v2 = -1073741058;
  }
  else
  {
    v2 = RtlpFcEnsureSubscriptionManagerStarted();
    v3 = v2 < 0;
    if ( v2 < 0 )
      goto LABEL_11;
    v4 = RtlpFcAllocateChangeRegistration((_TP_WORK *)RtlpFtFeatureConfigChangeCallback, 0LL);
    v6 = (__int64)v4;
    if ( v4 )
    {
      RtlpFcInsertChangeRegistration(v5, v4);
      v2 = 0;
      _ft_g_feature_store_change_registration_handle = v6;
    }
    else
    {
      v2 = -1073741670;
    }
  }
  v3 = v2 < 0;
LABEL_11:
  if ( v3 )
    return (unsigned int)v2;
  return v0;
}
