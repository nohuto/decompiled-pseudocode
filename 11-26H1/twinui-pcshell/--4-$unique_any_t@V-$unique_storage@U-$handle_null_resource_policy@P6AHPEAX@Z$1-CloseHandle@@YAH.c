/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017DF48
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x180136E8C (-RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@IsGameManager@@QEAAJXZ @ 0x18017DD78 (-RuntimeClassInitialize@IsGameManager@@QEAAJXZ.c)
 *     ?ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z @ 0x180310CA4 (-ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x180313404 (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 *     ?GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180349DF0 (-GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV-$basic_string@GU-$ch.c)
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x180651EB0 (-TryOpenFileMappingHandleForWindow@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_re.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x18017DFA0 (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 */

void **__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
        void **a1,
        void **a2)
{
  void *v4; // rcx
  void *v5; // rsi

  if ( a1 != a2 )
  {
    v4 = *a1;
    v5 = *a2;
    if ( v4 && v4 != (void *)-1LL )
      wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(v4);
    *a1 = v5;
    *a2 = 0LL;
  }
  return a1;
}
