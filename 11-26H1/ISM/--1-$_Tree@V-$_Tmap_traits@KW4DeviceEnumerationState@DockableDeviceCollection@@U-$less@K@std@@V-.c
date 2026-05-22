/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18008A290
 * Callers:
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800DDB7C (--1DockableDeviceCollection@@UEAA@XZ.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800E0650 (--1GazeHidDevice@@UEAA@XZ.c)
 *     ??1?$map@KIU?$less@K@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAA@XZ @ 0x180109874 (--1-$map@KIU-$less@K@std@@V-$allocator@U-$pair@$$CBKI@std@@@2@@std@@QEAA@XZ.c)
 *     ??1GamepadInterceptionHelper@@UEAA@XZ @ 0x180109944 (--1GamepadInterceptionHelper@@UEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@1@@Z @ 0x1801CE230 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$set@PEAUHotKeyInfo@@U-$less@PEAUHotKe.c)
 *     _std::map_unsigned_short_enum_WaveformFlags_std::less_unsigned_short__std::allocator_std::pair_unsigned_short_const__enum_WaveformFlags_____::map_unsigned_short_enum_WaveformFlags_std::less_unsigned_short__std::allocator_std::pair_unsigned_short_const__enum_WaveformFlags______::_1_::dtor$0 @ 0x1801D7A3F (_std--map_unsigned_short_enum_WaveformFlags_std--less_unsigned_short__std--allocator_std--pair_u.c)
 *     _dynamic_atexit_destructor_for__s_knownWaveforms__ @ 0x1801DDF30 (_dynamic_atexit_destructor_for__s_knownWaveforms__.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@@Z @ 0x18008A208 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGI@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>(
        _QWORD *a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,unsigned int>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *(__int64 **)(*a1 + 8LL));
  return std::_Deallocate<16>(*a1, 40LL);
}
