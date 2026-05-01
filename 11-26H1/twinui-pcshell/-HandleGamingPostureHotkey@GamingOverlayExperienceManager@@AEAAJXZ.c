/*
 * XREFs of ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034AD98
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18034EC10 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180014658 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x180297034 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ @ 0x1803306F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ.c)
 *     wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_a7727f50da9d713bf735f2c71ec0999f___ @ 0x18033D1C0 (wil--details--RunWhenCompleteAction_IUnknown_Windows--Foundation--IAsyncAction____lambda_a7727f5.c)
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180340BD8 (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefl_ea_180340BD8.c)
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180340CAC (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefl_ea_180340CAC.c)
 *     ??1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x180342BA0 (--1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ.c)
 *     ?StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z @ 0x18035418C (-StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GamingOverlayExperienceManager::HandleGamingPostureHotkey(GamingOverlayExperienceManager *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64, SID *, GUID *, _QWORD **); // rbx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  _QWORD *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 (__fastcall *v9)(_QWORD *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(_QWORD *, __int64 *); // rdi
  bool v13; // si
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 (__fastcall *v16)(_QWORD *, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(_QWORD *, __int64 *); // rdi
  int v20; // ebx
  _QWORD v22[41]; // [rsp+30h] [rbp-D0h] BYREF
  bool v23; // [rsp+178h] [rbp+78h]
  __int64 v24; // [rsp+180h] [rbp+80h] BYREF
  _QWORD *v25; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v26[42]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v25 = 0LL;
  v1 = *((_QWORD *)this + 56);
  v2 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, _QWORD **))(*(_QWORD *)v1 + 24LL);
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&v25);
  v3 = v2(v1, &SID_GamingPostureController, &GUID_b525603c_e3b6_51fa_bdfc_1ac36cf03dc8, &v25);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v24 = 0LL;
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57804088>::GetImpl'::`2'::impl) )
    {
      v5 = IsGamingFullScreenExperienceActive();
      v6 = v25;
      v7 = v5 == 0;
      v8 = *v25;
      if ( v7 )
      {
        v9 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v8 + 48);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        v10 = v9(v6, &v24);
        v4 = v10;
        if ( v10 < 0 )
        {
          v11 = 4781LL;
LABEL_7:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v11,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v10);
LABEL_14:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
          goto LABEL_21;
        }
      }
      else
      {
        v12 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v8 + 56);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        v10 = v12(v6, &v24);
        v4 = v10;
        if ( v10 < 0 )
        {
          v11 = 4785LL;
          goto LABEL_7;
        }
      }
LABEL_20:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v4 = 0;
      goto LABEL_21;
    }
    v13 = (unsigned int)IsGamingFullScreenExperienceActive() == 0;
    memset_0(v26, 0, 0x148uLL);
    wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v26);
    v26[0] = &GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::`vftable';
    GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::StartActivity(
      (GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v26,
      v13);
    v14 = v25;
    v15 = *v25;
    if ( v13 )
    {
      v16 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v15 + 48);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v17 = v16(v14, &v24);
      v4 = v17;
      if ( v17 < 0 )
      {
        v18 = 4748LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v17);
        GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v26);
        goto LABEL_14;
      }
    }
    else
    {
      v19 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v15 + 56);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v17 = v19(v14, &v24);
      v4 = v17;
      if ( v17 < 0 )
      {
        v18 = 4752LL;
        goto LABEL_13;
      }
    }
    wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v22,
      (__int64)v26);
    v22[0] = &GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::`vftable';
    v23 = v13;
    v20 = wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_a7727f50da9d713bf735f2c71ec0999f___(
            v24,
            (__int64)v22);
    GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v22);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12A5,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v20);
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)v26);
    GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v26);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1282,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v3);
LABEL_21:
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&v25);
  return v4;
}
