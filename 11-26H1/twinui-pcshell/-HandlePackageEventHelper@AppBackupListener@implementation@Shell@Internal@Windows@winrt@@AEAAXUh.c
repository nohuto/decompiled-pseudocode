/*
 * XREFs of ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x18027B8D0
 * Callers:
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x18002D200 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x18002D3A0 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1801A51D0 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x1806130B8 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageEventHelper(
        __int64 a1,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  winrt::hstring *v6; // rdi
  unsigned int v7; // r8d
  winrt::hstring *v8; // rbx
  unsigned int v9; // r8d
  winrt::hstring *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE *v14; // [rsp+48h] [rbp-40h]
  __int64 *v15; // [rsp+A8h] [rbp+20h] BYREF

  v15 = &v11;
  v6 = winrt::hstring::hstring((winrt::hstring *)&v11, L"MSIX");
  v14 = v12;
  v8 = winrt::hstring::hstring((winrt::hstring *)v12, a3, v7);
  v10 = winrt::hstring::hstring((winrt::hstring *)v13, a2, v9);
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(a1, &v15, v10, v8, v6, 0);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
}
