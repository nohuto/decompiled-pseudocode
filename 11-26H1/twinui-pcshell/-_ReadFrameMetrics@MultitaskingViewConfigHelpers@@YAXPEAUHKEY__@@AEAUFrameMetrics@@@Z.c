/*
 * XREFs of ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x1804B84B8
 * Callers:
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1804B7B10 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z @ 0x1804B78B8 (--$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z.c)
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x1804B78EC (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x1804B7930 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ??$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z @ 0x1804B7974 (--$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAURelativeMargins@@@Z @ 0x1804B8814 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAURelativeMargin.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadFrameMetrics(
        MultitaskingViewConfigHelpers *this,
        HKEY a2,
        struct FrameMetrics *a3,
        unsigned int *a4)
{
  unsigned int *v6; // r9
  unsigned int *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  struct RelativeMargins *v10; // r9
  unsigned int *v11; // r9
  unsigned int *v12; // r9
  unsigned int *v13; // r9
  unsigned int *v14; // r9
  unsigned int *v15; // r9
  unsigned int *v16; // r9
  struct RelativeMargins *v17; // r9
  unsigned int *v18; // r9
  unsigned int *v19; // r9
  unsigned int *v20; // r9

  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"ContentDimmingLayer_top_percent",
    (float *)a2 + 11,
    a4);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"ContentDimmingLayer_top_offset",
    (int *)a2 + 13,
    v6);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"ContentDimmingLayer_bottom_percent",
    (float *)a2 + 14,
    v7);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"ContentDimmingLayer_bottom_offset",
    (int *)a2 + 16,
    v8);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<bool>(this, (HKEY)L"Wallpaper", (bool *)a2 + 40, v9);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (HKEY)&stru_1807B1DB8,
    (const unsigned __int16 *)a2,
    v10);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"Grid_desktop_margin",
    (int *)a2 + 18,
    v11);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(this, (HKEY)L"Desktop_height", (int *)a2 + 17, v12);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"BackgroundDimmingLayer_percent",
    (double *)a2 + 10,
    v13);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<bool>(
    this,
    (HKEY)L"NoContentLightDismiss",
    (bool *)a2 + 96,
    v14);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<bool>(this, (HKEY)L"AllowDrag", (bool *)a2 + 104, v15);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"DragVisualShrinkRatio",
    (double *)a2 + 14,
    v16);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (HKEY)&stru_1807B24E0,
    (const unsigned __int16 *)a2 + 60,
    v17);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"ExternalDragOffset_width",
    (int *)a2 + 38,
    v18);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"ExternalDragOffset_height",
    (int *)a2 + 39,
    v19);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"ExternalDragMinOpacity",
    (double *)a2 + 20,
    v20);
}
