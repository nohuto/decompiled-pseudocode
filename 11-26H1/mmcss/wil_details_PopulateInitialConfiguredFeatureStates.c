/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x140010AF4
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x140010A04 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x140004964 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x14000D82C (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

_BYTE *wil_details_PopulateInitialConfiguredFeatureStates()
{
  int **i; // rcx
  char v1; // al
  _BOOL8 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  _BYTE *result; // rax
  _BYTE *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v6 + 56) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = result;
    if ( !result )
      break;
    v9 = 0LL;
    v10 = 0;
    v8 = 0LL;
    v7 = 0LL;
    if ( result[29] || result[30] )
    {
      v3 = -1073741275;
    }
    else
    {
      v1 = result[28];
      v2 = v1 != 3 && v1 != 2;
      v3 = RtlQueryFeatureConfiguration(*((unsigned int *)v6 + 6), v2, &v8, &v9);
      if ( v3 == -2147483614 )
      {
        v7 = 518LL;
        v4 = 518LL;
        do
        {
          **(_QWORD **)v6 = v4;
          result = wil_details_FeatureDescriptors_SkipPadding((_QWORD *)v6 + 7);
          v6 = result;
        }
        while ( result );
        return result;
      }
    }
    wil_details_BuildFeatureStateCacheFromQueryResults(v3, (__int64)&v9, &v7);
    **(_QWORD **)v6 = v7;
  }
  return result;
}
