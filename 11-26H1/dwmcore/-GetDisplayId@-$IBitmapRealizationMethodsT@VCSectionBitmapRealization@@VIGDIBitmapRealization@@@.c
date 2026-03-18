/*
 * XREFs of ?GetDisplayId@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA?AVDisplayId@@XZ @ 0x1802AA8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetDisplayId(
        __int64 a1,
        _DWORD *a2)
{
  return CColorKeyBitmapRealization::GetDisplayId(a1 - 312, a2);
}
