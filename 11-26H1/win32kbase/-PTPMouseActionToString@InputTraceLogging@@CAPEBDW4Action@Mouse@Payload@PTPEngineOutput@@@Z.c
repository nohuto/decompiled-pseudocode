/*
 * XREFs of ?PTPMouseActionToString@InputTraceLogging@@CAPEBDW4Action@Mouse@Payload@PTPEngineOutput@@@Z @ 0x140187014
 * Callers:
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x140148050 (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PTPMouseActionToString(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return "Move";
  v2 = a1 - 1;
  if ( !v2 )
    return "LeftDown";
  v3 = v2 - 1;
  if ( !v3 )
    return "LeftUp";
  v4 = v3 - 1;
  if ( !v4 )
    return "RightDown";
  v5 = v4 - 1;
  if ( !v5 )
    return "RightUp";
  if ( v5 == 1 )
    return "SetPosition";
  return "UNKNOWN";
}
