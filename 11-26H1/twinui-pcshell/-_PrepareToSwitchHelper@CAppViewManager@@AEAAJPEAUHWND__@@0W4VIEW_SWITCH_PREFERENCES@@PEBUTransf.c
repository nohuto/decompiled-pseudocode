/*
 * XREFs of ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1802F6ACC
 * Callers:
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802F5CCC (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1802F6958 (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180043234 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     WPP_SF_qd @ 0x18005F070 (WPP_SF_qd.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005F6F4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1801B9430 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     WPP_SF_d @ 0x1802197BC (WPP_SF_d.c)
 *     WPP_SF_ @ 0x18021E768 (WPP_SF_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F0038 (--1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F4068 (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802F6708 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     WPP_SF_qqL @ 0x1802F8C1C (WPP_SF_qqL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  bool v14; // r15
  int GlomForWindow; // ebx
  CAppViewManager *v16; // rcx
  int v17; // esi
  int v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  USHORT v21; // dx
  int v22; // edi
  int v23; // eax
  struct IUnknown **v24; // rdx
  int v25; // edi
  int v26; // eax
  __int64 v27; // rax
  __int64 v29; // [rsp+20h] [rbp-E0h]
  bool v30; // [rsp+30h] [rbp-D0h] BYREF
  bool v31; // [rsp+31h] [rbp-CFh] BYREF
  struct IUnknown *v32; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  _BYTE *v38; // [rsp+68h] [rbp-98h]
  __int64 *v39; // [rsp+70h] [rbp-90h]
  volatile signed __int32 *v40[42]; // [rsp+80h] [rbp-80h] BYREF

  v37 = a5;
  v39 = a6;
  v38 = a7;
  v36 = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v40,
    (__int64)"PrepareToSwitchHelper");
  v40[0] = (volatile signed __int32 *)&CAppViewManagerTelemetry::PrepareToSwitchHelper::`vftable';
  CAppViewManagerTelemetry::PrepareToSwitchHelper::StartActivity((CAppViewManagerTelemetry::PrepareToSwitchHelper *)v40);
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_qqL(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v12, v13, a2, a3, a4);
  }
  v35 = 0LL;
  v14 = 0;
  v33 = 0LL;
  v32 = 0LL;
  v30 = 0;
  v31 = 0;
  if ( a2 == a3 )
  {
    GlomForWindow = -2147024809;
    goto LABEL_64;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a2, (struct IImmersiveApplicationInternal **)&v33, &v30);
  if ( GlomForWindow < 0 )
    goto LABEL_64;
  if ( !v30 )
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
    goto LABEL_64;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, a3, (struct IImmersiveApplicationInternal **)&v32, &v31);
  v17 = GlomForWindow;
  if ( GlomForWindow < 0 )
    goto LABEL_64;
  if ( !CAppViewManager::_IsMultiViewOperationAllowed(v16, (struct IImmersiveApplicationInternal *)v32) )
  {
    GlomForWindow = -2147024891;
    goto LABEL_64;
  }
  v18 = ((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[25].Release)(v33);
  v34 = ((__int64 (__fastcall *)(struct IUnknown *))v32->lpVtbl[25].Release)(v32);
  if ( v31 )
  {
    if ( !((unsigned __int8 (__fastcall *)(struct IUnknown *))v33->lpVtbl[16].Release)(v33)
      && !((unsigned __int8 (__fastcall *)(struct IUnknown *))v32->lpVtbl[16].Release)(v32) )
    {
      if ( (a4 & 2) == 0 )
      {
        GlomForWindow = v17;
        if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0x15u,
            &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
        }
        goto LABEL_48;
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                              + 104LL))(
              *((_QWORD **)a1 + 15),
              v33,
              v32,
              0LL);
      GlomForWindow = v19;
      v20 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
      {
LABEL_48:
        v24 = &v32;
        v25 = 0;
        goto LABEL_58;
      }
      v21 = 20;
LABEL_47:
      WPP_SF_d(*(_QWORD *)(v20 + 16), v21, &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids, v19);
      goto LABEL_48;
    }
    if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v32->lpVtbl[16].Release)(v32) )
    {
      v22 = a4 & 2;
      goto LABEL_41;
    }
    if ( v34 == v18 )
    {
      v22 = a4 & 2;
    }
    else
    {
      v22 = a4 & 2;
      if ( v22 )
      {
LABEL_41:
        v14 = (((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[11].Release)(v33) & 2) != 0;
        GlomForWindow = v17;
        if ( v22 != 2 )
          goto LABEL_48;
        if ( ((unsigned __int8 (__fastcall *)(struct IUnknown *))v33->lpVtbl[16].Release)(v33) )
          *v36 = 1;
        v19 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                                + 104LL))(
                *((_QWORD **)a1 + 15),
                v33,
                v32,
                0LL);
        GlomForWindow = v19;
        v20 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 4u )
        {
          goto LABEL_48;
        }
        v21 = 22;
        goto LABEL_47;
      }
    }
    if ( v22 != 2 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x17u,
          &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
      }
      if ( (((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[11].Release)(v33) & 2) != 0 )
      {
        v14 = 1;
        GlomForWindow = v17;
      }
      else
      {
        v14 = 0;
        GlomForWindow = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *))(**((_QWORD **)a1 + 15) + 80LL))(
                          *((_QWORD **)a1 + 15),
                          v32);
      }
      *v36 = 1;
      goto LABEL_48;
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)a1 + 15)
                                                                                             + 104LL))(
            *((_QWORD **)a1 + 15),
            v32,
            v33,
            v37);
    GlomForWindow = v23;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x18u,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids,
        v23);
    }
  }
  else if ( SHIsSameObject(v33, v32) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x19u,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
    }
    GlomForWindow = v17;
  }
  else
  {
    v26 = (*(__int64 (__fastcall **)(_QWORD *, HWND, struct IUnknown *, struct IUnknown *, __int64))(**((_QWORD **)a1 + 15) + 96LL))(
            *((_QWORD **)a1 + 15),
            a3,
            v32,
            v33,
            v37);
    GlomForWindow = v26;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      LODWORD(v29) = v26;
      WPP_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x1Au,
        &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids,
        a2,
        v29);
    }
  }
  v25 = 1;
  v24 = &v33;
LABEL_58:
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v35, v24);
  if ( GlomForWindow >= 0 )
  {
    if ( v14 )
    {
      *v38 = 1;
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x1Bu,
          &WPP_02ae13d87ebd31c84dc79c58b3d3a8d1_Traceguids);
      }
    }
    v27 = v35;
    v35 = 0LL;
    *v39 = v27;
    GlomForWindow = v25;
  }
LABEL_64:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v40, GlomForWindow);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v35);
  CAppViewManagerTelemetry::PrepareToSwitchHelper::~PrepareToSwitchHelper(v40);
  return (unsigned int)GlomForWindow;
}
