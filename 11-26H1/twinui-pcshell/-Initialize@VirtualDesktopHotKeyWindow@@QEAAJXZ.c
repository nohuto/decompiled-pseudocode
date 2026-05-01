/*
 * XREFs of ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x180264824
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180567660 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z @ 0x18022C24C (-RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x180263E24 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV-$CCoSimpleA.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802B9B4C (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C1740 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804B9638 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z @ 0x180561220 (-IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall VirtualDesktopHotKeyWindow::Initialize(VirtualDesktopHotKeyWindow *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, char *); // rbx
  char *v7; // rsi
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rbx
  DWORD SysColor; // eax
  int v12; // eax
  __int64 v13; // rdx
  void *v14; // r8
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  int BackgroundThumbnail; // eax
  __int64 v20; // rdx
  void *v21; // r8
  __int64 v22; // rdx
  int v23; // eax
  int v24; // edi
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, _QWORD, _QWORD, __int128 *, int *); // rbx
  int v29; // eax
  __int64 v30; // rdx
  void *v31; // r8
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  __int64 *v35; // rcx
  int IsCurrentDesktopRemote; // eax
  __int64 v37; // rdx
  HMONITOR v38; // rdx
  HWND TrayWindowForMonitor; // r15
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 (__fastcall *v42)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *); // rdi
  int v43; // eax
  __int64 v44; // rdx
  void *v45; // r8
  __int64 v46; // rdx
  int v47; // eax
  int v48; // edi
  __int64 v49; // rcx
  __int64 *v50; // rcx
  int v51; // eax
  __int64 v52; // [rsp+58h] [rbp-69h] BYREF
  __int64 v53; // [rsp+60h] [rbp-61h] BYREF
  int v54[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v55; // [rsp+70h] [rbp-51h] BYREF
  __int64 v56; // [rsp+78h] [rbp-49h] BYREF
  __int64 v57; // [rsp+80h] [rbp-41h] BYREF
  int v58; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v59[16]; // [rsp+90h] [rbp-31h] BYREF
  VirtualDesktopHotKeyWindow *v60; // [rsp+A0h] [rbp-21h]
  char v61; // [rsp+A8h] [rbp-19h]
  struct tagRECT Rect; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-1h] BYREF
  int v64; // [rsp+C8h] [rbp+7h]
  int v65; // [rsp+CCh] [rbp+Bh]
  __int128 v66; // [rsp+D8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v2 = VirtualDesktopGestureWindow::RegisterWindow(
         this,
         L"VirtualDesktopHotkeySwitcher",
         L"Virtual desktop hotkey switching preview");
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  v60 = this;
  v61 = 1;
  v53 = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v53);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v59, &v53, &GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v53);
  v5 = *((_QWORD *)this + 5);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v5 + 56LL);
  v7 = (char *)this + 56;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  v8 = v6(v5, *((_QWORD *)this + 1), 1LL, (char *)this + 56);
  v3 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v8);
LABEL_15:
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v59);
    DestroyWindow(*((HWND *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    return v3;
  }
  v63 = 0LL;
  v64 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  v65 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  v55 = 0LL;
  v9 = *(_QWORD *)v7;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(**(_QWORD **)v7 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
  LODWORD(v53) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  HIDWORD(v53) = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  SysColor = GetSysColor(1);
  v12 = v10(v9, *((_QWORD *)this + 20), SysColor, v53, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v55);
  v3 = v12;
  if ( v12 < 0 )
  {
    v13 = 64LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v12);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
    goto LABEL_15;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v55 + 24LL))(v55, &v63, 0LL, 0LL);
  v3 = v12;
  if ( v12 < 0 )
  {
    v13 = 65LL;
    goto LABEL_13;
  }
  v15 = *((_QWORD *)this + 17);
  if ( v15 == *((_QWORD *)this + 19) )
  {
    v12 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v15 + 1,
            v14);
    v3 = v12;
    if ( v12 < 0 )
    {
      v13 = 66LL;
      goto LABEL_13;
    }
  }
  v16 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
  if ( v16 )
  {
    *v16 = v55;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
  }
  v17 = *((_QWORD *)this + 7);
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v17 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v53 = 0x100000001LL;
  v12 = v18(v17, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
  v3 = v12;
  if ( v12 < 0 )
  {
    v13 = 67LL;
    goto LABEL_13;
  }
  v52 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
  BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(
                          (LPARAM)this,
                          0LL,
                          (LPARAM)this + 128,
                          &v52);
  v3 = BackgroundThumbnail;
  if ( BackgroundThumbnail < 0 )
  {
    v20 = 70LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)BackgroundThumbnail);
LABEL_50:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
    goto LABEL_14;
  }
  BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v52 + 24LL))(
                          v52,
                          &v63,
                          0LL,
                          0LL);
  v3 = BackgroundThumbnail;
  if ( BackgroundThumbnail < 0 )
  {
    v20 = 71LL;
    goto LABEL_22;
  }
  v22 = *((_QWORD *)this + 17);
  if ( v22 == *((_QWORD *)this + 19) )
  {
    v23 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v22 + 1,
            v21);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)(unsigned int)v23);
LABEL_28:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
      v3 = v24;
      goto LABEL_14;
    }
  }
  v25 = *((_QWORD *)this + 17) + 1LL;
  *((_QWORD *)this + 17) = v25;
  v26 = (__int64 *)(*((_QWORD *)this + 16) - 8LL + 8 * v25);
  if ( v26 )
  {
    *v26 = v52;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v26);
  }
  *(_QWORD *)v54 = 0LL;
  v27 = *((_QWORD *)this + 7);
  v28 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, int *))(*(_QWORD *)v27 + 88LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v54);
  v66 = *(_OWORD *)((char *)this + 184);
  v29 = v28(v27, *((_QWORD *)this + 20), 0LL, &v66, v54);
  v3 = v29;
  if ( v29 < 0 )
  {
    v30 = 75LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v29);
LABEL_49:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v54);
    goto LABEL_50;
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(**(_QWORD **)v54 + 24LL))(
          *(_QWORD *)v54,
          &v63,
          0LL,
          0LL);
  v3 = v29;
  if ( v29 < 0 )
  {
    v30 = 76LL;
    goto LABEL_33;
  }
  v32 = *((_QWORD *)this + 17);
  if ( v32 == *((_QWORD *)this + 19) )
  {
    v33 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v32 + 1,
            v31);
    v24 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)(unsigned int)v33);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v54);
      goto LABEL_28;
    }
  }
  v34 = *((_QWORD *)this + 17) + 1LL;
  *((_QWORD *)this + 17) = v34;
  v35 = (__int64 *)(*((_QWORD *)this + 16) - 8LL + 8 * v34);
  if ( v35 )
  {
    *v35 = *(_QWORD *)v54;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v35);
  }
  v57 = 0LL;
  IsCurrentDesktopRemote = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(v54, &v57);
  v3 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v37 = 80LL;
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)IsCurrentDesktopRemote);
LABEL_48:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
    goto LABEL_49;
  }
  IsCurrentDesktopRemote = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v57 + 24LL))(
                             v57,
                             0LL,
                             0LL,
                             0LL,
                             0);
  v3 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v37 = 81LL;
    goto LABEL_47;
  }
  v58 = 0;
  IsCurrentDesktopRemote = VirtualDesktopGestureWindow::IsCurrentDesktopRemote(this, &v58);
  v3 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v37 = 85LL;
    goto LABEL_47;
  }
  if ( !v58 )
  {
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 25), v38);
    if ( TrayWindowForMonitor )
    {
      v40 = 0LL;
      v53 = 0LL;
      if ( !*((_BYTE *)this + 222) )
      {
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v53, (char *)this + 160);
        v40 = v53;
      }
      Rect = 0LL;
      GetWindowRect(TrayWindowForMonitor, &Rect);
      MapWindowPoints(0LL, *((HWND *)this + 1), (LPPOINT)&Rect, 2u);
      *(_QWORD *)&v66 = 0LL;
      DWORD2(v66) = Rect.right - Rect.left;
      HIDWORD(v66) = Rect.bottom - Rect.top;
      v56 = 0LL;
      v41 = *((_QWORD *)this + 7);
      v42 = *(__int64 (__fastcall **)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(*(_QWORD *)v41 + 64LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
      v43 = v42(v41, v40, TrayWindowForMonitor, 0LL, 0LL, &v66, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v56);
      v3 = v43;
      if ( v43 < 0 )
      {
        v44 = 111LL;
LABEL_59:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v44,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
          (const char *)(unsigned int)v43);
LABEL_63:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v53);
        goto LABEL_48;
      }
      v43 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v56 + 24LL))(
              v56,
              &Rect,
              0LL,
              0LL);
      v3 = v43;
      if ( v43 < 0 )
      {
        v44 = 112LL;
        goto LABEL_59;
      }
      v46 = *((_QWORD *)this + 17);
      if ( v46 == *((_QWORD *)this + 19) )
      {
        v47 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v46 + 1,
                v45);
        v48 = v47;
        if ( v47 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x71,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
            (const char *)(unsigned int)v47);
          v3 = v48;
          goto LABEL_63;
        }
      }
      v49 = *((_QWORD *)this + 17) + 1LL;
      *((_QWORD *)this + 17) = v49;
      v50 = (__int64 *)(*((_QWORD *)this + 16) - 8LL + 8 * v49);
      if ( v50 )
      {
        *v50 = v56;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v50);
      }
      if ( !*((_BYTE *)this + 222) )
      {
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 168LL))(v56);
        if ( v51 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x78,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
            (const char *)(unsigned int)v51);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v56);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v53);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v54);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v52);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v59);
  return 0LL;
}
