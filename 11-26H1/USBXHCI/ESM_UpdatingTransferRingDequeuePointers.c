/*
 * XREFs of ESM_UpdatingTransferRingDequeuePointers @ 0x14001E4D0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x14001E4F4 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 */

__int64 __fastcall ESM_UpdatingTransferRingDequeuePointers(__int64 a1)
{
  Endpoint_SM_UpdateTransferRingDequeuePointers(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
