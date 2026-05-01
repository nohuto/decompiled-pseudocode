/*
 * XREFs of ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180033F88
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180030EA0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x1802915EC (-GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ.c)
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x1802948CC (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180615DD8 (-RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1800332BC (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??$?0V_lambda_5a278b055947bc2d3c441b5767c21f6b_@@X@?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@V_lambda_5a278b055947bc2d3c441b5767c21f6b_@@@Z @ 0x1805838D8 (--$-0V_lambda_5a278b055947bc2d3c441b5767c21f6b_@@X@-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@V_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::ExpandEnvironmentStringsW<std::wstring,256>(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rax
  int v5; // eax
  _BYTE v7[128]; // [rsp+28h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v9; // [rsp+B8h] [rbp+10h] BYREF
  char v10; // [rsp+C0h] [rbp+18h] BYREF

  std::wstring::wstring(a1);
  v9 = v2;
  v3 = (_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                   &v10,
                   &v9);
  v4 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(
         v7,
         *v3);
  v5 = wil::AdaptFixedSizeToAllocatedResult<std::wstring,256>(a1, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x243,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)(unsigned int)v5,
      1);
  return a1;
}
