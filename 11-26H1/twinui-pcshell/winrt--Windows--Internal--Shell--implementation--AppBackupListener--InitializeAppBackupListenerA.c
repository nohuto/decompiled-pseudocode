/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180614CF0
 * Callers:
 *     ?InitializeAppBackupListenerAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x18061509C (-InitializeAppBackupListenerAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800276AC (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180028850 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002D53C (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18020D6C0 (-SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@Y.c)
 *     ??$Info@AEAY0BO@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BO@$$CBG@Z @ 0x18028EE8C (--$Info@AEAY0BO@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BO@$$CBG@Z.c)
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180290428 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x1802948CC (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@QEAA_NXZ @ 0x1802C7638 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@de.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     CoCreateInstance_0 @ 0x1802CA570 (CoCreateInstance_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$NullAlloc_Error@AEAY0EB@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0EB@$$CBG@Z @ 0x180611384 (--$NullAlloc_Error@AEAY0EB@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0EB@$$CBG@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AXPEAU1@@Z$1?DsrFreeJoinInfo@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1806125E8 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AX.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AXPEAU1@@Z$1?DsrFreeJoinInfo@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18061268C (--1-$unique_storage@U-$resource_policy@PEAU_DSREG_JOIN_INFO@@P6AXPEAU1@@Z$1-DsrFreeJoinInfo@@YAX.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180615DD8 (-RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ?RegisterCompatJsonWriteTimeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180615EF4 (-RegisterCompatJsonWriteTimeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Wind.c)
 *     ?RegisterDeveloperModeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180616164 (-RegisterDeveloperModeRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180616270 (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?RegisterUserIntentRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180616478 (-RegisterUserIntentRegistryWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt.c)
 *     ?SetAppListBackupAccountTypeRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXW4_LSA_USER_ACCOUNT_TYPE@@@Z @ 0x18061681C (-SetAppListBackupAccountTypeRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@Y.c)
 *     ?SetIsHybridRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z @ 0x180616868 (-SetIsHybridRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z.c)
 *     ?SetIsMSARegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z @ 0x1806168B8 (-SetIsMSARegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__ResumeCoro_1(
        char *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  __int64 *v4; // rcx
  winrt::Windows::Internal::Shell::implementation *v5; // rcx
  HRESULT Instance_0; // eax
  __int64 v7; // rax
  _DWORD *v8; // r14
  int v9; // eax
  bool v10; // dl
  winrt::Windows::Internal::Shell::implementation *v11; // rcx
  _DWORD *v12; // rsi
  char v13; // r13
  char v14; // r12
  char v15; // r15
  int v16; // eax
  _QWORD *v17; // r14
  int JoinInfo; // eax
  char v19; // r12
  winrt::Windows::Internal::Shell::implementation *v20; // rcx
  bool v21; // dl
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v22; // rsi
  __int64 v23; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v24; // rcx
  int ppv; // [rsp+20h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_40;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *((_QWORD *)a1 + 19),
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
        v7 = *((_QWORD *)a1 + 12);
        *((_QWORD *)a1 + 6) = v7;
        v8 = a1 + 56;
        *((_DWORD *)a1 + 14) = 0;
        v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v7 + 48LL))(*((_QWORD *)a1 + 12), a1 + 56);
        v11 = retaddr;
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xF7,
            (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
            (const char *)(unsigned int)v9,
            ppv);
        v12 = a1 + 60;
        *((_DWORD *)a1 + 15) = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        if ( *v8 == 1 || *v8 == 2 )
        {
          v13 = 1;
          *v12 = 4;
        }
        else
        {
          v16 = LsaLookupUserAccountType(0LL, a1 + 60) | 0x10000000;
          v11 = retaddr;
          if ( v16 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x107,
              (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
              (const char *)(unsigned int)v16,
              ppv);
          if ( *v12 == 5 )
          {
            v14 = 1;
          }
          else if ( *v12 == 2 || *v12 == 3 )
          {
            v17 = a1 + 64;
            *((_QWORD *)a1 + 8) = 0LL;
            *((_QWORD *)a1 + 9) = a1 + 64;
            *((_QWORD *)a1 + 10) = 0LL;
            a1[88] = 1;
            JoinInfo = DsrGetJoinInfo(0LL);
            if ( JoinInfo >= 0 )
            {
              v19 = 1;
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x114,
                (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
                (const char *)(unsigned int)JoinInfo);
              v19 = 0;
            }
            wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DSREG_JOIN_INFO *,void (*)(_DSREG_JOIN_INFO *),&void DsrFreeJoinInfo(_DSREG_JOIN_INFO *),wistd::integral_constant<unsigned __int64,0>,_DSREG_JOIN_INFO *,_DSREG_JOIN_INFO *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DSREG_JOIN_INFO *,void (*)(_DSREG_JOIN_INFO *),&void DsrFreeJoinInfo(_DSREG_JOIN_INFO *),wistd::integral_constant<unsigned __int64,0>,_DSREG_JOIN_INFO *,_DSREG_JOIN_INFO *,0,std::nullptr_t>>>>((__int64 **)a1 + 9);
            if ( v19 )
            {
              if ( !*v17 || (v15 = 1, !*(_DWORD *)*v17) )
                v15 = 0;
            }
            wil::details::unique_storage<wil::details::resource_policy<_DSREG_JOIN_INFO *,void (*)(_DSREG_JOIN_INFO *),&void DsrFreeJoinInfo(_DSREG_JOIN_INFO *),wistd::integral_constant<unsigned __int64,0>,_DSREG_JOIN_INFO *,_DSREG_JOIN_INFO *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DSREG_JOIN_INFO *,void (*)(_DSREG_JOIN_INFO *),&void DsrFreeJoinInfo(_DSREG_JOIN_INFO *),wistd::integral_constant<unsigned __int64,0>,_DSREG_JOIN_INFO *,_DSREG_JOIN_INFO *,0,std::nullptr_t>>((__int64 *)a1 + 8);
            v14 = 0;
          }
        }
        LOBYTE(v11) = v13;
        winrt::Windows::Internal::Shell::implementation::SetIsMSARegKeyForStateCapture(v11, v10);
        LOBYTE(v20) = v15;
        winrt::Windows::Internal::Shell::implementation::SetIsHybridRegKeyForStateCapture(v20, v21);
        winrt::Windows::Internal::Shell::implementation::SetAppListBackupAccountTypeRegKeyForStateCapture();
        if ( v13 || v14 || v15 )
        {
          v22 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)*((_QWORD *)a1 + 19);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::BuildRegistryKeyMap(v22);
          if ( *((_QWORD *)v22 + 12) )
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterPackageListeners(v22);
          else
            CAppBackupListenerTelemetry::NullAlloc_Error<unsigned short const (&)[65]>(v23);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterRegistryWatchers(v22);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUTMListeners(v22);
          if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_OptimizationsInApplistBackup>::GetImpl'::`2'::impl) )
          {
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted(v24);
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterCompatJsonWriteTimeRegistryWatcher(v22);
          }
          else
          {
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart(v22);
            winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterCompatFileWatcher(v22);
          }
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterDeveloperModeRegistryWatcher(v22);
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUserIntentRegistryWatcher(v22);
        }
        if ( *((_QWORD *)a1 + 12) )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 6);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
        goto LABEL_40;
      case 5:
        v4 = (__int64 *)(a1 + 16);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
LABEL_40:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0xA0);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
