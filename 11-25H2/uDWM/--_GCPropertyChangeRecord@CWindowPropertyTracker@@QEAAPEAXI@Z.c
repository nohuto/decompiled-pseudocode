/*
 * XREFs of ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x180059100
 * Callers:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180043950 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180058FFC (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void **__fastcall CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 1);
  DefaultHeap::Free(this);
  return this;
}
