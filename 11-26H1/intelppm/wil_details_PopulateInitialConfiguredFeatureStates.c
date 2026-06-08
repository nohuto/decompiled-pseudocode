/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x14004A854
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x14004A794 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1400088CC (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     wil_details_BuildFeatureStateCacheFromQueryResults @ 0x14002D64C (wil_details_BuildFeatureStateCacheFromQueryResults.c)
 */

_BYTE *wil_details_PopulateInitialConfiguredFeatureStates()
{
  int **i; // rcx
  _BYTE *result; // rax
  _BYTE *v2; // rbx
  char v3; // al
  _BOOL8 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  for ( i = &Feature_ShortQosHysteresisIntel__private_descriptor; ; i = (int **)(v2 + 56) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v2 = result;
    if ( !result )
      break;
    v9 = 0LL;
    v10 = 0;
    v8 = 0LL;
    v7 = 0LL;
    if ( result[29] || result[30] )
    {
      v5 = -1073741275;
    }
    else
    {
      v3 = result[28];
      v4 = v3 != 3 && v3 != 2;
      v5 = ((__int64 (__fastcall *)(_QWORD, _BOOL8, __int64 *, __int64 *, __int64))RtlQueryFeatureConfiguration)(
             *((unsigned int *)v2 + 6),
             v4,
             &v8,
             &v9,
             v7);
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
    wil_details_BuildFeatureStateCacheFromQueryResults(v5, (__int64)&v9, &v7);
    **(_QWORD **)v2 = v7;
  }
  return result;
}
