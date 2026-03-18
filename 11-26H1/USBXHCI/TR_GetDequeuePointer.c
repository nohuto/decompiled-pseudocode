/*
 * XREFs of TR_GetDequeuePointer @ 0x14001E818
 * Callers:
 *     Endpoint_OnResetEndpointConfigure @ 0x1400048E4 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x140005860 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14001E270 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14001E588 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_GetDequeuePointer @ 0x14001E7D4 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140048FE0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall TR_GetDequeuePointer(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(a1 + 200) ^ (*(unsigned int *)(a1 + 200) ^ (*(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL)
                                                                       + 16LL * *(unsigned int *)(a1 + 192))) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( *(_DWORD *)(a1 + 64) )
    return result & 0xFFFFFFFFFFFFFFF1uLL | 2;
  return result;
}
