/*
 * XREFs of ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x180262DFC
 * Callers:
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x180560850 (-Initialize@VirtualDesktopGestureContext@@QEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x180227CBC (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ?RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z @ 0x18022C24C (-RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x180263E24 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV-$CCoSimpleA.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802B9B4C (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C1740 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804B9638 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x1805601C0 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 *     ?IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z @ 0x180561220 (-IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z.c)
 *     ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180562180 (-SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry.c)
 *     ?SetDropShadowEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@@Z @ 0x18056291C (-SetDropShadowEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall VirtualDesktopGestureWindow::Initialize(VirtualDesktopGestureWindow *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, char *); // rbx
  DCompThumbnailHelpers **v8; // r15
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  void *v12; // r8
  __int64 *v13; // rcx
  _QWORD *v14; // r15
  __int64 v15; // rdx
  __int64 *v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  void *v23; // r8
  __int64 v24; // rdx
  int v25; // eax
  int v26; // edi
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  _QWORD *v31; // r12
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  __int64 v34; // rsi
  __int64 (__fastcall *v35)(__int64, _QWORD, __int64, GUID *, char *); // rdi
  VirtualDesktopGestureWindow *v36; // rcx
  int ScaleFactor; // esi
  VirtualDesktopGestureWindow *v38; // rcx
  __int64 v39; // rdi
  __int64 (__fastcall *v40)(__int64, _QWORD, __int64, GUID *, struct IDCompThumbnail **); // rbx
  int v41; // eax
  __int64 v42; // rdx
  void *v43; // r8
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rcx
  __int64 *v47; // rcx
  __int64 v48; // rdi
  __int64 (__fastcall *v49)(__int64, struct IDCompThumbnail *, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rdx
  void *v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 *v57; // rcx
  __int64 v58; // rdi
  __int64 (__fastcall *v59)(__int64, struct IDCompThumbnail *, __int64, GUID *, int *); // rbx
  void *v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 *v63; // rcx
  DCompThumbnailHelpers *v64; // rdi
  __int64 (__fastcall *v65)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, struct tagSIZE *); // rbx
  DWORD SysColor; // eax
  int v67; // eax
  __int64 v68; // rdx
  void *v69; // r8
  __int64 v70; // rdx
  unsigned __int64 v71; // r9
  __int64 *v72; // rcx
  __int64 v73; // rdi
  __int64 (__fastcall *v74)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  int v75; // eax
  int BackgroundThumbnail; // eax
  __int64 v77; // rdx
  void *v78; // r8
  __int64 v79; // rdx
  __int64 *v80; // rcx
  __int64 v81; // rbx
  __int64 (__fastcall *v82)(__int64, _QWORD, _QWORD, __int128 *, int *); // rdi
  int v83; // eax
  __int64 v84; // rdx
  void *v85; // r8
  __int64 v86; // rdx
  int v87; // eax
  int v88; // edi
  __int64 v89; // rcx
  __int64 *v90; // rcx
  int IsCurrentDesktopRemote; // eax
  __int64 v92; // rdx
  HMONITOR v93; // rdx
  HWND TrayWindowForMonitor; // rsi
  int *v95; // rdx
  __int64 v96; // rdi
  __int64 (__fastcall *v97)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, struct tagSIZE *); // rbx
  int v98; // eax
  __int64 v99; // rdx
  void *v100; // r8
  __int64 v101; // rdx
  int v102; // eax
  int v103; // edi
  __int64 v104; // rcx
  __int64 *v105; // rcx
  int v106; // eax
  struct tagSIZE v107; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v108; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v109; // [rsp+68h] [rbp-A0h]
  __int64 v110; // [rsp+70h] [rbp-98h] BYREF
  struct IDCompThumbnail *v111; // [rsp+78h] [rbp-90h] BYREF
  int v112[2]; // [rsp+80h] [rbp-88h] BYREF
  int v113[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v114; // [rsp+90h] [rbp-78h] BYREF
  __int64 v115; // [rsp+98h] [rbp-70h] BYREF
  int v116; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v117[16]; // [rsp+A8h] [rbp-60h] BYREF
  VirtualDesktopGestureWindow *v118; // [rsp+B8h] [rbp-50h]
  char v119; // [rsp+C0h] [rbp-48h]
  struct tagRECT rc; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v121; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v122; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v123; // [rsp+F8h] [rbp-10h] BYREF
  int v124; // [rsp+100h] [rbp-8h]
  int v125; // [rsp+104h] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  *((_DWORD *)this + 57) = a2;
  v3 = VirtualDesktopGestureWindow::RegisterWindow(
         this,
         L"VirtualDesktopGestureSwitcher",
         L"Virtual desktop switching preview");
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  v118 = this;
  v119 = 1;
  v107 = (struct tagSIZE)*((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v107);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v117, &v107, &GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v107);
  v6 = *((_QWORD *)this + 5);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v6 + 56LL);
  v8 = (DCompThumbnailHelpers **)((char *)this + 56);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  v9 = v7(v6, *((_QWORD *)this + 1), 1LL, (char *)this + 56);
  v4 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
LABEL_6:
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v117);
    DestroyWindow(*((HWND *)this + 1));
    return v4;
  }
  *(_QWORD *)&v121.left = 0LL;
  v121.right = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  v121.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  *(_QWORD *)v113 = 0LL;
  v107 = 0LL;
  if ( *((_DWORD *)this + 57) != 2 )
  {
    v64 = *v8;
    v65 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int64, GUID *, struct tagSIZE *))(*(_QWORD *)*v8 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v107);
    LODWORD(v109) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    HIDWORD(v109) = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    SysColor = GetSysColor(1);
    v67 = v65(v64, *((_QWORD *)this + 20), SysColor, v109, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v107);
    v4 = v67;
    if ( v67 >= 0 )
    {
      v67 = (*(__int64 (__fastcall **)(struct tagSIZE, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)&v107 + 24LL))(
              v107,
              &v121,
              0LL,
              0LL);
      v4 = v67;
      if ( v67 >= 0 )
      {
        v14 = (_QWORD *)((char *)this + 128);
        v70 = *((_QWORD *)this + 17);
        if ( v70 != *((_QWORD *)this + 19)
          || (v67 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                      (__int64)this + 128,
                      v70 + 1,
                      v69),
              v4 = v67,
              v67 >= 0) )
        {
          v72 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
          if ( v72 )
          {
            *v72 = (__int64)v107;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v72);
          }
          v73 = *((_QWORD *)this + 7);
          v74 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v73 + 112LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
          v109 = 0x100000001LL;
          v75 = v74(v73, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
          v4 = v75;
          if ( v75 >= 0 )
            goto LABEL_96;
          v71 = (unsigned int)v75;
          v68 = 220LL;
LABEL_91:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v68,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)v71);
          goto LABEL_15;
        }
        v68 = 218LL;
      }
      else
      {
        v68 = 217LL;
      }
    }
    else
    {
      v68 = 216LL;
    }
    v71 = (unsigned int)v67;
    goto LABEL_91;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v107);
  v10 = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
          *v8,
          0LL,
          (VirtualDesktopGestureWindow *)((char *)this + 184),
          0LL,
          &v107);
  v4 = v10;
  if ( v10 < 0 )
  {
    v11 = 162LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v10);
LABEL_15:
    v13 = (__int64 *)&v107;
LABEL_16:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v113);
    goto LABEL_6;
  }
  v10 = (*(__int64 (__fastcall **)(struct tagSIZE, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)&v107 + 24LL))(
          v107,
          &v121,
          0LL,
          0LL);
  v4 = v10;
  if ( v10 < 0 )
  {
    v11 = 163LL;
    goto LABEL_14;
  }
  v10 = VirtualDesktopGestureWindow::SetBackdropBlurEffect(
          this,
          *(struct IDCompThumbnail **)&v107,
          (const struct Geometry::CRect *)&v121,
          60.0);
  v4 = v10;
  if ( v10 < 0 )
  {
    v11 = 167LL;
    goto LABEL_14;
  }
  v14 = (_QWORD *)((char *)this + 128);
  v15 = *((_QWORD *)this + 17);
  if ( v15 == *((_QWORD *)this + 19) )
  {
    v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v15 + 1,
            v12);
    v4 = v10;
    if ( v10 < 0 )
    {
      v11 = 168LL;
      goto LABEL_14;
    }
  }
  v16 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
  if ( v16 )
  {
    *v16 = (__int64)v107;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
  }
  v108 = 0LL;
  v17 = (unsigned __int8)ShouldSystemUseDarkMode() != 0 ? 0xFF626263 : 0;
  v18 = *((_QWORD *)this + 7);
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v18 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v108);
  LODWORD(v109) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  HIDWORD(v109) = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  v20 = v19(v18, 0LL, v17 + 13882323, v109, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v108);
  v4 = v20;
  if ( v20 < 0 )
  {
    v21 = 172LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v20);
LABEL_25:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v108);
    goto LABEL_15;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v108 + 24LL))(
          v108,
          &v121,
          0LL,
          0LL);
  v4 = v20;
  if ( v20 < 0 )
  {
    v21 = 173LL;
    goto LABEL_24;
  }
  ShouldSystemUseDarkMode();
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v108 + 32LL))(v108, v22, 0LL, 0LL);
  v4 = v20;
  if ( v20 < 0 )
  {
    v21 = 175LL;
    goto LABEL_24;
  }
  v24 = *((_QWORD *)this + 17);
  if ( v24 == *((_QWORD *)this + 19) )
  {
    v25 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v24 + 1,
            v23);
    v26 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v25);
LABEL_79:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v108);
      v4 = v26;
      goto LABEL_15;
    }
  }
  v27 = *((_QWORD *)this + 17) + 1LL;
  *((_QWORD *)this + 17) = v27;
  v28 = (__int64 *)(*((_QWORD *)this + 16) - 8LL + 8 * v27);
  if ( v28 )
  {
    *v28 = v108;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v28);
  }
  v29 = *((_QWORD *)this + 7);
  v30 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v29 + 112LL);
  v31 = (_QWORD *)((char *)this + 160);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v109 = 0x100000001LL;
  v20 = v30(v29, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
  v4 = v20;
  if ( v20 < 0 )
  {
    v21 = 178LL;
    goto LABEL_24;
  }
  v32 = *((_QWORD *)this + 7);
  v33 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v32 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 21);
  LODWORD(v109) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  HIDWORD(v109) = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  v20 = v33(v32, *v31, v109, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 168);
  v4 = v20;
  if ( v20 < 0 )
  {
    v21 = 180LL;
    goto LABEL_24;
  }
  v34 = *((_QWORD *)this + 7);
  v35 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v34 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 22);
  LODWORD(v109) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  HIDWORD(v109) = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  v20 = v35(v34, *v31, v109, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 176);
  v4 = v20;
  if ( v20 < 0 )
  {
    v21 = 181LL;
    goto LABEL_24;
  }
  rc = v121;
  ScaleFactor = VirtualDesktopGestureWindow::GetScaleFactor(v36);
  InflateRect(&rc, ScaleFactor, ScaleFactor);
  VirtualDesktopGestureWindow::GetScaleFactor(v38);
  v111 = 0LL;
  v39 = *((_QWORD *)this + 7);
  v40 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)v39 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v111);
  LODWORD(v109) = rc.right - rc.left;
  HIDWORD(v109) = rc.bottom - rc.top;
  v41 = v40(v39, *((_QWORD *)this + 21), v109, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v111);
  v4 = v41;
  if ( v41 < 0 )
  {
    v42 = 192LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v41);
LABEL_44:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v111);
    goto LABEL_25;
  }
  v41 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v111 + 24LL))(
          v111,
          &rc,
          0LL,
          0LL);
  v4 = v41;
  if ( v41 < 0 )
  {
    v42 = 193LL;
    goto LABEL_43;
  }
  v41 = VirtualDesktopGestureWindow::SetDropShadowEffect(this, v111, (const struct Geometry::CRect *)&rc);
  v4 = v41;
  if ( v41 < 0 )
  {
    v42 = 194LL;
    goto LABEL_43;
  }
  v44 = *((_QWORD *)this + 17);
  if ( v44 == *((_QWORD *)this + 19) )
  {
    v45 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v44 + 1,
            v43);
    v26 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v45);
LABEL_78:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v111);
      goto LABEL_79;
    }
  }
  v46 = *((_QWORD *)this + 17) + 1LL;
  *((_QWORD *)this + 17) = v46;
  v47 = (__int64 *)(*((_QWORD *)this + 16) - 8LL + 8 * v46);
  if ( v47 )
  {
    *v47 = (__int64)v111;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v47);
  }
  v110 = 0LL;
  v48 = *((_QWORD *)this + 7);
  v49 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v48 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
  LODWORD(v109) = rc.right - rc.left;
  HIDWORD(v109) = rc.bottom - rc.top;
  v50 = v49(v48, v111, 0LL, v109, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v110);
  v4 = v50;
  if ( v50 < 0 )
  {
    v51 = 198LL;
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v51,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v50);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
    goto LABEL_44;
  }
  v123 = 0LL;
  v124 = rc.right - rc.left;
  v125 = rc.bottom - rc.top;
  v50 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v110 + 24LL))(v110, &v123, 0LL, 0LL);
  v4 = v50;
  if ( v50 < 0 )
  {
    v51 = 200LL;
    goto LABEL_56;
  }
  ShouldSystemUseDarkMode();
  v50 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v110 + 32LL))(v110, v52, 0LL, 0LL);
  v4 = v50;
  if ( v50 < 0 )
  {
    v51 = 202LL;
    goto LABEL_56;
  }
  v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 240LL))(v110);
  v4 = v50;
  if ( v50 < 0 )
  {
    v51 = 203LL;
    goto LABEL_56;
  }
  v54 = *((_QWORD *)this + 17);
  if ( v54 == *((_QWORD *)this + 19) )
  {
    v26 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v54 + 1,
            v53);
    if ( v26 < 0 )
    {
      v55 = 204LL;
LABEL_77:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v55,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v26);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
      goto LABEL_78;
    }
  }
  v56 = *((_QWORD *)this + 17) + 1LL;
  *((_QWORD *)this + 17) = v56;
  v57 = (__int64 *)(*((_QWORD *)this + 16) - 8LL + 8 * v56);
  if ( v57 )
  {
    *v57 = v110;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v57);
  }
  v58 = *((_QWORD *)this + 7);
  v59 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, __int64, GUID *, int *))(*(_QWORD *)v58 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v113);
  LODWORD(v109) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  HIDWORD(v109) = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
  v50 = v59(v58, v111, v109, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v113);
  v4 = v50;
  if ( v50 < 0 )
  {
    v51 = 207LL;
    goto LABEL_56;
  }
  LODWORD(v122) = ScaleFactor;
  DWORD1(v122) = ScaleFactor;
  DWORD2(v122) = ScaleFactor + v121.right - v121.left;
  HIDWORD(v122) = ScaleFactor + v121.bottom - v121.top;
  v50 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**(_QWORD **)v113 + 24LL))(
          *(_QWORD *)v113,
          &v122,
          0LL,
          0LL);
  v4 = v50;
  if ( v50 < 0 )
  {
    v51 = 209LL;
    goto LABEL_56;
  }
  v50 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v113 + 240LL))(*(_QWORD *)v113);
  v4 = v50;
  if ( v50 < 0 )
  {
    v51 = 210LL;
    goto LABEL_56;
  }
  v61 = *((_QWORD *)this + 17);
  if ( v61 == *((_QWORD *)this + 19) )
  {
    v26 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v61 + 1,
            v60);
    if ( v26 < 0 )
    {
      v55 = 211LL;
      goto LABEL_77;
    }
  }
  v62 = *((_QWORD *)this + 17) + 1LL;
  *((_QWORD *)this + 17) = v62;
  v63 = (__int64 *)(*((_QWORD *)this + 16) - 8LL + 8 * v62);
  if ( v63 )
  {
    *v63 = *(_QWORD *)v113;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v63);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v111);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v108);
LABEL_96:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v107);
  v114 = 0LL;
  if ( *((_DWORD *)this + 57) == 2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v114);
    BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, *(_QWORD *)v113, v14, &v114);
    v4 = BackgroundThumbnail;
    if ( BackgroundThumbnail < 0 )
    {
      v77 = 226LL;
LABEL_101:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v77,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)BackgroundThumbnail);
LABEL_131:
      v13 = &v114;
      goto LABEL_16;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v114);
    BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, 0LL, v14, &v114);
    v4 = BackgroundThumbnail;
    if ( BackgroundThumbnail < 0 )
    {
      v77 = 230LL;
      goto LABEL_101;
    }
  }
  BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v114 + 24LL))(
                          v114,
                          &v121,
                          0LL,
                          0LL);
  v4 = BackgroundThumbnail;
  if ( BackgroundThumbnail < 0 )
  {
    v77 = 232LL;
    goto LABEL_101;
  }
  v79 = v14[1];
  if ( v79 == v14[3] )
  {
    BackgroundThumbnail = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                            (__int64)v14,
                            v79 + 1,
                            v78);
    v4 = BackgroundThumbnail;
    if ( BackgroundThumbnail < 0 )
    {
      v77 = 233LL;
      goto LABEL_101;
    }
  }
  v80 = (__int64 *)(*v14 + 8 * v14[1]++);
  if ( v80 )
  {
    *v80 = v114;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v80);
  }
  *(_QWORD *)v112 = 0LL;
  v81 = *((_QWORD *)this + 7);
  v82 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, int *))(*(_QWORD *)v81 + 88LL);
  if ( *((_DWORD *)this + 57) == 2 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v112);
    v122 = *(_OWORD *)((char *)this + 184);
    v83 = v82(v81, *(_QWORD *)v113, 0LL, &v122, v112);
    v4 = v83;
    if ( v83 < 0 )
    {
      v84 = 238LL;
LABEL_112:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v84,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v83);
LABEL_130:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v112);
      goto LABEL_131;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v112);
    v122 = *(_OWORD *)((char *)this + 184);
    v83 = v82(v81, *((_QWORD *)this + 20), 0LL, &v122, v112);
    v4 = v83;
    if ( v83 < 0 )
    {
      v84 = 242LL;
      goto LABEL_112;
    }
  }
  v83 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)v112 + 24LL))(
          *(_QWORD *)v112,
          &v121,
          0LL,
          0LL);
  v4 = v83;
  if ( v83 < 0 )
  {
    v84 = 244LL;
    goto LABEL_112;
  }
  v86 = *((_QWORD *)this + 17);
  if ( v86 == *((_QWORD *)this + 19) )
  {
    v87 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
            (__int64)this + 128,
            v86 + 1,
            v85);
    v88 = v87;
    if ( v87 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF5,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v87);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v112);
      v4 = v88;
      goto LABEL_131;
    }
  }
  v89 = *((_QWORD *)this + 17) + 1LL;
  *((_QWORD *)this + 17) = v89;
  v90 = (__int64 *)(*((_QWORD *)this + 16) - 8LL + 8 * v89);
  if ( v90 )
  {
    *v90 = *(_QWORD *)v112;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v90);
  }
  v115 = 0LL;
  IsCurrentDesktopRemote = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(v112, &v115);
  v4 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v92 = 248LL;
LABEL_128:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v92,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)IsCurrentDesktopRemote);
LABEL_129:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v115);
    goto LABEL_130;
  }
  IsCurrentDesktopRemote = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v115 + 24LL))(
                             v115,
                             0LL,
                             0LL,
                             0LL,
                             0);
  v4 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v92 = 249LL;
    goto LABEL_128;
  }
  TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 25), v93);
  v116 = 0;
  IsCurrentDesktopRemote = VirtualDesktopGestureWindow::IsCurrentDesktopRemote(this, &v116);
  v4 = IsCurrentDesktopRemote;
  if ( IsCurrentDesktopRemote < 0 )
  {
    v92 = 255LL;
    goto LABEL_128;
  }
  if ( !v116 && TrayWindowForMonitor )
  {
    v110 = 0LL;
    if ( !*((_BYTE *)this + 222) )
    {
      v95 = v113;
      if ( *((_DWORD *)this + 57) != 2 )
        v95 = (int *)((char *)this + 160);
      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v110, v95);
    }
    rc = 0LL;
    GetWindowRect(TrayWindowForMonitor, &rc);
    MapWindowPoints(0LL, *((HWND *)this + 1), (LPPOINT)&rc, 2u);
    *(_QWORD *)&v122 = 0LL;
    DWORD2(v122) = rc.right - rc.left;
    HIDWORD(v122) = rc.bottom - rc.top;
    v107 = 0LL;
    v96 = *((_QWORD *)this + 7);
    v97 = *(__int64 (__fastcall **)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, struct tagSIZE *))(*(_QWORD *)v96 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v107);
    v98 = v97(v96, v110, TrayWindowForMonitor, 0LL, 0LL, &v122, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v107);
    v4 = v98;
    if ( v98 < 0 )
    {
      v99 = 286LL;
LABEL_142:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v99,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v98);
LABEL_146:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v107);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
      goto LABEL_129;
    }
    v98 = (*(__int64 (__fastcall **)(struct tagSIZE, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)&v107 + 24LL))(
            v107,
            &rc,
            0LL,
            0LL);
    v4 = v98;
    if ( v98 < 0 )
    {
      v99 = 287LL;
      goto LABEL_142;
    }
    v101 = *((_QWORD *)this + 17);
    if ( v101 == *((_QWORD *)this + 19) )
    {
      v102 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 128,
               v101 + 1,
               v100);
      v103 = v102;
      if ( v102 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x120,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v102);
        v4 = v103;
        goto LABEL_146;
      }
    }
    v104 = *((_QWORD *)this + 17) + 1LL;
    *((_QWORD *)this + 17) = v104;
    v105 = (__int64 *)(*((_QWORD *)this + 16) - 8LL + 8 * v104);
    if ( v105 )
    {
      *v105 = (__int64)v107;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v105);
    }
    if ( !*((_BYTE *)this + 222) )
    {
      v106 = (*(__int64 (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v107 + 168LL))(v107);
      if ( v106 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x127,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v106);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v107);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v110);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v115);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v112);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v114);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v113);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v117);
  return 0LL;
}
