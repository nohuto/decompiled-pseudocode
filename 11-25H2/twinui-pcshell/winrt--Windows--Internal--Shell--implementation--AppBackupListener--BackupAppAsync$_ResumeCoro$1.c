/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x1805EE2C0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$2 @ 0x1805EE228 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_InitCoro$2.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800A4E7C (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::__parameters_ @ 0x180295D28 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_--_10_--_par.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1802BD5A0 (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1802BD5A0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$AttemptEventDrivenAppBackup@PEBGPEBGPEBGAEAI@CAppBackupListenerTelemetry@@SAX$$QEAPEBG00AEAI@Z @ 0x1805EBDAC (--$AttemptEventDrivenAppBackup@PEBGPEBGPEBGAEAI@CAppBackupListenerTelemetry@@SAX$$QEAPEBG00AEAI@.c)
 *     ??$NullFactory_Error@AEAY0FK@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FK@$$CBG@Z @ 0x1805EC7FC (--$NullFactory_Error@AEAY0FK@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FK@$$CBG@Z.c)
 *     ?BackupTileAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppListBackupExtensionStatics6@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUTileCollection@StartScreen@UI@WindowsUdk@3@AEBUTileId@5673@AEBUhstring@param@3@@Z @ 0x1805EE54C (-BackupTileAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppLi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1(
        _QWORD *a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rcx
  void *v3; // r8
  __int64 *v4; // rcx
  void (__fastcall ***v5)(_QWORD, void *, __int64); // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  const unsigned __int16 *v9; // rax
  const unsigned __int16 **v10; // r8
  const unsigned __int16 *v11; // rax
  const unsigned __int16 **v12; // rdx
  const unsigned __int16 *v13; // rax
  __int64 *v14; // r10
  __int64 *v15; // rdx
  __int64 *v16; // r8
  const unsigned __int16 *v17; // rax
  __int64 v18; // rdx
  const unsigned __int16 *v19; // rax
  __int64 v20; // rdx
  const unsigned __int16 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  const winrt::hresult_error *v24; // [rsp+38h] [rbp-50h] BYREF

  v1 = a1;
  switch ( *((_WORD *)a1 + 4) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_18;
    case 2:
      winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
        *(_QWORD *)((char *)a1 + 305),
        a1 + 2);
      *((_BYTE *)v1 + 24) = 0;
      *((_WORD *)v1 + 4) = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))v1, v3);
      return;
    case 4:
      a1[8] = L"WindowsUdk.System.UserProfile.AppListBackupExtension";
      a1[9] = 52LL;
      winrt::param::hstring::hstring((__int64)(a1 + 4), a1 + 8);
      winrt::param::hstring::hstring(
        (winrt::param::hstring *)(v1 + 10),
        L"com.microsoft.windows.extension.applistbackup");
      try
      {
        v5 = *(void (__fastcall ****)(_QWORD, void *, __int64))winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
                                                                 (const struct winrt::param::hstring *)(v1 + 14),
                                                                 (const struct winrt::param::hstring *)(v1 + 10),
                                                                 (__int64)(v1 + 4));
        if ( v5 )
        {
          v1[36] = 0LL;
          (**v5)(
            v5,
            &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics2>,
            (__int64)(v1 + 36));
          v6 = v1[36];
          v7 = v6;
          v8 = v6;
        }
        else
        {
          v6 = 0LL;
          v7 = 0LL;
          v8 = 0LL;
        }
        v1[15] = v8;
        if ( v1[14] )
        {
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1 + 14);
          v6 = v7;
        }
        if ( v6 )
        {
          v9 = winrt::hstring::c_str((winrt::hstring *)((char *)v1 + 329));
          *v10 = v9;
          v11 = winrt::hstring::c_str((winrt::hstring *)((char *)v1 + 321));
          *v12 = v11;
          v13 = winrt::hstring::c_str((winrt::hstring *)((char *)v1 + 313));
          *v14 = (__int64)v13;
          CAppBackupListenerTelemetry::AttemptEventDrivenAppBackup<unsigned short const *,unsigned short const *,unsigned short const *,unsigned int &>(
            v14,
            v15,
            v16);
          v1[19] = *(_QWORD *)((char *)v1 + 329);
          v1[23] = *(_QWORD *)((char *)v1 + 321);
          v1[27] = *(_QWORD *)((char *)v1 + 313);
          winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics6>::BackupTileAsync(
            (_DWORD)v1 + 120,
            (_DWORD)v1 + 248,
            (_DWORD)v1 + 216,
            (_DWORD)v1 + 184,
            (__int64)(v1 + 19));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 31));
        }
        else
        {
          CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[90]>(0LL);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 15));
      }
      catch ( const winrt::hresult_error *v24 )
      {
        v17 = winrt::hstring::c_str((winrt::hstring *)((char *)a1 + 329));
        *(_QWORD *)(v18 + 256) = v17;
        v19 = winrt::hstring::c_str((winrt::hstring *)(v18 + 321));
        *(_QWORD *)(v20 + 264) = v19;
        v21 = winrt::hstring::c_str((winrt::hstring *)(v20 + 313));
        *(_QWORD *)(v22 + 272) = v21;
        v23 = *((unsigned int *)v24 + 3);
        *(_DWORD *)(v22 + 280) = v23;
        CAppBackupListenerTelemetry::AppBackup_Error<unsigned short const (&)[43],int,unsigned short const *,unsigned short const *,unsigned short const *>(
          v23,
          (_DWORD *)(v22 + 280),
          (__int64 *)(v22 + 272),
          (__int64 *)(v22 + 264),
          (__int64 *)(v22 + 256));
        v1 = a1;
      }
      if ( v1[2] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1 + 2);
      goto LABEL_18;
    case 5:
      v4 = a1 + 2;
      if ( v1[2] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
LABEL_18:
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::__parameters_((volatile signed __int32 **)((char *)v1 + 305));
      if ( *((_WORD *)v1 + 5) )
        operator delete(v1, (const struct std::nothrow_t *)0x160);
      break;
    default:
      __debugbreak();
      break;
  }
}
