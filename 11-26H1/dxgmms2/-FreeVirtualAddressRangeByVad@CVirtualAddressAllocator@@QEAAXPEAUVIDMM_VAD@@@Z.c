/*
 * XREFs of ?FreeVirtualAddressRangeByVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z @ 0x140106104
 * Callers:
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140030174 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVirtualAddressRangeByVad(struct _KTHREAD **this, struct VIDMM_VAD *a2)
{
  DXGPUSHLOCK *v2; // rbx
  char v3; // di
  __int64 v6; // rdx
  __int64 v7; // r8

  v2 = (DXGPUSHLOCK *)(this + 8);
  v3 = 0;
  if ( this[9] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2, 0LL) )
    {
      DXGPUSHLOCK::LogEvent(v2, v6, v7);
      ExAcquirePushLockExclusiveEx(v2, 0LL);
    }
    v3 = 1;
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  }
  CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)this, a2);
  if ( v3 )
  {
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
