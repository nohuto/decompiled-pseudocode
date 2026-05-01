/*
 * XREFs of ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18025AFA8
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180187688 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x180067A40 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ?XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D17B8 (-XamlAltTabViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x180143F4C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?InternalAddRef@?$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D41A4 (-InternalAddRef@-$ComPtr@UIMultitaskingData@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18029DE14 (-XamlVirtualDesktopSwitcherHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAA_NXZ @ 0x180491390 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56387219@@@details@wil@@QEAA_NXZ.c)
 *     ?XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x18067C958 (-XamlGamingTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x180680F20 (-XamlTaskViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?XamlSnapAssistViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z @ 0x180682EC0 (-XamlSnapAssistViewHost_CreateInstance@@YAJAEBUXamlViewHostInitializeArgs@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 *v23; // rbx
  void *v25[2]; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v26[2]; // [rsp+38h] [rbp-51h] BYREF
  void *v27; // [rsp+48h] [rbp-41h]
  __int64 v28; // [rsp+50h] [rbp-39h]
  __int64 v29; // [rsp+58h] [rbp-31h]
  __int64 v30; // [rsp+60h] [rbp-29h]
  __int64 v31; // [rsp+68h] [rbp-21h]
  __int64 v32; // [rsp+70h] [rbp-19h]
  __int64 v33; // [rsp+78h] [rbp-11h]
  __int64 v34; // [rsp+80h] [rbp-9h]
  __int64 v35; // [rsp+88h] [rbp-1h]
  __int64 v36; // [rsp+90h] [rbp+7h]
  __int64 v37; // [rsp+98h] [rbp+Fh]
  __int64 v38; // [rsp+A0h] [rbp+17h]
  __int64 v39; // [rsp+A8h] [rbp+1Fh]
  __int64 v40; // [rsp+B0h] [rbp+27h]
  __int64 v41; // [rsp+B8h] [rbp+2Fh]
  __int64 v42; // [rsp+C0h] [rbp+37h]
  __int64 v43; // [rsp+C8h] [rbp+3Fh]
  __int64 v44; // [rsp+D0h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  *a5 = 0LL;
  v26[0] = a1;
  v26[1] = a1[11];
  if ( a3 )
    v27 = a3;
  else
    v27 = (void *)a1[12];
  v28 = a1[14];
  v29 = a1[19];
  v30 = a1[20];
  v31 = a1[30];
  v32 = a1[27];
  v33 = a1[25];
  v34 = a1[26];
  v35 = a1[28];
  v36 = a1[29];
  v37 = a1[15];
  v38 = a1[18];
  v39 = a1[31];
  v40 = a1[22];
  v41 = a1[21];
  v42 = a1[32];
  v43 = a1[33];
  v44 = a1[34];
  *(_OWORD *)v25 = 0LL;
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
            (void *)0x332,
            (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            a4);
        if ( v10 == 8 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
          Instance = XamlVirtualDesktopSwitcherHost_CreateInstance(
                       (const struct XamlViewHostInitializeArgs *)v26,
                       v11,
                       v25);
          v13 = Instance;
          if ( Instance < 0 )
          {
            v14 = 822LL;
LABEL_29:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v14,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)Instance);
            _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v25);
            return v13;
          }
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
        Instance = XamlSnapAssistViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v26, v15, v25);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v14 = 814LL;
          goto LABEL_29;
        }
      }
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56387219>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56387219>::GetImpl'::`2'::impl) )
    {
      if ( (unsigned int)IsGamingFullScreenExperienceActive() )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
        Instance = XamlGamingTaskViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v26, v16, v25);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v14 = 798LL;
          goto LABEL_29;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
        Instance = XamlTaskViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v26, v17, v25);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v14 = 802LL;
          goto LABEL_29;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
      Instance = XamlTaskViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v26, v18, v25);
      v13 = Instance;
      if ( Instance < 0 )
      {
        v14 = 807LL;
        goto LABEL_29;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v25);
    Instance = XamlAltTabViewHost_CreateInstance((const struct XamlViewHostInitializeArgs *)v26, v19, v25);
    v13 = Instance;
    if ( Instance < 0 )
    {
      v14 = 789LL;
      goto LABEL_29;
    }
  }
  v20 = a1 + 36;
  v21 = v20[1];
  if ( v21 != v20[3]
    || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
              (__int64)v20,
              v21 + 1,
              a3) >= 0 )
  {
    v22 = v20[1];
    v20[1] = v22 + 1;
    v23 = (__int64 *)(*v20 + 16 * v22);
    if ( v23 )
    {
      *v23 = (__int64)v25[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v23);
      v23[1] = (__int64)v25[1];
      Microsoft::WRL::ComPtr<IMultitaskingData>::InternalAddRef(v23 + 1);
    }
  }
  Instance = (**(__int64 (__fastcall ***)(void *, const char *, _QWORD *))v25[0])(v25[0], a4, a5);
  v13 = Instance;
  if ( Instance < 0 )
  {
    v14 = 829LL;
    goto LABEL_29;
  }
  _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v25);
  return 0LL;
}
