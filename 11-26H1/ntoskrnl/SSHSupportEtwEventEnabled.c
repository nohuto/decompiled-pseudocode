/*
 * XREFs of SSHSupportEtwEventEnabled @ 0x1404AF1CC
 * Callers:
 *     SshpFlushBlockerDataCache @ 0x140ADF458 (SshpFlushBlockerDataCache.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140B00804 (SshpTracingWriteCollectionStateChange.c)
 *     SshpTracingRundownCollectionState @ 0x140B13F74 (SshpTracingRundownCollectionState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall SSHSupportEtwEventEnabled(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwEventEnabled(SshpTraceHandle, a2);
}
