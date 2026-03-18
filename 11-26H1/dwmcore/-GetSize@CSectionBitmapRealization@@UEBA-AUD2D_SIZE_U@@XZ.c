/*
 * XREFs of ?GetSize@CSectionBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1801A5C20
 * Callers:
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802AA970 (-GetSize@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WPI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802AA990 (-GetSize@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WPI@.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CSectionBitmapRealization::GetSize(CSectionBitmapRealization *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 70);
  a2[1] = *((_DWORD *)this + 71);
  return (struct D2D_SIZE_U)a2;
}
