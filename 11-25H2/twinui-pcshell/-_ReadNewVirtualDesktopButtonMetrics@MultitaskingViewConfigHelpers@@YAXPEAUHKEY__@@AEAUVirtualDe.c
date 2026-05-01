/*
 * XREFs of ?_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopNewButtonMetrics@@@Z @ 0x1804A6D98
 * Callers:
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x1804A70F4 (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z @ 0x1804A5F14 (--$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z.c)
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x1804A5F44 (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadNewVirtualDesktopButtonMetrics(
        MultitaskingViewConfigHelpers *this,
        HKEY a2,
        struct VirtualDesktopNewButtonMetrics *a3,
        unsigned int *a4)
{
  unsigned int *v6; // r9
  unsigned int *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  unsigned int *v10; // r9
  unsigned int *v11; // r9
  struct _MARGINS *v12; // r9

  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(this, (HKEY)L"New_button_glyph_size", (int *)a2, a4);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"New_button_glyph_bottom_margin",
    (int *)a2 + 1,
    v6);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"New_button_plate_rest_opacity",
    (float *)a2 + 2,
    v7);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"New_button_plate_hottrack_opacity",
    (float *)a2 + 4,
    v8);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"New_button_plate_pressdown_opacity",
    (float *)a2 + 6,
    v9);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"New_button_text_spacing",
    (int *)a2 + 8,
    v10);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
    this,
    (HKEY)L"New_button_outline_thickness",
    (int *)a2 + 9,
    v11);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (HKEY)&stru_180786940,
    (const unsigned __int16 *)a2 + 20,
    v12);
}
