/*
 * XREFs of ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18004B774
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18004CBAC (--$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180025070 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180027CC0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18004BEB0 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ??0CIAMGlobals@@QEAA@XZ @ 0x18004C668 (--0CIAMGlobals@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18004C738 (--$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Micros.c)
 *     ?InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x180091418 (-InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180091788 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180654658 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::RuntimeClassInitialize(CApplicationManager *this)
{
  CIAMGlobals *v2; // rax
  CCriticalFailureHandler *v3; // rcx
  RTL_SRWLOCK *v4; // rax
  signed int inited; // ebx
  char v6; // al
  HWND v7; // rsi
  CCriticalFailureHandler *v8; // rax
  unsigned __int64 *v10; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-28h]
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-10h]
  CCriticalFailureHandler *v14; // [rsp+88h] [rbp+38h] BYREF
  _QWORD *v15; // [rsp+90h] [rbp+40h] BYREF

  v2 = (CIAMGlobals *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v2;
  if ( v2 )
    v4 = (RTL_SRWLOCK *)CIAMGlobals::CIAMGlobals(v2);
  else
    v4 = 0LL;
  CApplicationManagerUtility::g_pIAMGlobals = v4;
  inited = v4 == 0LL ? 0x8007000E : 0;
  LODWORD(v14) = inited;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_11;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x131Fu,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_11:
    inited = InitializePrivilegedOperationsForIam((struct IPrivilegedOperationsConsumer *)(((unsigned __int64)this + 320) & -(__int64)(this != 0LL)));
    LODWORD(v14) = inited;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      inited = (int)v14;
    }
    if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        (int *)&v14,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x1322u,
        v10,
        v11);
      inited = (int)v14;
    }
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_24;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1325u,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_24:
    inited = CObjectWithThreadUseDetection::InitApartmentId((CApplicationManager *)((char *)this + 392));
    LODWORD(v14) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_32;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x132Du,
      v10,
      v11);
    inited = (int)v14;
  }
  v6 = 0;
  if ( inited >= 0 )
LABEL_32:
    v6 = 1;
  if ( v6 )
  {
    v12[0] = L"ApplicationManager_DesktopShellWindow";
    v12[1] = ((unsigned __int64)this + 200) & -(__int64)(this != 0LL);
    v13 = 1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 94);
    v15 = v12;
    *((_QWORD *)this + 94) = 0LL;
    v14 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    inited = Microsoft::WRL::Details::MakeAndInitialize<CIAMSpecialWindow,CIAMSpecialWindow,SPECIAL_WINDOW_INIT_DATA const * const &>(
               &v14,
               &v15);
    if ( inited >= 0 )
      inited = (**(__int64 (__fastcall ***)(CCriticalFailureHandler *, GUID *, char *))v14)(
                 v14,
                 &GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee,
                 (char *)this + 752);
    v3 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(CCriticalFailureHandler *))(*(_QWORD *)v3 + 16LL))(v3);
    }
    LODWORD(v14) = inited;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      inited = (int)v14;
    }
    if ( inited >= 0 )
      goto LABEL_45;
    if ( inited != -2147024882 && inited != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        (int *)&v14,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x133Cu,
        v10,
        v11);
      inited = (int)v14;
    }
    if ( inited >= 0 )
    {
LABEL_45:
      v7 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94));
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
        v7,
        1LL);
      v8 = (CCriticalFailureHandler *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v8;
      if ( v8 )
      {
        *(_DWORD *)v8 = 1;
        *((_QWORD *)v8 + 1) = 0LL;
        *((_QWORD *)v8 + 2) = v7;
        *((_QWORD *)v8 + 3) = 0LL;
        *((_QWORD *)v8 + 4) = 0LL;
        *((_QWORD *)v8 + 5) = 0LL;
        *((_QWORD *)v8 + 6) = 0LL;
        *((_DWORD *)v8 + 14) = 0;
      }
      else
      {
        v8 = 0LL;
      }
      *((_QWORD *)this + 100) = v8;
      inited = v8 == 0LL ? 0x8007000E : 0;
      LODWORD(v14) = inited;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        inited = (int)v14;
      }
      if ( inited >= 0 )
        goto LABEL_55;
      if ( inited != -2147024882 && inited != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v3,
          (int *)&v14,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1345u,
          v10,
          v11);
        inited = (int)v14;
      }
      if ( inited >= 0 )
LABEL_55:
        SetPropW(v7, L"AllowConsentToStealFocus", HANDLE_FLAG_INHERIT);
    }
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_63;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x134Fu,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_63:
    inited = CApplicationManager::_InitializeIAMSubcomponents((IUnknown *)this);
    LODWORD(v14) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited >= 0 )
    goto LABEL_84;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1355u,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_84:
    if ( dword_18089D850 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 16LL) )
    {
      Init_thread_header(&dword_18089D850);
      if ( dword_18089D850 == -1 )
      {
        xmmword_180899AE0 = IID_IImmersiveApplicationManager;
        xmmword_180899AF0 = 0LL;
        xmmword_180899B00 = *(_OWORD *)&SID_ImmersiveApplicationArrayService.Revision;
        xmmword_180899B10 = 0LL;
        xmmword_180899B20 = (__int128)IID_IImmersiveApplicationNotificationService;
        xmmword_180899B30 = 0LL;
        xmmword_180899B40 = (__int128)IID_IRequestTrustedComponentForegroundControlInitialization;
        xmmword_180899B50 = 0LL;
        xmmword_180899B60 = (__int128)IID_IImmersiveApplicationVisibilityOverride;
        xmmword_180899B70 = 0LL;
        xmmword_180899B80 = (__int128)IID_IAppSwitchingTestability;
        xmmword_180899B90 = 0LL;
        xmmword_180899BA0 = xmmword_180750968;
        xmmword_180899BB0 = 0LL;
        xmmword_180899BC0 = xmmword_180750998;
        xmmword_180899BD0 = 0LL;
        xmmword_180899BE0 = xmmword_1807509A8;
        xmmword_180899BF0 = 0LL;
        xmmword_180899C00 = (__int128)IID_IClassicWindowManager;
        qword_180899C10 = *((_QWORD *)this + 67);
        qword_180899C18 = 0LL;
        xmmword_180899C20 = (__int128)IID_IImmersiveSystemMode;
        qword_180899C30 = *((_QWORD *)this + 66);
        qword_180899C38 = 0LL;
        xmmword_180899C40 = (__int128)IID_IActiveZBand;
        qword_180899C50 = *((_QWORD *)this + 66);
        qword_180899C58 = 0LL;
        xmmword_180899C60 = *(_OWORD *)&SID_GlobalDesktopVisibilityService.Revision;
        qword_180899C70 = *((_QWORD *)this + 66);
        qword_180899C78 = 0LL;
        xmmword_180899C80 = (__int128)IID_IImmersiveCharmsWindowManager;
        qword_180899C90 = *((_QWORD *)this + 74);
        qword_180899C98 = 0LL;
        xmmword_180899CA0 = (__int128)IID_IAppViewManager;
        qword_180899CB0 = *((_QWORD *)this + 75);
        qword_180899CB8 = 0LL;
        xmmword_180899CC0 = (__int128)GUID_4b2a4af0_50dc_4266_b0ae_1d4013d069b7;
        qword_180899CD0 = *((_QWORD *)this + 75);
        qword_180899CD8 = 0LL;
        xmmword_180899CE0 = (__int128)IID_IRealmActivationHistory;
        qword_180899CF0 = *((_QWORD *)this + 65);
        qword_180899CF8 = 0LL;
        xmmword_180899D00 = (__int128)GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e;
        qword_180899D10 = *((_QWORD *)this + 77);
        qword_180899D18 = 0LL;
        xmmword_180899D20 = (__int128)GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425;
        qword_180899D30 = *((_QWORD *)this + 68);
        qword_180899D38 = 0LL;
        Init_thread_footer(&dword_18089D850);
      }
    }
    inited = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationManager *)((char *)this + 88),
               (__int64)&xmmword_180899AE0,
               0x13uLL);
    LODWORD(v14) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    inited = (int)v14;
  }
  if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1372u,
      v10,
      v11);
    return (unsigned int)v14;
  }
  return (unsigned int)inited;
}
