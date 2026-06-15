/*
 * XREFs of ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x180109B40
 * Callers:
 *     ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x180109894 (--$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@-$vector.c)
 *     ??$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@@std@@@std@@AEAAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAU23@AEAVCMasterVolumeNotificationProcess@@$$QEAH@Z @ 0x18011A50C (--$_Emplace_reallocate@AEAVCMasterVolumeNotificationProcess@@H@-$vector@ULockedListEntry@-$CLock.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16>(v6, (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
