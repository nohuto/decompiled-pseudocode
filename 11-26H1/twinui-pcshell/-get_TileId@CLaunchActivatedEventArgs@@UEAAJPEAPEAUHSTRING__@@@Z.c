/*
 * XREFs of ?get_TileId@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802C23F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::get_TileId(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[8], a2);
}
