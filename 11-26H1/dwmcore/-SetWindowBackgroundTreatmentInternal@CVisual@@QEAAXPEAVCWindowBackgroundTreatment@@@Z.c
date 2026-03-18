/*
 * XREFs of ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18014BEB0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x18014BF4C (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetWindowBackgroundTreatmentInternal(CVisual *this, struct CWindowBackgroundTreatment *a2)
{
  _DWORD *v2; // r10
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // r10
  char v7; // r11
  unsigned int Slot; // eax
  __int64 v9; // r10
  _QWORD *v10; // r11

  v2 = (_DWORD *)*((_QWORD *)this + 28);
  v4 = *v2 & 0x800000;
  if ( a2 )
  {
    if ( v4 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v2, 9);
      if ( Slot < *(_DWORD *)(v9 + 4) )
        v10 = (_QWORD *)(v9 + ((*(unsigned int *)(v9 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * Slot);
      *v10 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((char **)this + 28, 9) = a2;
    }
  }
  else if ( v4 )
  {
    *v2 &= ~0x800000u;
    v5 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v2, 9);
    if ( v5 < *(_DWORD *)(v6 + 4) )
      *(_BYTE *)(v5 + v6 + 8) = v7;
  }
}
