/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x18001A658
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A2DC (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001A630 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800C66F8 (--1CAutoRestoreAnimationWindowData@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001B724 (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800BA128 (-OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 */

void __fastcall CWindowData::~CWindowData(CWindowData *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 != (char *)this + 804 )
    DefaultHeap::Free(v2);
  if ( (*((_BYTE *)this + 678) & 2) != 0 )
    CLivePreview::OnWindowDataDeleted(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), this);
  CWindowList::OnWindowDataDestroyed(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), this);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 76);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 71);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 67);
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 62);
}
