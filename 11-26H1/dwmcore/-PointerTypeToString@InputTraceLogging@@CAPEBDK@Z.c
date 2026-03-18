/*
 * XREFs of ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1801B3240
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092F10 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PointerTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx

  if ( !a1 )
    return "ComputeLuid";
  v1 = a1 - 1;
  if ( !v1 )
    return "Pointer";
  v2 = v1 - 1;
  if ( !v2 )
    return "Touch";
  v3 = v2 - 1;
  if ( !v3 )
    return "Pen";
  v4 = v3 - 1;
  if ( !v4 )
    return "Mouse";
  v6 = v4 - 1;
  if ( !v6 )
    return "Touchpad";
  if ( v6 == 1 )
    return "DropTarget";
  return "UNKNOWN";
}
