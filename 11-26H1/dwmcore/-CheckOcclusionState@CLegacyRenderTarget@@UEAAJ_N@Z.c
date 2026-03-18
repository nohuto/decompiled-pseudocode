/*
 * XREFs of ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1801FBF80
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@WEI@EAAJ_N@Z @ 0x1802471E0 (-CheckOcclusionState@CLegacyRenderTarget@@WEI@EAAJ_N@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@WFA@EAAJ_N@Z @ 0x1802471F0 (-CheckOcclusionState@CLegacyRenderTarget@@WFA@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x1800EEDF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18014ACF0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x1801A1D34 (-GetPresentError@CLegacyRenderTarget@@AEBAJXZ.c)
 *     ??1CFailFastError@@QEAA@XZ @ 0x1801ABF10 (--1CFailFastError@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::CheckOcclusionState(CLegacyRenderTarget *this, char a2)
{
  CLegacyRenderTarget *v2; // r14
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edi
  char IsEnabled; // al
  int v10; // esi
  int PresentError; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h]

  v2 = (CLegacyRenderTarget *)((char *)this - 96);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 12) + 240LL))((char *)this - 96);
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B48, 4u, v5, 0xB3u, 0LL);
LABEL_21:
    if ( v8 == -2003304442 )
    {
      if ( *((_QWORD *)this + 13) )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 8) + 232LL))((char *)this + 64);
      return 142213121;
    }
    return v8;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMResourceUsageS0>::__private_IsEnabled(
                (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DWMResourceUsageS0>::GetImpl'::`2'::impl,
                v6,
                v7);
  v10 = *((_DWORD *)this + 8018);
  if ( IsEnabled )
  {
    if ( v10 != 1 && *((_DWORD *)g_pComposition + 1613) && !a2 )
      return v8;
    PresentError = CLegacyRenderTarget::GetPresentError(v2);
    v17 = g_hrNoHardwareDeviceOverride;
    v12 = *((_QWORD *)this + 13);
    g_hrNoHardwareDeviceOverride = PresentError;
    v18 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 24) + 336LL))(v12 + 24);
    v8 = v13;
    if ( v13 >= 0 )
    {
      if ( v13 == 142213121 )
      {
        *((_DWORD *)this + 8018) = 1;
      }
      else
      {
        (*(void (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 48LL))(this);
        *((_DWORD *)this + 8018) = 2;
        *((_BYTE *)this + 32416) = 1;
        CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 64));
        v8 = 0;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B48, 4u, v13, 0xC0u, 0LL);
    }
    CFailFastError::~CFailFastError((CFailFastError *)&v17);
    goto LABEL_21;
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 48LL))(this);
    *((_BYTE *)this + 32416) = 1;
    if ( v10 == 1 )
      *((_DWORD *)this + 8018) = 2;
    return v8;
  }
  if ( v10 != 1 )
    return v8;
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 336LL))(*((_QWORD *)this + 13) + 24LL);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180377B48, 4u, v14, 0xE7u, 0LL);
    goto LABEL_21;
  }
  if ( v14 != 142213121 )
  {
    v15 = *(_QWORD *)this;
    *((_DWORD *)this + 8018) = 2;
    (*(void (__fastcall **)(CLegacyRenderTarget *))(v15 + 48))(this);
    *((_BYTE *)this + 32416) = 1;
    CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 64));
    return 0;
  }
  return v8;
}
