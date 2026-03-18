/*
 * XREFs of ?InjectionSourceToString@InputTraceLogging@@CAPEBDW4InjectionSource@Mouse@1@@Z @ 0x1401B9994
 * Callers:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14010F9C8 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InjectionSourceToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
    return "SynthesizeMouseInput";
  v1 = a1 - 1;
  if ( !v1 )
    return "PTPMarshalNotification";
  v2 = v1 - 1;
  if ( !v2 )
    return "SendInput";
  v3 = v2 - 1;
  if ( !v3 )
    return "MousePromotion";
  v4 = v3 - 1;
  if ( !v4 )
    return "PTPMouseOperation";
  if ( v4 == 1 )
    return "Dial";
  return "UNKNOWN";
}
