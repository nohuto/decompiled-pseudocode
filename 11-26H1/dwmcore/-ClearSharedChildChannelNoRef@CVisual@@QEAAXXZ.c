/*
 * XREFs of ?ClearSharedChildChannelNoRef@CVisual@@QEAAXXZ @ 0x18010BCF0
 * Callers:
 *     ?SetSharedChildChannelNoRef@CVisual@@QEAAXPEAVCChannelContext@@@Z @ 0x18010B7D4 (-SetSharedChildChannelNoRef@CVisual@@QEAAXPEAVCChannelContext@@@Z.c)
 *     ?DetachFromChannel@CVisual@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18010BD40 (-DetachFromChannel@CVisual@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::ClearSharedChildChannelNoRef(CVisual *this)
{
  _DWORD *v1; // r10
  __int64 v2; // rcx
  unsigned int Slot; // eax
  __int64 v4; // r10

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x10000) != 0 )
  {
    v2 = *((_QWORD *)this + 28);
    *v1 &= ~0x10000u;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v2, 16);
    if ( Slot < *(_DWORD *)(v4 + 4) )
      *(_BYTE *)(Slot + v4 + 8) = 0;
  }
}
