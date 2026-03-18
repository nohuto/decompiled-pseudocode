/*
 * XREFs of ?SetSharedChildChannelNoRef@CVisual@@QEAAXPEAVCChannelContext@@@Z @ 0x18010B7D4
 * Callers:
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x180025D40 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetSharedChildChannelNoRef(CVisual *this, struct CChannelContext *a2)
{
  __int64 *v3; // rcx
  unsigned int Slot; // eax
  _QWORD *v5; // r10
  __int64 v6; // r11

  if ( a2 )
  {
    v3 = (__int64 *)((char *)this + 224);
    if ( (*(_DWORD *)*v3 & 0x10000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v3, 16);
      if ( Slot < *(_DWORD *)(v6 + 4) )
        v5 = (_QWORD *)(v6 + ((*(unsigned int *)(v6 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * Slot);
      *v5 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((char **)v3, 16) = a2;
    }
  }
  else
  {
    CVisual::ClearSharedChildChannelNoRef(this);
  }
}
