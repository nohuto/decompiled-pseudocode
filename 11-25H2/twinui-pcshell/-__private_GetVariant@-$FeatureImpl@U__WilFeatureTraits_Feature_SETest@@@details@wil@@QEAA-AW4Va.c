/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA?AW4Variant_SETest@@W4VariantReportingKind@3@_N@Z @ 0x18005F9E8
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18005EA88 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x180060090 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180060660 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805936B4 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATw.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Variant_SETest@@W4VariantReportingKind@3@_K@Z @ 0x180593810 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Var.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::__private_GetVariant(
        wil::details *a1,
        __int64 a2,
        char a3)
{
  signed __int64 v3; // rbx
  unsigned int v5; // edi
  unsigned int v6; // ebp
  __int64 v7; // rcx
  char v8; // di
  signed __int64 v10; // rax
  signed __int64 v11; // [rsp+50h] [rbp+8h]
  int v12; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+6Ch] [rbp+24h]

  LOBYTE(v12) = a3;
  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)a1;
  if ( (*(_BYTE *)a1 & 0xC) != 0xC )
  {
    v12 = 0;
    v6 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCurrentVariantState(v7, &v13, &v12);
    while ( 1 )
    {
      v11 = v3;
      if ( (v3 & 8) != 0 )
      {
        v5 = v3;
      }
      else
      {
        v5 = (v12 != 0 ? 8 : 0) | v13 & 0x800 | v13 & 0x3F000 | v3 & 0xFFFC07F7;
        v11 = __PAIR64__(v14, v5);
      }
      if ( (v3 & 4) == 0 )
      {
        v5 = v5 & 0xFFFFFBFF | v13 & 0x400 | 4;
        LODWORD(v11) = v5;
      }
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v3);
      if ( v3 == v10 )
        break;
      v3 = v10;
    }
    if ( (v3 & 4) == 0 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3LL, v6);
  }
  v8 = (v5 >> 12) & 0x3F;
  if ( v8 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportVariantUsage((_DWORD)a1, 1, v8, 2);
  return v8;
}
