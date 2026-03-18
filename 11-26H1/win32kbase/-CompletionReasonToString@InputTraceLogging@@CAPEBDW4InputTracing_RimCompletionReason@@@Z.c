/*
 * XREFs of ?CompletionReasonToString@InputTraceLogging@@CAPEBDW4InputTracing_RimCompletionReason@@@Z @ 0x140079908
 * Callers:
 *     ?CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCompletionReason@@@Z @ 0x140074980 (-CompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4InputTracing_RimCom.c)
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x140077F4C (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::CompletionReasonToString(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return "DeviceInput";
  v2 = a1 - 1;
  if ( !v2 )
    return "ButtonOnlyFrame";
  v3 = v2 - 1;
  if ( !v3 )
    return "EndStaleContacts";
  v4 = v3 - 1;
  if ( !v4 )
    return "EndActiveContacts";
  v5 = v4 - 1;
  if ( !v5 )
    return "SuppressActiveContacts";
  if ( v5 == 1 )
    return "SuppressLowerRanked";
  return "UNKNOWN";
}
