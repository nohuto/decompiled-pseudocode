/*
 * XREFs of ?GetFallbackColor@CMicaSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ @ 0x180070820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct Windows::UI::Color *__fastcall CMicaSystemBackdropVisual::GetFallbackColor(
        CMicaSystemBackdropVisual *this)
{
  const struct Windows::UI::Color *result; // rax

  result = (const struct Windows::UI::Color *)&CMicaSystemBackdropVisual::sc_darkThemeTintColor;
  if ( !*((_BYTE *)this + 192) )
    return (const struct Windows::UI::Color *)&CMicaSystemBackdropVisual::sc_lightThemeTintColor;
  return result;
}
