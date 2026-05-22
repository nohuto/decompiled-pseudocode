/*
 * XREFs of ?CursorMessageToString@InputTraceLogging@@CAPEBDW4_MIT_CURSOR_MANAGEMENT_MESSAGE_ID@@@Z @ 0x1800F5204
 * Callers:
 *     ?ReceiveKernelMessage@Cursor@InputTraceLogging@@SAXAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x18000FEA4 (-ReceiveKernelMessage@Cursor@InputTraceLogging@@SAXAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::CursorMessageToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return "Visibility";
  v1 = a1 - 1;
  if ( !v1 )
    return "Position";
  v2 = v1 - 1;
  if ( !v2 )
    return "AppClip";
  v3 = v2 - 1;
  if ( !v3 )
    return "ShellClip";
  v4 = v3 - 1;
  if ( !v4 )
    return "SuppressCursor";
  if ( v4 == 1 )
    return "Orientation";
  return "UNKNOWN";
}
