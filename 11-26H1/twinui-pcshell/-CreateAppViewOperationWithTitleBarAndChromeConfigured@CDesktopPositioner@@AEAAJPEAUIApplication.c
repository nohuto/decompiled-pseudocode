/*
 * XREFs of ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1800AF60C
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18008E1BC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180254A40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     _lambda_ebca2bf7fa70890e87a68e152d07e31f_::operator() @ 0x18050F28C (_lambda_ebca2bf7fa70890e87a68e152d07e31f_--operator().c)
 *     ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1805102C0 (-HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800AF3D4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationView.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800AF4A0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AF5E4 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800AF8BC (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800AF930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IApplicationViewOperation **a3)
{
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdi
  __int64 v12; // rcx
  CDesktopPositioner *v13; // rcx
  int v14; // eax
  struct IApplicationViewTitlebarConfiguration *v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  struct IApplicationViewTitlebarConfiguration *v18; // rcx
  struct IApplicationViewTitlebarConfiguration *v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IApplicationViewTitlebarConfiguration *v24; // [rsp+68h] [rbp+38h] BYREF

  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v22);
  v6 = v22;
  if ( v22 )
  {
    *(_DWORD *)(v22 + 108) = 255;
    *(_DWORD *)(v6 + 112) = 97;
    *(_DWORD *)(v6 + 168) = 1;
    *(_DWORD *)(v6 + 192) = 0;
    *(_QWORD *)(v6 + 212) = 0LL;
    *(_QWORD *)(v6 + 220) = 0LL;
    *(_QWORD *)(v6 + 196) = 0LL;
    *(_QWORD *)(v6 + 204) = 0LL;
    *(_BYTE *)(v6 + 228) = 1;
    *(_QWORD *)(v6 + 232) = 0LL;
    v21 = 0LL;
    v7 = (__int64 *)*((_QWORD *)this + 42);
    v8 = *v7;
    v21 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v8 + 32))(v7, 1LL, &v21);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA39,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v9);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    else
    {
      v11 = v21;
      if ( *(_QWORD *)(v6 + 176) != v21 )
      {
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        v12 = *(_QWORD *)(v6 + 176);
        *(_QWORD *)(v6 + 176) = v11;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v24 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      v14 = CDesktopPositioner::_CreateTitlebarConfiguration(v13, a2, &v24);
      v10 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA3D,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v22);
        return v10;
      }
      v15 = v24;
      if ( *(struct IApplicationViewTitlebarConfiguration **)(v6 + 184) != v24 )
      {
        if ( v24 )
          (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v24 + 8LL))(v24);
        v16 = *(_QWORD *)(v6 + 184);
        *(_QWORD *)(v6 + 184) = v15;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      *(_DWORD *)(v6 + 116) = 0;
      v17 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Microsoft::WRL::FtmBase>>(
              v6,
              &GUID_cc6192be_2002_4cd1_a603_e3b6795b4000,
              a3);
      v10 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA42,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v17);
        v20 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v20 + 16LL))(v20);
        }
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      else
      {
        v18 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v18 + 16LL))(v18);
        }
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v10 = 0;
      }
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Microsoft::WRL::FtmBase>::Release(v6);
    return v10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA2E,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
