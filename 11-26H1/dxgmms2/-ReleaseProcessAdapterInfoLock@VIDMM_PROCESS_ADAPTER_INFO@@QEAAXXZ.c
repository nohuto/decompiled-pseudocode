/*
 * XREFs of ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140039814
 * Callers:
 *     RemoveDmaBufferFromPool @ 0x1400EB6EC (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
  KeLeaveCriticalRegion();
}
