/*
 * XREFs of ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180523794
 * Callers:
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1805231DC (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x180523E00 (-ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS.c)
 *     ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180523F10 (-SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804BC870 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F8D8 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C4C04 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C52EC (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppSwitchOperation::QuerySwitchToApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  int IsThreadRTL; // r12d
  int ViewLayoutBehaviorFlags; // ebx
  __int64 v8; // rdx
  int v10; // eax
  enum DEVICE_SCALE_FACTOR v11; // r8d
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, GUID *, ImmersiveApplicationLayout **); // rbx
  int v14; // eax
  ImmersiveApplicationLayout *v15; // rbx
  __int64 (__fastcall *v16)(ImmersiveApplicationLayout *, GUID *, __int64 *); // rdi
  __int64 *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  bool v24; // zf
  __int64 (__fastcall *v25)(__int64, __int64); // rax
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // r10
  int v29; // eax
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(__int64, _QWORD, __int64, GUID *, int *); // rbx
  int v32; // eax
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, GUID *, __int64 *); // rdi
  __int64 *v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 *v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rdi
  __int64 (__fastcall *v42)(__int64, _QWORD, __int64, GUID *, ImmersiveApplicationLayout **); // rbx
  int v43; // eax
  __int64 v44; // rdx
  ImmersiveApplicationLayout *v45; // [rsp+30h] [rbp-50h] BYREF
  int v46[4]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v47; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v48[2]; // [rsp+58h] [rbp-28h]
  __int64 v49; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  IsThreadRTL = Mirror_IsThreadRTL();
  v46[0] = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)v46);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v8 = 230LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  v47 = 0LL;
  *(_OWORD *)&v48[0].cx = 0LL;
  v49 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), &v47);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64), 2LL);
  if ( (v46[0] & 2) != 0 )
  {
    if ( v10 )
    {
      v45 = 0LL;
      v12 = *(_QWORD *)(a1 + 64);
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v12 + 112LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
      v14 = v13(v12, 0LL, 2LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v45);
      ViewLayoutBehaviorFlags = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF3,
          (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v14);
LABEL_14:
        v20 = (__int64 *)&v45;
LABEL_15:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v20);
        return (unsigned int)ViewLayoutBehaviorFlags;
      }
      *(_QWORD *)v46 = 0LL;
      v15 = v45;
      v16 = *(__int64 (__fastcall **)(ImmersiveApplicationLayout *, GUID *, __int64 *))(*(_QWORD *)v45 + 48LL);
      v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)v46);
      v18 = v16(v15, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v17);
      ViewLayoutBehaviorFlags = v18;
      if ( v18 < 0 )
      {
        v19 = 246LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v18);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v46);
        goto LABEL_14;
      }
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                          + 248LL))(
              *(_QWORD *)(a1 + 64),
              *(_QWORD *)v46,
              a2,
              2LL);
      ViewLayoutBehaviorFlags = v18;
      if ( v18 < 0 )
      {
        v19 = 248LL;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v46);
      v21 = (__int64 *)&v45;
      goto LABEL_17;
    }
    LODWORD(v45) = DWORD2(v47) - v47;
    HIDWORD(v45) = HIDWORD(v47) - DWORD1(v47);
    if ( ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(v45, (struct tagSIZE)(unsigned int)v48[0].cx, v11) == 1 )
    {
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v8 = 253LL;
        goto LABEL_3;
      }
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(
                *(_QWORD *)(a1 + 64),
                1LL) != 2 )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
      v23 = *(_QWORD *)(a1 + 64);
      v24 = v22 == 1;
      v25 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 80LL);
      if ( v24 )
      {
        v26 = v25(v23, 4LL);
        v27 = *(__int64 **)(a1 + 64);
        v28 = *v27;
        if ( v26 == 1 )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v28 + 248))(
                                      v27,
                                      0LL,
                                      a2,
                                      2LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v8 = 267LL;
            goto LABEL_3;
          }
        }
        else
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, bool, __int64, _QWORD))(v28 + 232))(
                                      v27,
                                      a2,
                                      IsThreadRTL == 0,
                                      2LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v8 = 271LL;
            goto LABEL_3;
          }
        }
      }
      else
      {
        if ( !(unsigned int)v25(v23, 4LL) )
        {
          ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 64)
                                                                                              + 240LL))(
                                      *(_QWORD *)(a1 + 64),
                                      0LL,
                                      0LL,
                                      0LL);
          if ( ViewLayoutBehaviorFlags < 0 )
          {
            v8 = 281LL;
            goto LABEL_3;
          }
        }
        ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, bool, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                                    *(_QWORD *)(a1 + 64),
                                    a2,
                                    IsThreadRTL == 0,
                                    2LL,
                                    0LL);
        if ( ViewLayoutBehaviorFlags < 0 )
        {
          v8 = 283LL;
          goto LABEL_3;
        }
      }
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_FinalizeLayout(a1 + 24, 9LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v8 = 290LL;
        goto LABEL_3;
      }
    }
  }
  else if ( v10 )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 1LL);
    v30 = *(_QWORD *)(a1 + 64);
    if ( v29 == 2 )
    {
      *(_QWORD *)v46 = 0LL;
      v31 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v30 + 112LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v46);
      v32 = v31(v30, 0LL, 1LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v46);
      ViewLayoutBehaviorFlags = v32;
      if ( v32 >= 0 )
      {
        v45 = 0LL;
        v33 = *(_QWORD *)v46;
        v34 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)v46 + 48LL);
        v35 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v45);
        v36 = v34(v33, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v35);
        ViewLayoutBehaviorFlags = v36;
        if ( v36 >= 0 )
        {
          v36 = (*(__int64 (__fastcall **)(_QWORD, ImmersiveApplicationLayout *, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                  *(_QWORD *)(a1 + 64),
                  v45,
                  a2,
                  1LL);
          ViewLayoutBehaviorFlags = v36;
          if ( v36 >= 0 )
          {
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
            v21 = (__int64 *)v46;
LABEL_17:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v21);
            return 0LL;
          }
          v37 = 305LL;
        }
        else
        {
          v37 = 304LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v37,
          (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v36);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12D,
          (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
          (const char *)(unsigned int)v32);
      }
      v20 = (__int64 *)v46;
      goto LABEL_15;
    }
    v38 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v30 + 80LL))(*(_QWORD *)(a1 + 64), 4LL);
    v39 = *(__int64 **)(a1 + 64);
    v40 = *v39;
    if ( v38 != 1 )
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, bool, __int64, _QWORD))(v40 + 232))(
                                  v39,
                                  a2,
                                  IsThreadRTL != 0,
                                  1LL,
                                  0LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v8 = 315LL;
        goto LABEL_3;
      }
      v45 = 0LL;
      v41 = *(_QWORD *)(a1 + 64);
      v42 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v41 + 112LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
      v43 = v42(v41, 0LL, 2LL, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v45);
      ViewLayoutBehaviorFlags = v43;
      if ( v43 >= 0 )
      {
        *(_OWORD *)v46 = 0LL;
        (*(void (__fastcall **)(ImmersiveApplicationLayout *, _QWORD, int *))(*(_QWORD *)v45 + 104LL))(v45, 0LL, v46);
        v43 = CAppLayoutOperation::_FinalizeLayout(a1 + 24, 9LL);
        ViewLayoutBehaviorFlags = v43;
        if ( v43 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
          return 0LL;
        }
        v44 = 325LL;
      }
      else
      {
        v44 = 319LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v44,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v43);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
      return (unsigned int)ViewLayoutBehaviorFlags;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IApplicationView *, __int64))(v40 + 248))(
                                v39,
                                0LL,
                                a2,
                                1LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v8 = 310LL;
      goto LABEL_3;
    }
  }
  else
  {
    v46[0] = 0;
    if ( (a3 & 4) != 0
      || (*(int (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(a1 + 64) + 168LL))(*(_QWORD *)(a1 + 64), 0LL, v46) < 0 )
    {
      ViewLayoutBehaviorFlags = CAppLayoutOperation::_MakeViewFullScreen(a1 + 24, a2, 5LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v8 = 335LL;
        goto LABEL_3;
      }
    }
    else
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                  *(_QWORD *)(a1 + 64),
                                  0LL,
                                  a2,
                                  1LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v8 = 341LL;
        goto LABEL_3;
      }
    }
  }
  return 0LL;
}
