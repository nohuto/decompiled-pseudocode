/*
 * XREFs of Isoch_EP_TransferEventHandler @ 0x140012B40
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_ProcessTransferEventWithED1 @ 0x140012B70 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1400145DC (Isoch_ProcessTransferEventWithED0.c)
 */

__int64 __fastcall Isoch_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Isoch_ProcessTransferEventWithED1();
  else
    return Isoch_ProcessTransferEventWithED0();
}
