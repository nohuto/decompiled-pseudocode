/*
 * XREFs of ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x180079C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180072930 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ @ 0x180079A78 (-InitializeSnapQuadrantsPolicy@SnapLayoutHelpers@@YAXXZ.c)
 *     ?SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEAUIImmersiveMonitorManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUITabletModeController@@AEBU_GUID@@PEAPEAX@Z @ 0x180079B54 (-SnapHotkeyHandler_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUISnapAssistController@@PEA.c)
 *     ??0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z @ 0x18007AA40 (--0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BD680 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIWindowManag.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UHitTestPartNotifyEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E8D98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_1801E8D98.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UDragSizeInfoEventArgs@2345@@Foundation@Windows@@V_lambda_6ac410e79d22676e05d6f96b06aeb884_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@UDragSizeInfoEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UDragSizeInfoEventArgs@2345@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@UDragSizeInfoEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_6ac410e79d22676e05d6f96b06aeb884_@@@Z @ 0x1802353C0 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEve.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@Z @ 0x1802C0378 (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotificati_ea_1802C0378.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18057BA44 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@AE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CShellSnapComponent::PerformDelayedInitialization(CShellSnapComponent *this)
{
  struct IImmersiveMonitorManager *v2; // rdi
  SnapLayoutProvider *v3; // rbx
  SnapLayoutProvider **v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  void *v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // r8d
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  unsigned int v17; // edi
  _OWORD *v18; // rax
  _OWORD *v19; // rdi
  int v20; // eax
  unsigned int v21; // esi
  _OWORD *v22; // rax
  _OWORD *v23; // rsi
  int v24; // eax
  unsigned int v25; // r14d
  __int64 (__fastcall *v26)(char *, GUID *, struct IPriviledgedPositioner **); // r14
  int v27; // eax
  unsigned int v28; // r14d
  void (__fastcall *v29)(char *, GUID *, __int64 *); // r14
  __int64 *v30; // r8
  IUnknown *v31; // rcx
  void (__fastcall *v32)(char *, GUID *, __int64 *); // r14
  __int64 *v33; // r8
  HRESULT v34; // r14d
  IUnknown *v35; // rcx
  int v36; // eax
  unsigned int v37; // r14d
  int v38; // eax
  unsigned int v39; // r14d
  int v40; // eax
  unsigned int v41; // r14d
  int Instance; // eax
  unsigned int v43; // r14d
  SnapLayoutHelpers *v44; // rcx
  const char *v45; // r9
  void *v46; // rcx
  void *v47; // rcx
  struct IPriviledgedPositioner *v48; // rcx
  __int64 result; // rax
  void *v50; // rcx
  void *v51; // rcx
  struct IPriviledgedPositioner *v52; // rcx
  void *v53; // rcx
  void *v54; // rcx
  struct IPriviledgedPositioner *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  struct IPriviledgedPositioner *v58; // rcx
  struct _GUID *v59; // [rsp+30h] [rbp-138h]
  __int64 v60; // [rsp+40h] [rbp-128h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-120h] BYREF
  IUnknown *v62; // [rsp+50h] [rbp-118h] BYREF
  __int128 v63; // [rsp+58h] [rbp-110h] BYREF
  __int64 v64; // [rsp+68h] [rbp-100h]
  SnapLayoutProvider *v65; // [rsp+70h] [rbp-F8h] BYREF
  _OWORD *v66; // [rsp+78h] [rbp-F0h]
  _OWORD *v67; // [rsp+80h] [rbp-E8h] BYREF
  int v68; // [rsp+8Ch] [rbp-DCh]
  __int128 v69; // [rsp+90h] [rbp-D8h]
  __int64 v70; // [rsp+A0h] [rbp-C8h]
  _QWORD v71[3]; // [rsp+A8h] [rbp-C0h] BYREF
  _QWORD v72[11]; // [rsp+C0h] [rbp-A8h] BYREF
  char *v73; // [rsp+118h] [rbp-50h]
  __int64 v74; // [rsp+120h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]
  SnapLayoutProvider *v76; // [rsp+170h] [rbp+8h] BYREF
  struct IPriviledgedPositioner *v77; // [rsp+178h] [rbp+10h] BYREF
  void *v78; // [rsp+180h] [rbp+18h] BYREF
  void *ppvOut; // [rsp+188h] [rbp+20h] BYREF

  LODWORD(v76) = 0;
  v2 = (struct IImmersiveMonitorManager *)*((_QWORD *)this + 21);
  try
  {
    v3 = (SnapLayoutProvider *)operator new(0xA0uLL);
    v76 = v3;
    SnapLayoutProvider::SnapLayoutProvider(v3, v2);
    *(_QWORD *)v3 = &SnapLayoutProvider::`vftable'{for `winrt::impl::producers_base<SnapLayoutProvider,std::tuple<IInspectable>>'};
    *((_QWORD *)v3 + 1) = &winrt::impl::heap_implements<SnapLayoutProvider>::`vftable'{for `winrt::impl::root_implements<SnapLayoutProvider,IInspectable>'};
    v65 = v3;
    v4 = (SnapLayoutProvider **)((char *)this + 536);
    if ( (SnapLayoutProvider **)((char *)this + 536) == &v65 )
    {
      if ( v3 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v65);
    }
    else
    {
      if ( *v4 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)this + 67);
      *v4 = v3;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, unsigned __int64, char *))(**((_QWORD **)this + 69) + 56LL))(
           *((_QWORD *)this + 69),
           5LL,
           &unk_180752180,
           ((unsigned __int64)this + 104) & -(__int64)(this != (CShellSnapComponent *)48),
           (char *)this + 560);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CD,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v5);
      result = v6;
    }
    else
    {
      *((_DWORD *)this + 278) = 138428417;
      *((_DWORD *)this + 279) = 411732504;
      *((_DWORD *)this + 280) = 843071538;
      *((_DWORD *)this + 281) = 541607966;
      *((_DWORD *)this + 282) = 1217433630;
      *((_DWORD *)this + 283) = 1217433650;
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 14) + 24LL))((char *)this + 112, 4LL);
      *(_QWORD *)&v63 = (char *)this - 48;
      *((_QWORD *)&v63 + 1) = CShellSnapComponent::OnDragSizeInfoEvent;
      LODWORD(v64) = 0;
      HIDWORD(v64) = v68;
      v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v7 )
        v8 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>,_lambda_6ac410e79d22676e05d6f96b06aeb884_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>,_lambda_6ac410e79d22676e05d6f96b06aeb884_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs>(
               v7,
               &v63);
      else
        v8 = 0LL;
      v74 = v8;
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 31) + 128LL))(
             *((_QWORD *)this + 31),
             v8,
             (char *)this + 400);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DC,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v9);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        result = v10;
      }
      else
      {
        v11 = `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl;
        if ( (`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl & 4) == 0 )
        {
          v66 = *(_OWORD **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::GetCachedFeatureEnabledState(
                              &`wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
                              &v67);
          v11 = (unsigned int)v66;
        }
        LODWORD(v76) = 3;
        WORD2(v76) = 3;
        wil::details::ReportUsageToService(
          (__int64)&unk_18089E4A8,
          0x1AA167Fu,
          (v11 >> 10) & 1,
          (v11 >> 11) & 1,
          (__int64)&v76,
          1u,
          3);
        (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 14) + 24LL))((char *)this + 112, 13LL);
        v14 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),CShellSnapComponent *>(
                (int)this + 408,
                *((_QWORD *)this + 27),
                v12,
                v13,
                (__int64)this - 48);
        v15 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E8,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v14);
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          result = v15;
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 30) + 24LL))(
                  *((_QWORD *)this + 30),
                  ((unsigned __int64)this + 96) & -(__int64)(this != (CShellSnapComponent *)48));
          v17 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1EA,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v16);
            if ( v8 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
            result = v17;
          }
          else
          {
            *(_QWORD *)&v69 = (char *)this - 48;
            *((_QWORD *)&v69 + 1) = CShellSnapComponent::OnWindowArrangementEvent;
            LODWORD(v70) = 0;
            HIDWORD(v70) = v68;
            v18 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
            v19 = v18;
            if ( v18 )
            {
              Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>(v18);
              v19[1] = v69;
              *((_QWORD *)v19 + 4) = v70;
              *(_QWORD *)v19 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>,_lambda_bc6a996c5f9ff2cfd33224138910e618_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::`vftable';
            }
            else
            {
              v19 = 0LL;
            }
            v67 = v19;
            v20 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 31) + 48LL))(
                    *((_QWORD *)this + 31),
                    v19,
                    (char *)this + 320);
            v21 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1EE,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                (const char *)(unsigned int)v20);
              if ( v19 )
                (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
              if ( v8 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
              result = v21;
            }
            else
            {
              *(_QWORD *)&v63 = (char *)this - 48;
              *((_QWORD *)&v63 + 1) = CShellSnapComponent::OnHitTestPartNotifyEvent;
              LODWORD(v64) = 0;
              HIDWORD(v64) = v68;
              v22 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
              v23 = v22;
              if ( v22 )
              {
                Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>>(v22);
                v23[1] = v63;
                *((_QWORD *)v23 + 4) = v64;
                *(_QWORD *)v23 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>,_lambda_6b37e6f6ffb8617f7a72125e0299ac07_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>::`vftable';
              }
              else
              {
                v23 = 0LL;
              }
              v66 = v23;
              v24 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 31) + 96LL))(
                      *((_QWORD *)this + 31),
                      v23,
                      (char *)this + 328);
              v25 = v24;
              if ( v24 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1F2,
                  (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                  (const char *)(unsigned int)v24);
                if ( v23 )
                  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v23 + 16LL))(v23);
                if ( v19 )
                  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
                if ( v8 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                result = v25;
              }
              else
              {
                v77 = 0LL;
                v26 = (__int64 (__fastcall *)(char *, GUID *, struct IPriviledgedPositioner **))**((_QWORD **)this - 6);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
                v27 = v26((char *)this - 48, &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6, &v77);
                v28 = v27;
                if ( v27 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x1F5,
                    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                    (const char *)(unsigned int)v27);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
                  if ( v23 )
                    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v23 + 16LL))(v23);
                  if ( v19 )
                    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
                  if ( v8 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                  result = v28;
                }
                else
                {
                  ppvOut = 0LL;
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
                  punk = 0LL;
                  LODWORD(v76) = 5;
                  v29 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 5) + 32LL);
                  v30 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&punk);
                  v29((char *)this - 40, &GUID_00000000_0000_0000_c000_000000000046, v30);
                  IUnknown_QueryService(
                    punk,
                    (const GUID *const)&SID_VirtualDesktopManager,
                    &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
                    &ppvOut);
                  v31 = punk;
                  if ( punk )
                  {
                    punk = 0LL;
                    ((void (__fastcall *)(IUnknown *))v31->lpVtbl->Release)(v31);
                  }
                  v78 = 0LL;
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v78);
                  v62 = 0LL;
                  LODWORD(v76) = 19;
                  v32 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 5) + 32LL);
                  v33 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v62);
                  v32((char *)this - 40, &GUID_00000000_0000_0000_c000_000000000046, v33);
                  v34 = IUnknown_QueryService(
                          v62,
                          &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                          &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                          &v78);
                  v35 = v62;
                  if ( v62 )
                  {
                    v62 = 0LL;
                    ((void (__fastcall *)(IUnknown *, struct IUnknownVtbl *))v35->lpVtbl->Release)(v35, v35->lpVtbl);
                  }
                  if ( v34 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x1FB,
                      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                      (const char *)(unsigned int)v34);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v78);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
                    if ( v23 )
                      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v23 + 16LL))(v23);
                    if ( v19 )
                      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
                    if ( v8 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                    result = (unsigned int)v34;
                  }
                  else
                  {
                    v60 = 0LL;
                    v36 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 25))(
                            *((_QWORD *)this + 25),
                            &GUID_c60c7e8a_f650_4afb_917b_8d93242dbc36,
                            &v60);
                    v37 = v36;
                    if ( v36 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x1FE,
                        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                        (const char *)(unsigned int)v36);
                      if ( v60 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                      v56 = v78;
                      if ( v78 )
                      {
                        v78 = 0LL;
                        (*(void (__fastcall **)(void *))(*(_QWORD *)v56 + 16LL))(v56);
                      }
                      v57 = ppvOut;
                      if ( ppvOut )
                      {
                        ppvOut = 0LL;
                        (*(void (__fastcall **)(void *))(*(_QWORD *)v57 + 16LL))(v57);
                      }
                      v58 = v77;
                      if ( v77 )
                      {
                        v77 = 0LL;
                        (*(void (__fastcall **)(struct IPriviledgedPositioner *))(*(_QWORD *)v58 + 16LL))(v58);
                      }
                      if ( v23 )
                        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v23 + 16LL))(v23);
                      if ( v19 )
                        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
                      if ( v8 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                      result = v37;
                    }
                    else
                    {
                      v72[0] = *((_QWORD *)this + 26);
                      v72[1] = *((_QWORD *)this + 21);
                      v72[2] = *((_QWORD *)this + 22);
                      v72[3] = v78;
                      v72[4] = v77;
                      v72[5] = *((_QWORD *)this + 46);
                      v72[6] = ppvOut;
                      v72[7] = *((_QWORD *)this + 27);
                      v72[8] = *((_QWORD *)this + 29);
                      v72[9] = *((_QWORD *)this + 28);
                      v72[10] = *((_QWORD *)this + 31);
                      if ( this == (CShellSnapComponent *)48 )
                        v73 = 0LL;
                      else
                        v73 = (char *)this + 80;
                      v38 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v60 + 24LL))(v60, v72);
                      v39 = v38;
                      if ( v38 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x20E,
                          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                          (const char *)(unsigned int)v38);
                        if ( v60 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                        v53 = v78;
                        if ( v78 )
                        {
                          v78 = 0LL;
                          (*(void (__fastcall **)(void *))(*(_QWORD *)v53 + 16LL))(v53);
                        }
                        v54 = ppvOut;
                        if ( ppvOut )
                        {
                          ppvOut = 0LL;
                          (*(void (__fastcall **)(void *))(*(_QWORD *)v54 + 16LL))(v54);
                        }
                        v55 = v77;
                        if ( v77 )
                        {
                          v77 = 0LL;
                          (*(void (__fastcall **)(struct IPriviledgedPositioner *))(*(_QWORD *)v55 + 16LL))(v55);
                        }
                        if ( v23 )
                          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v23 + 16LL))(v23);
                        if ( v19 )
                          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
                        if ( v8 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                        result = v39;
                      }
                      else
                      {
                        v71[0] = *((_QWORD *)this + 22);
                        v71[1] = *((_QWORD *)this + 21);
                        v71[2] = *((_QWORD *)this + 27);
                        v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 32) + 32LL))(
                                *((_QWORD *)this + 32),
                                v71);
                        v41 = v40;
                        if ( v40 < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x216,
                            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                            (const char *)(unsigned int)v40);
                          if ( v60 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                          v50 = v78;
                          if ( v78 )
                          {
                            v78 = 0LL;
                            (*(void (__fastcall **)(void *))(*(_QWORD *)v50 + 16LL))(v50);
                          }
                          v51 = ppvOut;
                          if ( ppvOut )
                          {
                            ppvOut = 0LL;
                            (*(void (__fastcall **)(void *))(*(_QWORD *)v51 + 16LL))(v51);
                          }
                          v52 = v77;
                          if ( v77 )
                          {
                            v77 = 0LL;
                            (*(void (__fastcall **)(struct IPriviledgedPositioner *))(*(_QWORD *)v52 + 16LL))(v52);
                          }
                          if ( v23 )
                            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v23 + 16LL))(v23);
                          if ( v19 )
                            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
                          if ( v8 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                          result = v41;
                        }
                        else
                        {
                          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
                          Instance = SnapHotkeyHandler_CreateInstance(
                                       v77,
                                       *((struct ISnapAssistController **)this + 25),
                                       *((struct IImmersiveMonitorManager **)this + 21),
                                       *((struct IApplicationViewCollection **)this + 22),
                                       *((struct IImmersiveSettingsCache **)this + 27),
                                       *((struct ITabletModeController **)this + 28),
                                       v59,
                                       (void **)this + 24);
                          v43 = Instance;
                          if ( Instance < 0 )
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x21F,
                              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                              (const char *)(unsigned int)Instance);
                            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v60);
                            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v78);
                            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
                            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
                            if ( v23 )
                              (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v23 + 16LL))(v23);
                            if ( v19 )
                              (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
                            if ( v8 )
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                            result = v43;
                          }
                          else
                          {
                            (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 14) + 24LL))(
                              (char *)this + 112,
                              11LL);
                            SnapLayoutHelpers::InitializeSnapQuadrantsPolicy(v44);
                            if ( v60 )
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                            v46 = v78;
                            if ( v78 )
                            {
                              v78 = 0LL;
                              (*(void (__fastcall **)(void *))(*(_QWORD *)v46 + 16LL))(v46);
                            }
                            v47 = ppvOut;
                            if ( ppvOut )
                            {
                              ppvOut = 0LL;
                              (*(void (__fastcall **)(void *))(*(_QWORD *)v47 + 16LL))(v47);
                            }
                            v48 = v77;
                            if ( v77 )
                            {
                              v77 = 0LL;
                              (*(void (__fastcall **)(struct IPriviledgedPositioner *))(*(_QWORD *)v48 + 16LL))(v48);
                            }
                            if ( v23 )
                              (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v23 + 16LL))(v23);
                            if ( v19 )
                              (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
                            if ( v8 )
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
                            result = 0LL;
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
  catch ( ... )
  {
    LODWORD(v76) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x238,
                     (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                     v45);
    return (unsigned int)v76;
  }
  return result;
}
