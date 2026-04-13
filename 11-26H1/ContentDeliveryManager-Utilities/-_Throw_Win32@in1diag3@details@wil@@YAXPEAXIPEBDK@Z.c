/*
 * XREFs of ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180098E90
 * Callers:
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800961F8 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x180099530 (-SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@Applicat.c)
 *     ?CreateApplicationUserModelIdFromPackageData@LaunchUriService@Actions@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x18009AA64 (-CreateApplicationUserModelIdFromPackageData@LaunchUriService@Actions@CreativeFramework@@AEAA-AV.c)
 *     ?GetAppAUMID@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x18009EA64 (-GetAppAUMID@Actions@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 *     ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800A369C (-DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 * Callees:
 *     ??$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z @ 0x180095114 (--$ReportFailure_Win32@$0A@@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32<0>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, (int)a4);
}
