/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x1805F0510
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_InitCoro$2 @ 0x1805F04B8 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800A4E7C (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800A8DC4 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800ABE00 (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18021B7B4 (-SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@Y.c)
 *     ??$Info@AEAY0BO@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BO@$$CBG@Z @ 0x180297B08 (--$Info@AEAY0BO@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BO@$$CBG@Z.c)
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180298354 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x18029C608 (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CoCreateInstance_0 @ 0x1802D3650 (CoCreateInstance_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$NullAlloc_Error@AEAY0EB@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0EB@$$CBG@Z @ 0x1805EC71C (--$NullAlloc_Error@AEAY0EB@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0EB@$$CBG@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AXPEAU1@@Z$1?DsrFreeJoinInfo@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1805EDB08 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AX.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AXPEAU1@@Z$1?DsrFreeJoinInfo@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1805EDBAC (--1-$unique_storage@U-$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AXPEAU1@@Z$1-DsrFreeJoinInfo@@YAX.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F16F8 (-RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ?RegisterCompatJsonWriteTimeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F17FC (-RegisterCompatJsonWriteTimeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Wind.c)
 *     ?RegisterDeveloperModeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F1A38 (-RegisterDeveloperModeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F1B40 (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?RegisterUserIntentRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805F1D18 (-RegisterUserIntentRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt.c)
 *     ?SetAppListBackupAccountTypeRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXW4_LSA_USER_ACCOUNT_TYPE@@@Z @ 0x1805F2140 (-SetAppListBackupAccountTypeRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@Y.c)
 *     ?SetIsHybridRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z @ 0x1805F218C (-SetIsHybridRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z.c)
 *     ?SetIsMSARegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z @ 0x1805F21DC (-SetIsMSARegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatInfo@@@details@wil@@QEAA_NXZ @ 0x1805F3270 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBa_ea_1805F3270.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@QEAA_NXZ @ 0x1805F32E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@de.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__ResumeCoro_1(
        char *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  __int64 *v4; // rcx
  winrt::Windows::Internal::Shell::implementation *v5; // rcx
  _QWORD *v6; // r15
  HRESULT Instance_0; // eax
  __int64 *v8; // rsi
  __int64 v9; // rax
  _DWORD *v10; // r14
  int v11; // eax
  bool v12; // dl
  winrt::Windows::Internal::Shell::implementation *v13; // rcx
  _DWORD *v14; // rsi
  char v15; // r13
  char v16; // r12
  char v17; // r15
  int v18; // eax
  _QWORD *v19; // r14
  int JoinInfo; // eax
  char v21; // r12
  winrt::Windows::Internal::Shell::implementation *v22; // rcx
  bool v23; // dl
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v24; // rsi
  __int64 v25; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v26; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v27; // rsi
  __int64 v28; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v29; // rcx
  int ppv; // [rsp+20h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_53;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *(_QWORD *)(a1 + 145),
          (_QWORD *)a1 + 2);
        a1[24] = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))a1, v3);
        return;
      case 4:
        CAppBackupListenerTelemetry::Info<unsigned short const (&)[30]>((__int64)a1);
        winrt::Windows::Internal::Shell::implementation::SetLastAppBackupListenerStartTimeForStateCapture(v5);
        *((_DWORD *)a1 + 8) = 819237446;
        *((_DWORD *)a1 + 9) = 1180684823;
        *((_DWORD *)a1 + 10) = -1649669200;
        *((_DWORD *)a1 + 11) = -1221696035;
        v6 = a1 + 96;
        *((_QWORD *)a1 + 12) = 0LL;
        *((_DWORD *)a1 + 26) = 0;
        *((_QWORD *)a1 + 14) = 0LL;
        *((_QWORD *)a1 + 15) = 0LL;
        Instance_0 = CoCreateInstance_0(
                       (const IID *const)a1 + 2,
                       0LL,
                       1u,
                       &winrt::impl::guid_v<IIdentityStore2>,
                       (LPVOID *)a1 + 12);
        winrt::check_hresult((int *)a1 + 32, Instance_0, (__int64)(a1 + 104));
        v8 = (__int64 *)(a1 + 48);
        v9 = *((_QWORD *)a1 + 12);
        *((_QWORD *)a1 + 6) = v9;
        v10 = a1 + 56;
        *((_DWORD *)a1 + 14) = 0;
        v11 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v9 + 48LL))(*((_QWORD *)a1 + 12), a1 + 56);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xF7,
            (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
            (const char *)(unsigned int)v11,
            ppv);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatInfo>::GetImpl'::`2'::impl) )
        {
          v14 = a1 + 60;
          *((_DWORD *)a1 + 15) = 0;
          v15 = 0;
          v16 = 0;
          v17 = 0;
          if ( *v10 == 1 || *v10 == 2 )
          {
            v15 = 1;
            *v14 = 4;
          }
          else
          {
            v18 = LsaLookupUserAccountType(0LL, a1 + 60) | 0x10000000;
            v13 = retaddr;
            if ( v18 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x109,
                (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
                (const char *)(unsigned int)v18,
                ppv);
            if ( *v14 == 5 )
            {
              v16 = 1;
            }
            else if ( *v14 == 2 || *v14 == 3 )
            {
              v19 = a1 + 64;
              *((_QWORD *)a1 + 8) = 0LL;
              *((_QWORD *)a1 + 9) = a1 + 64;
              *((_QWORD *)a1 + 10) = 0LL;
              a1[88] = 1;
              JoinInfo = DsrGetJoinInfo(0LL);
              if ( JoinInfo >= 0 )
              {
                v21 = 1;
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x116,
                  (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
                  (const char *)(unsigned int)JoinInfo);
                v21 = 0;
              }
              wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DSREG_JOIN_INFO *,void (*)(_DSREG_JOIN_INFO *),&void DsrFreeJoinInfo(_DSREG_JOIN_INFO *),wistd::integral_constant<unsigned __int64,0>,_DSREG_JOIN_INFO *,_DSREG_JOIN_INFO *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DSREG_JOIN_INFO *,void (*)(_DSREG_JOIN_INFO *),&void DsrFreeJoinInfo(_DSREG_JOIN_INFO *),wistd::integral_constant<unsigned __int64,0>,_DSREG_JOIN_INFO *,_DSREG_JOIN_INFO *,0,std::nullptr_t>>>>((__int64 **)a1 + 9);
              if ( v21 )
              {
                if ( !*v19 || (v17 = 1, !*(_DWORD *)*v19) )
                  v17 = 0;
              }
              wil::details::unique_storage<wil::details::resource_policy<_DSREG_JOIN_INFO *,void (*)(_DSREG_JOIN_INFO *),&void DsrFreeJoinInfo(_DSREG_JOIN_INFO *),wistd::integral_constant<unsigned __int64,0>,_DSREG_JOIN_INFO *,_DSREG_JOIN_INFO *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DSREG_JOIN_INFO *,void (*)(_DSREG_JOIN_INFO *),&void DsrFreeJoinInfo(_DSREG_JOIN_INFO *),wistd::integral_constant<unsigned __int64,0>,_DSREG_JOIN_INFO *,_DSREG_JOIN_INFO *,0,std::nullptr_t>>((__int64 *)a1 + 8);
              v16 = 0;
            }
          }
          LOBYTE(v13) = v15;
          winrt::Windows::Internal::Shell::implementation::SetIsMSARegKeyForStateCapture(v13, v12);
          LOBYTE(v22) = v17;
          winrt::Windows::Internal::Shell::implementation::SetIsHybridRegKeyForStateCapture(v22, v23);
          winrt::Windows::Internal::Shell::implementation::SetAppListBackupAccountTypeRegKeyForStateCapture();
          if ( v15 || v16 || v17 )
          {
            v24 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(a1 + 145);
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::BuildRegistryKeyMap(v24);
            if ( *((_QWORD *)v24 + 12) )
              winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterPackageListeners(v24);
            else
              CAppBackupListenerTelemetry::NullAlloc_Error<unsigned short const (&)[65]>(v25);
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterRegistryWatchers(v24);
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUTMListeners((__int64 **)v24);
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::GetImpl'::`2'::impl) )
            {
              winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted(v26);
              winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterCompatJsonWriteTimeRegistryWatcher(v24);
            }
            else
            {
              winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart(v24);
              winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterCompatFileWatcher(v24);
            }
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterDeveloperModeRegistryWatcher(v24);
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUserIntentRegistryWatcher(v24);
          }
          v6 = a1 + 96;
        }
        else
        {
          if ( *v10 != 1 && *v10 != 2 )
          {
            winrt::Windows::Internal::Shell::implementation::SetIsMSARegKeyForStateCapture(0LL, v12);
            goto LABEL_49;
          }
          LOBYTE(v13) = 1;
          winrt::Windows::Internal::Shell::implementation::SetIsMSARegKeyForStateCapture(v13, v12);
          v27 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(a1 + 145);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::BuildRegistryKeyMap(v27);
          if ( *((_QWORD *)v27 + 12) )
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterPackageListeners(v27);
          else
            CAppBackupListenerTelemetry::NullAlloc_Error<unsigned short const (&)[65]>(v28);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterRegistryWatchers(v27);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUTMListeners((__int64 **)v27);
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::GetImpl'::`2'::impl) )
          {
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted(v29);
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterCompatJsonWriteTimeRegistryWatcher(v27);
          }
          else
          {
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart(v27);
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterCompatFileWatcher(v27);
          }
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterDeveloperModeRegistryWatcher(v27);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUserIntentRegistryWatcher(v27);
        }
        v8 = (__int64 *)(a1 + 48);
LABEL_49:
        if ( *v6 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v8);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
LABEL_53:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0xA0);
        break;
      case 5:
        v4 = (__int64 *)(a1 + 16);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
        goto LABEL_53;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
