/*
 * XREFs of ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004B8EC
 * Callers:
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18004D0BC (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180077E50 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18007B878 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18004BA30 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 */

void __fastcall CDesktopManager::DestroyDesktopWindowReplacement(unsigned __int64 a1)
{
  __int64 Element; // rax
  CRenderDataVisual *v2; // rbx
  CContainerVisual *v3; // rcx

  if ( CWindowList::GetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a1) )
  {
    Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 53) + 8LL);
    if ( Element )
      v2 = *(CRenderDataVisual **)(Element + 32);
    else
      v2 = 0LL;
    CRenderDataVisual::ClearInstructions(v2);
    v3 = (CContainerVisual *)*((_QWORD *)v2 + 3);
    if ( v3 )
      CContainerVisual::RemoveChild(v3, (struct CVisualProxy **)v2);
  }
}
