/*
 * XREFs of ?CursorImageReasonToString@InputTraceLogging@@CAPEBDW4CursorImageReason@Cursor@1@@Z @ 0x140273870
 * Callers:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1401AFCBC (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::CursorImageReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return "HiddenByForeground";
  v1 = a1 - 1;
  if ( !v1 )
    return "ForceAutoRun";
  v2 = v1 - 1;
  if ( !v2 )
    return "ForceAppStarting";
  v3 = v2 - 1;
  if ( !v3 )
    return "SetFromQueue";
  v4 = v3 - 1;
  if ( !v4 )
    return "HiddenByQueue";
  v5 = v4 - 1;
  if ( !v5 )
    return "SizeChange";
  v6 = v5 - 1;
  if ( !v6 )
    return "ExplicitSetPointer";
  if ( v6 == 1 )
    return "HiddenBySuppression";
  return "UNKNOWN";
}
