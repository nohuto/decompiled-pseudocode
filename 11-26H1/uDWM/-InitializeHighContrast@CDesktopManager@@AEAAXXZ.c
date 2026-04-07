/*
 * XREFs of ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18008BC1C
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x1800ABDD4 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::InitializeHighContrast(CDesktopManager *this)
{
  char IsImmersiveColorUsingHighContrast; // al
  DWORD SysColor; // ecx

  IsImmersiveColorUsingHighContrast = GetIsImmersiveColorUsingHighContrast(1LL);
  SysColor = 0;
  *((_BYTE *)this + 27) = IsImmersiveColorUsingHighContrast;
  if ( IsImmersiveColorUsingHighContrast )
  {
    *((_DWORD *)this + 130) = GetSysColor(2);
    SysColor = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 130) = 0;
  }
  *((_DWORD *)this + 131) = SysColor;
}
