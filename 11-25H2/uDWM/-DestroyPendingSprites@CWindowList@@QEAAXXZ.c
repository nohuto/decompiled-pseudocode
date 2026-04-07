/*
 * XREFs of ?DestroyPendingSprites@CWindowList@@QEAAXXZ @ 0x180019400
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180019340 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180019464 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::DestroyPendingSprites(struct CWindowData ***this)
{
  while ( *((_DWORD *)this + 76) )
    CWindowList::ImmediateDestroySprite((CWindowList *)this, *this[35]);
  *((_DWORD *)this + 76) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 35), 8u);
}
