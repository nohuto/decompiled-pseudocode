/*
 * XREFs of DllMain @ 0x18000C5D0
 * Callers:
 *     __DllMainCRTStartup @ 0x180013AD4 (__DllMainCRTStartup.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18000C6B0 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x18000C76C (-FreeResourceManagerProxy@@YAXXZ.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  BOOL result; // eax
  REGHANDLE v5; // rcx
  REGHANDLE v6; // rcx

  if ( !fdwReason )
  {
    FreeResourceManagerProxy();
    v5 = qword_18002F020;
    qword_18002F020 = 0LL;
    dword_18002F000 = 0;
    EventUnregister(v5);
    v6 = RegHandle;
    RegHandle = 0LL;
    dword_18002F038 = 0;
    EventUnregister(v6);
    return 1;
  }
  if ( fdwReason != 1 )
    return 1;
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_18002F000);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_18002F038);
  DisableThreadLibraryCalls(hinstDLL);
  xmmword_18002FCC8 = 0LL;
  AcGlobals = 0LL;
  RtlInitializeSRWLock(&AcGlobals);
  result = 1;
  DWORD2(AcGlobals) = 0;
  return result;
}
