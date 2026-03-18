/*
 * XREFs of ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180253770
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@WEI@EAAJ_N@Z @ 0x1802471C0 (-CheckOcclusionState@CDDisplayRenderTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@WFA@EAAJ_N@Z @ 0x1802471D0 (-CheckOcclusionState@CDDisplayRenderTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800EEDF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x18013221C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801D4930 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?CheckOcclusionState@CDDisplaySwapChain@@UEBAJXZ @ 0x1801FFE70 (-CheckOcclusionState@CDDisplaySwapChain@@UEBAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::CheckOcclusionState(CDDisplayRenderTarget *this, char a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rcx
  char v10; // si
  int v11; // eax
  int v12; // esi
  int v13; // eax

  v4 = CDDisplayRenderTarget::TryEnsureSwapChain((CDDisplayRenderTarget *)((char *)this - 96));
  v7 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x16Au, 0LL);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(
                           (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl,
                           v5,
                           v6) )
  {
    if ( v7 != -2147023728 )
    {
      if ( v7 != -2005270526 && v7 != -2003304309 )
      {
        if ( !v7 )
        {
          v12 = *((_DWORD *)this + 8024);
          if ( a2 )
          {
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30128);
            *((_BYTE *)this + 32432) = 1;
            if ( v12 == 1 )
              *((_DWORD *)this + 8024) = 2;
            return v7;
          }
          if ( v12 == 1 )
          {
            v13 = CDDisplaySwapChain::CheckOcclusionState((CDDisplaySwapChain *)(*((_QWORD *)this + 15) + 24LL));
            v7 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1DAu, 0LL);
              return v7;
            }
            if ( v13 == 142213121 )
              return v7;
            *((_DWORD *)this + 8024) = 2;
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30128);
            goto LABEL_35;
          }
        }
        return v7;
      }
      return 142213121;
    }
LABEL_37:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=((__int64)this + 96);
    return 142213121;
  }
  v8 = *((_QWORD *)this + 15);
  if ( !v8 )
    return 142213121LL;
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( v7 != -2147023728 )
    {
      if ( v7 != -2005270526 && v7 != -2003304309 )
        return v7;
      return 142213121;
    }
    goto LABEL_37;
  }
  if ( *((_DWORD *)this + 8024) == 1 || !*((_DWORD *)g_pComposition + 1613) )
  {
    v10 = 1;
LABEL_12:
    v11 = CDDisplaySwapChain::CheckOcclusionState((CDDisplaySwapChain *)(v8 + 24));
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x17Cu, 0LL);
      return v7;
    }
    if ( v11 == 142213121 )
    {
      *((_DWORD *)this + 8024) = 1;
      return v7;
    }
    if ( !v10 && v11 != 142213129 )
    {
LABEL_36:
      CDDisplayRenderTarget::UpdateMPOCaps((CDDisplayRenderTarget *)((char *)this + 64));
      return 0;
    }
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30128);
    *((_DWORD *)this + 8024) = 2;
LABEL_35:
    *((_BYTE *)this + 32432) = 1;
    goto LABEL_36;
  }
  v10 = 0;
  if ( a2 )
    goto LABEL_12;
  return v7;
}
