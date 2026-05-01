/*
 * XREFs of ?_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetrics@@@Z @ 0x1804B8970
 * Callers:
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1804B866C (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z @ 0x1804B78B8 (--$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x1804B7930 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z @ 0x1804B8894 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadThumbnailSizeMetrics(
        MultitaskingViewConfigHelpers *this,
        HKEY a2,
        struct ThumbnailSizeMetrics *a3,
        unsigned int *a4)
{
  unsigned int *v6; // r9
  unsigned int *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  unsigned int *v10; // r9
  unsigned int *v11; // r9
  unsigned int *v12; // r9
  unsigned int *v13; // r9
  unsigned int *v14; // r9
  struct _MARGINS *v15; // r9
  struct _MARGINS *v16; // r9
  struct _MARGINS *v17; // r9
  unsigned int *v18; // r9
  struct GlyphButtonMetrics *v19; // r9

  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(this, (HKEY)L"Thumbnail_min_width", (int *)a2, a4);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Thumbnail_min_height_percent",
    (double *)a2 + 1,
    v6);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Thumbnail_max_height_percent",
    (double *)a2 + 3,
    v7);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"Thumbnail_min_height_pixels",
    (int *)a2 + 4,
    v8);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"Thumbnail_max_height_pixels",
    (int *)a2 + 8,
    v9);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Thumbnail_max_aspectratio",
    (double *)a2 + 5,
    v10);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"Thumbnail_icon_size",
    (int *)a2 + 12,
    v11);
  a2[13] = a2[12];
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"Thumbnail_win8_icon_size",
    (int *)a2 + 14,
    v12);
  a2[15] = a2[14];
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"Thumbnail_inner_border_width",
    (int *)a2 + 28,
    v13);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"Thumbnail_outer_border_width",
    (int *)a2 + 29,
    v14);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_1807B1810,
    (unsigned __int16 *)a2 + 32,
    v15);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_1807B1890,
    (unsigned __int16 *)a2 + 48,
    v16);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_1807B1870,
    (unsigned __int16 *)a2 + 40,
    v17);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Thumbnail_mousedown_shrinkpercent",
    (double *)a2 + 15,
    v18);
  MultitaskingViewConfigHelpers::_ReadGlyphButtonMetrics(
    this,
    (__int64)&stru_1807B18B0,
    (unsigned __int16 *)a2 + 76,
    v19);
}
