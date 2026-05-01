/*
 * XREFs of _anonymous_namespace_::IsAppInBlackList @ 0x18002DA14
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18002E834 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18002F490 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 */

char __fastcall anonymous_namespace_::IsAppInBlackList(_QWORD *a1)
{
  void **i; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rcx

  for ( i = (void **)off_18070B4A8; ; ++i )
  {
    if ( i == &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController>::`vftable' )
      return 0;
    v3 = std::_WChar_traits<wchar_t>::length(*i);
    v4 = a1;
    if ( a1[3] > 7uLL )
      v4 = (_QWORD *)*a1;
    if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(v4, a1[2], *i, v3) )
      break;
  }
  return 1;
}
