/*
 * XREFs of DllEntryPoint @ 0x18000BF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C7A4 @ 0x18000C7A4 (sub_18000C7A4.c)
 */

BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    sub_18000C7A4();
  return sub_18000BDFC((__int64)hinstDLL, fdwReason, (__int64)lpReserved);
}
