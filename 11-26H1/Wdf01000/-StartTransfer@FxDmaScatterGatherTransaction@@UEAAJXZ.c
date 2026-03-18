/*
 * XREFs of ?StartTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x140067F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StartTransfer(FxDmaScatterGatherTransaction *this)
{
  return ((__int64 (__fastcall *)(FxDmaScatterGatherTransaction *))this->StageTransfer)(this);
}
