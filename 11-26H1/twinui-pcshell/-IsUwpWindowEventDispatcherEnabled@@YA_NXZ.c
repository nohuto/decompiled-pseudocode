/*
 * XREFs of ?IsUwpWindowEventDispatcherEnabled@@YA_NXZ @ 0x1802C63F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall IsUwpWindowEventDispatcherEnabled(Windows::Internal::ApplicationModel::WindowManagement *this)
{
  return Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagerIDKEnabledForSKU(this);
}
