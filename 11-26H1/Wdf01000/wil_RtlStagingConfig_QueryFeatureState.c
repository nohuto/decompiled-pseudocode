/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x1400DA3D4
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x14008B130 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(
        wil_FeatureState *state,
        unsigned int featureId,
        int featureRequiresSessionChange,
        int *a4)
{
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned __int64 changeStamp; // [rsp+20h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION featureConfiguration; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0;
  changeStamp = 0LL;
  *(_QWORD *)&featureConfiguration.FeatureId = 0LL;
  featureConfiguration.VariantPayload = 0;
  v6 = RtlQueryFeatureConfiguration(featureId, featureRequiresSessionChange == 0, &changeStamp, &featureConfiguration);
  if ( !v6 )
  {
    v7 = *((_DWORD *)&featureConfiguration + 1);
    state->enabledState = (*((_DWORD *)&featureConfiguration + 1) >> 4) & 3;
    state->variant = BYTE1(v7) & 0x3F;
    state->payload = featureConfiguration.VariantPayload;
    state->payloadKind = (unsigned __int16)v7 >> 14;
    state->isWexpConfiguration = (v7 >> 6) & 1;
    state->hasNotification = (v7 >> 7) & 1;
    return 1;
  }
  if ( v6 == 279 )
  {
    state->hasNotification = (*((_DWORD *)&featureConfiguration + 1) >> 7) & 1;
    return 1;
  }
  return v5;
}
