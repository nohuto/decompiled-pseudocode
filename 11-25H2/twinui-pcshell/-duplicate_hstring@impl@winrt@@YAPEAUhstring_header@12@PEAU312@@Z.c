/*
 * XREFs of ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800ACE7C
 * Callers:
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x1800AB090 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800AB810 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800ABE00 (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1800AC660 (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@6@@Z @ 0x1800ADFEC (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?ReportReactivationCompleteWithSessionId@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@@impl@winrt@@UEAAHPEAX@Z @ 0x1800AE290 (-ReportReactivationCompleteWithSessionId@-$produce@USearchAppHost@implementation@Shell@UI@Window.c)
 *     ?get_Arguments@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800AE3A0 (-get_Arguments@-$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@.c)
 *     ?GetKeyValueFromArgs@UndockedSearchAppExperienceManager@@AEAA?AUhstring@winrt@@AEBU23@AEBUWwwFormUrlDecoder@Foundation@Windows@3@0@Z @ 0x1800F534C (-GetKeyValueFromArgs@UndockedSearchAppExperienceManager@@AEAA-AUhstring@winrt@@AEBU23@AEBUWwwFor.c)
 *     ?GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18020DFE0 (-GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?get_LaunchSourceTelemetryId@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180215EC0 (-get_LaunchSourceTelemetryId@-$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@Wind.c)
 * Callees:
 *     <none>
 */

struct winrt::impl::hstring_header *__fastcall winrt::impl::duplicate_hstring(
        winrt::impl *this,
        struct winrt::impl::hstring_header *a2,
        unsigned int a3)
{
  if ( !this )
    return 0LL;
  if ( (*(_BYTE *)this & 1) != 0 )
    return winrt::impl::create_hstring_on_heap(
             *((winrt::impl **)this + 2),
             (winrt::impl *)*((unsigned int *)this + 1),
             a3);
  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  return this;
}
