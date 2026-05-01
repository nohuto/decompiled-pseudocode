/*
 * XREFs of ?v_GetChangeCount@CTaskbandPin@@MEAAJPEAK@Z @ 0x180663D00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall CTaskbandPin::v_GetChangeCount(CTaskbandPin *this, unsigned int *pvData)
{
  DWORD pcbData; // [rsp+30h] [rbp-18h] BYREF

  pcbData = 4;
  if ( SHGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
         L"FavoritesChanges",
         0LL,
         pvData,
         &pcbData) )
  {
    *pvData = 0;
  }
  return 0LL;
}
