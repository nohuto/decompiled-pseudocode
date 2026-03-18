/*
 * XREFs of ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401C0094
 * Callers:
 *     ?InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z @ 0x14008E750 (-InputSpaceRegion@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE_REGION@@@Z.c)
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14008E9DC (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1401C5A7C (-SetShellContentOrientation@Mouse@InputTraceLogging@@SAXW4DISPLAYCONFIG_ROTATION@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::OrientationToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Identity";
  v2 = v1 - 1;
  if ( !v2 )
    return "Rotate90";
  v3 = v2 - 1;
  if ( !v3 )
    return "Rotate180";
  if ( v3 == 1 )
    return "Rotate270";
  return "UNKNOWN";
}
