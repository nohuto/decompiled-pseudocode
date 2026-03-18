/*
 * XREFs of ?DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140243EC0
 * Callers:
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x140010520 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DecCloakWindows(struct tagPROCESSINFO *a1)
{
  if ( !*((_DWORD *)a1 + 253) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 35LL);
  --*((_DWORD *)a1 + 253);
}
