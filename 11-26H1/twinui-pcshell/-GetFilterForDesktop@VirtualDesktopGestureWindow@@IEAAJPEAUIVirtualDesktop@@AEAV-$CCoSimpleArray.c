/*
 * XREFs of ?GetFilterForDesktop@VirtualDesktopGestureWindow@@IEAAJPEAUIVirtualDesktop@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18055FD38
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E664 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E30 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800482C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800781E4 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180109D54 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802099B8 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@2@Z @ 0x1804ABA80 (-GetFilterForDesktop@VirtualDesktopHelpers@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerIn.c)
 *     ?ExcludeWindow@VirtualDesktopGestureWindow@@IEAAJPEAUHWND__@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18055F5D0 (-ExcludeWindow@VirtualDesktopGestureWindow@@IEAAJPEAUHWND__@@AEAV-$CCoSimpleArray@PEAUHWND__@@$0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall VirtualDesktopGestureWindow::GetFilterForDesktop(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  int FilterForDesktop; // eax
  unsigned int v8; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 (__fastcall ***v13)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  struct IApplicationView *v14; // rdx
  HWND WindowForView; // rax
  __int64 (__fastcall **v16)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  unsigned __int64 v17; // rcx
  __int64 i; // rbx
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+28h] [rbp-58h] BYREF
  _QWORD *v23; // [rsp+30h] [rbp-50h] BYREF
  ApplicationViewHelpers *v24; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+48h] [rbp-38h]
  unsigned int v27; // [rsp+50h] [rbp-30h] BYREF
  ApplicationViewHelpers *v28[2]; // [rsp+58h] [rbp-28h] BYREF
  int v29; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30[2]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v32; // [rsp+A0h] [rbp+20h] BYREF

  FilterForDesktop = VirtualDesktopHelpers::GetFilterForDesktop(a2, *(_QWORD *)(a1 + 32), a3, a4);
  v8 = FilterForDesktop;
  if ( FilterForDesktop < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)FilterForDesktop);
    return v8;
  }
  v21 = 0LL;
  v10 = *(__int64 **)(a1 + 48);
  v11 = *v10;
  v21 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 24))(v10, &v21);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    return v8;
  }
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v25,
    v21);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v27,
    (__int64)&v25,
    0);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
    (__int64)&v29,
    (__int64)&v25,
    v26);
  while ( v27 != v29 || v28[1] != (ApplicationViewHelpers *)v30[1] )
  {
    v13 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v28[0];
    v24 = v28[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v13, v14);
    if ( GetPropW(WindowForView, (LPCWSTR)0xA920) )
    {
      v22 = 0LL;
      v16 = *v13;
      v22 = 0LL;
      if ( (int)(*v16)((ApplicationViewHelpers *)v13, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v22) >= 0 )
      {
        v32 = 0;
        v23 = 0LL;
        if ( (*(int (__fastcall **)(__int64, unsigned int *, _QWORD **))(*(_QWORD *)v22 + 32LL))(v22, &v32, &v23) >= 0 )
        {
          for ( i = 0LL; (unsigned int)i < v32; i = (unsigned int)(i + 1) )
          {
            v19 = VirtualDesktopGestureWindow::ExcludeWindow(v17, v23[i], a3, a4);
            v20 = v19;
            if ( v19 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x20D,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                (const char *)(unsigned int)v19);
              CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v23);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v30);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v28);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
              return v20;
            }
          }
        }
        CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v23);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    ++v27;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v27);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  return 0LL;
}
