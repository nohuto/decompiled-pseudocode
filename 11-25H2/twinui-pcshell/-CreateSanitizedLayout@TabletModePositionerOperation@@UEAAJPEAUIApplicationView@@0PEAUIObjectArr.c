/*
 * XREFs of ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x180503F70
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804AAD7C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x180503C18 (-AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP.c)
 *     ?GetLeftAndRightSnappedViews@TabletModePositionerOperation@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@1@Z @ 0x180504564 (-GetLeftAndRightSnappedViews@TabletModePositionerOperation@@AEAAJPEAUIObjectArray@@PEAPEAUIAppli.c)
 *     ?IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z @ 0x1805047CC (-IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180659804 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18069CEEC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18069D908 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabletModePositionerOperation::CreateSanitizedLayout(
        __int64 a1,
        struct IApplicationView *a2,
        struct IApplicationView *a3,
        struct IObjectArray *a4,
        char a5)
{
  TabletModePositionerOperation *v9; // r12
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  TabletModePositionerOperation *v13; // rcx
  HRESULT (__stdcall *v14)(IObjectArray *, UINT, const IID *const, void **); // rbx
  __int64 *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // eax
  enum DEVICE_SCALE_FACTOR v24; // r8d
  int v25; // eax
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rbx
  __int64 *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v31; // [rsp+30h] [rbp-81h] BYREF
  struct IApplicationView *v32; // [rsp+38h] [rbp-79h] BYREF
  struct IApplicationView *v33; // [rsp+40h] [rbp-71h] BYREF
  ImmersiveApplicationLayout *v34; // [rsp+48h] [rbp-69h] BYREF
  struct IApplicationView *v35; // [rsp+50h] [rbp-61h] BYREF
  int v36; // [rsp+58h] [rbp-59h] BYREF
  __int64 v37; // [rsp+60h] [rbp-51h] BYREF
  int v38; // [rsp+68h] [rbp-49h]
  __int128 v39; // [rsp+70h] [rbp-41h] BYREF
  __int128 v40; // [rsp+80h] [rbp-31h] BYREF
  __int128 v41; // [rsp+90h] [rbp-21h] BYREF
  struct tagSIZE v42[2]; // [rsp+A0h] [rbp-11h]
  __int64 v43; // [rsp+B0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v9 = (TabletModePositionerOperation *)(a1 - 176);
  v37 = (a1 + 16) & -(__int64)(a1 != 176);
  v38 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v37, 1);
  ViewLayoutBehaviorFlags = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v12 = 77LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    goto LABEL_56;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 264LL))(*(_QWORD *)(a1 - 112), 7LL);
  v36 = 0;
  ViewLayoutBehaviorFlags = ((__int64 (__fastcall *)(struct IObjectArray *, int *))a4->lpVtbl->GetCount)(a4, &v36);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v12 = 83LL;
    goto LABEL_55;
  }
  if ( a3 && !TabletModePositionerOperation::IsViewInArray(v13, a3, a4) )
  {
    v31 = 0;
    ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a3, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v31);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 89LL;
      goto LABEL_55;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 232LL))(
                                *(_QWORD *)(a1 - 112),
                                a3,
                                0LL,
                                v31,
                                0LL);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 90LL;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( a2 && !TabletModePositionerOperation::IsViewInArray(v13, a2, a4) )
  {
    v31 = 0;
    ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v31);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 96LL;
      goto LABEL_55;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 232LL))(
                                *(_QWORD *)(a1 - 112),
                                a2,
                                0LL,
                                v31,
                                0LL);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 97LL;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( !v36 )
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 240LL))(
                                *(_QWORD *)(a1 - 112),
                                0LL,
                                0LL,
                                0LL);
    v11 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v12 = 102LL;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( v36 != 1 )
  {
    v33 = 0LL;
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
    if ( (int)TabletModePositionerOperation::GetLeftAndRightSnappedViews(v9, a4, &v33, &v32) >= 0 )
    {
      v39 = 0LL;
      v20 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)v33 + 128LL))(v33, &v39);
      v11 = v20;
      if ( v20 < 0 )
      {
        v21 = 125LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)v20);
LABEL_34:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
        v18 = (__int64 *)&v33;
        goto LABEL_24;
      }
      v40 = 0LL;
      v20 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)v32 + 128LL))(v32, &v40);
      v11 = v20;
      if ( v20 < 0 )
      {
        v21 = 127LL;
        goto LABEL_33;
      }
      v22 = DWORD2(v39);
      v23 = v40 - DWORD2(v39);
      if ( (int)v40 - DWORD2(v39) > 0 )
      {
        DWORD2(v39) += v23 / 2;
        LODWORD(v40) = v23 / 2 + v22;
      }
      v41 = 0LL;
      *(_OWORD *)&v42[0].cx = 0LL;
      v43 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 - 112) + 24LL))(*(_QWORD *)(a1 - 112), &v41);
      LODWORD(v34) = DWORD2(v41) - v41;
      HIDWORD(v34) = HIDWORD(v41) - DWORD1(v41);
      v25 = ImmersiveApplicationLayout::ComputeGutterWidth(v34, (struct tagSIZE)(unsigned int)v42[0].cx, v24);
      DWORD2(v39) += v25 / -2;
      LODWORD(v40) = v25 + DWORD2(v39);
      v20 = TabletModePositionerOperation::AddViewToNewLayout((__int64)v9, v33, (__int64)&v39, 0);
      v11 = v20;
      if ( v20 < 0 )
      {
        v21 = 146LL;
        goto LABEL_33;
      }
      v20 = TabletModePositionerOperation::AddViewToNewLayout((__int64)v9, v32, (__int64)&v40, 1u);
      v11 = v20;
      if ( v20 < 0 )
      {
        v21 = 147LL;
        goto LABEL_33;
      }
LABEL_51:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
      v19 = (__int64 *)&v33;
      goto LABEL_52;
    }
    v34 = 0LL;
    GetAt = a4->lpVtbl->GetAt;
    v27 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v34);
    v28 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))GetAt)(
            a4,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            v27);
    v11 = v28;
    if ( v28 >= 0 )
    {
      v31 = 0;
      v28 = GetViewLayoutBehaviorFlags(v34, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v31);
      v11 = v28;
      if ( v28 >= 0 )
      {
        v28 = (*(__int64 (__fastcall **)(_QWORD, ImmersiveApplicationLayout *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 232LL))(
                *(_QWORD *)(a1 - 112),
                v34,
                0LL,
                v31,
                0LL);
        v11 = v28;
        if ( v28 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
          goto LABEL_51;
        }
        v29 = 157LL;
      }
      else
      {
        v29 = 156LL;
      }
    }
    else
    {
      v29 = 153LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v28);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
    goto LABEL_34;
  }
  v35 = 0LL;
  v14 = a4->lpVtbl->GetAt;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v35);
  v16 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))v14)(
          a4,
          0LL,
          &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
          v15);
  v11 = v16;
  if ( v16 < 0 )
  {
    v17 = 108LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v16);
    v18 = (__int64 *)&v35;
LABEL_24:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
    goto LABEL_56;
  }
  v31 = 0;
  v16 = GetViewLayoutBehaviorFlags(v35, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v31);
  v11 = v16;
  if ( v16 < 0 )
  {
    v17 = 111LL;
    goto LABEL_23;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112)
                                                                                             + 232LL))(
          *(_QWORD *)(a1 - 112),
          v35,
          0LL,
          v31,
          0LL);
  v11 = v16;
  if ( v16 < 0 )
  {
    v17 = 112LL;
    goto LABEL_23;
  }
  v19 = (__int64 *)&v35;
LABEL_52:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
LABEL_53:
  *(_DWORD *)(a1 - 72) = 8 * (a5 & 1) + 1;
  ViewLayoutBehaviorFlags = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v12 = 164LL;
    goto LABEL_55;
  }
LABEL_56:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v37);
  return v11;
}
