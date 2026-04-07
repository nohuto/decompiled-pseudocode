/*
 * XREFs of _dynamic_initializer_for__ColorCache::_cachedColors__ @ 0x180078640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__ColorCache::_cachedColors__()
{
  RtlInitializeGenericTable(
    &ColorCache::_cachedColors,
    CGenericTableMap<enum Windows::UI::LightType,CGlobalLightSet::VISUAL_RESOURCE_MAP_ENTRY_LIGHT>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__ColorCache::_cachedColors__);
}
