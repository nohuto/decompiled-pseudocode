/*
 * XREFs of ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180083EB0
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800E9A70 (--$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18004A1A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180084674 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18008549C (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ??0CIAMGlobals@@QEAA@XZ @ 0x180085C1C (--0CIAMGlobals@@QEAA@XZ.c)
 *     ?InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x180178B34 (-InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z.c)
 *     ?s_CreateInstance@CIAMSpecialWindow@@SAJQEBUSPECIAL_WINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B1D24 (-s_CreateInstance@CIAMSpecialWindow@@SAJQEBUSPECIAL_WINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::RuntimeClassInitialize(CApplicationManager *this)
{
  CIAMGlobals *v2; // rax
  CCriticalFailureHandler *v3; // rcx
  RTL_SRWLOCK *v4; // rax
  signed int inited; // ebx
  const struct _GUID *v6; // rdx
  HWND v7; // rsi
  CIAMGlobals *v8; // rax
  unsigned __int64 *v10; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-28h]
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-10h]
  CIAMGlobals *v14; // [rsp+88h] [rbp+38h] BYREF

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
    inited = (int)v14;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( inited >= 0 )
    goto LABEL_11;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x131Cu,
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
      inited = (int)v14;
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
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
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    inited = (int)v14;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( inited >= 0 )
    goto LABEL_24;
  if ( inited != -2147024882 && inited != -2144862209 )
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
  if ( inited >= 0 )
  {
LABEL_24:
    inited = CObjectWithThreadUseDetection::InitApartmentId((CApplicationManager *)((char *)this + 392));
    LODWORD(v14) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    inited = (int)v14;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( inited >= 0 )
    goto LABEL_32;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x132Au,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_32:
    v13 = 1;
    v12[0] = L"ApplicationManager_DesktopShellWindow";
    v12[1] = ((unsigned __int64)this + 200) & -(__int64)(this != 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 94);
    inited = CIAMSpecialWindow::s_CreateInstance(
               (const struct SPECIAL_WINDOW_INIT_DATA *const)v12,
               v6,
               (void **)this + 94);
    LODWORD(v14) = inited;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
      inited = (int)v14;
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( inited >= 0 )
      goto LABEL_39;
    if ( inited != -2147024882 && inited != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        (int *)&v14,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x1339u,
        v10,
        v11);
      inited = (int)v14;
    }
    if ( inited >= 0 )
    {
LABEL_39:
      v7 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94));
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
        v7,
        1LL);
      v8 = (CIAMGlobals *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
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
        inited = (int)v14;
        CRVPrivate::cfhImmersiveShellStartup = 1;
      }
      if ( inited >= 0 )
        goto LABEL_49;
      if ( inited != -2147024882 && inited != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v3,
          (int *)&v14,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1342u,
          v10,
          v11);
        inited = (int)v14;
      }
      if ( inited >= 0 )
LABEL_49:
        SetPropW(v7, L"AllowConsentToStealFocus", HANDLE_FLAG_INHERIT);
    }
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    inited = (int)v14;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( inited >= 0 )
    goto LABEL_57;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x134Cu,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_57:
    inited = CApplicationManager::_InitializeIAMSubcomponents((IUnknown *)this);
    LODWORD(v14) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    inited = (int)v14;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( inited >= 0 )
    goto LABEL_78;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1352u,
      v10,
      v11);
    inited = (int)v14;
  }
  if ( inited >= 0 )
  {
LABEL_78:
    if ( dword_1808DDE50 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 16LL) )
    {
      Init_thread_header(&dword_1808DDE50);
      if ( dword_1808DDE50 == -1 )
      {
        xmmword_1808DA130 = *(_OWORD *)&SID_ImmersiveApplicationArrayService.Revision;
        xmmword_1808DA110 = IID_IImmersiveApplicationManager;
        xmmword_1808DA150 = (__int128)IID_IImmersiveApplicationNotificationService;
        xmmword_1808DA120 = 0LL;
        xmmword_1808DA140 = 0LL;
        xmmword_1808DA160 = 0LL;
        xmmword_1808DA180 = 0LL;
        xmmword_1808DA1A0 = 0LL;
        xmmword_1808DA1C0 = 0LL;
        xmmword_1808DA1E0 = 0LL;
        xmmword_1808DA200 = 0LL;
        xmmword_1808DA220 = 0LL;
        xmmword_1808DA170 = (__int128)IID_IRequestTrustedComponentForegroundControlInitialization;
        xmmword_1808DA190 = (__int128)IID_IImmersiveApplicationVisibilityOverride;
        xmmword_1808DA1B0 = (__int128)IID_IAppSwitchingTestability;
        xmmword_1808DA1D0 = xmmword_18077DCB0;
        xmmword_1808DA1F0 = xmmword_18077DCE0;
        xmmword_1808DA210 = xmmword_18077DCF0;
        xmmword_1808DA230 = (__int128)IID_IClassicWindowManager;
        qword_1808DA240 = *((_QWORD *)this + 67);
        qword_1808DA248 = 0LL;
        xmmword_1808DA250 = (__int128)IID_IImmersiveSystemMode;
        qword_1808DA260 = *((_QWORD *)this + 66);
        qword_1808DA268 = 0LL;
        xmmword_1808DA270 = (__int128)IID_IActiveZBand;
        qword_1808DA280 = *((_QWORD *)this + 66);
        qword_1808DA288 = 0LL;
        xmmword_1808DA290 = *(_OWORD *)&SID_GlobalDesktopVisibilityService.Revision;
        qword_1808DA2A0 = *((_QWORD *)this + 66);
        qword_1808DA2A8 = 0LL;
        xmmword_1808DA2B0 = (__int128)IID_IImmersiveCharmsWindowManager;
        qword_1808DA2C0 = *((_QWORD *)this + 74);
        qword_1808DA2C8 = 0LL;
        xmmword_1808DA2D0 = (__int128)IID_IAppViewManager;
        qword_1808DA2E0 = *((_QWORD *)this + 75);
        qword_1808DA2E8 = 0LL;
        xmmword_1808DA2F0 = (__int128)GUID_4b2a4af0_50dc_4266_b0ae_1d4013d069b7;
        qword_1808DA300 = *((_QWORD *)this + 75);
        qword_1808DA308 = 0LL;
        xmmword_1808DA310 = (__int128)IID_IRealmActivationHistory;
        qword_1808DA320 = *((_QWORD *)this + 65);
        qword_1808DA328 = 0LL;
        xmmword_1808DA330 = (__int128)GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e;
        qword_1808DA340 = *((_QWORD *)this + 77);
        qword_1808DA348 = 0LL;
        xmmword_1808DA350 = (__int128)GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425;
        qword_1808DA360 = *((_QWORD *)this + 68);
        qword_1808DA368 = 0LL;
        Init_thread_footer(&dword_1808DDE50);
      }
    }
    inited = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationManager *)((char *)this + 88),
               (__int64)&xmmword_1808DA110,
               0x13uLL);
    LODWORD(v14) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v14);
    inited = (int)v14;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v14,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x136Fu,
      v10,
      v11);
    return (unsigned int)v14;
  }
  return (unsigned int)inited;
}
