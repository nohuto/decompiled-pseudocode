/*
 * XREFs of ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18030BB90
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18021AF20 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800C1DF4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedTabletModeOperations@@@WRL@Microsoft@@XZ @ 0x18030A1EC (-GetPrivilegedTabletModeOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivilege.c)
 *     ?GetPrivilegedWindowingOperations@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIPrivilegedWindowingOperations@@@WRL@Microsoft@@XZ @ 0x18030A27C (-GetPrivilegedWindowingOperations@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIPrivileged.c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x18030BFC0 (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::SetPosition(
        CWin32ApplicationView *this,
        int (__fastcall ***a2)(struct IApplicationViewPosition *, GUID *, __int64 *))
{
  HWND v3; // r14
  int (__fastcall *v4)(struct IApplicationViewPosition *, GUID *, __int64 *); // rbx
  int v5; // eax
  signed int LastErrorFailHr; // ebx
  int v7; // eax
  int (__fastcall *v8)(struct IApplicationViewPosition *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // edi
  __int64 *PrivilegedWindowingOperations; // rax
  wil::details *v15; // rcx
  __int64 *PrivilegedTabletModeOperations; // rax
  UINT showCmd; // eax
  CWin32ApplicationView *v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v26[40]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-40h] BYREF
  struct tagWINDOWPLACEMENT v28; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( !IsWindowVisible(v3) )
    return 0LL;
  v22 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  if ( v4((struct IApplicationViewPosition *)a2, &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1, &v22) >= 0 )
  {
    memset(v26, 0, sizeof(v26));
    v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 72LL))(v22, v26);
    LastErrorFailHr = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C0,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v5);
LABEL_31:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      return (unsigned int)LastErrorFailHr;
    }
    wndpl.length = 44;
    *(_OWORD *)&wndpl.flags = *(_OWORD *)v26;
    wndpl.ptMaxPosition = *(POINT *)&v26[16];
    wndpl.rcNormalPosition = *(RECT *)&v26[24];
    *(_OWORD *)&v28.length = *(_OWORD *)&wndpl.length;
    *(_OWORD *)&v28.ptMinPosition.y = *(_OWORD *)&wndpl.ptMinPosition.y;
    *(_QWORD *)&v28.rcNormalPosition.top = *(_OWORD *)&v26[24] >> 32;
    v28.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v26[24], 12));
    v28.flags = *(_DWORD *)v26 | 4;
    v7 = CWin32ApplicationView::SetWindowPosition((CWin32ApplicationView *)(*(_DWORD *)v26 | 4u), v3, &v28);
    if ( v7 < 0 )
    {
      LastErrorFailHr = v7;
      goto LABEL_31;
    }
  }
  v20 = 0LL;
  v8 = **a2;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v20);
  if ( v8((struct IApplicationViewPosition *)a2, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, v9) >= 0 )
  {
    v21 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 32LL))(v20, &v21);
    LastErrorFailHr = v10;
    if ( v10 < 0 )
    {
      v11 = 462LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v10);
LABEL_30:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      goto LABEL_31;
    }
    if ( v21 == 4 )
    {
      v27 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v20 + 24LL))(v20, &v27);
      LastErrorFailHr = v10;
      if ( v10 < 0 )
      {
        v11 = 468LL;
        goto LABEL_10;
      }
      v23 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 40LL))(v20, &v23);
      LastErrorFailHr = v10;
      if ( v10 < 0 )
      {
        v11 = 471LL;
        goto LABEL_10;
      }
      v12 = (v23 & 1) != 0 ? 1 : 16;
      v13 = v23 & 2 | 1;
      PrivilegedWindowingOperations = ApplicationViewManagement::CGlobals::GetPrivilegedWindowingOperations(&v24);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD, __int128 *, int, int, int))(*(_QWORD *)*PrivilegedWindowingOperations + 24LL))(
                          *PrivilegedWindowingOperations,
                          v3,
                          0LL,
                          &v27,
                          3,
                          v12,
                          v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    }
    else
    {
      if ( v22 )
        goto LABEL_32;
      if ( v21 != 3 )
      {
LABEL_19:
        if ( !v20 )
        {
          wndpl.length = 44;
          memset(&wndpl.flags, 0, 40);
          if ( !GetWindowPlacement(v3, &wndpl) )
          {
            LastErrorFailHr = wil::details::GetLastErrorFailHr(v15);
            goto LABEL_30;
          }
          showCmd = wndpl.showCmd;
          if ( wndpl.showCmd == 3 )
            showCmd = 9;
          wndpl.showCmd = showCmd;
          v10 = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *), RECT *))(*a2)[3])(
                  a2,
                  &wndpl.rcNormalPosition);
          LastErrorFailHr = v10;
          if ( v10 < 0 )
          {
            v11 = 497LL;
            goto LABEL_10;
          }
          wndpl.flags |= 4u;
          LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v18, v3, &wndpl);
          if ( LastErrorFailHr < 0 )
            goto LABEL_30;
        }
        goto LABEL_32;
      }
      PrivilegedTabletModeOperations = ApplicationViewManagement::CGlobals::GetPrivilegedTabletModeOperations(&v24);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)*PrivilegedTabletModeOperations
                                                                          + 32LL))(
                          *PrivilegedTabletModeOperations,
                          v3,
                          5LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    }
    if ( LastErrorFailHr < 0 )
      goto LABEL_30;
  }
  if ( !v22 )
    goto LABEL_19;
LABEL_32:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  return 0LL;
}
