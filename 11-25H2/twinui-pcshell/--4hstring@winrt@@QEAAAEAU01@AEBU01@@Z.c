/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800AC148
 * Callers:
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1801BF13C (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180239D80 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18024AE98 (-RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18024B6A0 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180284418 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     ?Insert@?$produce@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX0PEA_N@Z @ 0x1803390E0 (-Insert@-$produce@U-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring@winrt@@U12@U-$less@Uhstring@wi.c)
 *     ?LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVValueSet@Collections@Foundation@Windows@@@56@@Z @ 0x180348C20 (-LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU-$IMap@PEAUHSTRIN.c)
 *     ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18039301C (-CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?DeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@H@Z @ 0x18057B390 (-DeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@H@Z.c)
 *     ?GetAndDeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@PEAURect@Foundation@Windows@@@Z @ 0x18057B940 (-GetAndDeleteSnapLaunchRect@CShellSnapComponent@@UEAAJPEAUHSTRING__@@PEAURect@Foundation@Windows.c)
 *     ?RegisterSnapLaunch@CShellSnapComponent@@UEAAJPEAUHSTRING__@@HURect@Foundation@Windows@@@Z @ 0x18057D610 (-RegisterSnapLaunch@CShellSnapComponent@@UEAAJPEAUHSTRING__@@HURect@Foundation@Windows@@@Z.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x180596440 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_180596440.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x1805D9310 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 *     ??$_Assign_counted_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@_K@Z @ 0x1805F3F78 (--$_Assign_counted_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winr.c)
 *     ?GetMany@?$vector_view_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@Uhstring@winrt@@@2@@Z @ 0x1805F6C30 (-GetMany@-$vector_view_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocato.c)
 *     ?GetMany@iterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@Uhstring@winrt@@@3@@Z @ 0x1805F6D08 (-GetMany@iterator@-$iterable_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$al.c)
 *     ?SetAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXIAEBUhstring@2@@Z @ 0x1805F860C (-SetAt@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstr.c)
 *     _lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator() @ 0x180624938 (_lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_--operator().c)
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x180626BC8 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?GetRemoteDesktopInformation@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteDesktopInformation@3456@XZ @ 0x180627A20 (-GetRemoteDesktopInformation@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?Insert@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAXPEA_N@Z @ 0x1806283C0 (-Insert@-$produce@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocat.c)
 *     ?Insert@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAXPEA_N@Z @ 0x1806284C0 (-Insert@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allo.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x18062ACF8 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180641244 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 *     ?to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z @ 0x18067DCAC (-to_cx@@YAPE$AAVString@Platform@@AEBUhstring@winrt@@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch$34 @ 0x1806DC080 (_winrt--Windows--Internal--Shell--implementation--LaunchUriData--GetForLaunchUri_--_1_--catch$34.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800AD118 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::hstring::operator=(
        struct winrt::impl::hstring_header **a1,
        __int64 *a2,
        unsigned int a3)
{
  struct winrt::impl::hstring_header *hstring_on_heap; // rdi
  __int64 v5; // rcx
  struct winrt::impl::hstring_header **result; // rax

  hstring_on_heap = 0LL;
  v5 = *a2;
  if ( *a2 )
  {
    if ( (*(_BYTE *)v5 & 1) != 0 )
    {
      hstring_on_heap = winrt::impl::create_hstring_on_heap(
                          *(winrt::impl **)(v5 + 16),
                          (winrt::impl *)*(unsigned int *)(v5 + 4),
                          a3);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 24));
      hstring_on_heap = (struct winrt::impl::hstring_header *)v5;
    }
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
  result = a1;
  *a1 = hstring_on_heap;
  return result;
}
