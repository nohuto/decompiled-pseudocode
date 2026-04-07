/*
 * XREFs of ?GetActiveBrush@CLightMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800648A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CLightMicaSystemBackdropVisual::GetActiveBrush(
        CLightMicaSystemBackdropVisual *this)
{
  bool v1; // zf
  CCompositionEffectCache *v2; // rcx

  v1 = *((_BYTE *)this + 192) == 0;
  v2 = (CCompositionEffectCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
  if ( v1 )
    return CCompositionEffectCache::GetLightThemeLightMicaBrush(v2);
  else
    return CCompositionEffectCache::GetDarkThemeLightMicaBrush(v2);
}
