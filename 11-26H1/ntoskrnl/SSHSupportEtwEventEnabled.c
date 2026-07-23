/*
 * XREFs of SSHSupportEtwEventEnabled @ 0x1404A885C
 * Callers:
 *     SshpFlushBlockerDataCache @ 0x140ADCCA0 (SshpFlushBlockerDataCache.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140B02534 (SshpTracingWriteCollectionStateChange.c)
 *     SshpTracingRundownCollectionState @ 0x140B15A34 (SshpTracingRundownCollectionState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 */

BOOLEAN __fastcall SSHSupportEtwEventEnabled(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwEventEnabled(SshpTraceHandle, a2);
}
