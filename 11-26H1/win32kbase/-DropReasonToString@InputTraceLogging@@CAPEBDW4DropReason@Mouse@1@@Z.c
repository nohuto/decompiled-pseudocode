/*
 * XREFs of ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Mouse@1@@Z @ 0x1400A2770
 * Callers:
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1400A26FC (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14019C400 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1401C5408 (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1401C5578 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DropReasonToString(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
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

  if ( a1 <= 10 )
  {
    if ( a1 == 10 )
      return "UIPI";
    if ( a1 > 5 )
    {
      v6 = a1 - 6;
      if ( !v6 )
        return "PTPQueueFull";
      v7 = v6 - 1;
      if ( !v7 )
        return "InputSuppressed";
      v8 = v7 - 1;
      if ( !v8 )
        return "InputBlocked";
      if ( v8 == 1 )
        return "BadReadStatus";
    }
    else
    {
      if ( a1 == 5 )
        return "QueueFull";
      if ( !a1 )
        return "ButtonHook";
      v3 = a1 - 1;
      if ( !v3 )
        return "WheelHook";
      v4 = v3 - 1;
      if ( !v4 )
        return "MoveHook";
      v5 = v4 - 1;
      if ( !v5 )
        return "WheelAppCompat";
      if ( v5 == 1 )
        return "ISMSuppression";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      return "Capture";
    v1 = a1 - 11;
    if ( !v1 )
      return "NoPositionChange";
    v9 = v1 - 1;
    if ( !v9 )
      return "RawInputMode";
    v10 = v9 - 1;
    if ( !v10 )
      return "NoHitTestResult";
    v11 = v10 - 1;
    if ( !v11 )
      return "BadPayload";
    if ( v11 == 1 )
      return "ClickLock";
    return "UNKNOWN";
  }
  v12 = a1 - 17;
  if ( !v12 )
    return "WindowDestroyed";
  v13 = v12 - 1;
  if ( !v13 )
    return "NoActivation";
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
      return "ISMForwardingFailed";
    return "UNKNOWN";
  }
  return "NoForeground";
}
