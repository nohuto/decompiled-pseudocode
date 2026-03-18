/*
 * XREFs of ?WorkItemTypeToString@InputTraceLogging@@CAPEBDW4ASYNC_INPUT_WORKITEM@@@Z @ 0x1401D7728
 * Callers:
 *     ?QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14019A210 (-QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@.c)
 *     ?FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14019A404 (-FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z.c)
 *     ?DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14019A484 (-DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::WorkItemTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return "DeviceClassNotify";
  v1 = a1 - 1;
  if ( !v1 )
    return "DeviceNotify";
  v2 = v1 - 1;
  if ( !v2 )
    return "DevChangeCallback";
  v3 = v2 - 1;
  if ( !v3 )
    return "HidRawInput";
  v4 = v3 - 1;
  if ( !v4 )
    return "PostPointerDeviceRangeMessage";
  v5 = v4 - 1;
  if ( !v5 )
    return "UpdateInputGlobals";
  v6 = v5 - 1;
  if ( !v6 )
    return "HandleAnyPnpRemovePendingDevices";
  if ( v6 == 1 )
    return "SetInputMode";
  return "UNKNOWN";
}
