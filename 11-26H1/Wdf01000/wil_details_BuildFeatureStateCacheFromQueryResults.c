/*
 * XREFs of wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1400DA068
 * Callers:
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1400DA31C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1400E619C (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_BuildFeatureStateCacheFromQueryResults(
        int queryStatus,
        const _RTL_FEATURE_CONFIGURATION *featureConfiguration,
        wil_details_FeatureStateCache *result)
{
  int v3; // edx
  unsigned int v4; // edx

  if ( queryStatus == -2147483614 || queryStatus == -1073741275 )
  {
    result->exchange64 = 0LL;
    goto LABEL_9;
  }
  result->exchange64 = 0LL;
  if ( !queryStatus )
  {
    v3 = *((_DWORD *)featureConfiguration + 1) & 0xB0 | (4 * (*((_DWORD *)featureConfiguration + 1) & 0x40));
    goto LABEL_7;
  }
  if ( queryStatus != 279 )
  {
LABEL_9:
    v4 = 518;
    goto LABEL_10;
  }
  v3 = *((_DWORD *)featureConfiguration + 1) & 0x80;
LABEL_7:
  v4 = (8 * v3) | 0x206;
LABEL_10:
  result->exchange = v4;
}
