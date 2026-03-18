/*
 * XREFs of ?CompositionInputQueueTypeToString@InputTraceLogging@@CAPEBDW4CompositionInputQueueType@@@Z @ 0x14019C17C
 * Callers:
 *     ?Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x140058EB4 (-Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::CompositionInputQueueTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return "Ignore";
  v1 = a1 - 1;
  if ( !v1 )
    return "Discard";
  v2 = v1 - 1;
  if ( !v2 )
    return "Hwnd";
  v3 = v2 - 1;
  if ( !v3 )
    return "HwndAndRoutingInfo";
  if ( v3 == 1 )
    return "RoutingInfo";
  return "UNKNOWN";
}
