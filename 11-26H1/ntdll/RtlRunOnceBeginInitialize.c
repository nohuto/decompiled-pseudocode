/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x18005A390
 * Callers:
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18008E48C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18008EECC (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18008FE38 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpFeatureConfigurationClonePrepare @ 0x180148D4C (RtlpFeatureConfigurationClonePrepare.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014F284 (RtlpHpPerHeapStackTraceCleanup.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180090498 (RtlpRunOnceWaitForInit.c)
 */

NTSTATUS __cdecl RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  unsigned __int64 Value; // rax
  NTSTATUS result; // eax
  ULONG v7; // ebx
  unsigned __int64 v8; // rcx
  signed __int64 v9; // rdx
  unsigned __int64 v10; // rcx

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  Value = RunOnce->Value;
  if ( (RunOnce->Value & 3) == 2 )
  {
LABEL_5:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
    return 0;
  }
  else if ( (Flags & 1) != 0 )
  {
    return -1073741823;
  }
  else
  {
    v7 = Flags & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = Value & 3;
        if ( (Value & 3) != 0 )
          break;
        v9 = 1LL;
        v10 = Value;
        if ( v7 )
          v9 = 3LL;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v9, Value);
        if ( Value == v10 )
          return 259;
      }
      if ( v8 != 1 )
        break;
      if ( v7 )
        return -1073741584;
      Value = RtlpRunOnceWaitForInit(Value, RunOnce);
    }
    if ( v8 != 3 )
      goto LABEL_5;
    result = 259;
    if ( !v7 )
      return -1073741584;
  }
  return result;
}
