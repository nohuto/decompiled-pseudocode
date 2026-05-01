/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1801DBBF8
 * Callers:
 *     ?copy_name@reg_iterator_details@reg@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV45@_K@Z @ 0x1803BB738 (-copy_name@reg_iterator_details@reg@wil@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@N@Z @ 0x180475DF8 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@N@Z.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x180576D3C (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 *     ?IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Management@Windows@winrt@@@Z @ 0x1805D42D4 (-IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Manage.c)
 * Callees:
 *     ??$_Construct@$0A@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXG_K@Z @ 0x180032C58 (--$_Construct@$0A@G@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXG_K@Z.c)
 */

__int64 __fastcall std::wstring::wstring(__int64 a1, size_t a2, wchar_t a3)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  std::wstring::_Construct<0,unsigned short>(a1, a3, a2);
  return a1;
}
