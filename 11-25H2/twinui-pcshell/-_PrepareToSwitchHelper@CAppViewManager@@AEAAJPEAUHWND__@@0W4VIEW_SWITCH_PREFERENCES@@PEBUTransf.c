/*
 * XREFs of ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1802FB8D0
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802FAB20 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802FB764 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003E32C (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800402F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     WPP_SF_qd @ 0x180041A80 (WPP_SF_qd.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1801C71DC (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     WPP_SF_d @ 0x180228808 (WPP_SF_d.c)
 *     WPP_SF_ @ 0x18022DA04 (WPP_SF_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F510C (--1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F8F54 (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802FB520 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     WPP_SF_qqL @ 0x1802FD97C (WPP_SF_qqL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_PrepareToSwitchHelper(
        CAppViewManager *a1,
        HWND a2,
        HWND a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        _BYTE *a7,
        _BYTE *a8)
{
  __int64 v12; // rdx
  __int64 v13; // r8
  bool v14; // r14
  int GlomForWindow; // ebx
  CAppViewManager *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  USHORT v19; // dx
  int v20; // edi
  int v21; // eax
  struct IUnknown **v22; // rdx
  int v23; // edi
  int v24; // eax
  __int64 v25; // rax
  __int64 v27; // [rsp+20h] [rbp-E0h]
  bool v28; // [rsp+30h] [rbp-D0h] BYREF
  bool v29; // [rsp+31h] [rbp-CFh] BYREF
  struct IUnknown *v30; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  _BYTE *v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  _BYTE *v37; // [rsp+70h] [rbp-90h]
  __int64 *v38; // [rsp+78h] [rbp-88h]
  _QWORD v39[42]; // [rsp+80h] [rbp-80h] BYREF

  v36 = a5;
  v38 = a6;
  v37 = a7;
  v35 = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v39,
    (__int64)"PrepareToSwitchHelper");
  v39[0] = &CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchHelper::StartActivity((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v39);
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_qqL(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v12, v13, a2, a3, a4);
  }
  v33 = 0LL;
  v14 = 0;
  v31 = 0LL;
  v30 = 0LL;
  v28 = 0;
  v29 = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
    goto LABEL_62;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a2, (struct IImmersiveApplicationInternal **)&v31, &v28);
  if ( GlomForWindow < 0 )
    goto LABEL_62;
  if ( !v28 )
  {
    GlomForWindow = -2147024891;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x13u,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids,
        -2147024891);
    }
    goto LABEL_62;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a3, (struct IImmersiveApplicationInternal **)&v30, &v29);
  if ( GlomForWindow < 0 )
    goto LABEL_62;
  if ( !CAppViewManager::_IsMultiViewOperationAllowed(v16, (struct IImmersiveApplicationInternal *)v30) )
  {
    GlomForWindow = -2147024891;
    goto LABEL_62;
  }
  v32 = ((__int64 (__fastcall *)(struct IUnknown *))v31->lpVtbl[25].Release)(v31);
  v34 = ((__int64 (__fastcall *)(struct IUnknown *))v30->lpVtbl[25].Release)(v30);
  if ( v29 )
  {
    if ( !((unsigned __int8 (__fastcall *)(struct IUnknown *))v31->lpVtbl[16].Release)(v31)
      && !((unsigned __int8 (__fastcall *)(struct IUnknown *))v30->lpVtbl[16].Release)(v30) )
    {
      if ( (a4 & 2) == 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0x15u,
            &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
        }
        goto LABEL_47;
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                              + 104LL))(
              *((_QWORD **)a1 + 15),
              v31,
              v30,
              0LL);
      GlomForWindow = v17;
      v18 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
      {
LABEL_47:
        v22 = &v30;
        v23 = 0;
        goto LABEL_56;
      }
      v19 = 20;
LABEL_46:
      WPP_SF_d(*(_QWORD *)(v18 + 16), v19, &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids, v17);
      goto LABEL_47;
    }
    if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v30->lpVtbl[16].Release)(v30) )
    {
      v20 = a4 & 2;
      goto LABEL_40;
    }
    if ( v34 != v32 )
    {
      v20 = a4 & 2;
      if ( !v20 )
      {
LABEL_29:
        if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0x17u,
            &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
        }
        if ( (((__int64 (__fastcall *)(struct IUnknown *))v31->lpVtbl[11].Release)(v31) & 2) != 0 )
        {
          v14 = 1;
        }
        else
        {
          v14 = 0;
          GlomForWindow = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *))(**((_QWORD **)a1 + 15) + 80LL))(
                            *((_QWORD **)a1 + 15),
                            v30);
        }
        *v35 = 1;
        goto LABEL_47;
      }
LABEL_40:
      v14 = (((__int64 (__fastcall *)(struct IUnknown *))v31->lpVtbl[11].Release)(v31) & 2) != 0;
      if ( v20 != 2 )
        goto LABEL_47;
      if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v31->lpVtbl[16].Release)(v31) )
        *v35 = 1;
      v17 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                              + 104LL))(
              *((_QWORD **)a1 + 15),
              v31,
              v30,
              0LL);
      GlomForWindow = v17;
      v18 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
      {
        goto LABEL_47;
      }
      v19 = 22;
      goto LABEL_46;
    }
    if ( (a4 & 2) == 0 )
      goto LABEL_29;
    v21 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)a1 + 15)
                                                                                             + 104LL))(
            *((_QWORD **)a1 + 15),
            v30,
            v31,
            v36);
    GlomForWindow = v21;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x18u,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids,
        v21);
    }
  }
  else if ( SHIsSameObject(v31, v30) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x19u,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
    }
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD *, HWND, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)a1 + 15) + 96LL))(
            *((_QWORD **)a1 + 15),
            a3,
            v30,
            v31,
            v36);
    GlomForWindow = v24;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      LODWORD(v27) = v24;
      WPP_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x1Au,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids,
        a2,
        v27);
    }
  }
  v23 = 1;
  v22 = &v31;
LABEL_56:
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v33, v22);
  if ( GlomForWindow >= 0 )
  {
    if ( v14 )
    {
      *v37 = 1;
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x1Bu,
          &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
      }
    }
    v25 = v33;
    v33 = 0LL;
    *v38 = v25;
    GlomForWindow = v23;
  }
LABEL_62:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v39, GlomForWindow);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  CAppViewManagerTelemetry::PrepareToSwitchHelper::~PrepareToSwitchHelper((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v39);
  return (unsigned int)GlomForWindow;
}
