/*
 * XREFs of ??1CResourcePriorityTracker@@QEAA@XZ @ 0x180062B30
 * Callers:
 *     ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x180062AE8 (-Free@-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180062B5C (--1-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@std@@.c)
 */

void __fastcall CResourcePriorityTracker::~CResourcePriorityTracker(struct _RTL_CRITICAL_SECTION *this)
{
  std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>(&this[1]);
  DeleteCriticalSection(this);
}
