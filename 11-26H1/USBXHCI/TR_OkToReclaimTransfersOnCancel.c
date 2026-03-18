/*
 * XREFs of TR_OkToReclaimTransfersOnCancel @ 0x140032A9C
 * Callers:
 *     ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel @ 0x140032A20 (ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel.c)
 *     ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x140055EF0 (ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_OkToReclaimTransfersOnCancel(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 64LL))();
}
