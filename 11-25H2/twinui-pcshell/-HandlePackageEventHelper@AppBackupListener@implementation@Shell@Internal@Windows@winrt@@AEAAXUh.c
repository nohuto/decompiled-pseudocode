/*
 * XREFs of ?HandlePackageEventHelper@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@0@Z @ 0x1802842E8
 * Callers:
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x1800AB090 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x1800AB2A0 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1801ACF30 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x180294594 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageEventHelper(
        __int64 a1,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  winrt::hstring *v6; // rdi
  winrt::hstring *v7; // rbx
  winrt::hstring *v8; // rax
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-40h]
  _BYTE *v13; // [rsp+50h] [rbp-38h]
  char v14; // [rsp+A8h] [rbp+20h] BYREF

  v12 = &v9;
  v6 = winrt::hstring::hstring((winrt::hstring *)&v9, L"MSIX");
  v13 = v10;
  v7 = winrt::hstring::hstring((winrt::hstring *)v10, a3);
  v8 = winrt::hstring::hstring((winrt::hstring *)v11, a2);
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(a1, &v14, v8, v7, v6, 0);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a3);
}
