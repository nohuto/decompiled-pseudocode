/*
 * XREFs of ?GetActiveBrush@CAcrylicSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800A16F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CAcrylicSystemBackdropVisual::GetActiveBrush(
        CAcrylicSystemBackdropVisual *this)
{
  bool v1; // zf
  CCompositionEffectCache *v2; // rcx

  v1 = *((_BYTE *)this + 176) == 0;
  v2 = (CCompositionEffectCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
  if ( v1 )
    return CCompositionEffectCache::GetLightThemeDesktopAcrylicBrush(v2);
  else
    return CCompositionEffectCache::GetDarkThemeDesktopAcrylicBrush(v2);
}
