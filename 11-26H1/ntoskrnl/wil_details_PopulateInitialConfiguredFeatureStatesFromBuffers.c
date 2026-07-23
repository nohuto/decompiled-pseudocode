/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140CF3F84
 * Callers:
 *     CmFcInitSystem0 @ 0x140CF3DA4 (CmFcInitSystem0.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404F78A8 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlQueryFeatureConfigurationFromBuffers @ 0x14061A91C (RtlQueryFeatureConfigurationFromBuffers.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x14077A77C (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140CF404C (wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults.c)
 */

__int64 *__fastcall wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers(__int64 a1)
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v4; // rbx
  char v5; // al
  unsigned int v6; // r8d
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = v4 + 7 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v4 = result;
    if ( !result )
      break;
    v9 = 0LL;
    v10 = 0;
    v8 = 0LL;
    if ( *((_BYTE *)result + 29) || *((_BYTE *)result + 30) )
    {
      v7 = -1073741275;
    }
    else
    {
      v5 = *((_BYTE *)result + 28);
      v6 = v5 != 3 && v5 != 2;
      v7 = RtlQueryFeatureConfigurationFromBuffers(a1, *((_DWORD *)v4 + 6), v6, &v9);
      if ( v7 == -2147483614 )
        return (__int64 *)wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults(v4);
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v7, (__int64)&v9, &v8);
    *(_QWORD *)*v4 = v8;
  }
  return result;
}
