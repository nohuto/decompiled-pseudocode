/*
 * XREFs of ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1800AEEF0
 * Callers:
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801C7630 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1800ADF18 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

unsigned __int64 __fastcall CVisual::SetBspPolygonList(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r10
  unsigned __int64 result; // rax
  __int64 v5; // r10
  char v6; // r11
  __int64 v7; // r10
  _QWORD *v8; // r11
  __int64 v9; // rcx

  v2 = *(_DWORD **)(a1 + 224);
  result = *v2 & 0x20000000;
  if ( a2 )
  {
    if ( (_DWORD)result )
    {
      result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v2, 3);
      if ( (unsigned int)result < *(_DWORD *)(v7 + 4) )
      {
        v9 = (unsigned int)result;
        result = v7 + ((*(unsigned int *)(v7 + 4) + 15LL) & 0xFFFFFFFFFFFFFFF8uLL);
        v8 = (_QWORD *)(result + 8 * v9);
      }
      *v8 = a2;
    }
    else
    {
      result = CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((char **)(a1 + 224), 3);
      *(_QWORD *)result = a2;
    }
  }
  else if ( (_DWORD)result )
  {
    *v2 &= ~0x20000000u;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot((__int64)v2, 3);
    if ( (unsigned int)result < *(_DWORD *)(v5 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v5 + 8) = v6;
    }
  }
  return result;
}
