/*
 * XREFs of ?InputModeToString@InputTraceLogging@@CAPEBDW4_WIN32K_INPUT_MODE@@@Z @ 0x1400A1D8C
 * Callers:
 *     ?SetDeviceInputMode@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4_WIN32K_INPUT_MODE@@@Z @ 0x1400A1D14 (-SetDeviceInputMode@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetSystemInputMode@RIM@InputTraceLogging@@SAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1400E99B8 (-SetSystemInputMode@RIM@InputTraceLogging@@SAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1401BF788 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InputModeToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "Enabled";
  v1 = a1 - 1;
  if ( !v1 )
    return "Suppressed";
  if ( v1 == 1 )
    return "Filtered";
  return "UNKNOWN";
}
