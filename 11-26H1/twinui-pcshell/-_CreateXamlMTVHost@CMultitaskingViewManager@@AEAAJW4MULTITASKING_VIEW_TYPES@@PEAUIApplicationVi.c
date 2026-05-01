/*
 * XREFs of ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180254148
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DF1D8 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180024540 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@IEBAXXZ @ 0x180092E1C (-InternalAddRef@-$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18009A5AC (-XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801DFD6C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x180294324 (-XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAA_NXZ @ 0x1804A1ED0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAA_NXZ.c)
 *     ?XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1806A3778 (-XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1806A8020 (-XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?XamlSnapAssistViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1806AA230 (-XamlSnapAssistViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::_CreateXamlMTVHost(
        _QWORD *a1,
        int a2,
        void *a3,
        const char *a4,
        _QWORD *a5)
{
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  const struct _GUID *v11; // rdx
  int Instance; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  const struct _GUID *v15; // rdx
  const struct _GUID *v16; // rdx
  const struct _GUID *v17; // rdx
  const struct _GUID *v18; // rdx
  const struct _GUID *v19; // rdx
  __int64 v20; // rdx
  __int64 *v21; // rbx
  void *v23[2]; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-51h] BYREF
  void *v25; // [rsp+48h] [rbp-41h]
  __int64 v26; // [rsp+50h] [rbp-39h]
  __int64 v27; // [rsp+58h] [rbp-31h]
  __int64 v28; // [rsp+60h] [rbp-29h]
  __int64 v29; // [rsp+68h] [rbp-21h]
  __int64 v30; // [rsp+70h] [rbp-19h]
  __int64 v31; // [rsp+78h] [rbp-11h]
  __int64 v32; // [rsp+80h] [rbp-9h]
  __int64 v33; // [rsp+88h] [rbp-1h]
  __int64 v34; // [rsp+90h] [rbp+7h]
  __int64 v35; // [rsp+98h] [rbp+Fh]
  __int64 v36; // [rsp+A0h] [rbp+17h]
  __int64 v37; // [rsp+A8h] [rbp+1Fh]
  __int64 v38; // [rsp+B0h] [rbp+27h]
  __int64 v39; // [rsp+B8h] [rbp+2Fh]
  __int64 v40; // [rsp+C0h] [rbp+37h]
  __int64 v41; // [rsp+C8h] [rbp+3Fh]
  __int64 v42; // [rsp+D0h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  *a5 = 0LL;
  v24[0] = a1;
  v24[1] = a1[11];
  if ( a3 )
    v25 = a3;
  else
    v25 = (void *)a1[12];
  v26 = a1[14];
  v27 = a1[19];
  v28 = a1[20];
  v29 = a1[30];
  v30 = a1[27];
  v31 = a1[25];
  v32 = a1[26];
  v33 = a1[28];
  v34 = a1[29];
  v35 = a1[15];
  v36 = a1[18];
  v37 = a1[31];
  v38 = a1[22];
  v39 = a1[21];
  v40 = a1[32];
  v41 = a1[33];
  v42 = a1[34];
  *(_OWORD *)v23 = 0LL;
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( v9 )
      {
        v10 = v9 - 4;
        if ( !v10 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x342,
            (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            a4);
        if ( v10 == 8 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
          Instance = XamlVirtualDesktopSwitcherHost_CreateInstance(
                       (const struct XamlViewHostInitializeArgs *)v24,
                       v11,
                       v23);
          v13 = Instance;
          if ( Instance < 0 )
          {
            v14 = 838LL;
LABEL_29:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v14,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)Instance);
            _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v23);
            return v13;
          }
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
        Instance = XamlSnapAssistViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v24, v15, v23);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v14 = 830LL;
          goto LABEL_29;
        }
      }
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56387219>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56387219>::GetImpl'::`2'::impl) )
    {
      if ( (unsigned int)IsGamingFullScreenExperienceActive() )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
        Instance = XamlGamingTaskViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v24, v16, v23);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v14 = 814LL;
          goto LABEL_29;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
        Instance = XamlTaskViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v24, v17, v23);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v14 = 818LL;
          goto LABEL_29;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
      Instance = XamlTaskViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v24, v18, v23);
      v13 = Instance;
      if ( Instance < 0 )
      {
        v14 = 823LL;
        goto LABEL_29;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v23);
    Instance = XamlAltTabViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v24, v19, v23);
    v13 = Instance;
    if ( Instance < 0 )
    {
      v14 = 805LL;
      goto LABEL_29;
    }
  }
  v20 = a1[37];
  if ( v20 != a1[39]
    || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)(a1 + 36),
              v20 + 1,
              a3) >= 0 )
  {
    ++a1[37];
    v21 = (__int64 *)(16LL * a1[37] + a1[36] - 16LL);
    if ( v21 )
    {
      *v21 = (__int64)v23[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v21);
      v21[1] = (__int64)v23[1];
      Microsoft::WRL::ComPtr<IMultitaskingData>::InternalAddRef(v21 + 1);
    }
  }
  Instance = (**(__int64 (__fastcall ***)(void *, const char *, _QWORD *))v23[0])(v23[0], a4, a5);
  v13 = Instance;
  if ( Instance < 0 )
  {
    v14 = 845LL;
    goto LABEL_29;
  }
  _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v23);
  return 0LL;
}
