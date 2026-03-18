/*
 * XREFs of XilEndpoint_ReleaseBuffer @ 0x140001B5C
 * Callers:
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1400017D0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_EvaluateContextCompletion @ 0x1400019A0 (Endpoint_EvaluateContextCompletion.c)
 *     Endpoint_EvtEndpointCleanupCallback @ 0x140002480 (Endpoint_EvtEndpointCleanupCallback.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x14003A690 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x140048680 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 */

__int64 __fastcall XilEndpoint_ReleaseBuffer(__int64 a1)
{
  return CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)a1 + 120LL));
}
