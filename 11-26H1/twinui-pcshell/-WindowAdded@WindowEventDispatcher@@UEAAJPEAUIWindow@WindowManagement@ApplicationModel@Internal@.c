/*
 * XREFs of ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18041F550
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180068F1C (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     ??$WindowEventDispatcher_OnWindowAdded@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18006A7DC (--$WindowEventDispatcher_OnWindowAdded@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x1801085C4 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?4VLegacyWindowWrapper@@X@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@@Z @ 0x1801CF0F4 (--$-4VLegacyWindowWrapper@@X@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F7A10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180241870 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Window.c)
 *     ??$MakeOrThrow@VLegacyWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@AEAPEAUIWindow@4567@AEAUWindowId@4567@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@wil@@YA?AV?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@AEAPEAUIWindow@6789@AEAUWindowId@6789@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x180410B40 (--$MakeOrThrow@VLegacyWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@Ap.c)
 *     ??$MakeOrThrow@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@AEAPEAUIWindow@4567@AEAUWindowId@4567@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@wil@@YA?AV?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@AEAPEAUIWindow@6789@AEAUWindowId@6789@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x180410C74 (--$MakeOrThrow@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@Applicat.c)
 *     ??$com_query@UINtUserViewWrapper@@AEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UINtUserViewWrapper@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@0@@Z @ 0x180411894 (--$com_query@UINtUserViewWrapper@@AEAV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy.c)
 *     ??4?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180413574 (--4-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x180417EEC (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?GetAppViewStatics@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180418CB0 (-GetAppViewStatics@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIAppViewStatics@WindowManagement@A.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180419034 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@U_ea_180419034.c)
 *     ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x180419108 (-GetEventRegistration@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@P.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x18041ABB4 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18041C254 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18041C2D0 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18041D1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_18041D1F0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall WindowEventDispatcher::WindowAdded(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rdi
  char v6; // r12
  __int64 result; // rax
  int v8; // eax
  __int64 *AppViewStatics; // rax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 *CachedView; // rax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rcx
  const WCHAR *v21; // rdi
  const WCHAR *v22; // rax
  __int64 *EventRegistration; // rax
  _QWORD *v24; // rdi
  __int64 *v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 (__fastcall *v29)(__int64, _QWORD, int *); // rdi
  int v30; // eax
  __int64 *v31; // rcx
  int v32; // esi
  int v33; // eax
  __int64 *v34; // rax
  int v35; // eax
  unsigned int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 (__fastcall *v39)(__int64, _QWORD, __int64, __int64 *); // rdi
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  bool v43; // si
  _QWORD *v44; // rax
  int v45; // edi
  __int64 v46; // rdi
  __int64 (__fastcall *v47)(__int64, _QWORD, _QWORD); // rsi
  unsigned int v48; // eax
  int v49; // eax
  const char *v50; // r9
  int v51; // [rsp+20h] [rbp-F8h]
  int v52; // [rsp+40h] [rbp-D8h]
  int v53[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v54)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v55; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+68h] [rbp-B0h] BYREF
  int v57; // [rsp+70h] [rbp-A8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v58; // [rsp+78h] [rbp-A0h] BYREF
  int v59; // [rsp+80h] [rbp-98h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v60; // [rsp+88h] [rbp-90h] BYREF
  std::_Ref_count_base *v61; // [rsp+90h] [rbp-88h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v62; // [rsp+98h] [rbp-80h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v63; // [rsp+A0h] [rbp-78h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v64; // [rsp+A8h] [rbp-70h] BYREF
  int v65; // [rsp+B0h] [rbp-68h]
  std::_Ref_count_base *v66[2]; // [rsp+B8h] [rbp-60h] BYREF
  _QWORD v67[10]; // [rsp+C8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  __int64 v69; // [rsp+128h] [rbp+10h] BYREF
  unsigned int v70; // [rsp+130h] [rbp+18h] BYREF
  __int64 v71; // [rsp+138h] [rbp+20h] BYREF

  v70 = a3;
  v69 = a2;
  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 0LL;
  v65 = 0;
  try
  {
    v8 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 80LL))();
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v51);
    v58 = 0LL;
    AppViewStatics = WindowEventDispatcher::GetAppViewStatics(a1 - 16, &v71);
    v10 = *AppViewStatics;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)*AppViewStatics + 120LL);
    v58 = 0LL;
    v12 = v11(v10, v4, &v58);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v71);
    v53[0] = 0;
    v63 = 0LL;
    if ( IsComponentAppViewAndGetKindAndModel(
           v58,
           (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)v53,
           &v63) )
    {
      goto LABEL_71;
    }
    *(_OWORD *)v66 = 0LL;
    v57 = 0;
    v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))(*(_QWORD *)v58 + 48LL))(
            v58,
            &v57);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5BF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        v51);
    v54 = 0LL;
    LODWORD(v71) = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, &v71);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5C4,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v14,
        v51);
    wil::AcquireSRWLockExclusive(&v55, (RTL_SRWLOCK *)(a1 + 456));
    CachedView = WindowEventDispatcher::GetCachedView(a1 - 16, &v56, v57);
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)&v54, CachedView);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
    v16 = v54;
    if ( v54 )
    {
LABEL_28:
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v55);
      LOBYTE(v69) = 0;
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &v54,
        &v62);
      v59 = 0;
      v26 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, int *))(*(_QWORD *)v62 + 352LL))(
              v62,
              &v59);
      if ( v26 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x603,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v26,
          v51);
      if ( v59 )
      {
        if ( !v6 )
        {
          wil::AcquireSRWLockExclusive(&v55, (RTL_SRWLOCK *)(a1 + 456));
          v32 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[32])(v16);
          v33 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, _QWORD, _QWORD))(*v16)[27])(
                  v16,
                  v4,
                  (unsigned int)v71,
                  v3);
          if ( v33 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x611,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v33,
              v51);
          if ( ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[32])(v16) != v32 )
          {
            LOBYTE(v69) = 1;
            v34 = (__int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel **))(*v16)[33])(
                               v16,
                               &v60);
            std::shared_ptr<KBViewInfo>::operator=(v66, v34);
            if ( v61 )
              std::_Ref_count_base::_Decref(v61);
          }
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v55);
        }
        v53[0] = 0;
        v35 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))(*(_QWORD *)v58 + 128LL))(
                v58,
                v53);
        if ( v35 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x620,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v35,
            v51);
        if ( v53[0] != 1 )
          goto LABEL_48;
        v56 = 0LL;
        v37 = (*(__int64 (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 296) + 48LL))(
                *(_QWORD *)(a1 + 296),
                &v55);
        v38 = *(_QWORD *)v37;
        v39 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(**(_QWORD **)v37 + 136LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v56);
        v40 = v39(v38, (unsigned int)v71, 1LL, &v56);
        if ( v40 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x628,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v40);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55);
        v31 = &v56;
      }
      else
      {
        *(_QWORD *)v53 = 0LL;
        v27 = (*(__int64 (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 296) + 48LL))(
                *(_QWORD *)(a1 + 296),
                &v55);
        v28 = *(_QWORD *)v27;
        v29 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(**(_QWORD **)v27 + 56LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v53);
        v30 = v29(v28, (unsigned int)v71, v53);
        if ( v30 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x609,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v30);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55);
        v31 = (__int64 *)v53;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v31);
LABEL_48:
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v53[0] = 0;
          SHRegGetBOOLWithREGSAM(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
            L"DisableAppRecoveryAfterShellRestart",
            v36,
            v53);
          if ( v6 )
          {
            LODWORD(v69) = 0;
            v43 = 0;
            v44 = wil::com_query<INtUserViewWrapper,wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> &>(
                    &v55,
                    &v54);
            v45 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(*(_QWORD *)*v44 + 88LL))(
                    *v44,
                    L"ExperienceId",
                    &v69);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v55);
            if ( v45 >= 0 )
              v43 = (_DWORD)v69 != 0;
            wil::AcquireSRWLockExclusive(&v55, (RTL_SRWLOCK *)(a1 + 456));
            if ( v53[0] || !v43 )
            {
              v46 = *(_QWORD *)(a1 + 296);
              v47 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v46 + 56LL);
              v48 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[36])(v16);
              v49 = v47(v46, v48, 0LL);
              if ( v49 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x64B,
                  (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  (const char *)(unsigned int)v49);
            }
            else if ( *(_QWORD *)(a1 + 384) == *(_QWORD *)(a1 + 392) )
            {
              std::vector<wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy> const &>(
                a1 + 376,
                *(__int64 **)(a1 + 384),
                (__int64 *)&v54);
              v16 = v54;
            }
            else
            {
              wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                *(__int64 **)(a1 + 384),
                (__int64 *)&v54);
              *(_QWORD *)(a1 + 384) += 8LL;
            }
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v55);
          }
        }
      }
      else if ( v6 )
      {
        v41 = *((_QWORD *)v66[0] + 3);
        v69 = v41;
        if ( v41 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
        WindowEventDispatcher::RaiseViewEventWithPropertySet(a1 - 16, v62, 0, 0LL, &v69);
      }
      else if ( (_BYTE)v69 )
      {
        v42 = *((_QWORD *)v66[0] + 3);
        v69 = v42;
        if ( v42 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
        WindowEventDispatcher::RaiseViewEvent(a1 - 16, (__int64)v62, 6u, &v69);
      }
      LODWORD(v69) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[36])(v16);
      v55 = (RTL_SRWLOCK *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[34])(v16);
      ViewManagerInteropTraceLogging::WindowEventDispatcher_OnWindowAdded<unsigned short const *,unsigned int>(
        (const WCHAR **)&v55,
        &v69);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v62);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v54);
      if ( v66[1] )
        std::_Ref_count_base::_Decref(v66[1]);
LABEL_71:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v63);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58);
      return 0LL;
    }
    if ( v53[0] )
    {
      v60 = v63;
      v64 = v58;
      v67[0] = a1 - 16;
      v19 = wil::MakeOrThrow<WindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow * &,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &>(
              &v56,
              v67,
              &v64,
              &v60,
              v53,
              &v57,
              &v69,
              &v71,
              v52,
              &v70);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=<LegacyWindowWrapper,void>(
        (__int64 *)&v54,
        v19);
      v20 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v20);
      }
      v3 = v70;
      if ( !v70 )
      {
        v16 = v54;
        goto LABEL_23;
      }
    }
    else
    {
      v67[0] = v63;
      v64 = v58;
      v60 = (struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *)(a1 - 16);
      v17 = wil::MakeOrThrow<LegacyWindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow * &,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const (&)[53],enum WindowCreatedType &>(
              &v56,
              &v60,
              &v64,
              v67,
              v53,
              &v57,
              &v69,
              &v71,
              v52,
              &v70);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::operator=<LegacyWindowWrapper,void>(
        (__int64 *)&v54,
        v17);
      v18 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::Release(v18);
      }
      v3 = v70;
      if ( !v70 )
      {
        v16 = v54;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v54)[42])(v54);
LABEL_23:
        v21 = (const WCHAR *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[35])(v16);
        v22 = (const WCHAR *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[34])(v16);
        EventRegistration = WindowEventDispatcher::GetEventRegistration(a1 - 16, &v60, v22, v21);
        std::shared_ptr<KBViewInfo>::operator=(v66, EventRegistration);
        if ( v61 )
          std::_Ref_count_base::_Decref(v61);
        v24 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v67, v66);
        v25 = wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                (__int64 *)&v60,
                (__int64 *)&v54);
        WindowEventDispatcher::CacheWindowWrapper(a1 - 16, v25, (__int64)v24, 0LL);
        goto LABEL_27;
      }
    }
    v16 = v54;
LABEL_27:
    v6 = 1;
    v4 = v69;
    goto LABEL_28;
  }
  catch ( ... )
  {
    LODWORD(v69) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x659,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                     v50);
    return (unsigned int)v69;
  }
  return result;
}
