/*
 * XREFs of ?BackupTileAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6@UIAppListBackupExtensionStatics6@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUTileCollection@StartScreen@UI@WindowsUdk@3@AEBUTileId@5673@AEBUhstring@param@3@@Z @ 0x18061303C
 * Callers:
 *     ?BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTileId@StartScreen@UI@WindowsUdk@6@Uhstring@6@@Z @ 0x1800F5C60 (-BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTi.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x180612DA0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics6<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics6>::BackupTileAsync(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v5; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64 *); // rax
  __int64 v11; // rdx
  int v12; // eax
  int v14; // [rsp+38h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v5 = *a1;
  v16 = 0LL;
  v14 = 0;
  v8 = *a4;
  v9 = *a5;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v5 + 48LL);
  v11 = *a3;
  v15 = 0LL;
  v12 = v10(v5, v11, v8, v9, &v16);
  winrt::check_hresult((int *)&v17, v12, (__int64)&v14);
  *a2 = v16;
  return a2;
}
