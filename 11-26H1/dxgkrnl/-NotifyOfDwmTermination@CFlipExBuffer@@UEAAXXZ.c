/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1400A3C60
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x14004E450 (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x14004E480 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x14004E4BC (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x1400A3A30 (-NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CFlipExBuffer *this)
{
  CFlipExBuffer::SignalMaxGpuFence(this);
  CFlipExBuffer::DisableCascadedSignaling(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  CCompositionBuffer::NotifyOfDwmTermination(this);
}
