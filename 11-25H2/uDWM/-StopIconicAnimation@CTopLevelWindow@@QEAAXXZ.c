/*
 * XREFs of ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800102B0
 * Callers:
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18000FD70 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18007948C (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 * Callees:
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180049238 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StopIconicAnimation(CTopLevelWindow *this)
{
  char v1; // al
  struct CVisual *v2; // rcx

  v1 = *((_BYTE *)this + 200);
  if ( (v1 & 0x40) != 0 )
  {
    *((_BYTE *)this + 200) = v1 & 0xBF;
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(v2);
  }
}
