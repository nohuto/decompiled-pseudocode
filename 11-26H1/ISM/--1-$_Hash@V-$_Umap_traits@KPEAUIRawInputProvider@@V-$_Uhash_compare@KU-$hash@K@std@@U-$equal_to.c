/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18008A6D8
 * Callers:
 *     ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18008A588 (--1-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x1800CC9AC (--1InputStateManager@@MEAA@XZ.c)
 *     ??1SystemCursorController2@@UEAA@XZ @ 0x1800F7E7C (--1SystemCursorController2@@UEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800FAA24 (--1SystemCursorService2@@UEAA@XZ.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x1800FE338 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x18014D9E8 (--1DragNDropProcessor@@UEAA@XZ.c)
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18014DA74 (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ??1ResizeProcessor@@UEAA@XZ @ 0x18015384C (--1ResizeProcessor@@UEAA@XZ.c)
 *     ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x18015693C (--1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180156A24 (--1EdgyProcessor@@UEAA@XZ.c)
 *     ??1ControllerNavigationManager@@UEAA@XZ @ 0x1801790F8 (--1ControllerNavigationManager@@UEAA@XZ.c)
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x18018C560 (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 *     ??1PenHapticInterface@@UEAA@XZ @ 0x180192818 (--1PenHapticInterface@@UEAA@XZ.c)
 *     ??1InputInfoValidator@@UEAA@XZ @ 0x1801A07B8 (--1InputInfoValidator@@UEAA@XZ.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z @ 0x1801A0908 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1801A2A48 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x1801CB8FC (--1DWMCursorBroker@@MEAA@XZ.c)
 *     _InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x1801DDC90 (_InputSinkDataCache--GetInstance_--_2_--_dynamic_atexit_destructor_for__instance__.c)
 *     _dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy::s_configuredControllers__ @ 0x1801DDE10 (_dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy--s_configuredControllers__.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008A624 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>(
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
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v2,
    a1[1]);
  return std::_Deallocate<16>(a1[1], 32LL);
}
