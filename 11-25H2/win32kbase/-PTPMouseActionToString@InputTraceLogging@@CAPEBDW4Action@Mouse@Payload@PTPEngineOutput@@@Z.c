/*
 * XREFs of ?PTPMouseActionToString@InputTraceLogging@@CAPEBDW4Action@Mouse@Payload@PTPEngineOutput@@@Z @ 0x14021152C
 * Callers:
 *     ?MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z @ 0x140108C0C (-MouseOutput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_KPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PTPMouseActionToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return "Move";
  v1 = a1 - 1;
  if ( !v1 )
    return "LeftDown";
  v2 = v1 - 1;
  if ( !v2 )
    return "LeftUp";
  v3 = v2 - 1;
  if ( !v3 )
    return "RightDown";
  v4 = v3 - 1;
  if ( !v4 )
    return "RightUp";
  if ( v4 == 1 )
    return "SetPosition";
  return "UNKNOWN";
}
