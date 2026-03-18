/*
 * XREFs of KeFlushIoBuffers @ 0x140441180
 * Callers:
 *     HalpDmaFlushBuffer @ 0x14044011C (HalpDmaFlushBuffer.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404413A8 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140441650 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalFlushDmaBuffer @ 0x14047E9D0 (HalFlushDmaBuffer.c)
 *     HalpDmaFlushDriverMdl @ 0x140578CA8 (HalpDmaFlushDriverMdl.c)
 *     HalpFlushMapBuffers @ 0x14058970C (HalpFlushMapBuffers.c)
 *     ViMapDoubleBuffer @ 0x140C27768 (ViMapDoubleBuffer.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14024FCE0 (KeInvalidateAllCaches.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KiFlushRangeAllCaches @ 0x1405F1020 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x1406C45C4 (EtwTraceCpuCacheFlush.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, __int64 a3, __int64 a4)
{
  PVOID v4; // rax
  char v5; // di
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // r12
  char v10; // r15
  void *v11; // rbp
  char v12; // r14
  _OWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v4) = KiSystemFullyCoherent;
  v5 = a3;
  memset(v14, 0, sizeof(v14));
  if ( !KiSystemFullyCoherent )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = *(unsigned int *)(BugCheckParameter4 + 40);
    v10 = 1;
    if ( (_BYTE)a3 || a2 )
    {
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
      {
        v11 = *(void **)(BugCheckParameter4 + 24);
      }
      else
      {
        v4 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
        v11 = v4;
      }
      if ( v11 )
      {
        v10 = 0;
      }
      else if ( CurrentIrql == 15 )
      {
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      }
      if ( (xmmword_140FBFC10 & 0x4000000) != 0 )
      {
        v12 = 1;
        LOBYTE(v4) = EtwGetKernelTraceTimestamp((unsigned __int64)v14, 0x84000000uLL, a3);
      }
      else
      {
        v12 = 0;
      }
      if ( v10 )
      {
        if ( v5 )
          LOBYTE(v4) = KeInvalidateAllCaches();
      }
      else
      {
        LOBYTE(v4) = KiFlushRangeAllCaches(BugCheckParameter4, v11, v9, v5);
      }
      if ( v12 )
      {
        LOBYTE(a4) = a2 == 0;
        LOBYTE(v4) = EtwTraceCpuCacheFlush(v14, v11, v9, a4);
      }
    }
  }
  return (char)v4;
}
