/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18021CD40
 * Callers:
 *     _dynamic_atexit_destructor_for__CPointerDeviceCache::s_deviceCache__ @ 0x1802B9F00 (_dynamic_atexit_destructor_for__CPointerDeviceCache--s_deviceCache__.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x1801BE450 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@-$_Tr.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::~_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16>(*a1, 0x60uLL);
}
