/*
 * XREFs of ??_GHotKeyInfo@@QEAAPEAXI@Z @ 0x1801CF5FC
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@UHotKeyInfo@@V?$allocator@UHotKeyInfo@@@std@@@std@@@std@@PEAX@1@@Z @ 0x1801CE114 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$list@UHotKeyInfo@@V-$allocator@UHotKey.c)
 *     ?_Destroy@?$_Ref_count_obj2@UHotKeyInfo@@@std@@EEAAXXZ @ 0x1801D1D30 (-_Destroy@-$_Ref_count_obj2@UHotKeyInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801CE3A0 (--$_Freenode@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_Lis.c)
 */

HotKeyInfo *__fastcall HotKeyInfo::`scalar deleting destructor'(HotKeyInfo *this)
{
  __int64 v1; // rdx
  char *v3; // rdx
  char *v4; // rbx

  v1 = *((_QWORD *)this + 5);
  **(_QWORD **)(v1 + 8) = 0LL;
  v3 = *(char **)v1;
  if ( v3 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        (__int64)this,
        v3);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16>(*((void **)this + 5), (struct std::nothrow_t *)0x20);
  return this;
}
