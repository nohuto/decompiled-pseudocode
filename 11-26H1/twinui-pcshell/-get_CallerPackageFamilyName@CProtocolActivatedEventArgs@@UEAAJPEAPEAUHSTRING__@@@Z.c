/*
 * XREFs of ?get_CallerPackageFamilyName@CProtocolActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180679140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CProtocolActivatedEventArgs::get_CallerPackageFamilyName(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[40], a2);
}
