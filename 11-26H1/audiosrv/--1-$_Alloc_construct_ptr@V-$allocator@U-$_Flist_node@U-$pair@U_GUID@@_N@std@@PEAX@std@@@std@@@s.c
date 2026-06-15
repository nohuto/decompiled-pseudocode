/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@U?$pair@U_GUID@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800B0E44
 * Callers:
 *     ??$emplace_front@AEAU?$pair@U_GUID@@_N@std@@@?$forward_list@U?$pair@U_GUID@@_N@std@@V?$allocator@U?$pair@U_GUID@@_N@std@@@2@@std@@QEAAAEAU?$pair@U_GUID@@_N@1@AEAU21@@Z @ 0x18013473C (--$emplace_front@AEAU-$pair@U_GUID@@_N@std@@@-$forward_list@U-$pair@U_GUID@@_N@std@@V-$allocator.c)
 *     _std::forward_list_std::pair__GUID_bool__std::allocator_std::pair__GUID_bool_____::emplace_front_std::pair__GUID_bool__&__::_1_::dtor$0 @ 0x18016B628 (_std--forward_list_std--pair__GUID_bool__std--allocator_std--pair__GUID_bool_____--emplace_front.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::pair<_GUID,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::pair<_GUID,bool>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x20);
}
