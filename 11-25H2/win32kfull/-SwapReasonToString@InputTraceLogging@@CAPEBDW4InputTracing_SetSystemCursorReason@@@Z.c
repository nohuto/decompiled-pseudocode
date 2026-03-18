/*
 * XREFs of ?SwapReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_SetSystemCursorReason@@@Z @ 0x140273C28
 * Callers:
 *     ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1401220D0 (-SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracin.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::SwapReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return "Session Init";
  v1 = a1 - 1;
  if ( !v1 )
    return "User Login";
  v2 = v1 - 1;
  if ( !v2 )
    return "App called SPI_SETCURSORS";
  v3 = v2 - 1;
  if ( !v3 )
    return "App called SetSystemCursor";
  v4 = v3 - 1;
  if ( !v4 )
    return "Restore Mouse Cursors";
  if ( v4 == 1 )
    return "Replace Mouse With Pen";
  return "UNKNOWN";
}
