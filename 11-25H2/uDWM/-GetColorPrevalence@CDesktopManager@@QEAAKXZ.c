/*
 * XREFs of ?GetColorPrevalence@CDesktopManager@@QEAAKXZ @ 0x18000F220
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18000EAE0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18000F380 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CDesktopManager::GetColorPrevalence(CDesktopManager *this)
{
  if ( *((_BYTE *)this + 1152) )
    return *((unsigned int *)this + 289);
  CDesktopManager::LoadAccentColorSettings(this);
  return *((unsigned int *)this + 289);
}
