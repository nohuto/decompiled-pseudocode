/*
 * XREFs of ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400B6D6C
 * Callers:
 *     ?ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400B6C3C (-ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z @ 0x1400B78D4 (-KeyEvent@Keyboard@InputTraceLogging@@SAXAEBUtagINPUT_MESSAGE_SOURCE@@HPEAXKHHPEAUHKL__@@E@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DeviceTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return "Unavailable";
  v1 = a1 - 1;
  if ( !v1 )
    return "Keyboard";
  v2 = v1 - 1;
  if ( !v2 )
    return "Mouse";
  v4 = v2 - 2;
  if ( !v4 )
    return "Touch";
  v5 = v4 - 4;
  if ( !v5 )
    return "Pen";
  v6 = v5 - 10;
  if ( !v6 )
    return "TouchpadMouse";
  if ( v6 == 16 )
    return "InteractiveCtrlMouse";
  return "UNKNOWN";
}
