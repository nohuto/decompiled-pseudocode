/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180046CD0
 * Callers:
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$2 @ 0x180164E75 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$2.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$6 @ 0x180164EAB (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$6.c)
 *     __lambda_fad069bbea6c73c856a21cdaadf497a4_::operator()_::_1_::dtor$2 @ 0x1801663A7 (__lambda_fad069bbea6c73c856a21cdaadf497a4_--operator()_--_1_--dtor$2.c)
 *     __lambda_fad069bbea6c73c856a21cdaadf497a4_::operator()_::_1_::dtor$0 @ 0x1801663B9 (__lambda_fad069bbea6c73c856a21cdaadf497a4_--operator()_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::FindPreferredStreamGroup_::_1_::dtor$1 @ 0x180166518 (_CDeviceGraphObjectsStore--FindPreferredStreamGroup_--_1_--dtor$1.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$2 @ 0x180166901 (_UseSupportedConnectorMode_--_1_--dtor$2.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$28 @ 0x180167E6D (_CAudioResourceManager--CreateStream_--_1_--dtor$28.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x180167FB8 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$7.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x180168183 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$8 @ 0x180168F09 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$8.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$9 @ 0x180168F1B (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$9.c)
 *     __lambda_fad069bbea6c73c856a21cdaadf497a4_::operator()_::_1_::dtor$1 @ 0x18016A0C9 (__lambda_fad069bbea6c73c856a21cdaadf497a4_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16>(
      *(void **)a1,
      (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
