/*
 * XREFs of EtwpUnlockBufferList @ 0x14021A2DC
 * Callers:
 *     EtwpReferenceCurrentBuffer @ 0x140218DC0 (EtwpReferenceCurrentBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x140219554 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1402199E4 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x140219B3C (EtwpAllocateFreeBuffers.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140482450 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpReenableCompression @ 0x1405348E8 (EtwpReenableCompression.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1406CBFA4 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 */

void __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  struct _KTHREAD *v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // r8
  __int64 v5; // rtt
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx

  v2 = (struct _KTHREAD *)(a1 + 696);
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _m_prefetchw(v2);
    v3 = *(_QWORD *)&v2->Header.Lock;
    v4 = *(_QWORD *)&v2->Header.Lock - 16LL;
    if ( (*(_QWORD *)&v2->Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v4 = 0LL;
    if ( (v3 & 2) != 0
      || (v5 = *(_QWORD *)&v2->Header.Lock,
          v5 != _InterlockedCompareExchange64((volatile signed __int64 *)&v2->Header.Lock, v4, v3)) )
    {
      ExfReleasePushLock(v2, 0LL);
    }
    KeAbPostRelease(v2);
  }
  else
  {
    v6 = *a2;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 696));
    v7 = 0LL;
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = v6;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    __writecr8(v6);
  }
}
