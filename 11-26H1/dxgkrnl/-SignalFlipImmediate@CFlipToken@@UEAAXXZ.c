/*
 * XREFs of ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1400A27D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x140039724 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 */

void __fastcall CFlipToken::SignalFlipImmediate(CFlipToken *this)
{
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, 0);
}
