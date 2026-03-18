/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x1402CA004
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1402C9EE0 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x14013EA14 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1402C94A0 (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

volatile signed __int32 **wil_details_UpdateFeatureConfiguredStates()
{
  _QWORD *i; // rcx
  volatile signed __int32 **result; // rax
  volatile signed __int32 **v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  for ( i = &wil_details_featureDescriptors_a; ; i = v2 + 7 )
  {
    result = (volatile signed __int32 **)wil_details_FeatureDescriptors_SkipPadding(i);
    v2 = result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 29) && !*((_BYTE *)result + 30) && !*((_BYTE *)result + 28) )
    {
      v3 = *((unsigned int *)result + 6);
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      v4 = RtlQueryFeatureConfiguration(v3, 1LL, &v6, &v7);
      v5 = 0LL;
      wil_details_BuildFeatureStateCacheFromQueryResults(v4, (__int64)&v7, &v5);
      _InterlockedXor(*v2, ((unsigned __int16)v5 ^ (unsigned __int16)**v2) & 0xF80);
    }
  }
  return result;
}
