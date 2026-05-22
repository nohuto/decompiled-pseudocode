/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800AB740
 * Callers:
 *     ??1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ @ 0x1800AB7E0 (--1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ.c)
 *     ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800D25E4 (--1AugmentedInputDeviceCollection@@UEAA@XZ.c)
 *     ??1HapticsSupport@@QEAA@XZ @ 0x1801888B0 (--1HapticsSupport@@QEAA@XZ.c)
 *     ??1?$set@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x180193E1C (--1-$set@U_GUID@@UGUIDComparer@PenInterface@@V-$allocator@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x180193E58 (--1PenInterface@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x1800AB380 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x30);
}
