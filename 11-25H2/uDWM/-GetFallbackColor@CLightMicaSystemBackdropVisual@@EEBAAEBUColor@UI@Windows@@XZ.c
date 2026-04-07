/*
 * XREFs of ?GetFallbackColor@CLightMicaSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ @ 0x180087820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct Windows::UI::Color *__fastcall CLightMicaSystemBackdropVisual::GetFallbackColor(
        CLightMicaSystemBackdropVisual *this)
{
  const struct Windows::UI::Color *result; // rax

  result = (const struct Windows::UI::Color *)&CMicaSystemBackdropVisual::sc_darkThemeTintColor;
  if ( !*((_BYTE *)this + 176) )
    return (const struct Windows::UI::Color *)&CLightMicaSystemBackdropVisual::sc_lightThemeFallbackColor;
  return result;
}
