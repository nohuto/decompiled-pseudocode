/*
 * XREFs of ?IsUwpWindowEventDispatcherDisabled@@YA_NXZ @ 0x1800C8E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x1800C8E88 (-IsWindowManagerIDKEnabledForSKU@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 */

bool __fastcall IsUwpWindowEventDispatcherDisabled(Windows::Internal::ApplicationModel::WindowManagement *a1)
{
  return !Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(a1);
}
