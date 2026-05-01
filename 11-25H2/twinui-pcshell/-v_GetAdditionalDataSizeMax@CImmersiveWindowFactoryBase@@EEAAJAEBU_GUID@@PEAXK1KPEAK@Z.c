/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1801A92F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801A9664 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@.c)
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
  unsigned int v10; // edi
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  _BYTE v19[16]; // [rsp+48h] [rbp-10h] BYREF

  v7 = a7;
  v8 = 0;
  *a7 = 0;
  v9 = -1;
  v10 = *((_BYTE *)this + 136) != 0 ? 28 : 24;
  if ( *((_BYTE *)this + 144) )
  {
    v16 = *((_BYTE *)this + 136) != 0 ? 32 : 28;
    v17 = v10;
    v18 = -1;
    if ( v10 + 4 >= v10 )
      v18 = v10 + 4;
    v10 = v18;
    v8 = v16 < v17 ? 0x80070216 : 0;
  }
  v11 = `wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl & 4) == 0 )
    v11 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl,
                       v19);
  LODWORD(a7) = 0;
  WORD2(a7) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_18089EC68,
    0xC935C5u,
    (v11 >> 10) & 1,
    (v11 >> 11) & 1,
    (__int64)&a7,
    1u,
    3);
  if ( v8 >= 0 )
  {
    v12 = v10 + 4;
    v13 = -1;
    if ( v10 + 4 >= v10 )
      v13 = v10 + 4;
    v8 = v12 < v10 ? 0x80070216 : 0;
    if ( v12 >= v10 )
    {
      v14 = v13 + 1;
      if ( v13 + 1 >= v13 )
        v9 = v13 + 1;
      v8 = v14 < v13 ? 0x80070216 : 0;
      if ( v14 >= v13 )
        *v7 = v9;
    }
  }
  return (unsigned int)v8;
}
