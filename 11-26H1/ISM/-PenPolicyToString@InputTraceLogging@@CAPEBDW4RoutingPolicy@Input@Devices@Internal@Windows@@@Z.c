/*
 * XREFs of ?PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180199F0C
 * Callers:
 *     ?SetButtonRoutingPolicy@PenEvents@InputTraceLogging@@SAXW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x18019A1F8 (-SetButtonRoutingPolicy@PenEvents@InputTraceLogging@@SAXW4RoutingPolicy@Input@Devices@Internal@W.c)
 *     ?SetDockRoutingPolicy@PenEvents@InputTraceLogging@@SAXW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x18019A3F8 (-SetDockRoutingPolicy@PenEvents@InputTraceLogging@@SAXW4RoutingPolicy@Input@Devices@Internal@Win.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PenPolicyToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "ExclusiveToShell";
  v1 = a1 - 1;
  if ( !v1 )
    return "YieldToForegroundOnly";
  if ( v1 == 1 )
    return "MulticastToForegroundAndShell";
  return "UNKNOWN";
}
