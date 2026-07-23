/*
 * XREFs of RtlQueryFeatureConfigurationFromBuffers @ 0x14061A91C
 * Callers:
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140CF3F84 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x1404F0F90 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140A52320 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x140A525C0 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 */

__int64 __fastcall RtlQueryFeatureConfigurationFromBuffers(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v6; // rdx
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp-18h] BYREF

  v4 = *(_QWORD **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( a3 < 2 )
  {
    v8 = 0;
    v12[1] = *v4;
    v12[2] = v4[1];
    v11[1] = v4[2];
    v11[2] = v4[3];
    v12[0] = 0LL;
    v11[0] = 0LL;
    if ( v6 )
      v6 = *(_QWORD *)(v6 + 32);
    if ( (unsigned __int8)RtlpFcHasEffectiveStateInGovernedFeatureInfoTable(a2, v6, a3, 0, (__int64)v11, (__int64)&v10)
      || (v8 = RtlpFcQueryFeatureConfigurationFromBuffers(a2, v12, v11, &v10)) == 0 )
    {
      RtlpFcConvertFeatureConfigurationsInternalToExternal((__int64 *)&v10, a4, 1LL);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
