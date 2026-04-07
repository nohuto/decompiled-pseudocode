/*
 * XREFs of ?HasAccentColor@CDesktopManager@@QEAA_N_N@Z @ 0x180076AEC
 * Callers:
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x18000F9B0 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 * Callees:
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18000F380 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 */

bool __fastcall CDesktopManager::HasAccentColor(CDesktopManager *this, char a2)
{
  if ( !*((_BYTE *)this + 1152) )
    CDesktopManager::LoadAccentColorSettings(this);
  if ( a2 )
    return *((_BYTE *)this + 1153);
  else
    return *((_BYTE *)this + 1154);
}
