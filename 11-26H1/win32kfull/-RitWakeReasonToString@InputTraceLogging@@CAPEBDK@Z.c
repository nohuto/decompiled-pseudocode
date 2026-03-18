/*
 * XREFs of ?RitWakeReasonToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401E22B8
 * Callers:
 *     ?WakeRit@Win32k@InputTraceLogging@@SAXK@Z @ 0x1401E20F0 (-WakeRit@Win32k@InputTraceLogging@@SAXK@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RitWakeReasonToString(int a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 1:
      return "Mouse";
    case 2:
      return "Shutdown";
    case 4:
      return "EnableMMCSS";
    case 8:
      return "RitTakeover";
    case 16:
      return "DitTakeover";
    case 32:
      return "ConfigUpdate";
    case 64:
      return "GetUserProfile";
    case 128:
      return "DitInControl";
  }
  result = "NoReason";
  if ( a1 != -1 )
    return "UNKNOWN";
  return result;
}
