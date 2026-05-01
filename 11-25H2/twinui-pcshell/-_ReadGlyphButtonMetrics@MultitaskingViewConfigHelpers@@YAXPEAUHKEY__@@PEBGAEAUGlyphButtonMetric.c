/*
 * XREFs of ?_ReadGlyphButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGAEAUGlyphButtonMetrics@@@Z @ 0x1804A6C54
 * Callers:
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1804A6CA8 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 *     ?_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetrics@@@Z @ 0x1804A6FA0 (-_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetric.c)
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x1804A70F4 (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAJ@Z @ 0x1804A6000 (--$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEA.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadGlyphButtonMetrics(
        MultitaskingViewConfigHelpers *this,
        __int64 a2,
        unsigned __int16 *a3,
        struct GlyphButtonMetrics *a4)
{
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<long>(this, a2, (__int64)L"_width", (int *)a3);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<long>(
    this,
    a2,
    (__int64)L"_height",
    (int *)a3 + 1);
}
