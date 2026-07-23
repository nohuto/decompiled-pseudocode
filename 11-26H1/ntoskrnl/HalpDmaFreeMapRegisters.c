/*
 * XREFs of HalpDmaFreeMapRegisters @ 0x14035B5C0
 * Callers:
 *     IoFreeMapRegistersV2 @ 0x14035B860 (IoFreeMapRegistersV2.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14035B920 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035D320 (HalPutScatterGatherListV2.c)
 *     IoFreeMapRegistersV3 @ 0x1404376F0 (IoFreeMapRegistersV3.c)
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404E9554 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14057C2D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpDmaFreeCrashDumpRegisters @ 0x14057CA10 (HalpDmaFreeCrashDumpRegisters.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalpDmaReturnToContiguousPool @ 0x14035B35C (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaReturnToScatterPool @ 0x14035B454 (HalpDmaReturnToScatterPool.c)
 *     HalpDmaAcquireBufferMappings @ 0x14035DF88 (HalpDmaAcquireBufferMappings.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpDmaFreeMapRegisters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r13
  _QWORD *v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int8 v11; // r14
  volatile __int64 *v12; // rdi
  unsigned __int8 v13; // si
  unsigned __int64 v14; // rax
  char v15; // si
  char v16; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v18; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  PMDL MemoryDescriptorList[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v21[4]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+78h] [rbp-8h]
  _QWORD *v24; // [rsp+D8h] [rbp+58h]

  v4 = 0LL;
  result = a3;
  v6 = a2;
  v22 = 0LL;
  *(_OWORD *)MemoryDescriptorList = 0LL;
  v7 = (_QWORD *)a2;
  v8 = 0;
  memset(v21, 0, sizeof(v21));
  while ( 1 )
  {
    v9 = 2LL;
    if ( v8 >= (unsigned int)result )
      return result;
    v24 = (_QWORD *)v7[1];
    v10 = v7[6];
    if ( (v10 & 0x20) != 0 )
    {
      v14 = v10 & 0xFFFFFFFFFFFFFFDFuLL;
      v15 = 0;
      v16 = 0;
      v7[6] = v14;
      CurrentIrql = 0;
      if ( (v14 & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
        if ( CurrentIrql >= 2u )
        {
          v15 = 1;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(a2) = 2;
            LOBYTE(v4) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v4, a2);
          }
          v15 = 1;
          v16 = 1;
        }
        HalpDmaAcquireBufferMappings(v4, v7, 1LL, MemoryDescriptorList);
      }
      if ( (v7[6] & 0xFFFFFFFFFFFFF000uLL) != 0 )
        memset_0((void *)(v7[6] & 0xFFFFFFFFFFFFF000uLL), 0, 0x1000uLL);
      if ( v15 && MemoryDescriptorList[0] )
      {
        if ( (_BYTE)v22 )
        {
          MmUnmapReservedMapping(MemoryDescriptorList[1], 0x446C6148u, MemoryDescriptorList[0]);
          if ( !stru_140E3EAA8.WaitBlockFill7[144] )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v21[1]);
            v18 = v21[0];
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21[0] + 24LL), 0xFFFFFFFF) == 1
              && !_InterlockedCompareExchange((volatile signed __int32 *)(v18 + 28), 1, 0) )
            {
              RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E3EAA8.WaitBlockFill11[152], (PSLIST_ENTRY)v18);
            }
          }
        }
        else
        {
          MmUnmapLockedPages(MemoryDescriptorList[1], MemoryDescriptorList[0]);
        }
        if ( (*(_BYTE *)(v6 + 48) & 0x10) != 0 )
          *(_QWORD *)(v6 + 48) = *(_DWORD *)(v6 + 48) & 0xFEF;
      }
      if ( v16 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      v9 = 2LL;
    }
    a2 = v7[6];
    v4 = *(_QWORD *)(a1 + 160);
    v7[7] = v7;
    if ( !*(_BYTE *)(a1 + 442) )
    {
      if ( (a2 & 4) == 0 )
        v4 = a1;
LABEL_24:
      HalpDmaReturnToContiguousPool(v4, (unsigned __int64)v7, 0);
      goto LABEL_16;
    }
    if ( (a2 & 4) != 0 )
    {
      if ( (a2 & 8) != 0 )
      {
        HalpDmaReturnToScatterPool(v4, (__int64)v7, 0LL);
        goto LABEL_16;
      }
      goto LABEL_24;
    }
    memset(&LockHandle, 0, sizeof(LockHandle));
    v11 = KeGetCurrentIrql();
    if ( v11 != 15 )
    {
      v12 = (volatile __int64 *)(a1 + 128);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 128);
      v13 = KeGetCurrentIrql();
      if ( v13 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        LOBYTE(v4) = v13;
        KiRaiseIrqlProcessIrqlFlags(v4, a2);
      }
      LockHandle.OldIrql = v13;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        a2 = _InterlockedExchange64(v12, (__int64)&LockHandle);
        if ( a2 )
          KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, a2, v9);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v12);
      }
    }
    v7[1] = *(_QWORD *)(a1 + 32);
    ++*(_DWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 32) = v7;
    if ( v11 != 15 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_16:
    v7 = v24;
    ++v8;
    result = a3;
  }
}
