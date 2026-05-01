/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000A9F0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000A338 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_05_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000A5B8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_05_NonSec@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CDE8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v4; // ebx
  int v5; // edx
  unsigned int v6; // r8d
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  int v10; // eax
  unsigned int v11; // ecx
  char v12; // dl
  unsigned int v13; // r8d
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v15 = a1;
  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  v4 = 1;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(50902630LL, 1LL);
  }
  else
  {
    v5 = 0;
  }
  *a2 = 0LL;
  v6 = v5 & 0xFFFFFF3F;
  v7 = 8 * (v5 & 0x80 | (4 * (v5 & 0x40 | (4 * (v5 & 3)))));
  if ( (v5 & 0xFFFFFF3F) != 0 )
  {
    v8 = 0;
    if ( v6 == 2 )
      v8 = 64;
    v9 = v8;
  }
  else
  {
    v8 = 64;
    v9 = 64;
  }
  v10 = v7;
  v11 = v8 | v7;
  v12 = 0;
  *(_DWORD *)a2 = v9 | v10;
  if ( (v11 & 0x400) != 0 && v11 >= 0x800 || (v11 & 0x40) != 0 )
  {
    v13 = `wil::Feature<__WilFeatureTraits_Feature_Standalone_25_05_NonSec>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_05_NonSec>::GetImpl'::`2'::impl & 4) == 0 )
    {
      v16 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_05_NonSec>::GetCachedFeatureEnabledState(
               (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_05_NonSec>::GetImpl'::`2'::impl,
               &v16);
      v13 = v16;
    }
    LODWORD(v15) = 0;
    WORD2(v15) = 3;
    wil::details::ReportUsageToService(&unk_180017BE8, 45036777LL, (v13 >> 10) & 1, (v13 >> 11) & 1, &v15, 1, 0);
    v12 = 1;
  }
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !v12 )
    v4 = 0;
  *(_DWORD *)a2 = v4 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
