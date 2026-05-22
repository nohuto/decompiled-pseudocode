/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@KV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1801CED40
 * Callers:
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801CEA90 (--0HotKeyProcessor@@QEAA@XZ.c)
 *     ??1?$map@KV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801CEF98 (--1-$map@KV-$list@UHotKeyInfo@@V-$allocator@UHotKeyInfo@@@std@@@std@@U-$less@K@2@V-$allocator@U-.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@1@@Z @ 0x1801CE114 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$list@UHotKeyInfo@@V-$allocator@UHotKey.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::list<HotKeyInfo>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<HotKeyInfo>>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,std::list<HotKeyInfo>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<HotKeyInfo>>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<HotKeyInfo>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<HotKeyInfo>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x38);
}
