/*
 * XREFs of ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1400BA334
 * Callers:
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1400B6F04 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1400B72F0 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x1400B80B0 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1400B83F4 (-HitTestResult@DWM@InputTraceLogging@@SAX_KIAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RoutingModeToString(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return "Default";
  v2 = a1 - 1;
  if ( !v2 )
    return "Observe";
  v3 = v2 - 1;
  if ( !v3 )
    return "ISM";
  v4 = v3 - 1;
  if ( !v4 )
    return "RouteToMT";
  if ( v4 == 1 )
    return "ObserveRawOnly";
  return "UNKNOWN";
}
