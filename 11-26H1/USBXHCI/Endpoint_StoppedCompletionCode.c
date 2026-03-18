/*
 * XREFs of Endpoint_StoppedCompletionCode @ 0x140023BC0
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1400145DC (Isoch_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED0 @ 0x140021C4C (Control_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140023810 (Bulk_ProcessTransferEventWithED0.c)
 *     Endpoint_TransferEventHandler @ 0x140024A30 (Endpoint_TransferEventHandler.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004DBE4 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_StoppedCompletionCode(int a1)
{
  return (unsigned int)(a1 - 26) <= 2;
}
