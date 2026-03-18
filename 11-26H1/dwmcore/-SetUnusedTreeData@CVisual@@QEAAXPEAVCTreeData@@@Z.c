/*
 * XREFs of ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x1800ADD80
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18002C3C0 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Allocate@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z @ 0x1800AE028 (-Allocate@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800AE290 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

void __fastcall CVisual::SetUnusedTreeData(CVisual *this, struct CTreeData *a2)
{
  _DWORD *v2; // rbx
  int v5; // r8d
  unsigned int v6; // edx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // edi
  _DWORD *v10; // r14
  _BYTE *v11; // rax
  unsigned int Slot; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rdi

  v2 = (_DWORD *)*((_QWORD *)this + 28);
  v5 = *v2 & 0x10000000;
  if ( a2 )
  {
    if ( v5 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v2, 4LL);
      v13 = (unsigned int)v2[1];
      if ( Slot >= (unsigned int)v13 )
        v14 = 0LL;
      else
        v14 = (_QWORD *)((char *)&v2[2 * Slot] + ((v13 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
      *v14 = a2;
    }
    else
    {
      v8 = v2[1];
      v9 = 0;
      v10 = v2;
      if ( v8 )
      {
        v11 = v2 + 2;
        do
        {
          if ( !*v11 )
            break;
          ++v9;
          ++v11;
        }
        while ( v9 < v8 );
      }
      if ( v9 == v8 )
      {
        v10 = (_DWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::Allocate(v8 + 4);
        *((_QWORD *)this + 28) = v10;
        if ( v2 != (_DWORD *)&CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage )
        {
          *v10 = *v2;
          memcpy_0(v10 + 2, v2 + 2, (unsigned int)v2[1]);
          memcpy_0(
            (char *)v10 + (((unsigned int)v10[1] + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
            (char *)v2 + (((unsigned int)v2[1] + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
            8LL * (unsigned int)v2[1]);
          operator delete(v2);
        }
      }
      *v10 |= 0x10000000u;
      *((_BYTE *)v10 + v9 + 8) = 4;
      *(_QWORD *)((char *)v10 + (unsigned int)v10[1] + 8LL * v9 - (((unsigned __int8)v10[1] + 15) & 7) + 15) = a2;
    }
  }
  else if ( v5 )
  {
    v6 = v2[1];
    v7 = 0;
    *v2 &= ~0x10000000u;
    if ( v6 )
    {
      while ( *((_BYTE *)v2 + v7 + 8) != 4 )
      {
        if ( ++v7 >= v6 )
          return;
      }
      *((_BYTE *)v2 + v7 + 8) = 0;
    }
  }
}
