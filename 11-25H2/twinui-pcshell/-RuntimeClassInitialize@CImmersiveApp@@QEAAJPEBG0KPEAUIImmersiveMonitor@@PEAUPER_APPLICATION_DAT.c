/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1801368F8
 * Callers:
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x1800871D8 (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180038A20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003E32C (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003F660 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003F730 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800402F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800429B8 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180053C64 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_180053C64.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x180086C60 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180136D9C (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppre.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180136E24 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18013708C (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___ @ 0x1802FFFA8 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveApp::RuntimeClassInitialize(
        CImmersiveApp *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        struct IImmersiveMonitor *a5,
        struct PER_APPLICATION_DATA *a6,
        struct IIAMServiceProvider *a7,
        unsigned __int64 a8)
{
  LPCWSTR *v11; // r12
  int v12; // r15d
  __int64 v13; // rdx
  PCWSTR StringRawBuffer; // rax
  enum ORIENTATION_PREFERENCE *v15; // r8
  unsigned int v16; // r14d
  unsigned int v17; // edi
  int v18; // eax
  int (__fastcall *v19)(struct IIAMServiceProvider *, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  __int64 v20; // rdi
  int (__fastcall *v21)(__int64, __int64 *); // rbx
  __int64 v22; // rdx
  __int64 *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda; // rax
  __int64 v24; // rbx
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rcx
  struct IImmersiveMonitor *v27; // rcx
  unsigned int v29[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h]
  struct IImmersiveMonitor *v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  struct IIAMServiceProvider *v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  const unsigned __int16 *v36; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v37[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v38[42]; // [rsp+80h] [rbp-80h] BYREF

  v36 = a3;
  v32 = a5;
  v34 = a7;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v38,
    (__int64)"Initialization");
  v38[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)v38, a2);
  v11 = (LPCWSTR *)((char *)this + 576);
  v12 = SHStrDupW(a2, (LPWSTR *)this + 72);
  if ( v12 >= 0 )
  {
    *((_DWORD *)this + 146) = a4;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 95, (__int64)v32);
    *((_BYTE *)this + 740) = *((_BYTE *)a6 + 28);
    *((_BYTE *)this + 741) = *((_BYTE *)a6 + 29);
    *((_BYTE *)this + 742) = *((_BYTE *)a6 + 30);
    *((_BYTE *)this + 743) = *((_BYTE *)a6 + 31);
    *((_BYTE *)this + 744) = *((_BYTE *)a6 + 32);
    *((_BYTE *)this + 745) = *((_BYTE *)a6 + 33);
    *((_BYTE *)this + 746) = *((_BYTE *)a6 + 34);
    *((_BYTE *)this + 747) = *((_BYTE *)a6 + 35);
    *((_BYTE *)this + 748) = *((_BYTE *)a6 + 36);
    *((_BYTE *)this + 749) = *((_BYTE *)a6 + 37);
    LOBYTE(v13) = 3;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::__private_IsEnabledPreCheck(
      &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
      v13);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a6, 0LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
      (__int64)this + 592,
      (__int64)StringRawBuffer,
      0xFFFFFFFFFFFFFFFFuLL);
    v12 = CImmersiveApp::CImmersiveWindowCollection::Initialize((CImmersiveApp *)((char *)this + 288), a7);
    if ( v12 >= 0 )
    {
      v16 = 500;
      v30 = 500;
      v31 = 768;
      if ( (int)CallerIdentity::GetManifestedOrientationPreference(*v11, (const unsigned __int16 *)this + 376, v15) < 0 )
        *((_DWORD *)this + 188) = 0;
      if ( *((_BYTE *)this + 740) )
      {
        v17 = 320;
        v30 = 320;
      }
      else if ( *((_BYTE *)this + 746) )
      {
        memset(v37, 0, sizeof(v37));
        v17 = 320;
        if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                    (__int64)v37,
                    L"%s\\%s",
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
                    *v11) >= 0 )
        {
          v29[0] = 0;
          if ( (int)SHRegGetDWORD(HKEY_CURRENT_USER, v37[0], L"MinWidth", v29) >= 0 )
          {
            v18 = v30;
            if ( v29[0] == 1 )
              v18 = 320;
            v30 = v18;
          }
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v37);
      }
      else
      {
        v17 = 320;
        v31 = 320;
      }
      if ( *((_BYTE *)this + 742) )
      {
        v30 = 192;
        v31 = 48;
      }
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 54) + 208LL))(*((_QWORD *)this + 54), &v30);
      v32 = 0LL;
      v19 = *(int (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v34 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      if ( v19(v34, &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c, &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c, &v32) >= 0 )
      {
        *(_QWORD *)v29 = 0LL;
        if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, LPCWSTR, unsigned int *))(*(_QWORD *)v32 + 56LL))(
               v32,
               *v11,
               v29) >= 0 )
        {
          if ( (int)v29[0] < 500 )
            v16 = v29[0];
          v30 = v16;
          if ( (int)v29[1] < 320 )
            v17 = v29[1];
          v31 = v17;
        }
      }
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 54) + 200LL))(*((_QWORD *)this + 54), &v30);
      CImmersiveApp::_UpdateWindowTitleAndButtons((int (__fastcall ***)(CImmersiveApp *, GUID *, __int64 *))this);
      v33 = 0LL;
      v20 = *((_QWORD *)this + 54);
      v21 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 136LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      if ( v21(v20, &v33) >= 0 && *((_BYTE *)this + 743) )
      {
        *(_QWORD *)v29 = v33;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v29);
        CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___(&v34, v29);
        v24 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
        v35 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
        *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = 0LL;
        v25 = (volatile signed __int32 *)v34;
        if ( v34 )
        {
          v34 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v25);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v29);
        if ( v24 )
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 54) + 232LL))(*((_QWORD *)this + 54), v24);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
      }
      LOBYTE(v22) = *((_BYTE *)a6 + 26);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 54) + 328LL))(*((_QWORD *)this + 54), v22);
      v26 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v27 + 16LL))(v27);
      }
      if ( v36 )
        v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)this + 632,
                (__int64)v36,
                0xFFFFFFFFFFFFFFFFuLL);
    }
  }
  *((_QWORD *)this + 111) = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v38, v12);
  v38[0] = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v38);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v38);
  return (unsigned int)v12;
}
