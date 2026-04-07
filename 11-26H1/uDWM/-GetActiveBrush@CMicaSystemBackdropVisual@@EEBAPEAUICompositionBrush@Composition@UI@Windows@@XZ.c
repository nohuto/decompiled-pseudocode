/*
 * XREFs of ?GetActiveBrush@CMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800BBA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CMicaSystemBackdropVisual::GetActiveBrush(
        CMicaSystemBackdropVisual *this)
{
  bool v1; // zf
  CCompositionEffectCache *v2; // rcx

  v1 = *((_BYTE *)this + 192) == 0;
  v2 = (CCompositionEffectCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
  if ( v1 )
    return CCompositionEffectCache::GetLightThemeMicaBrush(v2);
  else
    return CCompositionEffectCache::GetDarkThemeMicaBrush(v2);
}
