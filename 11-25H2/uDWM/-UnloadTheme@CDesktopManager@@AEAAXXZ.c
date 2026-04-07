/*
 * XREFs of ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180033990
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x1800335CC (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AC090 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?CleanupThemeStatics@CWindowIconic@@SAXXZ @ 0x180033AAC (-CleanupThemeStatics@CWindowIconic@@SAXXZ.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180033AC0 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ?CleanupThemeStatics@CWindowList@@QEAAXXZ @ 0x180033B98 (-CleanupThemeStatics@CWindowList@@QEAAXXZ.c)
 *     IsOpenThemeDataPresent @ 0x18009BCE0 (IsOpenThemeDataPresent.c)
 */

void __fastcall CDesktopManager::UnloadTheme(CDesktopManager *this)
{
  CWindowList *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  HMODULE v8; // rcx

  if ( (unsigned __int8)IsOpenThemeDataPresent() )
  {
    v2 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
    if ( v2 )
      CWindowList::CleanupThemeStatics(v2);
    CTopLevelWindow::CleanupThemeStatics();
    CWindowIconic::CleanupThemeStatics();
    v3 = (void *)*((_QWORD *)this + 69);
    if ( v3 )
    {
      CloseThemeData(v3);
      *((_QWORD *)this + 69) = 0LL;
    }
    v4 = (void *)*((_QWORD *)this + 136);
    if ( v4 )
    {
      CloseThemeData(v4);
      *((_QWORD *)this + 136) = 0LL;
    }
    v5 = (void *)*((_QWORD *)this + 137);
    if ( v5 )
    {
      CloseThemeData(v5);
      *((_QWORD *)this + 137) = 0LL;
    }
    v6 = (void *)*((_QWORD *)this + 138);
    if ( v6 )
    {
      CloseThemeData(v6);
      *((_QWORD *)this + 138) = 0LL;
    }
    v7 = (void *)*((_QWORD *)this + 139);
    if ( v7 )
    {
      CloseThemeData(v7);
      *((_QWORD *)this + 139) = 0LL;
    }
    v8 = (HMODULE)*((_QWORD *)this + 135);
    if ( v8 )
    {
      FreeLibrary(v8);
      *((_QWORD *)this + 135) = 0LL;
    }
  }
}
