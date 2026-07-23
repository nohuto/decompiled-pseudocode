/*
 * XREFs of HalpTscReserveResources @ 0x140586310
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpGetCpuInfo @ 0x1404BEF80 (HalpGetCpuInfo.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char HalpTscReserveResources()
{
  bool v0; // di
  __int64 v2; // rsi
  __int64 v3; // rcx
  ULONG_PTR v4; // rbx
  void *v5; // rax
  __int64 v6; // rbp
  unsigned __int8 v16; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  HalpTscFallbackLock = 0LL;
  LODWORD(_RAX) = HalpQueryMaximumRegisteredProcessorCount();
  v2 = (unsigned int)_RAX;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v3 = (4 * (_DWORD)_RAX + ((4 * (_DWORD)_RAX + 8 * (_DWORD)_RAX + 7) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8;
    v4 = ((((_DWORD)v3 + 4 * (_DWORD)_RAX + 7) & 0xFFFFFFF8) + ((_DWORD)_RAX << 7) + 135) & 0xFFFFFFF8;
    v5 = (void *)HalpMmAllocCtxAlloc(v3, v4);
    v6 = (__int64)v5;
    if ( !v5 )
      KeBugCheckEx(0xACu, v4, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\timers\\pc\\tscsync.c", 0x165uLL);
    memset_0(v5, 0, v4);
    HalpTscDeltas = v6;
    HalpTscMaximumCounterSyncSpread = 1024;
    v16 = 0;
    HalpTscNopCycles = (v6 + 8 * v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpTscWaves = (HalpTscNopCycles + 4 * v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpTscSkewOffset = (HalpTscWaves + 4 * v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    TscRequest = (((HalpTscSkewOffset + 4 * v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 120) & 0xFFFFFFFFFFFFFF80uLL;
    LOBYTE(_RAX) = HalpGetCpuInfo(0LL, 0LL, 0LL, &v16);
    if ( (_BYTE)_RAX )
    {
      if ( v16 == 2 )
      {
        _RAX = 0LL;
        __asm { cpuid }
        if ( (unsigned int)_RAX >= 7 )
        {
          _RAX = 7LL;
          __asm { cpuid }
          v0 = (_RBX & 2) != 0;
        }
      }
    }
    HalpTscAdjustAvailable = v0;
  }
  return _RAX;
}
