/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x14018ED4C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x14018EC8C (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140097978 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x14013A268 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

_BYTE *wil_details_PopulateInitialConfiguredFeatureStates()
{
  int **i; // rcx
  _BYTE *result; // rax
  _BYTE *v2; // rbx
  char v3; // al
  RTL_FEATURE_CONFIGURATION_TYPE v4; // edx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  ULONGLONG ChangeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v2 + 56) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v2 = result;
    if ( !result )
      break;
    *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
    FeatureConfiguration.VariantPayload = 0;
    ChangeStamp = 0LL;
    v7 = 0LL;
    if ( result[29] || result[30] )
    {
      v5 = -1073741275;
    }
    else
    {
      v3 = result[28];
      v4 = v3 != 3 && v3 != 2;
      v5 = RtlQueryFeatureConfiguration(*((_DWORD *)v2 + 6), v4, &ChangeStamp, &FeatureConfiguration);
      if ( v5 == -2147483614 )
      {
        v7 = 518LL;
        v6 = 518LL;
        do
        {
          **(_QWORD **)v2 = v6;
          result = wil_details_FeatureDescriptors_SkipPadding((_QWORD *)v2 + 7);
          v2 = result;
        }
        while ( result );
        return result;
      }
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v5, (__int64)&FeatureConfiguration, &v7);
    **(_QWORD **)v2 = v7;
  }
  return result;
}
