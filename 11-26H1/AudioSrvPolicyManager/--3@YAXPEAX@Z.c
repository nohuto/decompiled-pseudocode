/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180017320
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18000B648 (GetAssignedAccessTypeForUser.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x180016868 (-reset@-$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U-$default.c)
 *     ??_GAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x180017290 (--_GAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1CProcess@@MEAA@XZ @ 0x18001ADE4 (--1CProcess@@MEAA@XZ.c)
 *     ?RemoveAll@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXXZ @ 0x18001C3C8 (-RemoveAll@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_poli.c)
 *     wil::details::lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___::_lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___ @ 0x18001C49C (wil--details--lambda_call__lambda_936a9f2031d164d79308d1616a702e8e___--_lambda_call__lambda_936a.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18001C4D4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18001CFF8 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x1800258AC (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x18002642C (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18002C588 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18002C64C (--1SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x18002C764 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002D43C (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18002FCF0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??1RawUsageIndex@details_abi@wil@@QEAA@XZ @ 0x180031F18 (--1RawUsageIndex@details_abi@wil@@QEAA@XZ.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180031FAC (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003200C (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800335BC (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180033704 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180034200 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180034548 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180034C6C (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180035518 (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180036050 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAA_NI_N@Z @ 0x180038B98 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXI@Z @ 0x180039894 (-Rehash@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18003D238 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18003FC94 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18003FE28 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x18003FF6C (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x180043314 (--1-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18004A604 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18004AAAC (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x18004ABC0 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x18004ABF0 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18004AE30 (--_G-$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAPEAXI@Z.c)
 *     ??_ECThreadPool@@UEAAPEAXI@Z @ 0x18004AE60 (--_ECThreadPool@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
