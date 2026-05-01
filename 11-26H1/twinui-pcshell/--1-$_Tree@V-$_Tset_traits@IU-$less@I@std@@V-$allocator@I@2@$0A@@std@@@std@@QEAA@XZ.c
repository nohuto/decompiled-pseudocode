/*
 * XREFs of ??1?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA@XZ @ 0x180286798
 * Callers:
 *     ??1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ @ 0x180286768 (--1PointerEventsDetector@TouchGestureProcessor@@QEAA@XZ.c)
 *     ??1?$set@HU?$less@H@std@@V?$allocator@H@2@@std@@QEAA@XZ @ 0x180622EEC (--1-$set@HU-$less@H@std@@V-$allocator@H@2@@std@@QEAA@XZ.c)
 *     ?AreValidFastPathEnabledStates@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806235FC (-AreValidFastPathEnabledStates@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x180286158 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::~_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x20);
}
