/*
 * XREFs of ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805168F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006F71C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007903C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801EB888 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ @ 0x180515404 (--1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x180516464 (-CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180517674 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x180518E94 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x18051A788 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18051C048 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18051D5D8 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x18051D864 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TabletModePositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3)
{
  IUnknown **v6; // r13
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, struct IUnknown **); // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, __int64, struct IUnknown **); // rbx
  int v15; // eax
  __int64 (__fastcall *v16)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v17; // rax
  int v18; // eax
  bool v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rsi
  int (__fastcall *v23)(__int64, struct IUnknown **); // rdi
  struct IApplicationView *v24; // rdx
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  __int64 v27; // rdx
  struct IApplicationView *v28; // rdx
  int inited; // eax
  __int64 v30; // rsi
  int (__fastcall *v31)(__int64, struct IUnknown **); // rdi
  int v32; // eax
  int ScaleFactor; // eax
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  __int64 v36; // rdx
  bool IsEmpty; // al
  struct tagRECT *p_rc; // r9
  struct IUnknown *v39; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v40; // [rsp+38h] [rbp-C8h] BYREF
  enum DEVICE_SCALE_FACTOR v41[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  struct IUnknown *v44; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v47[42]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v47,
    (__int64)"TMPControlGained");
  v47[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  TabletModeTraceLogging::TMPControlGained::StartActivity(v47, a2, a3);
  v42 = 0;
  v6 = (IUnknown **)(a1 - 128);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 - 128 + 352) + 24LL))(
    *(_QWORD *)(a1 - 128 + 352),
    &v42);
  v7 = *(_DWORD *)(a1 + 108);
  v39 = 0LL;
  if ( v42 == v7 )
  {
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v39);
    v18 = v16(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v17);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x41F,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v18);
LABEL_53:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
      goto LABEL_54;
    }
    v43 = 0;
    if ( ((int (__fastcall *)(struct IUnknown *, int *))v39->lpVtbl[9].QueryInterface)(v39, &v43) < 0 || !v43 )
      goto LABEL_53;
    v19 = 1;
    v20 = 0LL;
    v45 = 0LL;
    rc = 0LL;
    if ( a3 != 4 )
    {
      if ( a3 != 7 )
        goto LABEL_47;
      v40 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)(a1 - 128),
                 v28,
                 (struct IApplicationViewOperation **)&v40);
      if ( inited >= 0 )
      {
        v44 = 0LL;
        v30 = *(_QWORD *)(a1 + 208);
        v31 = *(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v30 + 72LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
        if ( v31(v30, &v44) >= 0 )
          v19 = SHIsSameObject(v44, v39);
        ((void (__fastcall *)(struct IUnknown *, _QWORD))v40->lpVtbl[4].QueryInterface)(v40, 0LL);
        v32 = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown *))v39->lpVtbl[13].AddRef)(v39, v40);
        if ( v32 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x45E,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v32);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x451,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
      }
      ((void (__fastcall *)(struct IUnknown *, struct tagRECT *))v39->lpVtbl[5].AddRef)(v39, &rc);
      OffsetRect(&rc, -rc.left, -rc.top);
      v41[0] = SCALE_100_PERCENT;
      ScaleFactor = TabletModePositioner::GetScaleFactor(v6, v41);
      if ( ScaleFactor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x469,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)ScaleFactor);
      rc.right -= 2 * (int)(float)((float)(v41[0] * GetSystemMetrics(5)) / 100.0);
      rc.bottom -= 2 * (int)(float)((float)(v41[0] * GetSystemMetrics(6)) / 100.0);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v40);
LABEL_43:
      if ( !v19 )
        goto LABEL_52;
      if ( v20 )
      {
        v34 = TabletModePositioner::SwitchToCustomLayoutHelper(v6, v20);
        v35 = retaddr;
        if ( v34 < 0 )
        {
          v36 = 1138LL;
LABEL_51:
          wil::details::in1diag3::_Log_Hr(
            v35,
            (void *)v36,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v34);
        }
LABEL_52:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v45);
        goto LABEL_53;
      }
LABEL_47:
      IsEmpty = Geometry::CRect::IsEmpty((Geometry::CRect *)&rc);
      p_rc = &rc;
      if ( IsEmpty )
        p_rc = 0LL;
      v34 = TabletModePositioner::SwitchToAppHelper(v6, v39, 2LL, p_rc, 0LL);
      v35 = retaddr;
      if ( v34 >= 0 )
        goto LABEL_52;
      v36 = 1145LL;
      goto LABEL_51;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 144), &v39);
    v21 = *(_QWORD *)(a1 + 136);
    if ( v21 && (*(unsigned int (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v21 + 184LL))(v21, v39) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v45, (_QWORD *)(a1 + 136));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 136));
      v20 = v45;
    }
    v40 = 0LL;
    v22 = *(_QWORD *)(a1 + 208);
    v23 = *(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v22 + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v40);
    if ( v23(v22, &v40) < 0 || SHIsSameObject(v40, v39) )
    {
LABEL_31:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v40);
      goto LABEL_43;
    }
    v19 = 0;
    *(_QWORD *)v41 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v41);
    v25 = TabletModePositioner::CreateAndInitApplicationViewOperation(
            (TabletModePositioner *)v6,
            v24,
            (struct IApplicationViewOperation **)v41);
    v26 = retaddr;
    if ( v25 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v41 + 96LL))(*(_QWORD *)v41, 0LL);
      v25 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v39->lpVtbl[13].AddRef)(v39, *(_QWORD *)v41);
      v26 = retaddr;
      if ( v25 >= 0 )
      {
LABEL_30:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v41);
        goto LABEL_31;
      }
      v27 = 1097LL;
    }
    else
    {
      v27 = 1091LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v26,
      (void *)v27,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_30;
  }
  v8 = *(_QWORD *)(a1 + 320);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v8 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
  v10 = v9(v8, 2LL, &v39);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F2,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v10);
  v11 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v39->lpVtbl[1].Release)(v39, 3LL);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F3,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v11);
  if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
    DwmpEndTransitionRequest(91LL);
  TabletModePositioner::SetTabletMode(a1 - 128, v42);
  if ( (int)TabletModePositioner::CancelMoveSizeOperationForOperableView((TabletModePositioner *)(a1 - 128)) < 0 )
  {
    v12 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry((TabletModePositioner *)(a1 - 128));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x403,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v12);
  }
  v13 = *(_QWORD *)(a1 + 320);
  v14 = *(int (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v13 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
  if ( v14(v13, 1LL, &v39) >= 0 )
  {
    v15 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))v39->lpVtbl[1].Release)(v39, 0LL);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x40A,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v15);
  }
  *(_BYTE *)(a1 + 112) = 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
LABEL_54:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v47);
  TabletModeTraceLogging::TMPControlGained::~TMPControlGained((TabletModeTraceLogging::TMPControlGained *)v47);
}
