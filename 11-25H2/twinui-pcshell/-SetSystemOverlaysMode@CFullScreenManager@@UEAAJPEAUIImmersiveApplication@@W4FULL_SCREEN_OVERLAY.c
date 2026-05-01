/*
 * XREFs of ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180327480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800399F8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B3DCC (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z @ 0x1802C8638 (--0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z.c)
 *     ??1?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ @ 0x1802C907C (--1-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ @ 0x180325CD0 (--1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x180327A04 (-StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplicati.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180327B7C (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFullScreenManager::SetSystemOverlaysMode(__int64 a1, struct IUnknown *a2, unsigned int a3)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct IApplicationView **v10; // r9
  int ViewForApplication; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, IUnknown **); // rdi
  int v14; // eax
  HRESULT v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-B8h] BYREF
  struct IPropertyStore *v22; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A0h]
  _QWORD v25[42]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v25);
  v25[0] = &FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::`vftable';
  FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::StartActivity(v25, a2, a3);
  v22 = 0LL;
  QueryInterface = a2->lpVtbl[2].QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, GUID *, struct IPropertyStore **))QueryInterface)(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         &v22);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CPropertyStoreHelper::CPropertyStoreHelper((CPropertyStoreHelper *)&v20, v22);
    v23 = 3;
    v24 = a3;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v20 + 48LL))(
           v20,
           &PKEY_ImmersiveApplication_FullScreenSystemOverlayMode,
           &v23);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                             *(IUnknown **)(a1 - 72),
                             a2,
                             (struct IImmersiveApplication *)&v18,
                             v10);
      v8 = ViewForApplication;
      if ( ViewForApplication >= 0 )
      {
        punk = 0LL;
        v12 = v18;
        v13 = *(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v18 + 80LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
        v14 = v13(v12, &punk);
        v8 = v14;
        if ( v14 >= 0 )
        {
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
          v15 = IUnknown_QueryService(
                  punk,
                  &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
                  &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
                  &ppvOut);
          v8 = v15;
          if ( v15 >= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v18);
            v8 = v16;
            if ( v16 >= 0 )
            {
              wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v25);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
              CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v20);
              v8 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x128,
                (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
                (const char *)(unsigned int)v16);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
              CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v20);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x127,
              (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
              (const char *)(unsigned int)v15);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
            CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v20);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x124,
            (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
            (const char *)(unsigned int)v14);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
          CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v20);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x121,
          (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)ViewForApplication);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
        CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v20);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11C,
        (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v9);
      CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v20);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::~FSMSetSystemOverlaysMode((FullScreenManagerTelemetry::FSMSetSystemOverlaysMode *)v25);
  return v8;
}
