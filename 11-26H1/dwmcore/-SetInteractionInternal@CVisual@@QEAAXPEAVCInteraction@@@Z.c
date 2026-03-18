/*
 * XREFs of ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18019E228
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E4D30 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetInteractionInternal(CVisual *this, struct CInteraction *a2)
{
  char **v2; // r8
  _DWORD *v3; // r11
  int v5; // ecx
  unsigned int v6; // ecx
  unsigned int Slot; // eax
  _QWORD *v8; // r10
  __int64 v9; // r11

  v2 = (char **)((char *)this + 224);
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  v5 = *v3 & 0x2000000;
  if ( a2 )
  {
    if ( v5 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v3, 7);
      if ( Slot < *(_DWORD *)(v9 + 4) )
        v8 = (_QWORD *)(v9 + ((*(unsigned int *)(v9 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8LL * Slot);
      *v8 = a2;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(v2, 7) = a2;
    }
  }
  else if ( v5 )
  {
    v6 = 0;
    *v3 &= ~0x2000000u;
    if ( v3[1] )
    {
      while ( *((_BYTE *)v3 + v6 + 8) != 7 )
      {
        if ( ++v6 >= v3[1] )
          return;
      }
      *((_BYTE *)v3 + v6 + 8) = 0;
    }
  }
}
