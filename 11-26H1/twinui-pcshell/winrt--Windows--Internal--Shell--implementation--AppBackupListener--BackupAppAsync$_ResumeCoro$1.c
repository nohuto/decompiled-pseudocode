/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180612DA0
 * Callers:
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x1806130B8 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1800276AC (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::__parameters_ @ 0x18028CBCC (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_--_10_--_par.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1802B4E7C (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1802B4E7C.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$AttemptEventDrivenAppBackup@PEBGPEBGPEBGAEAI@CAppBackupListenerTelemetry@@SAX$$QEAPEBG00AEAI@Z @ 0x180610A14 (--$AttemptEventDrivenAppBackup@PEBGPEBGPEBGAEAI@CAppBackupListenerTelemetry@@SAX$$QEAPEBG00AEAI@.c)
 *     ??$NullFactory_Error@AEAY0FK@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FK@$$CBG@Z @ 0x180611464 (--$NullFactory_Error@AEAY0FK@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0FK@$$CBG@Z.c)
 *     ?BackupTileAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppListBackupExtensionStatics6@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUTileCollection@StartScreen@UI@WindowsUdk@3@AEBUTileId@5673@AEBUhstring@param@3@@Z @ 0x18061303C (-BackupTileAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppLi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1(
        _QWORD *a1)
{
  _QWORD *v1; // r14
  volatile signed __int32 **v2; // r12
  __int64 v3; // rcx
  void *v4; // r8
  __int64 *v5; // rcx
  void (__fastcall ***v6)(_QWORD, void *, __int64); // rcx
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
  volatile signed __int32 **v26; // [rsp+98h] [rbp+10h]

  v1 = a1;
  v2 = (volatile signed __int32 **)(a1 + 1);
  v26 = (volatile signed __int32 **)(a1 + 1);
  switch ( *((_WORD *)a1 + 4) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_18;
    case 2:
      winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
        a1[39],
        a1 + 2);
      *((_BYTE *)v1 + 24) = 0;
      *(_WORD *)v2 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(v3, (void (*)(void *, void *))v1, v4);
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
        v6 = *(void (__fastcall ****)(_QWORD, void *, __int64))winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
                                                                 (const struct winrt::param::hstring *)(v1 + 14),
                                                                 (const struct winrt::param::hstring *)(v1 + 10),
                                                                 (__int64)(v1 + 4));
        if ( v6 )
        {
          v1[36] = 0LL;
          (**v6)(
            v6,
            &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics2>,
            (__int64)(v1 + 36));
          v7 = v1[36];
          v8 = v7;
        }
        else
        {
          v7 = 0LL;
          v8 = 0LL;
        }
        v1[15] = v8;
        if ( v1[14] )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1 + 14);
        if ( v7 )
        {
          v9 = winrt::hstring::c_str((winrt::hstring *)(v1 + 42));
          *v10 = v9;
          v11 = winrt::hstring::c_str((winrt::hstring *)(v1 + 41));
          *v12 = v11;
          v13 = winrt::hstring::c_str((winrt::hstring *)(v1 + 40));
          *v14 = (__int64)v13;
          CAppBackupListenerTelemetry::AttemptEventDrivenAppBackup<unsigned short const *,unsigned short const *,unsigned short const *,unsigned int &>(
            v14,
            v15,
            v16);
          v1[19] = v1[42];
          v1[23] = v1[41];
          v1[27] = v1[40];
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
          CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[90]>((__int64)v6);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 15));
      }
      catch ( const winrt::hresult_error *v24 )
      {
        v17 = winrt::hstring::c_str((winrt::hstring *)(a1 + 42));
        *(_QWORD *)(v18 + 256) = v17;
        v19 = winrt::hstring::c_str((winrt::hstring *)(v18 + 328));
        *(_QWORD *)(v20 + 264) = v19;
        v21 = winrt::hstring::c_str((winrt::hstring *)(v20 + 320));
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
        v2 = v26;
      }
      if ( v1[2] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1 + 2);
      goto LABEL_18;
    case 5:
      v5 = a1 + 2;
      if ( v1[2] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v5);
LABEL_18:
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::__parameters_(v2 + 38);
      if ( *((_WORD *)v1 + 5) )
        operator delete(v1, (const struct std::nothrow_t *)0x160);
      break;
    default:
      __debugbreak();
      break;
  }
}
