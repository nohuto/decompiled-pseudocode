/*
 * XREFs of ?v_MarshalAdditionalData@CImmersiveWindowFactoryBase@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1801A9430
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801A9664 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_MarshalAdditionalData(
        CImmersiveWindowFactoryBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4)
{
  HRESULT v6; // ebx
  unsigned int v7; // r8d
  int v9; // [rsp+40h] [rbp-38h] BYREF
  __int16 v10; // [rsp+44h] [rbp-34h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  _BYTE v12[16]; // [rsp+50h] [rbp-28h] BYREF
  char pv; // [rsp+80h] [rbp+8h] BYREF

  v6 = IStream_Write(a2, (char *)this + 108, 0x10u);
  if ( v6 >= 0 )
  {
    v6 = IStream_Write(a2, (char *)this + 124, 4u);
    if ( v6 >= 0 )
    {
      v6 = IStream_Write(a2, (char *)this + 97, 1u);
      if ( v6 >= 0 )
      {
        pv = 0;
        v6 = IStream_Write(a2, &pv, 1u);
        if ( v6 >= 0 )
        {
          v6 = IStream_Write(a2, (char *)this + 136, 1u);
          if ( v6 >= 0 )
          {
            if ( !*((_BYTE *)this + 136) || (v6 = IStream_Write(a2, (char *)this + 140, 4u), v6 >= 0) )
            {
              v6 = IStream_Write(a2, (char *)this + 144, 1u);
              if ( v6 >= 0 )
              {
                if ( *((_BYTE *)this + 144) )
                  v6 = IStream_Write(a2, (char *)this + 148, 4u);
              }
            }
          }
        }
        v7 = `wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl;
        if ( (`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl & 4) == 0 )
        {
          v11 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetCachedFeatureEnabledState(
                             &`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl,
                             v12);
          v7 = v11;
        }
        v9 = 0;
        v10 = 3;
        wil::details::ReportUsageToService(
          (__int64)&unk_18089EC68,
          0xC935C5u,
          (v7 >> 10) & 1,
          (v7 >> 11) & 1,
          (__int64)&v9,
          1u,
          3);
        if ( v6 >= 0 )
        {
          v6 = IStream_Write(a2, (char *)this + 104, 4u);
          if ( v6 >= 0 )
            return (unsigned int)IStream_Write(a2, (char *)this + 160, 1u);
        }
      }
    }
  }
  return (unsigned int)v6;
}
