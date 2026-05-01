/*
 * XREFs of ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1803370AC
 * Callers:
 *     ??$get_value_with_type@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Uerr_returncode_policy@wil@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x180334D54 (--$get_value_with_type@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@Uerr_return.c)
 *     ??$try_get_value@K@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@K@std@@PEBG0K@Z @ 0x180334F64 (--$try_get_value@K@-$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA-AV-$o.c)
 *     ??$try_get_value@K@reg@wil@@YA?AV?$optional@K@std@@PEAUHKEY__@@PEBG1@Z @ 0x18033502C (--$try_get_value@K@reg@wil@@YA-AV-$optional@K@std@@PEAUHKEY__@@PEBG1@Z.c)
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180335130 (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@YA-AV-$.c)
 *     ??$try_get_value@I@reg@wil@@YA?AV?$optional@I@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803AD034 (--$try_get_value@I@reg@wil@@YA-AV-$optional@I@std@@PEAUHKEY__@@PEBG1@Z.c)
 *     ??$try_get_value@_K@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@_K@std@@PEBG0K@Z @ 0x1803AD078 (--$try_get_value@_K@-$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA-AV-$.c)
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1803B0070 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 *     ??$get_value_nothrow@K$0A@@reg@wil@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1805C5B1C (--$get_value_nothrow@K$0A@@reg@wil@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??$get_value_with_type@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@Uerr_returncode_policy@2@@?$reg_view_t@Uerr_returncode_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@3@K@Z @ 0x1805C5B80 (--$get_value_with_type@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoT.c)
 *     ?IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D43E4 (-IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::reg::reg_view_details::get_value_flags_from_value_type(wil::reg::reg_view_details *this)
{
  switch ( (_DWORD)this )
  {
    case 1:
      return 268435462LL;
    case 2:
      return 6LL;
    case 3:
      return 8LL;
    case 4:
      return 16LL;
    case 7:
      return 32LL;
    case 0xB:
      return 64LL;
  }
  return (unsigned int)this;
}
