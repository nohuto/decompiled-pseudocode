/*
 * XREFs of ?DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1402D3BD8
 * Callers:
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x1400586A4 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14025C124 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DecCloakWindows(struct tagPROCESSINFO *a1)
{
  if ( !*((_DWORD *)a1 + 253) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 35);
  --*((_DWORD *)a1 + 253);
}
