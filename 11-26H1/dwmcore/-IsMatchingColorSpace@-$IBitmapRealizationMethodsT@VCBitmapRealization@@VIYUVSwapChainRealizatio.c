/*
 * XREFs of ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801AA5A0
 * Callers:
 *     ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802AA9D0 (-IsMatchingColorSpace@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealiz.c)
 *     ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802ABD00 (-IsMatchingColorSpace@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapReali.c)
 *     ?IsMatchingColorSpace@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802AF7C0 (-IsMatchingColorSpace@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIG_ea_1802AF7C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall IBitmapRealizationMethodsT<CBitmapRealization,IYUVSwapChainRealization>::IsMatchingColorSpace(
        __int64 a1,
        int a2)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 24LL))(a1, v3) + 8) == a2;
}
