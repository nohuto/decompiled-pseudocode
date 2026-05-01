/*
 * XREFs of ?v_SetRemovedChangeCount@CTaskbandPin@@MEAAJK@Z @ 0x18068B100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskbandPin::v_SetRemovedChangeCount(CTaskbandPin *this, int a2)
{
  return SHRegSetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
           L"FavoritesRemovedChanges",
           a2);
}
