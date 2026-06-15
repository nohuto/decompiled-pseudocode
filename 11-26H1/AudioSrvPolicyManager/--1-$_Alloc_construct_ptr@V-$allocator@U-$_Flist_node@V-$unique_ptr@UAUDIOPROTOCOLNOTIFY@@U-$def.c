/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002A32C
 * Callers:
 *     ??$emplace_front@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@?$forward_list@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@V?$allocator@V?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U?$default_delete@UAUDIOPROTOCOLNOTIFY@@@std@@@1@$$QEAV21@@Z @ 0x18004306C (--$emplace_front@V-$unique_ptr@UAUDIOPROTOCOLNOTIFY@@U-$default_delete@UAUDIOPROTOCOLNOTIFY@@@st.c)
 *     _std::forward_list_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY____std::allocator_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY_______::emplace_front_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY______::_1_::dtor$0 @ 0x18004E34B (_std--forward_list_std--unique_ptr_AUDIOPROTOCOLNOTIFY_std--default_delete_AUDIOPROTOCOLNOTIFY__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::unique_ptr<AUDIOPROTOCOLNOTIFY>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<std::unique_ptr<AUDIOPROTOCOLNOTIFY>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (const struct std::nothrow_t *)0x10);
}
