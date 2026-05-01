/*
 * XREFs of ??$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAJ@Z @ 0x1804B79AC
 * Callers:
 *     ?_ReadGlyphButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGAEAUGlyphButtonMetrics@@@Z @ 0x1804B8618 (-_ReadGlyphButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGAEAUGlyphButtonMetric.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z @ 0x1804B8894 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800712B0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_1800712B0.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z @ 0x1804B78B8 (--$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<long>(
        MultitaskingViewConfigHelpers *a1,
        __int64 a2,
        __int64 a3,
        int *a4)
{
  unsigned int *v6; // r9
  wchar_t *v7[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v7, 0, 24);
  if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              v7,
              L"%s_%s",
              a2,
              a3) >= 0 )
    MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(a1, (HKEY)v7[0], a4, v6);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v7);
}
