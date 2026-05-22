/*
 * XREFs of ??1HapticsSupport@@QEAA@XZ @ 0x1801888B0
 * Callers:
 *     ??1CompliantHapticInterface@@QEAA@XZ @ 0x180188840 (--1CompliantHapticInterface@@QEAA@XZ.c)
 *     _CompliantHapticInterface::CompliantHapticInterface_::_1_::dtor$2 @ 0x1801DC25B (_CompliantHapticInterface--CompliantHapticInterface_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$_Optional_destruct_base@UHapticsTrigger@@$0A@@std@@QEAA@XZ @ 0x180188774 (--1-$_Optional_destruct_base@UHapticsTrigger@@$0A@@std@@QEAA@XZ.c)
 */

void __fastcall HapticsSupport::~HapticsSupport(void **this)
{
  std::_Optional_destruct_base<HapticsTrigger,0>::~_Optional_destruct_base<HapticsTrigger,0>((__int64)(this + 41));
  std::_Optional_destruct_base<HapticsTrigger,0>::~_Optional_destruct_base<HapticsTrigger,0>((__int64)(this + 29));
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>(this + 27);
}
