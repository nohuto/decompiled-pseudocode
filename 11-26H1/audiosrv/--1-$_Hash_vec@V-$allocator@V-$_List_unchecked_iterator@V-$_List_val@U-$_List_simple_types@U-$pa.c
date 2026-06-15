/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180080464
 * Callers:
 *     _CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor$7 @ 0x180163766 (_CAudioSessionManager--NotifySessionAudioProtocol_--_1_--dtor$7.c)
 *     _std::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0___::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0____::_1_::dtor$1 @ 0x180164ACF (_std--_Hash_std--_Umap_traits_CAudioSessionInstanceId_wil--com_ptr_t_CAudioSession__ea_180164ACF.c)
 *     _std::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0___::_Hash_std::_Umap_traits_CAudioSessionInstanceId_wil::com_ptr_t_CAudioSession_wil::err_returncode_policy__std::_Uhash_compare_CAudioSessionInstanceId_std::hash_CAudioSessionInstanceId__std::equal_to_CAudioSessionInstanceId____std::allocator_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy______0____std::allocator_std::_List_node_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy____void________::_1_::dtor$1 @ 0x180164B5B (_std--_Hash_std--_Umap_traits_CAudioSessionInstanceId_wil--com_ptr_t_CAudioSession__ea_180164B5B.c)
 *     _CLockedList_UniqueValuesOnly_CMasterVolumeNotificationProcess_0_::ForEachEntry_::_1_::dtor$0 @ 0x1801653AC (_CLockedList_UniqueValuesOnly_CMasterVolumeNotificationProcess_0_--ForEachEntry_--_1_--dtor$0.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$14 @ 0x1801668D9 (_AtmosCheck--AtmosCheck_--_1_--dtor$14.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$5 @ 0x18016B223 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$5.c)
 *     _CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor$6 @ 0x18016B70A (_CEndpointCharacteristicsCache--CEndpointCharacteristicsCache_--_1_--dtor$6.c)
 *     __dynamic_initializer_for__s_validSettingsForSchema___::_1_::dtor$2 @ 0x18016BDFA (__dynamic_initializer_for__s_validSettingsForSchema___--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>>>>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
