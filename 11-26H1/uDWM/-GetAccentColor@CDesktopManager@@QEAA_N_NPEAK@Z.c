/*
 * XREFs of ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x1800204F0
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001F900 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18004B548 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18001FFA4 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 */

bool __fastcall CDesktopManager::GetAccentColor(CDesktopManager *this, unsigned __int8 a2, unsigned int *a3)
{
  __int64 v4; // rdi
  bool result; // al

  v4 = a2;
  if ( !*((_BYTE *)this + 1160) )
    CDesktopManager::LoadAccentColorSettings(this);
  result = *((_BYTE *)this + (v4 ^ 1) + 1161);
  if ( result )
    *a3 = *((_DWORD *)this + (v4 ^ 1) + 292);
  return result;
}
