/*
 * XREFs of ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB00
 * Callers:
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180036004 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18004C9F4 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18004CAA0 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z @ 0x18004CC90 (-GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x18008D348 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 */

void __fastcall CDesktopManager::DestroyDesktopWindowReplacement(unsigned __int64 a1)
{
  struct CDesktopWindowReplacement *DesktopReplacementVisualForDesktop; // rax
  CContainerVisual *v3; // rcx

  if ( CWindowList::GetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a1) )
  {
    DesktopReplacementVisualForDesktop = CWindowList::GetDesktopReplacementVisualForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                           a1);
    v3 = (CContainerVisual *)*((_QWORD *)DesktopReplacementVisualForDesktop + 3);
    if ( v3 )
      CContainerVisual::RemoveChild(v3, DesktopReplacementVisualForDesktop);
  }
}
