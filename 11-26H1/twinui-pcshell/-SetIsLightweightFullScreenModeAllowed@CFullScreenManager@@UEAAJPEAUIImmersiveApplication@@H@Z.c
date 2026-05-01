/*
 * XREFs of ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x180323B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180047630 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z @ 0x1802BFE00 (--0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z.c)
 *     ??1?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ @ 0x1802C0958 (--1-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFullScreenManager::SetIsLightweightFullScreenModeAllowed(
        IUnknown **this,
        struct IUnknown *a2,
        int a3)
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
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-28h] BYREF
  struct IPropertyStore *v20; // [rsp+40h] [rbp-20h] BYREF
  __int16 v21; // [rsp+48h] [rbp-18h] BYREF
  __int16 v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v24; // [rsp+98h] [rbp+38h] BYREF
  IUnknown *punk; // [rsp+A8h] [rbp+48h] BYREF

  v20 = 0LL;
  QueryInterface = a2->lpVtbl[2].QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, GUID *, struct IPropertyStore **))QueryInterface)(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         &v20);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CPropertyStoreHelper::CPropertyStoreHelper((CPropertyStoreHelper *)&v18, v20);
    v21 = 11;
    if ( a3 )
      v22 = -1;
    else
      v22 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v18 + 48LL))(
           v18,
           &PKEY_ImmersiveApplication_LightweightFullScreenModeAllowed,
           &v21);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v24 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                             *(this - 9),
                             a2,
                             (struct IImmersiveApplication *)&v24,
                             v10);
      v8 = ViewForApplication;
      if ( ViewForApplication >= 0 )
      {
        punk = 0LL;
        v12 = v24;
        v13 = *(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v24 + 80LL);
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
            v16 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v24);
            v8 = v16;
            if ( v16 >= 0 )
            {
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
              CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v18);
              v8 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x140,
                (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
                (const char *)(unsigned int)v16);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
              CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v18);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x13F,
              (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
              (const char *)(unsigned int)v15);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
            CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v18);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13C,
            (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
            (const char *)(unsigned int)v14);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
          CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v18);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x138,
          (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)ViewForApplication);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v18);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v9);
      CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v18);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x132,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  return v8;
}
