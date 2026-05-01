/*
 * XREFs of ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x18026BB20
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18026AA78 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x18026C514 (-Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18053A804 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180545E78 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::MakeBackgroundThumbnail(LPARAM a1, __int64 a2, LPARAM a3, _QWORD *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 *v13; // rbx
  __int64 v14; // rdi
  LPARAM lParam[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+48h]

  *a4 = 0LL;
  v18 = 0LL;
  if ( !*(_BYTE *)(a1 + 224) )
  {
    v13 = *(__int64 **)(a1 + 56);
    v14 = *v13;
    if ( *(_DWORD *)(a1 + 228) == 2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      v19 = __PAIR64__(*(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188), *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184));
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64, GUID *, __int64 *))(v14 + 112))(
              v13,
              a2,
              v19,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              &v18);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 781LL;
        goto LABEL_7;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      v19 = __PAIR64__(*(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188), *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184));
      v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned __int64, GUID *, __int64 *))(v14 + 112))(
              v13,
              *(_QWORD *)(a1 + 160),
              v19,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              &v18);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 785LL;
        goto LABEL_7;
      }
    }
LABEL_10:
    lParam[0] = a1;
    lParam[1] = (LPARAM)&v18;
    lParam[2] = a3;
    EnumWindows(EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_d1f34b7883c7be61d92cb130c4decd2f___, (LPARAM)lParam);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
    *a4 = v18;
    v11 = 0;
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  v19 = __PAIR64__(*(_DWORD *)(a1 + 196) - *(_DWORD *)(a1 + 188), *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184));
  v10 = v9(v8, *(_QWORD *)(a1 + 160), v19, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v18);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_10;
  v12 = 775LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v10);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  return v11;
}
