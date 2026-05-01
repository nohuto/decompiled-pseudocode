/*
 * XREFs of _GetJavaOption_::_2_::_dynamic_atexit_destructor_for__javaOptions__ @ 0x180708930
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@@Z @ 0x1802A7CD8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_1802A7CD8.c)
 */

void __fastcall GetJavaOption_::_2_::_dynamic_atexit_destructor_for__javaOptions__()
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum JavaOption>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum JavaOption>,void *>>>(
    (__int64)&qword_1808DEB58,
    (__int64)&qword_1808DEB58,
    *(__int64 **)(qword_1808DEB58 + 8));
  std::_Deallocate<16>((void *)qword_1808DEB58, (struct std::nothrow_t *)0x48);
}
