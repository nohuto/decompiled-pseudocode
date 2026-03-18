/*
 * XREFs of ?LinpSourceToString@InputTraceLogging@@CAPEBDW4_LINP_SOURCE@@@Z @ 0x1400D5094
 * Callers:
 *     ?UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z @ 0x1400D3CC4 (-UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::LinpSourceToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( a1 <= 9 )
  {
    if ( a1 == 9 )
      return "SessionSwitch";
    if ( !a1 )
      return "Unknown";
    v1 = a1 - 1;
    if ( !v1 )
      return "Keyboard";
    v2 = v1 - 1;
    if ( !v2 )
      return "SipKeyboard";
    v3 = v2 - 1;
    if ( !v3 )
      return "Mouse";
    v12 = v3 - 1;
    if ( !v12 )
      return "HID";
    v13 = v12 - 1;
    if ( !v13 )
      return "PoUserPresent";
    v14 = v13 - 1;
    if ( !v14 )
      return "PoResumeApps";
    v15 = v14 - 1;
    if ( !v15 )
      return "ScreensaveTimeout";
    if ( v15 == 1 )
      return "Activation";
    return "UNKNOWN";
  }
  v5 = a1 - 10;
  if ( !v5 )
    return "DisplayReqest";
  v6 = v5 - 1;
  if ( !v6 )
    return "Touch";
  v7 = v6 - 1;
  if ( !v7 )
    return "AcdcSwitch";
  v8 = v7 - 1;
  if ( !v8 )
    return "Pen";
  v9 = v8 - 1;
  if ( !v9 )
    return "Initialization";
  v10 = v9 - 1;
  if ( !v10 )
    return "PosessionConnect";
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      return "PrecisionTouchpad";
    return "UNKNOWN";
  }
  return "Accelerometer";
}
