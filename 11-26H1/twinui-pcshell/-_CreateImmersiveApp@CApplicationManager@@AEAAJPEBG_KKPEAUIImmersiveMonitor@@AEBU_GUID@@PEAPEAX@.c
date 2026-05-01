/*
 * XREFs of ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A5F3C
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180061BB8 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802DEDD0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1802DF040 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18005D838 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800A5BF4 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ??$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveApplication@@AEAPEBG1AEAKAEAPEAUIImmersiveMonitor@@AEAPEAUPER_APPLICATION_DATA@@AEAPEAUIIAMServiceProvider@@AEA_K@Z @ 0x1800A6244 (--$MakeAndInitialize@VCImmersiveApp@@UIImmersiveApplication@@AEAPEBGAEAPEBGAEAKAEAPEAUIImmersive.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800A6B90 (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A7360 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppre.c)
 *     ??$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@XZ @ 0x1800A73E8 (--$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@UPER_APPLI.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___ @ 0x1800A744C (Windows--Internal--ComTaskPool--QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___.c)
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18015E210 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CApplicationManager::_CreateImmersiveApp(
        CApplicationManager *this,
        CallerIdentity *a2,
        unsigned __int16 **a3,
        int a4,
        struct IImmersiveMonitor *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v9; // r12
  int PackageFullNameFromAppId; // esi
  unsigned __int16 *v11; // r14
  __int64 v12; // rbx
  char *v13; // rax
  __int64 v14; // rdx
  void **v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rcx
  const struct _GUID *v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+48h] [rbp-61h] BYREF
  CallerIdentity *v25; // [rsp+50h] [rbp-59h] BYREF
  __int64 v26; // [rsp+58h] [rbp-51h] BYREF
  __int64 v27; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int16 **v28; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-39h] BYREF
  __int64 v30; // [rsp+78h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v31; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int16 *v32; // [rsp+88h] [rbp-21h] BYREF
  LPVOID pv[3]; // [rsp+90h] [rbp-19h] BYREF
  char v34; // [rsp+A8h] [rbp-1h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, void **); // [rsp+100h] [rbp+57h] BYREF
  unsigned __int16 **v36; // [rsp+108h] [rbp+5Fh] BYREF
  int v37; // [rsp+110h] [rbp+67h]

  v37 = a4;
  v36 = a3;
  v9 = a7;
  *a7 = 0LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (unsigned __int16 *)pv, a3);
  v11 = (unsigned __int16 *)pv[0];
  if ( PackageFullNameFromAppId >= 0 )
  {
    v12 = 0LL;
    v27 = 0LL;
    v24 = 0LL;
    if ( (int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
                (char *)this + 1000,
                &v36,
                &v24) >= 0 )
    {
      v19 = v24;
    }
    else
    {
      v13 = (char *)CreateRefCountedObj<PER_APPLICATION_DATA,>(&a7);
      if ( &v34 != v13 )
      {
        v12 = *(_QWORD *)v13;
        *(_QWORD *)v13 = 0LL;
      }
      v27 = v12;
      v15 = a7;
      if ( a7 )
      {
        a7 = 0LL;
        (*((void (__fastcall **)(void **))*v15 + 2))(v15);
      }
      if ( v11 )
        CApplicationManager::s_LoadQuirksForApp(
          v11,
          (struct PER_APPLICATION_DATA *)((v12 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)));
      LOBYTE(v14) = 3;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::__private_IsEnabledPreCheck(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
        v14);
      v25 = a2;
      v26 = v12;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
      Windows::Internal::ComTaskPool::QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___(v17, v16, v18, &v25);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
      v19 = v24;
      if ( v24 != v12 )
      {
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v20 = v19;
        v19 = v12;
        v24 = v12;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    v35 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    v29 = ((unsigned __int64)this + 192) & -(__int64)(this != 0LL);
    v30 = (v19 + 8) & -(__int64)(v19 != 0);
    v31 = a5;
    LODWORD(a7) = v37;
    v32 = v11;
    v28 = v36;
    v25 = a2;
    v35 = 0LL;
    a6 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a6);
    PackageFullNameFromAppId = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveApp,IImmersiveApplication,unsigned short const * &,unsigned short const * &,unsigned long &,IImmersiveMonitor * &,PER_APPLICATION_DATA * &,IIAMServiceProvider * &,unsigned __int64 &>(
                                 (unsigned int)&a6,
                                 (unsigned int)&v25,
                                 (unsigned int)&v32,
                                 (unsigned int)&a7,
                                 (__int64)&v31,
                                 (__int64)&v30,
                                 (__int64)&v29,
                                 (__int64)&v28);
    if ( PackageFullNameFromAppId >= 0 )
      PackageFullNameFromAppId = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, _QWORD))&a6->Data1)(
                                   a6,
                                   &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                   &v35);
    v21 = a6;
    if ( a6 )
    {
      a6 = 0LL;
      (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v21->Data1 + 16LL))(v21);
    }
    if ( PackageFullNameFromAppId >= 0 )
    {
      if ( v19 != v12
        || (PackageFullNameFromAppId = CApplicationManager::_AddApplicationData(this, a2, &v36, &v27),
            PackageFullNameFromAppId >= 0) )
      {
        PackageFullNameFromAppId = (**v35)(v35, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v9);
      }
    }
    v22 = (__int64)v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 )
    CoTaskMemFree(v11);
  return (unsigned int)PackageFullNameFromAppId;
}
