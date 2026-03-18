/*
 * XREFs of _DllMainStartup @ 0x1801C7520
 * Callers:
 *     <none>
 * Callees:
 *     _DllMainCRTStartup @ 0x1802209CC (_DllMainCRTStartup.c)
 */

BOOL __stdcall DllMainStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  BOOL v3; // r9d

  v3 = 1;
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ++avalonutil_proc_attached;
      fdwReason = 1;
    }
    else if ( fdwReason - 2 >= 2 )
    {
      return v3;
    }
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  }
  if ( !g_fAlwaysDetach && lpReserved )
    return v3;
  if ( avalonutil_proc_attached > 0 )
  {
    --avalonutil_proc_attached;
    fdwReason = 0;
    return DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
  }
  return 0;
}
