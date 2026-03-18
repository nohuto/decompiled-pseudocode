/*
 * XREFs of ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x1800AEE04
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800CA388 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

struct CCachedWindowBackgroundTreatment *__fastcall CVisual::GetCachedWindowBackgroundTreatment(CVisual *this)
{
  unsigned int Slot; // eax
  __int64 v2; // r10
  unsigned __int64 v3; // rax

  if ( (**((_DWORD **)this + 28) & 0x400000) == 0 )
    return 0LL;
  Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)this + 28), 10);
  if ( Slot >= *(_DWORD *)(v2 + 4) )
    v3 = 0LL;
  else
    v3 = v2 + ((*(unsigned int *)(v2 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * Slot;
  return *(struct CCachedWindowBackgroundTreatment **)v3;
}
