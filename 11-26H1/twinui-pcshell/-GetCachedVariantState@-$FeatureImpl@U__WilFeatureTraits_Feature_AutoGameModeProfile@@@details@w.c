/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803120CC
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_NW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_K@Z @ 0x180314168 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAA?AW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_N@Z @ 0x18031528C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wi.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800B97B8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1801253E8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x180314D50 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  int v5; // esi
  unsigned int FeatureVariant; // eax
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // eax
  enum FEATURE_CHANGE_TIME v10; // r10d
  signed __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // r8d
  signed __int64 v15; // rtt
  int *v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF
  enum FEATURE_CHANGE_TIME v20; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v18 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    v19 = 0;
    v20 = FEATURE_CHANGE_TIME_READ;
    FeatureVariant = wil::details::WilApi_GetFeatureVariant(
                       (wil::details *)0xB1C4D5,
                       0,
                       (enum FEATURE_CHANGE_TIME)&v20,
                       &v19,
                       &v18,
                       v17);
    v7 = FeatureVariant & 0x100;
    v8 = (v19 != 0 ? 0x400 : 0) | (16 * (FeatureVariant & 0x80));
    v9 = FeatureVariant & 0xFFFFFE7F;
    if ( v9 && (v8 ^= (v9 & 0x3F) << 12, v7) )
      v10 = v20;
    else
      v10 = FEATURE_CHANGE_TIME_READ;
    if ( !v5 )
      v18 = 0;
    v11 = *(_QWORD *)a2;
    do
    {
      v12 = v11;
      *(_QWORD *)a2 = v11;
      if ( (v11 & 8) == 0 )
      {
        v13 = v18;
        *(_DWORD *)(a2 + 4) = v10;
        v12 = ((v13 != 0 ? 8 : 0) | (v11 ^ (v8 ^ v11) & 0x3F000) & 0xFFFFFFF7) ^ ((unsigned __int16)v8 ^ ((v13 != 0 ? 8 : 0) | ((unsigned __int16)v11 ^ ((unsigned __int16)v8 ^ (unsigned __int16)v11) & 0xF000) & 0xFFF7)) & 0x800;
        *(_DWORD *)a2 = v12;
      }
      v14 = ((unsigned int)v11 >> 2) & 1;
      if ( !v14 )
        *(_DWORD *)a2 = v12 ^ (v12 ^ v8) & 0x400 | 4;
      v15 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, v11);
    }
    while ( v15 != v11 );
    if ( !v14 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 0, v5);
  }
  return a2;
}
