/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005F860
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18005EA88 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Variant_SETest@@W4VariantReportingKind@3@_K@Z @ 0x180593810 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Var.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180060090 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180060660 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805936B4 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATw.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCachedVariantState(
        wil::details *a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int64 i; // rcx
  int v8; // edx
  int v9; // r9d
  signed __int64 v10; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+3Ch] [rbp+14h]

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  if ( (v2 & 0xC) != 0xC )
  {
    v12 = 0;
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCurrentVariantState(v6, &v13, &v12);
    for ( i = *(_QWORD *)a2; ; i = v10 )
    {
      v8 = v13;
      v9 = i;
      *(_QWORD *)a2 = i;
      if ( (i & 8) == 0 )
      {
        *(_DWORD *)(a2 + 4) = v14;
        v9 = v8 & 0x800 | (v12 != 0 ? 8 : 0) | i & 0xFFFC07F7 | v8 & 0x3F000;
        *(_DWORD *)a2 = v9;
      }
      if ( (i & 4) == 0 )
        *(_DWORD *)a2 = v8 & 0x400 | v9 & 0xFFFFFBFF | 4;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, *(_QWORD *)a2, i);
      if ( i == v10 )
        break;
    }
    if ( (i & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3LL, v5);
  }
  return a2;
}
