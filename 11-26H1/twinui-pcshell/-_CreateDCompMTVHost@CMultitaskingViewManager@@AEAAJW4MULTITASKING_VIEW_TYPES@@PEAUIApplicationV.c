/*
 * XREFs of ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A18CC
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DF1D8 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180024540 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@IEBAXXZ @ 0x180092E1C (-InternalAddRef@-$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180124164 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@QEAAX_NW4Rep.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801A3880 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIM_ea_1801A3880.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801DFD6C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AC160 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AC7B0 (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITouchGestureSettings@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AD380 (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AF63C (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CMultitaskingViewManager::_CreateDCompMTVHost(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int64 a4,
        struct IMultitaskingViewManagerInternal *a5)
{
  struct IMultitaskingViewManagerInternal *v9; // r15
  const struct _GUID *v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int Instance; // eax
  __int64 v15; // rdx
  void *v16; // r8
  int v17; // esi
  int v18; // esi
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  const char *v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  __int64 *v25; // rbx
  struct _GUID *v27; // [rsp+30h] [rbp-50h]
  struct _GUID *v28; // [rsp+40h] [rbp-40h]
  void *v29; // [rsp+60h] [rbp-20h] BYREF
  struct IMultitaskingData *v30[2]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v32; // [rsp+B0h] [rbp+30h] BYREF

  v9 = a5;
  *(_QWORD *)a5 = 0LL;
  v29 = 0LL;
  if ( *(_QWORD *)(a1 + 120) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
    v11 = VirtualDesktopThumbnailWindowFilter_CreateInstance(
            *(struct IVirtualDesktopManagerInternal **)(a1 + 120),
            *(struct ITabletModeController **)(a1 + 136),
            *(struct IVirtualDesktopNotificationService **)(a1 + 144),
            v10,
            &v29);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29B,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_31:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
      return v12;
    }
  }
  *(_OWORD *)v30 = 0LL;
  if ( a3 )
  {
    v32 = 0LL;
    v13 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    Instance = v13(a3, &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3, &v32);
    v12 = Instance;
    if ( Instance < 0 )
    {
      v15 = 677LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
LABEL_30:
      _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v30);
      goto LABEL_31;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30[1]);
    v28 = *(struct _GUID **)(a1 + 216);
    v27 = *(struct _GUID **)(a1 + 176);
    Instance = MultitaskingData_CreateInstance(
                 a3,
                 v32,
                 v29,
                 *(_QWORD *)(a1 + 120),
                 *(_QWORD *)(a1 + 128),
                 *(_QWORD *)(a1 + 144));
    v12 = Instance;
    if ( Instance < 0 )
    {
      v15 = 689LL;
      goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30[1]);
    v28 = *(struct _GUID **)(a1 + 216);
    v27 = *(struct _GUID **)(a1 + 176);
    v21 = MultitaskingData_CreateInstance(
            *(_QWORD *)(a1 + 96),
            *(_QWORD *)(a1 + 104),
            v29,
            *(_QWORD *)(a1 + 120),
            *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 144));
    v12 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C0,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v21);
      goto LABEL_30;
    }
  }
  a5 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>>(
    a1,
    &GUID_4026878b_100e_4920_8bc7_baeed683a086,
    &a5);
  v17 = a2 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( !v18 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::GetImpl'::`2'::impl,
        1u,
        (__int64)v16);
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2EC,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        v22);
    }
    if ( v18 == 6 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v30);
      v19 = CPPIAllUpViewHost_CreateInstance(
              v30[1],
              a5,
              *(struct IApplicationViewSwitcher **)(a1 + 112),
              *(struct IImmersiveAppCrusher **)(a1 + 152),
              *(struct IMultitaskingViewVisibilityServiceInternal **)(a1 + 160),
              *(struct ITabletModeViewManager **)(a1 + 184),
              v27,
              (void **)v30);
      v12 = v19;
      if ( v19 < 0 )
      {
        v20 = 759LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)(unsigned int)v19);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
        goto LABEL_30;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v30);
    v19 = CAltTabViewHost_CreateInstance(
            v30[1],
            a5,
            *(struct IApplicationViewSwitcher **)(a1 + 112),
            *(struct IImmersiveAppCrusher **)(a1 + 152),
            *(struct IMultitaskingViewVisibilityServiceInternal **)(a1 + 160),
            *(struct IMultitaskingViewGestureState **)(a1 + 168),
            *(struct IApplicationViewCollection **)(a1 + 96),
            *(struct ITouchGestureSettings **)(a1 + 248),
            v28,
            (void **)v30);
    v12 = v19;
    if ( v19 == -2147019873 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
      _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v30);
      v12 = -2147019873;
      goto LABEL_31;
    }
    if ( v19 < 0 )
    {
      v20 = 729LL;
      goto LABEL_29;
    }
  }
  v23 = (_QWORD *)(a1 + 288);
  v24 = v23[1];
  if ( v24 != v23[3]
    || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)v23,
              v24 + 1,
              v16) >= 0 )
  {
    ++v23[1];
    v25 = (__int64 *)(16LL * v23[1] + *v23 - 16LL);
    if ( v25 )
    {
      *v25 = (__int64)v30[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v25);
      v25[1] = (__int64)v30[1];
      Microsoft::WRL::ComPtr<IMultitaskingData>::InternalAddRef(v25 + 1);
    }
  }
  v19 = (**(__int64 (__fastcall ***)(struct IMultitaskingData *, __int64, struct IMultitaskingViewManagerInternal *))v30[0])(
          v30[0],
          a4,
          v9);
  v12 = v19;
  if ( v19 < 0 )
  {
    v20 = 765LL;
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v29);
  return 0LL;
}
