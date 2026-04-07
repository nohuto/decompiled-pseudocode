/*
 * XREFs of ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18007B878
 * Callers:
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180097564 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 * Callees:
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004B8EC (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004B960 (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18004BA30 (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 */

void __fastcall CDesktopManager::ShowDesktopWindowReplacement(CDesktopManager *this, char a2, unsigned __int64 a3)
{
  char v4; // bl
  _BYTE *Element; // rax

  v4 = a2 && !*((_BYTE *)this + 20);
  if ( *((_BYTE *)CGenericTableMap<unsigned __int64,CDesktop>::FindElement(
                    (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 8LL),
                    a3)
       + 72) != v4 )
  {
    Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(
                (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 8LL),
                a3);
    if ( Element )
      Element[72] = v4;
    if ( v4 )
      CDesktopManager::CreateDesktopWindowReplacement(a3);
    else
      CDesktopManager::DestroyDesktopWindowReplacement(a3);
  }
}
