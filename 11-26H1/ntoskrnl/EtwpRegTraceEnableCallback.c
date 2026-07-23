/*
 * XREFs of EtwpRegTraceEnableCallback @ 0x1409F07B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmUnRegisterCallback @ 0x1408568E0 (CmUnRegisterCallback.c)
 *     CmpRegisterCallbackInternal @ 0x1409F085C (CmpRegisterCallbackInternal.c)
 */

void __fastcall EtwpRegTraceEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( FilterData && FilterData->Size == 4 )
    ExpPlatformBinaryLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*(unsigned int *)FilterData->Ptr;
  if ( ControlCode )
  {
    if ( ControlCode == 1 && !EtwpRegTracingEnabled )
    {
      RtlInitUnicodeString(&DestinationString, L"425500");
      if ( (int)CmpRegisterCallbackInternal(
                  (unsigned int)EtwpRegTraceCallback,
                  0,
                  (unsigned int)&DestinationString,
                  0,
                  0,
                  (__int64)&ExpPlatformBinaryLock.WaitBlock[1]) >= 0 )
        EtwpRegTracingEnabled = 1;
    }
  }
  else if ( EtwpRegTracingEnabled )
  {
    CmUnRegisterCallback((LARGE_INTEGER)ExpPlatformBinaryLock.WaitBlock[1].WaitListEntry.Flink);
    EtwpRegTracingEnabled = 0;
  }
}
