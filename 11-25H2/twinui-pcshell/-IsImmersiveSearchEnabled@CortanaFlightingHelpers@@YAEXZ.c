/*
 * XREFs of ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1803C9F34
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803C8D38 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803CBB38 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803CC0D0 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CortanaFlightingHelpers::IsImmersiveSearchEnabled(CortanaFlightingHelpers *this)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 4;
  return !RegGetValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
            L"ImmersiveSearch",
            0x10u,
            0LL,
            &v2,
            &v3)
      && v2 != 0;
}
