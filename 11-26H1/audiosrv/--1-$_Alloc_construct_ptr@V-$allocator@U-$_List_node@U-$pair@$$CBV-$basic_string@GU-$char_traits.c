/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800ACB78
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800ACB48 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_trai.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800AE2DC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_ea_1800AE2DC.c)
 *     _std::_Hash_std::_Umap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____wistd::unique_ptr_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]_wistd::default_delete_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]____std::_Uhash_compare_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____case_insensitive_hash_case_insensitive_equality__std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__wistd::unique_ptr_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]_wistd::default_delete_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]________0___::emplace_unsigned_short_const___&_wistd::unique_ptr_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]_wistd::default_delete_AtmosCheck::EndpointSpecificSpatialTechInfo_[0]______::_1_::dtor$1 @ 0x180165CBB (_std--_Hash_std--_Umap_traits_std--basic_string_unsigned_short_std--char_traits_uns_ea_180165CBB.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy____void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy____void________std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy__&__::_1_::dtor$0 @ 0x18016B5F2 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_std--basic_string_unsigned.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x38);
}
