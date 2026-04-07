/*
 * XREFs of ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180036004
 * Callers:
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180019094 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x180036090 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB00 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB60 (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CDesktopManager::ShowDesktopWindowReplacement(CDesktopManager *this, char a2, unsigned __int64 a3)
{
  char v4; // bl
  __int64 Element; // rax

  v4 = a2 && !*((_BYTE *)this + 20);
  if ( *(_BYTE *)(CGenericTableMap<unsigned __int64,CDesktop>::FindElement(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                           + 53) + 8LL)
                + 72) != v4 )
  {
    Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 53) + 8LL);
    if ( Element )
      *(_BYTE *)(Element + 72) = v4;
    if ( v4 )
      CDesktopManager::CreateDesktopWindowReplacement(a3);
    else
      CDesktopManager::DestroyDesktopWindowReplacement(a3);
  }
}
