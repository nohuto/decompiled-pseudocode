/*
 * XREFs of ?GetSize@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802AA970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::GetSize(
        __int64 a1,
        _DWORD *a2)
{
  return CSectionBitmapRealization::GetSize((CSectionBitmapRealization *)(a1 - 312), a2);
}
