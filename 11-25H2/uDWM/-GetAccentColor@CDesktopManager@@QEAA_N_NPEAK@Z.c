/*
 * XREFs of ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x18000F4A4
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18000EAE0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x180012E18 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18000F380 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 */

bool __fastcall CDesktopManager::GetAccentColor(CDesktopManager *this, char a2, unsigned int *a3)
{
  bool result; // al
  unsigned int v7; // ecx

  if ( !*((_BYTE *)this + 1152) )
    CDesktopManager::LoadAccentColorSettings(this);
  if ( a2 )
  {
    result = *((_BYTE *)this + 1153);
    v7 = *((_DWORD *)this + 290);
  }
  else
  {
    result = *((_BYTE *)this + 1154);
    v7 = *((_DWORD *)this + 291);
  }
  if ( result )
    *a3 = v7;
  return result;
}
