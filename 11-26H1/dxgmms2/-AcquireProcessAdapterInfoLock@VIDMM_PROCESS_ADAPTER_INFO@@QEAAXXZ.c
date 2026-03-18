/*
 * XREFs of ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400395A0
 * Callers:
 *     RemoveDmaBufferFromPool @ 0x1400EB6EC (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
}
