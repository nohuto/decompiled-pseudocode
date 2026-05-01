/*
 * XREFs of ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180007794
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18000C2C0 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180019A74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupp.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180019B58 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_Future@@@deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180019C3C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UxAccOptimization@@@deta.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180007A80 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

void __fastcall wil::details::SubscribeFeatureStateCacheToConfigurationChanges(
        volatile signed __int32 *a1,
        int a2,
        int a3)
{
  void *v6; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  _DWORD Source[2]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-10h]

  if ( wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_18002F410);
    if ( a3 && a3 == dword_18002F424 )
    {
      v6 = Destination;
      v7 = qword_18002F468;
      Source[1] = 0;
      v8 = qword_18002F468 - qword_18002F458;
      Source[0] = a2;
      v11 = a1;
      if ( (unsigned __int64)Destination - qword_18002F458 + 16 < qword_18002F468 - qword_18002F458 )
      {
LABEL_9:
        memcpy_s(v6, (v7 - (_QWORD)v6) & -(__int64)((unsigned __int64)v6 < v7), Source, 0x10uLL);
        Destination = (char *)Destination + 16;
LABEL_10:
        ReleaseSRWLockExclusive(&stru_18002F410);
        return;
      }
      v9 = 16LL;
      if ( (unsigned __int64)(2 * v8) > 0x10 )
        v9 = 2 * v8;
      if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&qword_18002F458, v9) )
      {
        v7 = qword_18002F468;
        v6 = Destination;
        goto LABEL_9;
      }
    }
    _InterlockedAnd(a1, a2 != 0 ? -5 : -2111);
    goto LABEL_10;
  }
}
