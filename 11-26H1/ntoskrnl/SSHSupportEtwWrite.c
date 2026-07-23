/*
 * XREFs of SSHSupportEtwWrite @ 0x1404D54FC
 * Callers:
 *     SshpFlushBlockerDataCache @ 0x140ADCCA0 (SshpFlushBlockerDataCache.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140B02534 (SshpTracingWriteCollectionStateChange.c)
 *     SshpTracingRundownCollectionState @ 0x140B15A34 (SshpTracingRundownCollectionState.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 */

NTSTATUS __fastcall SSHSupportEtwWrite(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *a5)
{
  return EtwWriteEx(SshpTraceHandle, a2, 0LL, 0, 0LL, 0LL, a4, a5);
}
