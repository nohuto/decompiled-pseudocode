/*
 * XREFs of ?DelegationResponseToString@InputTraceLogging@@CAPEBDK@Z @ 0x1401E9AE8
 * Callers:
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x140095430 (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1401E93EC (-ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DelegationResponseToString(int a1)
{
  int v1; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Reassign";
  v3 = v1 - 1;
  if ( !v3 )
    return "Release";
  if ( v3 == 1 )
    return "Retain";
  return "UNKNOWN";
}
