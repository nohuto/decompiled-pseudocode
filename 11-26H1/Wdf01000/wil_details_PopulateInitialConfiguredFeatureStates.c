/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1400E619C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1400E60AC (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140086154 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1400DA068 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

const wil_details_FeatureDescriptor *wil_details_PopulateInitialConfiguredFeatureStates()
{
  const wil_details_FeatureDescriptor *i; // rcx
  unsigned __int8 changeTime; // al
  _BOOL8 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  const wil_details_FeatureDescriptor *v5; // rax
  const wil_details_FeatureDescriptor *v6; // rbx
  wil_details_FeatureStateCache result; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 changeStamp; // [rsp+28h] [rbp-30h] BYREF
  _RTL_FEATURE_CONFIGURATION featureConfiguration; // [rsp+30h] [rbp-28h] BYREF

  for ( i = wil_details_featureDescriptors_a; ; i = v6 + 1 )
  {
    v5 = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = v5;
    if ( !v5 )
      break;
    *(_QWORD *)&featureConfiguration.FeatureId = 0LL;
    featureConfiguration.VariantPayload = 0;
    changeStamp = 0LL;
    result.exchange64 = 0LL;
    if ( v5->isAlwaysDisabled || v5->isAlwaysEnabled )
    {
      v3 = -1073741275;
    }
    else
    {
      changeTime = v5->changeTime;
      v2 = changeTime != 3 && changeTime != 2;
      v3 = RtlQueryFeatureConfiguration(v6->featureId, v2, &changeStamp, &featureConfiguration);
      if ( v3 == -2147483614 )
      {
        result.exchange64 = 518LL;
        v4 = 518LL;
        do
        {
          v6->featureStateCache->exchange64 = v4;
          v5 = wil_details_FeatureDescriptors_SkipPadding(v6 + 1);
          v6 = v5;
        }
        while ( v5 );
        return v5;
      }
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v3, &featureConfiguration, &result);
    v6->featureStateCache->exchange64 = result.exchange64;
  }
  return v5;
}
