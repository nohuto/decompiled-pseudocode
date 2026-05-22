/*
 * XREFs of ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180054030
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180054004 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unordered_set@_KU-$hash@_K@std@@U-$equal.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008B518 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unordered_set@_KU-$hash@_.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800D9658 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ??1CustomCursorApplication2@@QEAA@XZ @ 0x1800F7E44 (--1CustomCursorApplication2@@QEAA@XZ.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x18010C974 (--1SystemContextProvider@@MEAA@XZ.c)
 *     ??1KeyboardModifierState@@EEAA@XZ @ 0x18019D0EC (--1KeyboardModifierState@@EEAA@XZ.c)
 *     ??1TouchInfoAdapter@@UEAA@XZ @ 0x1801CA9F8 (--1TouchInfoAdapter@@UEAA@XZ.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@W4_Button@@PEAX@std@@@std@@@?$_List_node@W4_Button@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@W4_Button@@PEAX@std@@@1@PEAU01@@Z @ 0x18001B388 (--$_Free_non_head@V-$allocator@U-$_List_node@W4_Button@@PEAX@std@@@std@@@-$_List_node@W4_Button@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<enum _Button,void *>::_Free_non_head<std::allocator<std::_List_node<enum _Button,void *>>>(v2, a1[1]);
  return std::_Deallocate<16>(a1[1], 24LL);
}
