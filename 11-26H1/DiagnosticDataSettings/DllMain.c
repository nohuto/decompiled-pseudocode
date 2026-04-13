/*
 * XREFs of DllMain @ 0x1800025FC
 * Callers:
 *     dllmain_dispatch @ 0x1800012DC (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
