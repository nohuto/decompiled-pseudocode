/*
 * XREFs of EtwpLockBufferList @ 0x14021B348
 * Callers:
 *     EtwpReferenceCurrentBuffer @ 0x140218DC0 (EtwpReferenceCurrentBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x140219554 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1402199E4 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x140219B3C (EtwpAllocateFreeBuffers.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140482450 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpReenableCompression @ 0x1405348E8 (EtwpReenableCompression.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1406CBFA4 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  bool v5; // zf
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbx

  v3 = a1;
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    v7 = (volatile signed __int32 *)(a1 + 696);
    v8 = KeAbPreAcquire((struct _KTHREAD *)(a1 + 696), 0LL);
    v10 = (AutoBoost *)v8;
    if ( _interlockedbittestandset64(v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, v7);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    v5 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    v6 = (volatile signed __int32 *)(v3 + 696);
    *a2 = CurrentIrql;
    if ( v5 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v6, 0LL) )
        KxWaitForSpinLockAndAcquire(v6);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v6);
    }
  }
}
