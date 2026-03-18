/*
 * XREFs of ?ContactPopulationSourceToString@InputTraceLogging@@CAPEBDW4ContactPopulationSource@RIM@1@@Z @ 0x1400F4F40
 * Callers:
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400F577C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ContactPopulationSourceToString(int a1)
{
  int v2; // ecx

  if ( !a1 )
    return "DeviceInput";
  v2 = a1 - 1;
  if ( !v2 )
    return "SimulatedKeepAlive";
  if ( v2 == 1 )
    return "SimulatedEndState";
  return "UNKNOWN";
}
