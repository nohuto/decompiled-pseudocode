/*
 * XREFs of ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18008549C
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180083EB0 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance@CClassicWindowManager@@SAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180056E24 (-s_CreateInstance@CClassicWindowManager@@SAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E933C (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 *     ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EA6E8 (-s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EF9D0 (-s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameFactory@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1801F93FC (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 *     ??0CImmersiveApplicationTransitionHelper@@QEAA@XZ @ 0x180210D9C (--0CImmersiveApplicationTransitionHelper@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x180221898 (--$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveAppli.c)
 *     ?s_CreateInstance@CAppViewManager@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A03DC (-s_CreateInstance@CAppViewManager@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPE.c)
 *     ?s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A9880 (-s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUI.c)
 *     ?s_CreateInstance@CImmersiveWindowManager@@SAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B0118 (-s_CreateInstance@CImmersiveWindowManager@@SAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance@CFallbackWindow@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B2ABC (-s_CreateInstance@CFallbackWindow@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_InitializeIAMSubcomponents(IUnknown *punkSite)
{
  IUnknown *v2; // rbx
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  CCriticalFailureHandler *v5; // rcx
  int Instance; // edi
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  const struct _GUID *v9; // rcx
  CCriticalFailureHandler *v10; // rcx
  CCriticalFailureHandler *v11; // rcx
  IUnknown **v12; // rbx
  const struct _GUID *v13; // rcx
  CCriticalFailureHandler *v14; // rcx
  CCriticalFailureHandler *v15; // rcx
  const struct _GUID *v16; // rdx
  CCriticalFailureHandler *v17; // rcx
  CCriticalFailureHandler *v18; // rcx
  const struct _GUID *v19; // rcx
  CCriticalFailureHandler *v20; // rcx
  CImmersiveApplicationTransitionHelper *v21; // rbx
  void *v22; // rax
  CCriticalFailureHandler *v23; // rcx
  CCriticalFailureHandler *v24; // rcx
  CCriticalFailureHandler *v25; // rcx
  const struct _GUID *v26; // rdx
  CCriticalFailureHandler *v27; // rcx
  const struct _GUID *v28; // rdx
  const struct _GUID *v29; // rdx
  void *v30; // rcx
  unsigned __int64 *v32; // [rsp+20h] [rbp-10h]
  unsigned __int64 *v33; // [rsp+28h] [rbp-8h]
  void *lpVtbl; // [rsp+70h] [rbp+40h] BYREF
  void *v35; // [rsp+78h] [rbp+48h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, IUnknown *); // [rsp+80h] [rbp+50h] BYREF

  v2 = punkSite + 72;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[72]);
  Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)&v2->lpVtbl);
  LODWORD(lpVtbl) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v5, (int *)&lpVtbl);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
    goto LABEL_8;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)&lpVtbl,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1379u,
      v32,
      v33);
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
  {
LABEL_8:
    v35 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    Instance = CImmersiveWindowManager::s_CreateInstance(
                 (struct IIAMServiceProvider *)((unsigned __int64)&punkSite[24] & -(__int64)(punkSite != 0LL)),
                 (const struct _GUID *)&punkSite[24],
                 &v35);
    LODWORD(lpVtbl) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v7, (int *)&lpVtbl);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
      goto LABEL_15;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        (int *)&lpVtbl,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x137Fu,
        v32,
        v33);
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
    {
LABEL_15:
      Instance = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, void *))v2->lpVtbl->QueryInterface + 5))(
                   v2->lpVtbl,
                   v35);
      LODWORD(lpVtbl) = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v8, (int *)&lpVtbl);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
        goto LABEL_22;
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v8,
          (int *)&lpVtbl,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1382u,
          v32,
          v33);
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
      {
LABEL_22:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[71]);
        Instance = CFallbackWindow::s_CreateInstance(v9, (void **)&punkSite[71].lpVtbl);
        LODWORD(lpVtbl) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v10, (int *)&lpVtbl);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
          goto LABEL_29;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v10,
            (int *)&lpVtbl,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x1389u,
            v32,
            v33);
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
        {
LABEL_29:
          Instance = IUnknown_SetSite((IUnknown *)punkSite[71].lpVtbl, punkSite);
          LODWORD(lpVtbl) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v11, (int *)&lpVtbl);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
            goto LABEL_36;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v11,
              (int *)&lpVtbl,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x138Cu,
              v32,
              v33);
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
          {
LABEL_36:
            v12 = (IUnknown **)&punkSite[66];
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[66]);
            Instance = CImmersiveMode::s_CreateInstance(v13, (void **)&punkSite[66].lpVtbl);
            LODWORD(lpVtbl) = Instance;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v14, (int *)&lpVtbl);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
              goto LABEL_43;
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v14,
                (int *)&lpVtbl,
                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                0x1394u,
                v32,
                v33);
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
            {
LABEL_43:
              Instance = IUnknown_SetSite(*v12, punkSite);
              LODWORD(lpVtbl) = Instance;
              if ( !CRVPrivate::cfhImmersiveShellStartup )
              {
                CCriticalFailureHandler::GetFakeFailure(v15, (int *)&lpVtbl);
                CRVPrivate::cfhImmersiveShellStartup = 1;
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
                goto LABEL_50;
              if ( Instance != -2147024882 && Instance != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v15,
                  (int *)&lpVtbl,
                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  0x1397u,
                  v32,
                  v33);
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
              {
LABEL_50:
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[67]);
                Instance = CClassicWindowManager::s_CreateInstance(
                             (struct IImmersiveSystemModeInternal *)*v12,
                             v16,
                             (void **)&punkSite[67].lpVtbl);
                LODWORD(lpVtbl) = Instance;
                if ( !CRVPrivate::cfhImmersiveShellStartup )
                {
                  CCriticalFailureHandler::GetFakeFailure(v17, (int *)&lpVtbl);
                  CRVPrivate::cfhImmersiveShellStartup = 1;
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                  goto LABEL_57;
                if ( Instance != -2147024882 && Instance != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v17,
                    (int *)&lpVtbl,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    0x139Fu,
                    v32,
                    v33);
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                {
LABEL_57:
                  Instance = IUnknown_SetSite((IUnknown *)punkSite[67].lpVtbl, punkSite);
                  LODWORD(lpVtbl) = Instance;
                  if ( !CRVPrivate::cfhImmersiveShellStartup )
                  {
                    CCriticalFailureHandler::GetFakeFailure(v18, (int *)&lpVtbl);
                    CRVPrivate::cfhImmersiveShellStartup = 1;
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                    goto LABEL_64;
                  if ( Instance != -2147024882 && Instance != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v18,
                      (int *)&lpVtbl,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      0x13A2u,
                      v32,
                      v33);
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                  {
LABEL_64:
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[68]);
                    Instance = CRotationManagerSync::s_CreateInstance(v19, (void **)&punkSite[68].lpVtbl);
                    LODWORD(lpVtbl) = Instance;
                    if ( !CRVPrivate::cfhImmersiveShellStartup )
                    {
                      CCriticalFailureHandler::GetFakeFailure(v20, (int *)&lpVtbl);
                      CRVPrivate::cfhImmersiveShellStartup = 1;
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                      goto LABEL_71;
                    if ( Instance != -2147024882 && Instance != -2144862209 )
                    {
                      CCriticalFailureHandler::HandleFailure(
                        v20,
                        (int *)&lpVtbl,
                        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        0x13AAu,
                        v32,
                        v33);
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                    {
LABEL_71:
                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[69]);
                      punkSite[69].lpVtbl = 0LL;
                      v21 = 0LL;
                      v22 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
                      lpVtbl = v22;
                      if ( v22 )
                      {
                        v21 = CImmersiveApplicationTransitionHelper::CImmersiveApplicationTransitionHelper((CImmersiveApplicationTransitionHelper *)v22);
                        lpVtbl = 0LL;
                      }
                      Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&lpVtbl);
                      if ( v21 )
                        Instance = (**(__int64 (__fastcall ***)(CImmersiveApplicationTransitionHelper *, GUID *, IUnknown *))v21)(
                                     v21,
                                     &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                                     punkSite + 69);
                      else
                        Instance = -2147024882;
                      if ( v21 )
                        (*(void (__fastcall **)(CImmersiveApplicationTransitionHelper *))(*(_QWORD *)v21 + 16LL))(v21);
                      LODWORD(lpVtbl) = Instance;
                      if ( !CRVPrivate::cfhImmersiveShellStartup )
                      {
                        CCriticalFailureHandler::GetFakeFailure(v23, (int *)&lpVtbl);
                        CRVPrivate::cfhImmersiveShellStartup = 1;
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                        goto LABEL_85;
                      if ( Instance != -2147024882 && Instance != -2144862209 )
                      {
                        CCriticalFailureHandler::HandleFailure(
                          v23,
                          (int *)&lpVtbl,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          0x13B4u,
                          v32,
                          v33);
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                      {
LABEL_85:
                        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[74]);
                        lpVtbl = punkSite[69].lpVtbl;
                        punkSite[74].lpVtbl = 0LL;
                        v36 = 0LL;
                        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
                        Instance = Microsoft::WRL::Details::MakeAndInitialize<CCharmsWindowManager,ICharmWindowManagerInternal,IImmersiveApplicationTransitionHelper * &>(
                                     &v36,
                                     &lpVtbl);
                        if ( Instance >= 0 )
                          Instance = (**v36)(v36, &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee, punkSite + 74);
                        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
                        LODWORD(lpVtbl) = Instance;
                        if ( !CRVPrivate::cfhImmersiveShellStartup )
                        {
                          CCriticalFailureHandler::GetFakeFailure(v24, (int *)&lpVtbl);
                          CRVPrivate::cfhImmersiveShellStartup = 1;
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                          goto LABEL_94;
                        if ( Instance != -2147024882 && Instance != -2144862209 )
                        {
                          CCriticalFailureHandler::HandleFailure(
                            v24,
                            (int *)&lpVtbl,
                            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            0x13BBu,
                            v32,
                            v33);
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                        {
LABEL_94:
                          Instance = IUnknown_SetSite((IUnknown *)punkSite[74].lpVtbl, punkSite);
                          LODWORD(lpVtbl) = Instance;
                          if ( !CRVPrivate::cfhImmersiveShellStartup )
                          {
                            CCriticalFailureHandler::GetFakeFailure(v25, (int *)&lpVtbl);
                            CRVPrivate::cfhImmersiveShellStartup = 1;
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                            goto LABEL_101;
                          if ( Instance != -2147024882 && Instance != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              v25,
                              (int *)&lpVtbl,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x13BEu,
                              v32,
                              v33);
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                          {
LABEL_101:
                            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[75]);
                            Instance = CAppViewManager::s_CreateInstance(
                                         (struct IImmersiveApplicationManagerInternal *)((unsigned __int64)&punkSite[30] & -(__int64)(punkSite != 0LL)),
                                         v26,
                                         (void **)&punkSite[75].lpVtbl);
                            LODWORD(lpVtbl) = Instance;
                            if ( !CRVPrivate::cfhImmersiveShellStartup )
                            {
                              CCriticalFailureHandler::GetFakeFailure(v27, (int *)&lpVtbl);
                              CRVPrivate::cfhImmersiveShellStartup = 1;
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                              goto LABEL_108;
                            if ( Instance != -2147024882 && Instance != -2144862209 )
                            {
                              CCriticalFailureHandler::HandleFailure(
                                v27,
                                (int *)&lpVtbl,
                                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                0x13C6u,
                                v32,
                                v33);
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                            {
LABEL_108:
                              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[65]);
                              Instance = CRealmActivationHistory::s_CreateInstance(
                                           (struct IImmersiveApplicationManagerInternal *)((unsigned __int64)&punkSite[30] & -(__int64)(punkSite != 0LL)),
                                           v28,
                                           (void **)&punkSite[65].lpVtbl);
                              if ( Instance >= 0 )
                              {
                                Instance = IUnknown_SetSite((IUnknown *)punkSite[65].lpVtbl, punkSite);
                                if ( Instance >= 0 )
                                {
                                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[76]);
                                  Instance = CApplicationFrameService_CreateInstance(
                                               (struct IImmersiveApplicationManagerInternal *)((unsigned __int64)&punkSite[30] & -(__int64)(punkSite != 0LL)),
                                               v29,
                                               (void **)&punkSite[76].lpVtbl);
                                  if ( Instance >= 0 )
                                  {
                                    Instance = IUnknown_SetSite((IUnknown *)punkSite[76].lpVtbl, punkSite);
                                    if ( Instance >= 0 )
                                    {
                                      lpVtbl = CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
                                      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[77]);
                                      Instance = Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
                                                   &punkSite[77],
                                                   &lpVtbl);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v30 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
  return (unsigned int)Instance;
}
