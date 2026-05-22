/*
 * XREFs of ??1HapticProcessor@@UEAA@XZ @ 0x1800C8050
 * Callers:
 *     ??_EHapticProcessor@@UEAAPEAXI@Z @ 0x1800C80F0 (--_EHapticProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18008B4E8 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@KU-$les.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800C7FC8 (--1-$_Tree@V-$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U-$less@K@std@@V-$allocator@U-.c)
 */

void __fastcall HapticProcessor::~HapticProcessor(void **this)
{
  std::_Tree<std::_Tmap_traits<unsigned long,HapticProcessor::HapticInterfaceInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,HapticProcessor::HapticInterfaceInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>,0>>(this + 4);
  std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>(this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
