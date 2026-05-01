/*
 * XREFs of ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18000AB30
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000A40C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_09_NonSec@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000A720 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Standalone_25_09_NonSec@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CDE8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18000DD94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NW4R.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::GetCurrentFeatureEnabledState(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax
  int v4; // edi
  int v5; // edx
  unsigned int v6; // r8d
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax
  unsigned int v11; // ecx
  char v12; // si
  unsigned int v13; // r8d
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v15 = a1;
  v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_internalGetFeatureEnabledState;
  v4 = 1;
  if ( g_wil_details_internalGetFeatureEnabledState
    || (v2 = (__int64 (__fastcall *)(__int64, __int64))g_wil_details_apiGetFeatureEnabledState) != 0LL )
  {
    v5 = v2(52580392LL, 1LL);
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
    v8 = 0LL;
    if ( v6 == 2 )
      v8 = 64LL;
    v9 = v8;
  }
  else
  {
    v8 = 64LL;
    v9 = 64;
  }
  v10 = v7;
  v11 = v8 | v7;
  LOBYTE(v8) = 0;
  *(_DWORD *)a2 = v9 | v10;
  if ( (v11 & 0x400) != 0 && v11 >= 0x800 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( (v11 & 0x40) == 0 )
      goto LABEL_22;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_50902630>::GetImpl'::`2'::impl,
                          v8) )
  {
    v13 = `wil::Feature<__WilFeatureTraits_Feature_Standalone_25_09_NonSec>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_09_NonSec>::GetImpl'::`2'::impl & 4) == 0 )
    {
      v16 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_Standalone_25_09_NonSec>::GetCachedFeatureEnabledState(
               (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Standalone_25_09_NonSec>::GetImpl'::`2'::impl,
               &v16);
      v13 = v16;
    }
    LODWORD(v15) = 0;
    WORD2(v15) = 3;
    wil::details::ReportUsageToService(&unk_180017BD8, 45036790LL, (v13 >> 10) & 1, (v13 >> 11) & 1, &v15, 1, 0);
    LOBYTE(v8) = 1;
  }
  else
  {
    LOBYTE(v8) = 0;
  }
  if ( v12 && !(_BYTE)v8 )
    *(_DWORD *)a2 &= ~0x400u;
LABEL_22:
  if ( (*(_DWORD *)a2 & 0x40) == 0 || !(_BYTE)v8 )
    v4 = 0;
  *(_DWORD *)a2 = v4 | *(_DWORD *)a2 & 0xFFFFFFFE;
  return a2;
}
