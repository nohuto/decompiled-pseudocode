/*
 * XREFs of ?WorkItemTypeToString@InputTraceLogging@@CAPEBDW4ASYNC_INPUT_WORKITEM@@@Z @ 0x14012CFF4
 * Callers:
 *     ?FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14012CE5C (-FreeAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z.c)
 *     ?DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14012CEE4 (-DequeueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@.c)
 *     ?QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14012CF6C (-QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::WorkItemTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

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
  v5 = v3 - 1;
  if ( !v5 )
    return "PostPointerDeviceRangeMessage";
  v6 = v5 - 1;
  if ( !v6 )
    return "UpdateInputGlobals";
  v7 = v6 - 1;
  if ( !v7 )
    return "HandleAnyPnpRemovePendingDevices";
  if ( v7 == 1 )
    return "SetInputMode";
  return "UNKNOWN";
}
