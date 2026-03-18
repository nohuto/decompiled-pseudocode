/*
 * XREFs of ?LegacyFlagsToString@InputTraceLogging@@CAPEBDG@Z @ 0x1401D5DB8
 * Callers:
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401D5E2C (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::LegacyFlagsToString(__int16 a1)
{
  switch ( a1 )
  {
    case 0:
      return "External";
    case 1:
      return "Touchpad";
    case 2:
      return "TouchpadSibling";
    case 4:
      return "PenSibling";
    case 8:
      return "TouchSibling";
    case 16:
      return "ExternalPenSibling";
    case 32:
      return "Injected";
  }
  return "UNKNOWN";
}
