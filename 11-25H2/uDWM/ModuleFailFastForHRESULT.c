/*
 * XREFs of ModuleFailFastForHRESULT @ 0x180095A74
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x1800666E0 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800901C4 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800959F8 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180095A58 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Dwm_Xbad_function_call@std@@YAXXZ @ 0x1800E9924 (-_Dwm_Xbad_function_call@std@@YAXXZ.c)
 * Callees:
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x18008B594 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 */

void __fastcall __noreturn ModuleFailFastForHRESULT(DWORD a1, void *a2)
{
  MilFailFastForHR(a1, a2);
  JUMPOUT(0x180095A7DLL);
}
