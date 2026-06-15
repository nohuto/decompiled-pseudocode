/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x18002A168
 * Callers:
 *     _CApplication::NotifyVolumePolicyChange_::_1_::dtor$0 @ 0x18004C5F0 (_CApplication--NotifyVolumePolicyChange_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper_::_1_::dtor$5 @ 0x18004C8FE (_CStreamClassPolicyGainsWrapper--CStreamClassPolicyGainsWrapper_--_1_--dtor$5.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession________0___::_Hash_std::_Umap_traits_unsigned_long_std::unique_ptr_TSSession_std::default_delete_TSSession____std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::unique_ptr_TSSession_std::default_delete_TSSession________0____::_1_::dtor$1 @ 0x18004D843 (_std--_Hash_std--_Umap_traits_unsigned_long_std--unique_ptr_TSSession_std--default__ea_18004D843.c)
 *     _TSSession::TSSession_::_1_::dtor$3 @ 0x18004D89B (_TSSession--TSSession_--_1_--dtor$3.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$8 @ 0x18004DE93 (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
