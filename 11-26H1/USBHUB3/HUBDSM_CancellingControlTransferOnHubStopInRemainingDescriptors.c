/*
 * XREFs of HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors @ 0x14001FF60
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_CancelControlTransfer @ 0x14002A320 (HUBDTX_CancelControlTransfer.c)
 */

__int64 __fastcall HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors(__int64 a1)
{
  HUBDTX_CancelControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
