/*
 * XREFs of ?v_OpenPinRegStream@CTaskbandPin@@UEAAPEAUIStream@@K@Z @ 0x180664870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IStream *__fastcall CTaskbandPin::v_OpenPinRegStream(CTaskbandPin *this, DWORD a2)
{
  return SHOpenRegStream2W(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"Favorites",
           a2);
}
