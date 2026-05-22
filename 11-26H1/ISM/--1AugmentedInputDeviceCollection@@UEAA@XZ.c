/*
 * XREFs of ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800D25E4
 * Callers:
 *     ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x1800D2620 (--_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800AB740 (--1-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$CBK.c)
 */

void __fastcall AugmentedInputDeviceCollection::~AugmentedInputDeviceCollection(void **this)
{
  *this = &AugmentedInputDeviceCollection::`vftable';
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>(this + 345);
  HIDDeviceCollection::~HIDDeviceCollection((HIDDeviceCollection *)this);
}
