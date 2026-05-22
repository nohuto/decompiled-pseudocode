/*
 * XREFs of ??1?$map@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801CEFA4
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$2 @ 0x1801DD77A (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>>::~map<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>,0>>(a1);
}
