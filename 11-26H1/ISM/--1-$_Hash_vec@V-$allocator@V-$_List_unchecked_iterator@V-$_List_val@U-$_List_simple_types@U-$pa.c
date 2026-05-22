/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180061A40
 * Callers:
 *     ??1?$_Tidy_guard@V?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@@std@@QEAA@XZ @ 0x1800A7BA8 (--1-$_Tidy_guard@V-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@@std@@QEAA@XZ.c)
 *     ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x1800A83D8 (-NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Inpu.c)
 *     ??1InputSiteManager@@UEAA@XZ @ 0x180132F30 (--1InputSiteManager@@UEAA@XZ.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180154034 (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 *     ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x180154290 (-GetResizeControllerInputSite@ResizeProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVB.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$4 @ 0x1801D4FA9 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$4.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$24 @ 0x1801D51DC (_DWMInputRouter--DWMInputRouter_--_1_--dtor$24.c)
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0____::_1_::dtor$1 @ 0x1801D5208 (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPointerMapping_D.c)
 *     _GestureServices::GestureServices_::_1_::dtor$16 @ 0x1801D5799 (_GestureServices--GestureServices_--_1_--dtor$16.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$43 @ 0x1801D659D (_Win32kInterop--Win32kInterop_--_1_--dtor$43.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$7 @ 0x1801D68CC (_ButtonProcessor--ButtonProcessor_--_1_--dtor$7.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$12 @ 0x1801D6D8C (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$12.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback____0___::_Hash_std::_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback____0____std::allocator_std::_List_node_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback__void________::_1_::dtor$1 @ 0x1801D6EA0 (_std--_Hash_std--_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std--__ea_1801D6EA0.c)
 *     _CBaseInputObserverServer_11_::CBaseInputObserverServer_11__::_1_::dtor$7 @ 0x1801D727D (_CBaseInputObserverServer_11_--CBaseInputObserverServer_11__--_1_--dtor$7.c)
 *     _CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor$2 @ 0x1801D8A04 (_CUIHierarchy--NotifyWindowOfActivationStateChange_--_1_--dtor$2.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$1 @ 0x1801DB907 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$1.c)
 *     _PenHapticInterface::PenHapticInterface_::_1_::dtor$10 @ 0x1801DC680 (_PenHapticInterface--PenHapticInterface_--_1_--dtor$10.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = std::_Deallocate<16>(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
