/*
 * XREFs of Bulk_EP_TransferEventHandler @ 0x140022EC0
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x140024A30 (Endpoint_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x140029430 (TR_TransferEventHandler.c)
 * Callees:
 *     Bulk_ProcessTransferEventWithED1 @ 0x140022EF0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140023810 (Bulk_ProcessTransferEventWithED0.c)
 */

__int64 __fastcall Bulk_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Bulk_ProcessTransferEventWithED1();
  else
    return Bulk_ProcessTransferEventWithED0();
}
