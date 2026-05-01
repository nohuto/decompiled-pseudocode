/*
 * XREFs of ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x18026C514
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180543760 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C860 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801C7830 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z @ 0x18023A418 (-RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x18026BB20 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV-$CCoSimpleA.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802B8C98 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C2AAC (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C9FB8 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804A7C5C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z @ 0x18053D3D8 (-IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall VirtualDesktopHotKeyWindow::Initialize(VirtualDesktopHotKeyWindow *this)
{
  int v2; // eax
  int v3; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, char *); // rbx
  char *v7; // rsi
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v11; // ecx
  DWORD SysColor; // eax
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  int BackgroundThumbnail; // eax
  __int64 v23; // rdx
  void *v24; // r8
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 *v28; // rcx
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, _QWORD, _QWORD, __int128 *, int *); // rbx
  int v31; // eax
  __int64 v32; // rdx
  void *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 *v36; // rcx
  int IsCurrentDesktopRemote; // eax
  __int64 v38; // rdx
  HMONITOR v39; // rdx
  HWND TrayWindowForMonitor; // r15
  __int64 v41; // rbx
  __int64 v42; // rsi
  __int64 (__fastcall *v43)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *); // rdi
  int v44; // eax
  int v45; // edi
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  int v48; // eax
  void *v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 *v52; // rcx
  int v53; // eax
  __int64 v54; // [rsp+58h] [rbp-69h] BYREF
  __int64 v55; // [rsp+60h] [rbp-61h] BYREF
  int v56[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v57; // [rsp+70h] [rbp-51h] BYREF
  __int64 v58; // [rsp+78h] [rbp-49h] BYREF
  __int64 v59; // [rsp+80h] [rbp-41h] BYREF
  int v60; // [rsp+88h] [rbp-39h] BYREF
  _BYTE v61[16]; // [rsp+90h] [rbp-31h] BYREF
  VirtualDesktopHotKeyWindow *v62; // [rsp+A0h] [rbp-21h]
  char v63; // [rsp+A8h] [rbp-19h]
  struct tagRECT Rect; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-1h] BYREF
  int v66; // [rsp+C8h] [rbp+7h]
  int v67; // [rsp+CCh] [rbp+Bh]
  __int128 v68; // [rsp+D8h] [rbp+17h] BYREF
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
    return (unsigned int)v3;
  }
  v62 = this;
  v63 = 1;
  v55 = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v55);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v61, &v55, &GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
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
LABEL_13:
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v61);
    DestroyWindow(*((HWND *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    return (unsigned int)v3;
  }
  v65 = 0LL;
  v66 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  v67 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  v57 = 0LL;
  v9 = *(_QWORD *)v7;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(**(_QWORD **)v7 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
  v11 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  LODWORD(v55) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  HIDWORD(v55) = v11;
  SysColor = GetSysColor(1);
  v13 = v10(v9, *((_QWORD *)this + 20), SysColor, v55, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v57);
  v3 = v13;
  if ( v13 < 0 )
  {
    v14 = 64LL;
LABEL_10:
    v16 = (unsigned int)v13;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)v16);
LABEL_12:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
    goto LABEL_13;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v57 + 24LL))(v57, &v65, 0LL, 0LL);
  v3 = v13;
  if ( v13 < 0 )
  {
    v14 = 65LL;
    goto LABEL_10;
  }
  v3 = 0;
  v17 = *((_QWORD *)this + 17);
  if ( v17 != *((_QWORD *)this + 19)
    || (v3 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 128,
               v17 + 1,
               v15),
        v3 >= 0) )
  {
    v18 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v18 + 1;
    v19 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v18);
    if ( !v19 )
      goto LABEL_20;
    *v19 = v57;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
  }
  if ( v3 < 0 )
  {
    v16 = (unsigned int)v3;
    v14 = 66LL;
    goto LABEL_11;
  }
LABEL_20:
  v20 = *((_QWORD *)this + 7);
  v21 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v20 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v55 = 0x100000001LL;
  v13 = v21(v20, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
  v3 = v13;
  if ( v13 < 0 )
  {
    v14 = 67LL;
    goto LABEL_10;
  }
  v54 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
  BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(
                          (LPARAM)this,
                          0LL,
                          (LPARAM)this + 128,
                          &v54);
  v3 = BackgroundThumbnail;
  if ( BackgroundThumbnail < 0 )
  {
    v23 = 70LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)BackgroundThumbnail);
LABEL_53:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
    goto LABEL_12;
  }
  BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v54 + 24LL))(
                          v54,
                          &v65,
                          0LL,
                          0LL);
  v3 = BackgroundThumbnail;
  if ( BackgroundThumbnail < 0 )
  {
    v23 = 71LL;
    goto LABEL_24;
  }
  v25 = 0;
  v26 = *((_QWORD *)this + 17);
  if ( v26 != *((_QWORD *)this + 19)
    || (v25 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v26 + 1,
                v24),
        v25 >= 0) )
  {
    v27 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v27 + 1;
    v28 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v27);
    if ( !v28 )
      goto LABEL_34;
    *v28 = v54;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v28);
  }
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v25);
LABEL_33:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
    v3 = v25;
    goto LABEL_12;
  }
LABEL_34:
  *(_QWORD *)v56 = 0LL;
  v29 = *((_QWORD *)this + 7);
  v30 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, int *))(*(_QWORD *)v29 + 88LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v56);
  v68 = *(_OWORD *)((char *)this + 184);
  v31 = v30(v29, *((_QWORD *)this + 20), 0LL, &v68, v56);
  v3 = v31;
  if ( v31 < 0 )
  {
    v32 = 75LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v31);
LABEL_52:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v56);
    goto LABEL_53;
  }
  v31 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(**(_QWORD **)v56 + 24LL))(
          *(_QWORD *)v56,
          &v65,
          0LL,
          0LL);
  v3 = v31;
  if ( v31 < 0 )
  {
    v32 = 76LL;
    goto LABEL_36;
  }
  v25 = 0;
  v34 = *((_QWORD *)this + 17);
  if ( v34 != *((_QWORD *)this + 19)
    || (v25 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v34 + 1,
                v33),
        v25 >= 0) )
  {
    v35 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = v35 + 1;
    v36 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v35);
    if ( !v36 )
      goto LABEL_45;
    *v36 = *(_QWORD *)v56;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v36);
  }
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v56);
    goto LABEL_33;
  }
LABEL_45:
  v59 = 0LL;
  IsCurrentDesktopRemote = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(v56, &v59);
  v3 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v38 = 80LL;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)(unsigned int)IsCurrentDesktopRemote);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
    goto LABEL_52;
  }
  IsCurrentDesktopRemote = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v59 + 24LL))(
                             v59,
                             0LL,
                             0LL,
                             0LL,
                             0);
  v3 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v38 = 81LL;
    goto LABEL_51;
  }
  v60 = 0;
  IsCurrentDesktopRemote = VirtualDesktopGestureWindow::IsCurrentDesktopRemote(this, &v60);
  v3 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v38 = 85LL;
    goto LABEL_51;
  }
  if ( v60 )
    goto LABEL_73;
  TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 25), v39);
  if ( !TrayWindowForMonitor )
    goto LABEL_73;
  v41 = 0LL;
  v55 = 0LL;
  if ( !*((_BYTE *)this + 222) )
  {
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v55, (char *)this + 160);
    v41 = v55;
  }
  Rect = 0LL;
  GetWindowRect(TrayWindowForMonitor, &Rect);
  MapWindowPoints(0LL, *((HWND *)this + 1), (LPPOINT)&Rect, 2u);
  *(_QWORD *)&v68 = 0LL;
  DWORD2(v68) = Rect.right - Rect.left;
  HIDWORD(v68) = Rect.bottom - Rect.top;
  v58 = 0LL;
  v42 = *((_QWORD *)this + 7);
  v43 = *(__int64 (__fastcall **)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(*(_QWORD *)v42 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
  v44 = v43(v42, v41, TrayWindowForMonitor, 0LL, 0LL, &v68, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v58);
  v45 = v44;
  if ( v44 < 0 )
  {
    v46 = (unsigned int)v44;
    v47 = 111LL;
LABEL_68:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
      (const char *)v46);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v56);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v61);
    DestroyWindow(*((HWND *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    return (unsigned int)v45;
  }
  v48 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v58 + 24LL))(
          v58,
          &Rect,
          0LL,
          0LL);
  v45 = v48;
  if ( v48 < 0 )
  {
    v46 = (unsigned int)v48;
    v47 = 112LL;
    goto LABEL_68;
  }
  v45 = 0;
  v50 = *((_QWORD *)this + 17);
  if ( v50 == *((_QWORD *)this + 19) )
  {
    v45 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v50 + 1,
            v49);
    if ( v45 < 0 )
      goto LABEL_66;
  }
  v51 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = v51 + 1;
  v52 = (__int64 *)(*((_QWORD *)this + 16) + 8 * v51);
  if ( v52 )
  {
    *v52 = v58;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v52);
LABEL_66:
    if ( v45 < 0 )
    {
      v46 = (unsigned int)v45;
      v47 = 113LL;
      goto LABEL_68;
    }
  }
  if ( !*((_BYTE *)this + 222) )
  {
    v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 168LL))(v58);
    if ( v53 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x78,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)(unsigned int)v53);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v58);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
LABEL_73:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v59);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v56);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v57);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v61);
  return 0LL;
}
