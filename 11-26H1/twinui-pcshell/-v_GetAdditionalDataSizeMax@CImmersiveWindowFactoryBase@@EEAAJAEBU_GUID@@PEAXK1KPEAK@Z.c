/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1800EB060
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18006D890 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800EB858 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
        CImmersiveWindowFactoryBase *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  signed int v8; // ebx
  int v9; // esi
  unsigned int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v17; // eax
  __int64 v18; // [rsp+40h] [rbp-28h] BYREF

  v7 = a7;
  v8 = 0;
  *a7 = 0;
  v9 = -1;
  v10 = *((_BYTE *)this + 136) != 0 ? 28 : 24;
  v11 = v10;
  if ( *((_BYTE *)this + 144) )
  {
    v17 = *((_BYTE *)this + 136) != 0 ? 32 : 28;
    v11 = -1;
    if ( v17 >= v10 )
      v11 = *((_BYTE *)this + 136) != 0 ? 32 : 28;
    v8 = v17 < v10 ? 0x80070216 : 0;
  }
  v12 = `wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v18 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl,
                       &v18);
    v12 = v18;
  }
  LODWORD(a7) = 0;
  WORD2(a7) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1808DF3F8,
    0xC935C5u,
    (v12 >> 10) & 1,
    (v12 >> 11) & 1,
    (__int64)&a7,
    1u,
    3);
  if ( v8 >= 0 )
  {
    v13 = v11 + 4;
    v14 = -1;
    if ( v11 + 4 >= v11 )
      v14 = v11 + 4;
    v8 = v13 < v11 ? 0x80070216 : 0;
    if ( v13 >= v11 )
    {
      v15 = v14 + 1;
      if ( v14 + 1 >= v14 )
        v9 = v14 + 1;
      v8 = v15 < v14 ? 0x80070216 : 0;
      if ( v15 >= v14 )
        *v7 = v9;
    }
  }
  return (unsigned int)v8;
}
