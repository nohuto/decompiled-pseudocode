/*
 * XREFs of ?GetPixelFormatInfo@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801923F0
 * Callers:
 *     ?GetPixelFormatInfo@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802AF700 (-GetPixelFormatInfo@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDI_ea_1802AF700.c)
 *     ?GetPixelFormatInfo@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUPixelFormatInfo@@XZ @ 0x1802AF720 (-GetPixelFormatInfo@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDI_ea_1802AF720.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetPixelFormatInfo(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 296);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 80) + 24LL))(v2 + 80);
  }
  else
  {
    *a2 = 0;
    v5 = 3;
    if ( *(_DWORD *)(a1 + 24) )
      v5 = *(_DWORD *)(a1 + 24);
    a2[1] = v5;
    a2[2] = *(_DWORD *)(a1 + 72);
  }
  return a2;
}
