/*
 * XREFs of ?DestroyPendingSprites@CWindowList@@QEAAXXZ @ 0x18001AEB0
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001EA70 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001AF20 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CWindowList::DestroyPendingSprites(CWindowList *this)
{
  char *v1; // rbx
  struct CWindowData **v3; // rcx

  v1 = (char *)this + 280;
  while ( *((_DWORD *)this + 76) )
    CWindowList::ImmediateDestroySprite(this, **(struct CWindowData ***)v1);
  v3 = *(struct CWindowData ***)v1;
  *((_DWORD *)v1 + 6) = 0;
  if ( v3 != *((struct CWindowData ***)v1 + 1) )
  {
    DefaultHeap::Free(v3);
    *(_QWORD *)v1 = *((_QWORD *)v1 + 1);
    *((_DWORD *)v1 + 5) = *((_DWORD *)v1 + 4);
  }
}
