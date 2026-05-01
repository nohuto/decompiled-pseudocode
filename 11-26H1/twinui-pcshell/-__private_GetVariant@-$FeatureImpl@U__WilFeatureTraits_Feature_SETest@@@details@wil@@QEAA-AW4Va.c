/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA?AW4Variant_SETest@@W4VariantReportingKind@3@_N@Z @ 0x1800B9D3C
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180162E20 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x1800B97B8 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x1801253E8 (-SubscribeFeatureStateCacheToConfigurationChanges@details@wil@@YAXPEATwil_details_FeatureStateCa.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805B76A4 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATw.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Variant_SETest@@W4VariantReportingKind@3@_K@Z @ 0x1805B7808 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Var.c)
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
  int v8; // ecx
  unsigned int v9; // r9d
  char v10; // di
  unsigned int v12; // r8d
  bool v13; // zf
  signed __int64 v14; // rax
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF

  LOBYTE(v16) = a3;
  v3 = *(_QWORD *)a1;
  v15 = *(_QWORD *)a1;
  v5 = v15;
  if ( (v15 & 0xC) != 0xC )
  {
    v16 = 0;
    v6 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCurrentVariantState(v7, &v15, &v16);
    v8 = v15;
    v9 = HIDWORD(v15);
    do
    {
      v15 = v3;
      if ( (v3 & 8) != 0 )
      {
        v5 = v15;
      }
      else
      {
        v5 = (v16 != 0 ? 8 : 0) | v8 & 0x800 | v8 & 0x3F000 | v3 & 0xFFFC07F7;
        v15 = __PAIR64__(v9, v5);
      }
      v12 = ((unsigned int)v3 >> 2) & 1;
      if ( !v12 )
      {
        v5 = v5 & 0xFFFFFBFF | v8 & 0x400 | 4;
        LODWORD(v15) = v5;
      }
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v15, v3);
      v13 = v3 == v14;
      v3 = v14;
    }
    while ( !v13 );
    if ( !v12 )
      wil::details::SubscribeFeatureStateCacheToConfigurationChanges(a1, 3LL, v6);
  }
  v10 = (v5 >> 12) & 0x3F;
  if ( v10 )
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportVariantUsage((_DWORD)a1, 1, v10, 2);
  return v10;
}
