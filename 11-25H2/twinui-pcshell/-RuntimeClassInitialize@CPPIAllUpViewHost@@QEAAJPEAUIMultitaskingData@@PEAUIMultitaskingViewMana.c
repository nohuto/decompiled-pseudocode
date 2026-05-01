/*
 * XREFs of ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x18049E770
 * Callers:
 *     ??$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUITabletModeViewManager@@@Z @ 0x18049E064 (--$MakeAndInitialize@VCPPIAllUpViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewMa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180027CC0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$As@UIFrameInteractionEvents@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFrameInteractionEvents@@@WRL@Microsoft@@@Details@12@@Z @ 0x18049B9C0 (--$As@UIFrameInteractionEvents@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ??$As@UISwitchItemController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@@Details@12@@Z @ 0x18049BA10 (--$As@UISwitchItemController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV-$Co.c)
 *     ??4?$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingData@@@Z @ 0x18049C01C (--4-$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingData@@@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@V12@AEAPEAVCPPIAllUpViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@AEAPEAVCPPIAllUpViewHost@@@Z @ 0x18049DFCC (--$MakeAndInitialize@V-$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@V12@AEAPEAVCPPIAllUpV.c)
 *     ?CSwitchItemElementFactory_CreateInstance@@YAJAEBUSwitchItemElementFactoryCreateParams@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A4354 (-CSwitchItemElementFactory_CreateInstance@@YAJAEBUSwitchItemElementFactoryCreateParams@@PEAUIApp.c)
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1804A6154 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 *     ?CMultitaskingViewFrame_CreateInstance@@YAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A7FD4 (-CMultitaskingViewFrame_CreateInstance@@YAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewC.c)
 *     ?CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AB28C (-CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPPIAllUpViewHost::RuntimeClassInitialize(
        CPPIAllUpViewHost *this,
        struct IMultitaskingData *a2,
        __int64 (__fastcall ***a3)(struct IMultitaskingViewManagerInternal *, GUID *, char *),
        struct IApplicationViewSwitcher *a4,
        struct IImmersiveAppCrusher *a5,
        struct IMultitaskingViewVisibilityServiceInternal *a6,
        struct ITabletModeViewManager *a7)
{
  int inited; // ebx
  __int64 v12; // rdx
  int v13; // eax
  __int64 (__fastcall *v14)(struct IMultitaskingViewManagerInternal *, GUID *, char *); // rdi
  int v15; // eax
  __int64 (__fastcall *v16)(struct IMultitaskingViewManagerInternal *, __int64 *); // rbx
  int v17; // eax
  const struct _GUID *v18; // r8
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 (__fastcall ****v22)(_QWORD, GUID *, __int64 *); // rdi
  struct IWeakReference *v23; // rbx
  int Instance; // eax
  __int64 v25; // rdx
  __int64 *v26; // rsi
  int v27; // eax
  __int64 v28; // rdx
  const struct _GUID *v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  void *v32; // [rsp+58h] [rbp-A8h] BYREF
  struct IApplicationViewIconLoader *v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34[2]; // [rsp+68h] [rbp-98h] BYREF
  CPPIAllUpViewHost *v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  struct ITabletModeViewManager *v38; // [rsp+88h] [rbp-78h]
  struct IImmersiveAppCrusher *v39; // [rsp+90h] [rbp-70h]
  _BYTE v40[120]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+118h] [rbp+18h]
  __int64 v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+180h] [rbp+80h]
  __int64 v44; // [rsp+228h] [rbp+128h]
  __int64 v45; // [rsp+2C8h] [rbp+1C8h]
  __int64 v46; // [rsp+340h] [rbp+240h]
  __int64 v47; // [rsp+408h] [rbp+308h]
  __int64 v48; // [rsp+4C0h] [rbp+3C0h]
  wil::details::in1diag3 *retaddr; // [rsp+598h] [rbp+498h]

  v39 = a5;
  v38 = a7;
  inited = CObjectWithThreadUseDetection::InitApartmentId((CPPIAllUpViewHost *)((char *)this + 24));
  if ( inited >= 0 )
  {
    v35 = this;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CPPIAllUpViewHost>,WeakReference::CWeakReference<CPPIAllUpViewHost>,CPPIAllUpViewHost * &>(
            (_QWORD *)this + 21,
            &v35);
    inited = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
        (const char *)(unsigned int)v13);
      v12 = 68LL;
      goto LABEL_3;
    }
    (*(void (__fastcall **)(struct IMultitaskingData *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v37);
    Microsoft::WRL::ComPtr<IMultitaskingData>::operator=((__int64 *)this + 17, (__int64)a2);
    v14 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
    v15 = v14(
            (struct IMultitaskingViewManagerInternal *)a3,
            &GUID_537b455d_1240_433b_82af_10929138b8be,
            (char *)this + 80);
    inited = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
        (const char *)(unsigned int)v15);
LABEL_31:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
      return (unsigned int)inited;
    }
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, (__int64)a6);
    v31 = 0LL;
    v16 = (__int64 (__fastcall *)(struct IMultitaskingViewManagerInternal *, __int64 *))(*a3)[3];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
    v17 = v16((struct IMultitaskingViewManagerInternal *)a3, &v31);
    inited = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
        (const char *)(unsigned int)v17);
LABEL_30:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
      goto LABEL_31;
    }
    (*(void (__fastcall **)(_QWORD, struct IApplicationViewIconLoader **))(**((_QWORD **)this + 17) + 88LL))(
      *((_QWORD *)this + 17),
      &v33);
    v32 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    LODWORD(v35) = 2;
    v19 = CSwitchItemElementFactory_CreateInstance(
            (const struct SwitchItemElementFactoryCreateParams *)&v35,
            v33,
            v18,
            &v32);
    inited = v19;
    if ( v19 < 0 )
    {
      v20 = (unsigned int)v19;
      v21 = 90LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
        (const char *)v20);
LABEL_29:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
      goto LABEL_30;
    }
    v22 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 144);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
    v35 = (CPPIAllUpViewHost *)*((_QWORD *)this + 21);
    v23 = (struct IWeakReference *)v35;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v35);
    inited = CPPIAllUpViewController_CreateInstance(
               v23,
               (struct IMultitaskingViewManagerInternal *)a3,
               a4,
               v39,
               v38,
               v30,
               (void **)this + 18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    if ( inited < 0 )
    {
      v20 = (unsigned int)inited;
      v21 = 98LL;
      goto LABEL_12;
    }
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    MultitaskingViewConfigHelpers::GetConfigFromRegistry(3LL, v40);
    *(_QWORD *)v34 = 0LL;
    Instance = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<ISwitchItemController>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18,
                 (__int64 *)v34);
    inited = Instance;
    if ( Instance < 0 )
    {
      v25 = 106LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
        (const char *)(unsigned int)Instance);
LABEL_28:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v34);
      goto LABEL_29;
    }
    v26 = (__int64 *)((char *)this + 152);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v26);
    Instance = CMultitaskingViewFrame_CreateInstance(9LL, v40, v31, v32, *(_QWORD *)v34, 0LL, 0LL);
    inited = Instance;
    if ( Instance < 0 )
    {
      v25 = 115LL;
      goto LABEL_17;
    }
    v36 = 0LL;
    v27 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IFrameInteractionEvents>(v22, &v36);
    inited = v27;
    if ( v27 >= 0 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v26 + 152LL))(*v26, v36);
      inited = v27;
      if ( v27 >= 0 )
      {
        v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v26 + 40LL))(*v26, v37);
        inited = v27;
        if ( v27 >= 0 )
        {
LABEL_27:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
          goto LABEL_28;
        }
        v28 = 120LL;
      }
      else
      {
        v28 = 119LL;
      }
    }
    else
    {
      v28 = 118LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_27;
  }
  v12 = 65LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
    (const char *)(unsigned int)inited);
  return (unsigned int)inited;
}
