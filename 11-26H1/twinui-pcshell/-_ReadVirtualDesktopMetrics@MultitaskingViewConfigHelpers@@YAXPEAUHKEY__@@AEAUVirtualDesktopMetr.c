/*
 * XREFs of ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x1804B8ACC
 * Callers:
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1804B7B10 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z @ 0x1804B78B8 (--$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z.c)
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x1804B78EC (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x1804B7930 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ?_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopNewButtonMetrics@@@Z @ 0x1804B8760 (-_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDe.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z @ 0x1804B8894 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadVirtualDesktopMetrics(
        MultitaskingViewConfigHelpers *this,
        float *a2,
        struct VirtualDesktopMetrics *a3,
        unsigned int *a4)
{
  unsigned int *v6; // r9
  struct _MARGINS *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  struct _MARGINS *v10; // r9
  unsigned int *v11; // r9
  unsigned int *v12; // r9
  unsigned int *v13; // r9
  struct VirtualDesktopNewButtonMetrics *v14; // r8
  unsigned int *v15; // r9
  struct GlyphButtonMetrics *v16; // r9

  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_background_singledesktop_opacity",
    a2,
    a4);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_background_multidesktop_opacity",
    a2 + 2,
    v6);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_1807B2050,
    (unsigned __int16 *)a2 + 8,
    v7);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"Desktop_thumbnail_height",
    (int *)a2 + 8,
    v8);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"Desktop_item_spacing",
    (int *)a2 + 9,
    v9);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_1807B2080,
    (unsigned __int16 *)a2 + 20,
    v10);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Desktop_click_scale",
    (double *)a2 + 7,
    v11);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_inactive_overlay_opacity",
    a2 + 16,
    v12);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_text_inactive_opacity",
    a2 + 22,
    v13);
  MultitaskingViewConfigHelpers::_ReadNewVirtualDesktopButtonMetrics(this, (HKEY)a2 + 78, v14, v15);
  MultitaskingViewConfigHelpers::_ReadGlyphButtonMetrics(
    this,
    (__int64)&stru_1807B2150,
    (unsigned __int16 *)a2 + 184,
    v16);
}
