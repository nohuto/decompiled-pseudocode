/*
 * XREFs of DllMain @ 0x180045BE4
 * Callers:
 *     __DllMainCRTStartup @ 0x1800216E4 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
