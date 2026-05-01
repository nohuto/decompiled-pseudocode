/*
 * XREFs of ?get_CallerPackageFamilyName@CProtocolActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1806531F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CProtocolActivatedEventArgs::get_CallerPackageFamilyName(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[40], a2);
}
