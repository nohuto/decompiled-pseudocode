/*
 * XREFs of ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180226F0C
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18057CA40 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008F5F8 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008F638 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1800D9698 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18013573C (-_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@.c)
 *     ?_GetAppPosition@CShellSnapComponent@@AEAAJPEAUIApplicationView@@PEAUCRect@Geometry@@@Z @ 0x1802C6EF0 (-_GetAppPosition@CShellSnapComponent@@AEAAJPEAUIApplicationView@@PEAUCRect@Geometry@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x180577D7C (--$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemet.c)
 *     ?AppUnsnapped_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@@Z @ 0x18057B02C (-AppUnsnapped_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CShellSnapComponent::_SendAppSnapUnsnapEvent(__int64 a1, HWND a2, int a3)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, HWND, struct IApplicationView **); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int AppPosition; // eax
  CShellSnapComponent *v13; // rcx
  __int64 v14; // rdx
  int v15; // esi
  const unsigned __int16 *v16; // rbx
  __int64 v17; // rcx
  CSnapComponentTelemetry *v18; // rcx
  struct IApplicationView *v19; // rbx
  __int64 (__fastcall *v20)(struct IApplicationView *, SnapRectHelpers **); // rdi
  int v21; // eax
  SnapRectHelpers *v22; // rcx
  struct IApplicationView *v23; // rcx
  int v24; // eax
  struct IApplicationView *v25; // [rsp+30h] [rbp-39h] BYREF
  SnapRectHelpers *v26; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  __int64 v28; // [rsp+48h] [rbp-21h]
  __int64 v29; // [rsp+50h] [rbp-19h]
  int v30; // [rsp+58h] [rbp-11h] BYREF
  HWND v31; // [rsp+60h] [rbp-9h] BYREF
  LPVOID v32; // [rsp+68h] [rbp-1h] BYREF
  __int128 v33; // [rsp+70h] [rbp+7h] BYREF
  __int128 v34; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v31 = a2;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 1LL;
  v25 = 0LL;
  v7 = *(_QWORD *)(a1 + 224);
  v8 = *(__int64 (__fastcall **)(__int64, HWND, struct IApplicationView **))(*(_QWORD *)v7 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  v9 = v8(v7, a2, &v25);
  v10 = v9;
  if ( v9 >= 0 )
  {
    pv = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v11 = *(_QWORD *)v25;
    v28 = -1LL;
    v29 = -1LL;
    AppPosition = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(v11 + 136))(v25, &pv);
    v10 = AppPosition;
    if ( AppPosition < 0 )
    {
      v14 = 1297LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)AppPosition);
LABEL_8:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
      goto LABEL_28;
    }
    v15 = a3 - 1;
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        v16 = (const unsigned __int16 *)pv;
        if ( CSnapComponentTelemetry::IsEnabled((__int64)v13) )
        {
          wil::details::static_lazy<CSnapComponentTelemetry>::get(
            v17,
            (void (__cdecl *)())_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
          CSnapComponentTelemetry::AppUnsnapped_(v18, v16, a2);
        }
        CShellSnapComponent::_FireWindowSnappingEvent(a1, (__int64)v25, 0);
      }
    }
    else
    {
      v33 = 0LL;
      AppPosition = CShellSnapComponent::_GetAppPosition(v13, v25, (struct Geometry::CRect *)&v33);
      v10 = AppPosition;
      if ( AppPosition < 0 )
      {
        v14 = 1304LL;
        goto LABEL_7;
      }
      v26 = 0LL;
      v19 = v25;
      v20 = *(__int64 (__fastcall **)(struct IApplicationView *, SnapRectHelpers **))(*(_QWORD *)v25 + 80LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
      v21 = v20(v19, &v26);
      v10 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x51B,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v21);
        v22 = v26;
        if ( v26 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(SnapRectHelpers *))(*(_QWORD *)v22 + 16LL))(v22);
        }
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v28 = 0LL;
        v29 = 0LL;
        v23 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v23 + 16LL))(v23);
        }
        return v10;
      }
      v34 = 0LL;
      v24 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)v26 + 88LL))(v26, &v34);
      v10 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x51E,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v24);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        goto LABEL_8;
      }
      v32 = pv;
      v30 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)&v33, v26);
      CSnapComponentTelemetry::AppSnapped<enum SnapRegion,Geometry::CRect &,Geometry::CRect &,unsigned short const *,HWND__ * &>(
        (unsigned int)&v30,
        (unsigned int)&v33,
        (unsigned int)&v34,
        (unsigned int)&v32,
        (__int64)&v31);
      CShellSnapComponent::_FireWindowSnappingEvent(a1, (__int64)v25, 1);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
    v10 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50E,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v9);
LABEL_28:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  return v10;
}
