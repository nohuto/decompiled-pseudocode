/*
 * XREFs of SSHSupportEtwWrite @ 0x1404DBE1C
 * Callers:
 *     SshpFlushBlockerDataCache @ 0x140ADF458 (SshpFlushBlockerDataCache.c)
 *     SshpTracingWriteCollectionStateChange @ 0x140B00804 (SshpTracingWriteCollectionStateChange.c)
 *     SshpTracingRundownCollectionState @ 0x140B13F74 (SshpTracingRundownCollectionState.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
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
