/*
 * XREFs of ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004B960
 * Callers:
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18004D0BC (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180077E50 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18007B878 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18001D434 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18004BA30 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x18004BA84 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18004CCDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopManager::CreateDesktopWindowReplacement(unsigned __int64 a1)
{
  __int64 Element; // rax
  struct CVisual *v3; // rbx
  bool IsLogonDesktop; // al
  CContainerVisual **RootVisualForDesktop; // rax

  Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 53) + 8LL);
  if ( Element )
    v3 = *(struct CVisual **)(Element + 32);
  else
    v3 = 0LL;
  if ( !*((_DWORD *)v3 + 58) )
  {
    IsLogonDesktop = CDesktopManager::IsLogonDesktop(a1);
    if ( (int)CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(v3, IsLogonDesktop ? -16777216 : -15461356) >= 0 )
    {
      RootVisualForDesktop = (CContainerVisual **)CWindowList::GetRootVisualForDesktop(
                                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                                    a1);
      CContainerVisual::InsertChildBefore(RootVisualForDesktop[3], v3, (struct CVisual *)RootVisualForDesktop);
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v3 + 48LL))(v3);
    }
  }
}
