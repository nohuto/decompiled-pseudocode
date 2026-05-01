/*
 * XREFs of ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x18064C728
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180650708 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180652394 (-UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806499F0 (--1-$com_ptr_t@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649F28 (--1-$test_data_control@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18064A054 (--1-$test_watcher@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?CreateFromBytes@RemoteSystem@RemoteSystemData@@SA?AU12@PEBXI@Z @ 0x18064B0D4 (-CreateFromBytes@RemoteSystem@RemoteSystemData@@SA-AU12@PEBXI@Z.c)
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F3BC (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650570 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ?data@?$consume_Windows_Storage_Streams_IBuffer@UIBuffer@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806535D0 (-data@-$consume_Windows_Storage_Streams_IBuffer@UIBuffer@Streams@Storage@Windows@winrt@@@impl@wi.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180654EB4 (-start@-$tip_test@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetDataFromFileMappings(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  struct winrt::impl::hstring_header *v6; // r15
  __int16 v7; // r12
  __int64 v8; // rdi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // rbx
  struct winrt::impl::hstring_header *v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 *v16; // rdx
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  struct winrt::impl::hstring_header *v21; // [rsp+28h] [rbp-49h] BYREF
  __int128 v22; // [rsp+30h] [rbp-41h]
  __int16 v23; // [rsp+40h] [rbp-31h]
  int v24; // [rsp+42h] [rbp-2Fh]
  __int16 v25; // [rsp+46h] [rbp-2Bh]
  void **v26; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v27[40]; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v28; // [rsp+80h] [rbp+Fh]
  volatile signed __int32 *v29[4]; // [rsp+88h] [rbp+17h] BYREF
  volatile signed __int32 *v30; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v31; // [rsp+E0h] [rbp+6Fh] BYREF

  v31 = a2;
  v6 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v7 = -1;
  v23 = -1;
  v24 = 0;
  v25 = 0;
  v30 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>::start(&v30, v29);
  v26 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v27,
    (struct wil::details::IFailureCallback *)&v26,
    0LL,
    1);
  v28 = v30;
  if ( v30 )
    _InterlockedIncrement(v30 + 76);
  wil::com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>,wil::err_returncode_policy>((void **)&v30);
  v8 = *a3;
  v9 = v28;
  v30 = v28;
  if ( v28 )
    _InterlockedIncrement(v28 + 76);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)(v9 + 2));
  *((_QWORD *)v9 + 34) = v8;
  tip2::test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>::~test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>((void **)&v30);
  winrt::hstring::hstring((winrt::hstring *)&v30, L"RemoteSystemProvider");
  Util::FileMappingHelpers::ReadBufferFromSharedMemory(a1 + 136, &v31, v8, &v30);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v30);
  if ( v31 )
  {
    winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v31);
    winrt::impl::consume_Windows_Storage_Streams_IBuffer<winrt::Windows::Storage::Streams::IBuffer>::data(&v31);
    v12 = RemoteSystemData::RemoteSystem::CreateFromBytes((__int64)v29);
    if ( &v21 != (struct winrt::impl::hstring_header **)v12 )
    {
      v13 = *(struct winrt::impl::hstring_header **)v12;
      *(_QWORD *)v12 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(&v21, (__int64)v13);
    }
    LODWORD(v22) = *(_DWORD *)(v12 + 8);
    *((_QWORD *)&v22 + 1) = *(_QWORD *)(v12 + 16);
    v23 = *(_WORD *)(v12 + 24);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v29);
    LOBYTE(v14) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
      v14);
    v16 = (__int64 *)&v21;
    if ( *(_DWORD *)(a1 + 44) == 1 )
      v16 = (__int64 *)&c_bootSystemId;
    winrt::hstring::operator=(&v21, v16, v15);
    v17 = v28;
    v30 = v28;
    if ( v28 )
      _InterlockedIncrement(v28 + 76);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v17 + 2));
    *((_BYTE *)v17 + 280) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>::~test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>((void **)&v30);
    v18 = v28;
    v30 = v28;
    if ( v28 )
      _InterlockedIncrement(v28 + 76);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v18 + 2));
    v10 = *((_QWORD *)&v22 + 1);
    *((_QWORD *)v18 + 36) = *((_QWORD *)&v22 + 1);
    tip2::test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>::~test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>((void **)&v30);
    v19 = v28;
    v30 = v28;
    if ( v28 )
      _InterlockedIncrement(v28 + 76);
    tip2::details::shared_data<1,0,0>::begin_update((__int64)(v19 + 2));
    v11 = v22;
    *((_DWORD *)v19 + 74) = v22;
    tip2::test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>::~test_data_control<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>((void **)&v30);
    v7 = v23;
    v6 = v21;
  }
  else
  {
    v10 = *((_QWORD *)&v22 + 1);
    v11 = v22;
  }
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v28 + 2));
  v21 = 0LL;
  *(_QWORD *)a2 = v6;
  *(_DWORD *)(a2 + 8) = v11;
  *(_QWORD *)(a2 + 16) = v10;
  *(_WORD *)(a2 + 24) = v7;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v31);
  tip2::test_watcher<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>::~test_watcher<tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>>((__int64)&v26);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v21);
  return a2;
}
