/*
 * XREFs of ?HasAccentColor@CDesktopManager@@QEAA_N_N@Z @ 0x180067A58
 * Callers:
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x180020F94 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 * Callees:
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18001FFA4 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 */

bool __fastcall CDesktopManager::HasAccentColor(CDesktopManager *this, char a2)
{
  if ( !*((_BYTE *)this + 1160) )
    CDesktopManager::LoadAccentColorSettings(this);
  if ( a2 )
    return *((_BYTE *)this + 1161);
  else
    return *((_BYTE *)this + 1162);
}
