/*
 * XREFs of ?v_GetRemovedChangeCount@CTaskbandPin@@MEAAKXZ @ 0x180663E00
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180198438 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall CTaskbandPin::v_GetRemovedChangeCount(CTaskbandPin *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
         L"FavoritesRemovedChanges",
         &v3) >= 0 )
    return v3;
  return v1;
}
