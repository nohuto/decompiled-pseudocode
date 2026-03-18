/*
 * XREFs of ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1402B5448
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402B27C4 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1402B50C0 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402B54F4 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1402B5AF4 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1402B5B50 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1403FBF7C (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

struct tagRECT *__fastcall DDAMetaData::GetDirtyRectData(DDAMetaData *this, int a2)
{
  __int64 v2; // rbx
  unsigned int *v3; // rdi
  unsigned int v4; // ebp
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rsi
  void *v9; // r14
  unsigned int v10; // eax

  v2 = *((_QWORD *)this + 4);
  v3 = (unsigned int *)(v2 + 8);
  v4 = 16 * a2 + 36;
  if ( *(_DWORD *)(v2 + 12) < v4 )
  {
    v6 = (void *)operator new[](v4, 0x674D444Fu, 256LL);
    v7 = *(void **)v2;
    v8 = 0LL;
    v9 = v6;
    if ( v6 )
    {
      memmove(v6, *(const void **)v2, *v3);
      v7 = *(void **)v2;
      v8 = v9;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
    *(_QWORD *)v2 = v8;
    v10 = v8 != 0LL ? v4 : 0;
    *v3 = v10;
    *(_DWORD *)(v2 + 12) = v10;
  }
  else
  {
    *v3 = v4;
  }
  return (struct tagRECT *)((*(_QWORD *)v2 + 32LL) & -(__int64)(*(_QWORD *)v2 != 0LL));
}
