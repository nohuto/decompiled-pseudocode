/*
 * XREFs of ?PointerInjectionType@InputTraceLogging@@CAPEBDW4tagPOINTER_INJECTION_TYPE@@@Z @ 0x1400F3A50
 * Callers:
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1400F3A98 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401557FC (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PointerInjectionType(int a1)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return "None";
  v2 = a1 - 1;
  if ( !v2 )
    return "LegacyScreen";
  v3 = v2 - 1;
  if ( !v3 )
    return "LegacyPhysical";
  if ( v3 == 1 )
    return "HID";
  return "UNKNOWN";
}
