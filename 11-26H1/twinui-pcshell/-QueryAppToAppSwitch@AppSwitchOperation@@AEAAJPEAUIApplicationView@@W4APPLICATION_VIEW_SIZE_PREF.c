/*
 * XREFs of ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1805231DC
 * Callers:
 *     ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x180522DF0 (-AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804BC870 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180523794 (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067F8D8 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1806C38F8 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppSwitchOperation::QueryAppToAppSwitch(
        __int64 a1,
        __int64 a2,
        int a3,
        struct IApplicationView *a4,
        __int64 a5,
        _DWORD *a6)
{
  int ViewLayoutBehaviorFlags; // ebx
  __int64 v11; // rdx
  enum DEVICE_SCALE_FACTOR v13; // r8d
  unsigned int v14; // ebx
  __int64 *v15; // rcx
  __int64 v16; // rax
  int IsThreadRTL; // eax
  BOOL v18; // esi
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, BOOL, GUID *, ImmersiveApplicationLayout **); // rbx
  int v21; // eax
  ImmersiveApplicationLayout *v22; // rbx
  void (__fastcall *v23)(ImmersiveApplicationLayout *, GUID *, __int64 *); // rdi
  __int64 *v24; // rax
  int v25; // eax
  int v26; // [rsp+30h] [rbp-50h] BYREF
  ImmersiveApplicationLayout *v27; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  __int128 v29; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v30[2]; // [rsp+58h] [rbp-28h]
  __int64 v31; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a6 = 0;
  v26 = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a4, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v26);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v11 = 359LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return (unsigned int)ViewLayoutBehaviorFlags;
  }
  v29 = 0LL;
  *(_OWORD *)&v30[0].cx = 0LL;
  v31 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), &v29);
  LODWORD(v27) = DWORD2(v29) - v29;
  HIDWORD(v27) = HIDWORD(v29) - DWORD1(v29);
  v14 = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(v27, (struct tagSIZE)(unsigned int)v30[0].cx, v13);
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 184LL))(*(_QWORD *)(a1 + 64), a2)
    || (v26 & 2) != 0 && v14 != 1 )
  {
    ViewLayoutBehaviorFlags = AppSwitchOperation::QuerySwitchToApp(a1, a4, 0LL);
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v11 = 438LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 4LL) )
  {
    v15 = *(__int64 **)(a1 + 64);
    v16 = *v15;
    if ( a3 == 5 )
    {
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IApplicationView *, __int64))(v16 + 248))(
                                  v15,
                                  a2,
                                  a4,
                                  1LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v11 = 381LL;
        goto LABEL_3;
      }
    }
    else
    {
      if ( !(*(unsigned int (**)(void))(v16 + 48))() )
      {
        v26 = 0;
        ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, int *))(**(_QWORD **)(a1 + 64)
                                                                                            + 152LL))(
                                    *(_QWORD *)(a1 + 64),
                                    a2,
                                    0LL,
                                    &v26);
        if ( ViewLayoutBehaviorFlags < 0 )
        {
          v11 = 415LL;
          goto LABEL_3;
        }
        v18 = v26 == 0;
        v27 = 0LL;
        v19 = *(_QWORD *)(a1 + 64);
        v20 = *(__int64 (__fastcall **)(__int64, BOOL, GUID *, ImmersiveApplicationLayout **))(*(_QWORD *)v19 + 96LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
        v21 = v20(v19, v18, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v27);
        ViewLayoutBehaviorFlags = v21;
        if ( v21 >= 0 )
        {
          v28 = 0LL;
          v22 = v27;
          v23 = *(void (__fastcall **)(ImmersiveApplicationLayout *, GUID *, __int64 *))(*(_QWORD *)v27 + 48LL);
          v24 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v28);
          v23(v22, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v24);
          v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64)
                                                                                               + 248LL))(
                  *(_QWORD *)(a1 + 64),
                  v28,
                  a4,
                  1LL);
          ViewLayoutBehaviorFlags = v25;
          if ( v25 >= 0 )
          {
            CAppLayoutOperation::_AddAnimationData(a1 + 24, v28, 5LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1AB,
            (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
            (const char *)(unsigned int)v25);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A5,
            (int)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
            (const char *)(unsigned int)v21);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
        return (unsigned int)ViewLayoutBehaviorFlags;
      }
      if ( v14 > 1 )
      {
        IsThreadRTL = Mirror_IsThreadRTL();
        ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, bool, __int64, _QWORD))(**(_QWORD **)(a1 + 64) + 232LL))(
                                    *(_QWORD *)(a1 + 64),
                                    a4,
                                    IsThreadRTL == 0,
                                    1LL,
                                    0LL);
        if ( ViewLayoutBehaviorFlags < 0 )
        {
          v11 = 396LL;
          goto LABEL_3;
        }
        *a6 |= 2u;
        return 0LL;
      }
      ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
                                  *(_QWORD *)(a1 + 64),
                                  a2,
                                  a4,
                                  1LL);
      if ( ViewLayoutBehaviorFlags < 0 )
      {
        v11 = 402LL;
        goto LABEL_3;
      }
    }
    CAppLayoutOperation::_AddAnimationData(a1 + 24, a2, 5LL);
    return 0LL;
  }
  ViewLayoutBehaviorFlags = AppSwitchOperation::QuerySwitchToApp(a1, a4, 0LL);
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v11 = 374LL;
    goto LABEL_3;
  }
  return 0LL;
}
