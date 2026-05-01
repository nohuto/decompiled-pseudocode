/*
 * XREFs of ?v_CanPositionWindow@LegacyUwpWindowWrapper@@EEAA_NXZ @ 0x1802BBA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall LegacyUwpWindowWrapper::v_CanPositionWindow(LegacyUwpWindowWrapper *this)
{
  return (*((_DWORD *)this + 89) & 0x10) == 0;
}
