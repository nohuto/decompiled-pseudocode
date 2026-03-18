/*
 * XREFs of ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x1800AE310
 * Callers:
 *     ?SetEffect@CVisual@@IEAAXPEAVCEffect@@@Z @ 0x1800AFCE8 (-SetEffect@CVisual@@IEAAXPEAVCEffect@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

void __fastcall CVisual::SetEffectInternal(CVisual *this, struct CEffect *a2)
{
  _QWORD *v2; // r10
  _DWORD *v3; // r11
  int v5; // eax
  unsigned int Slot; // eax
  char v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rcx

  v2 = 0LL;
  v3 = (_DWORD *)*((_QWORD *)this + 28);
  v5 = *v3 & 0x1000000;
  if ( a2 )
  {
    if ( !v5 )
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((char **)this + 28, 8) = a2;
      return;
    }
    v9 = (unsigned int)v3[1];
    v10 = v3 + 2;
    v11 = 0LL;
    if ( (_DWORD)v9 )
    {
      while ( *v10 != 8 )
      {
        v11 = (unsigned int)(v11 + 1);
        ++v10;
        if ( (unsigned int)v11 >= (unsigned int)v9 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( (unsigned int)v11 >= (unsigned int)v9 )
        goto LABEL_10;
    }
    v2 = (_QWORD *)((char *)&v3[2 * v11] + ((v9 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
LABEL_10:
    *v2 = a2;
    return;
  }
  if ( v5 )
  {
    *v3 &= ~0x1000000u;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v3, 8);
    if ( Slot < *(_DWORD *)(v8 + 4) )
      *(_BYTE *)(Slot + v8 + 8) = v7;
  }
}
