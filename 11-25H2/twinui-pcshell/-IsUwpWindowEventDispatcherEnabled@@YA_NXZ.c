/*
 * XREFs of ?IsUwpWindowEventDispatcherEnabled@@YA_NXZ @ 0x1802CEF70
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
