/*
 * XREFs of ??1?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1801CEFBC
 * Callers:
 *     _HotKeyProcessor::DetectAndProcessHotKey_::_1_::dtor$4 @ 0x1801DD8BE (_HotKeyProcessor--DetectAndProcessHotKey_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall std::set<std::shared_ptr<HotKeyInfo>>::~set<std::shared_ptr<HotKeyInfo>>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>::_Erase_head<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
    a1,
    (__int64)a1);
}
