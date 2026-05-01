/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B2A9C
 * Callers:
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAAX_NW4Variant_55855747@@W4VariantReportingKind@3@_K@Z @ 0x1803B8328 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAAX_NW4V.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA?AW4Variant_55855747@@W4VariantReportingKind@3@_N@Z @ 0x1803BAB68 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@QEAA-AW4.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800B97B8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1801253E8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803B45C0 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_55855747@@@details@wil@@AEAA-A.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  int v5; // esi
  __int64 v6; // rcx
  signed __int64 v7; // rax
  int v8; // ecx
  int v9; // r10d
  int v10; // r9d
  unsigned int v11; // r8d
  signed __int64 v12; // rtt
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h] BYREF
  int v16; // [rsp+3Ch] [rbp+14h]

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v14 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_55855747>::GetCurrentVariantState(v6, &v15, &v14);
    v7 = *(_QWORD *)a2;
    v8 = v15;
    v9 = v16;
    do
    {
      v10 = v7;
      *(_QWORD *)a2 = v7;
      if ( (v7 & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v9;
        v10 = v8 & 0x800 | (v14 != 0 ? 8 : 0) | v7 & 0xFFFC07F7 | v8 & 0x3F000;
        *(_DWORD *)a2 = v10;
      }
      v11 = ((unsigned int)v7 >> 2) & 1;
      if ( !v11 )
        *(_DWORD *)a2 = v8 & 0x400 | v10 & 0xFFFFFBFF | 4;
      v12 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, v7);
    }
    while ( v12 != v7 );
    if ( !v11 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges((volatile signed __int32 *)a1, 3u, v5);
  }
  return a2;
}
