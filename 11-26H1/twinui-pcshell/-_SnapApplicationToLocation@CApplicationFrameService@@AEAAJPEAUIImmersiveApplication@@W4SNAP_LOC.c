/*
 * XREFs of ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x1802FAD70
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18017AB50 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x180021ADC (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180047630 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x1802F9044 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::_SnapApplicationToLocation(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  IUnknown **v6; // rax
  struct IApplicationView **v7; // r9
  HRESULT ViewForApplication; // ebx
  __int64 v9; // rdx
  IUnknown **v10; // rax
  unsigned __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v19; // [rsp+30h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-31h] BYREF
  __int64 v21; // [rsp+40h] [rbp-29h] BYREF
  const WCHAR *v22; // [rsp+48h] [rbp-21h] BYREF
  __int64 v23; // [rsp+50h] [rbp-19h]
  __int64 v24; // [rsp+58h] [rbp-11h]
  const WCHAR *v25; // [rsp+60h] [rbp-9h] BYREF
  __int64 v26; // [rsp+68h] [rbp-1h]
  __int64 v27; // [rsp+70h] [rbp+7h]
  const WCHAR *v28; // [rsp+78h] [rbp+Fh] BYREF
  const WCHAR *v29; // [rsp+80h] [rbp+17h] BYREF
  int v30[4]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v21 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  v6 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk(a1, &v19);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(*v6, a2, (struct IImmersiveApplication *)&v21, v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  if ( ViewForApplication >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v10 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk(a1, &v19);
    ViewForApplication = IUnknown_QueryService(
                           *v10,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    if ( ViewForApplication < 0 )
    {
      v9 = 1383LL;
      goto LABEL_5;
    }
    *(_OWORD *)v30 = 0LL;
    v12 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            v21,
            a3,
            0LL,
            v30);
    ViewForApplication = v12;
    if ( v12 < 0 )
    {
      v11 = (unsigned int)v12;
      v9 = 1386LL;
      goto LABEL_6;
    }
    if ( CAppManagerTelemetry::IsEnabled(v13) )
    {
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      AddRef = a2->lpVtbl[1].AddRef;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
      v26 = -1LL;
      v27 = -1LL;
      v15 = ((__int64 (__fastcall *)(struct IUnknown *, const WCHAR **))AddRef)(a2, &v25);
      ViewForApplication = v15;
      if ( v15 < 0 )
      {
        v16 = 1393LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v15);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
        goto LABEL_17;
      }
      QueryInterface = a2->lpVtbl[5].QueryInterface;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
      v23 = -1LL;
      v24 = -1LL;
      v15 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, const WCHAR **))QueryInterface)(a2, 0LL, &v22);
      ViewForApplication = v15;
      if ( v15 < 0 )
      {
        v16 = 1394LL;
        goto LABEL_12;
      }
      LODWORD(v19) = a3;
      v28 = v22;
      v29 = v25;
      CAppManagerTelemetry::FrameSnapInvoked<unsigned short const *,unsigned short const *,unsigned int>(
        &v29,
        &v28,
        (int *)&v19);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
    }
    ViewForApplication = 0;
    goto LABEL_17;
  }
  v9 = 1382LL;
LABEL_5:
  v11 = (unsigned int)ViewForApplication;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)v11);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  return (unsigned int)ViewForApplication;
}
