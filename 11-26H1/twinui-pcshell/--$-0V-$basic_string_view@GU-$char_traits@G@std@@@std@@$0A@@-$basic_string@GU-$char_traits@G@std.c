/*
 * XREFs of ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x180139E90 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ??$_Construct_in_place@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAUhstring@winrt@@AEAU56@AEAU56@@std@@YAXAEAUGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAUhstring@winrt@@22@Z @ 0x18013C568 (--$_Construct_in_place@UGameMruItem@@AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x18013CDB4 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 *     ??0GameMruItem@@QEAA@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@11@Z @ 0x180210BF8 (--0GameMruItem@@QEAA@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@.c)
 *     ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x1802915EC (-GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ.c)
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805E5508 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x1805E6494 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1805EEFFC (_anonymous_namespace_--CreateTemporaryFile.c)
 *     _anonymous_namespace_::TruncateDisplayName @ 0x1805F0E6C (_anonymous_namespace_--TruncateDisplayName.c)
 *     ??$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAUValueSetReader@Details@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18064449C (--$Serialize@UValueSetReader@Details@RemoteSystemData@@@RemoteSystem@RemoteSystemData@@QEAAXAEAU.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 */

__int64 __fastcall std::wstring::wstring(__int64 a1, __int64 a2)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  std::wstring::_Construct<1,unsigned short const *>((char **)a1, *(const void **)a2, *(_QWORD *)(a2 + 8));
  return a1;
}
