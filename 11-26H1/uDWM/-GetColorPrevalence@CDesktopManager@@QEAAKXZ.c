/*
 * XREFs of ?GetColorPrevalence@CDesktopManager@@QEAAKXZ @ 0x18001FF70
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001F900 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18001FFA4 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CDesktopManager::GetColorPrevalence(CDesktopManager *this)
{
  if ( *((_BYTE *)this + 1160) )
    return *((unsigned int *)this + 291);
  CDesktopManager::LoadAccentColorSettings(this);
  return *((unsigned int *)this + 291);
}
