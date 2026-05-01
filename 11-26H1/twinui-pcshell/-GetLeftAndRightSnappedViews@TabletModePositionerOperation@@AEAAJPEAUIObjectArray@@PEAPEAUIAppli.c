/*
 * XREFs of ?GetLeftAndRightSnappedViews@TabletModePositionerOperation@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@1@Z @ 0x18052677C
 * Callers:
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x180526180 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositionerOperation::GetLeftAndRightSnappedViews(
        TabletModePositionerOperation *this,
        struct IObjectArray *a2,
        struct IApplicationView **a3,
        struct IApplicationView **a4)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rbx
  __int64 *v11; // rax
  int v12; // eax
  HRESULT (__stdcall *v13)(IObjectArray *, UINT, const IID *const, void **); // rbx
  __int64 *v14; // rax
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // ebx
  int v19; // r15d
  int v20; // edi
  int v21; // eax
  struct IApplicationView *v23; // [rsp+30h] [rbp-29h] BYREF
  struct IApplicationView *v24; // [rsp+38h] [rbp-21h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  _OWORD v26[2]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v27; // [rsp+68h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  *a4 = 0LL;
  memset(v26, 0, sizeof(v26));
  v27 = 0LL;
  (*(void (__fastcall **)(_QWORD, _OWORD *))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), v26);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         *((IUnknown **)this + 2),
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &ppvOut);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v23 = 0LL;
    GetAt = a2->lpVtbl->GetAt;
    v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v23);
    v12 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))GetAt)(
            a2,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            v11);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v12);
LABEL_16:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
      goto LABEL_17;
    }
    v24 = 0LL;
    v13 = a2->lpVtbl->GetAt;
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v24);
    v15 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, __int64 *))v13)(
            a2,
            1LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            v14);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = (unsigned int)v15;
      v17 = 347LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)v16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      goto LABEL_16;
    }
    v18 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, v23);
    v19 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, v23);
    v20 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, v24);
    v21 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, v24);
    if ( v18 && v21 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      *a3 = v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
      *a4 = v24;
    }
    else
    {
      if ( !v19 || !v20 )
      {
        v9 = -2147024809;
        v16 = 2147942487LL;
        v17 = 367LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      *a4 = v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
      *a3 = v24;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x155,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v8);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v9;
}
