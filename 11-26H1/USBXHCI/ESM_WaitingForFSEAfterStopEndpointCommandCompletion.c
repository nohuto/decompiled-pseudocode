/*
 * XREFs of ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x14001EF60
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_Start2SecondTimer @ 0x14001EFB0 (Endpoint_SM_Start2SecondTimer.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 */

__int64 __fastcall ESM_WaitingForFSEAfterStopEndpointCommandCompletion(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  _m_prefetchw((const void *)(v1 + 32));
  if ( (_InterlockedXor((volatile signed __int32 *)(v1 + 32), 8u) & 8) != 0 )
    ESM_AddEvent((PVOID)(v1 + 304));
  Endpoint_SM_Start2SecondTimer(v1);
  return 1000LL;
}
