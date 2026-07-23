/*
 * XREFs of HalpDmaAllocateScatterPagesFromScatterPool @ 0x14035B01C
 * Callers:
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140358724 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1407857E4 (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolV3 @ 0x1403591E8 (HalpDmaAllocateScatterPagesFromScatterPoolV3.c)
 *     HalpDmaGetMasterAdapterVersion @ 0x14035B1DC (HalpDmaGetMasterAdapterVersion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromScatterPool(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        unsigned int *a6)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 result; // rax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)HalpDmaGetMasterAdapterVersion(a2) == 2 )
  {
    v12 = 0;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    v13 = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a2 + 128);
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9, 2LL);
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v15 = _InterlockedExchange64((volatile __int64 *)(a2 + 128), (__int64)&LockHandle);
      if ( v15 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v15, v10);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(a2 + 128));
    }
    if ( a5 )
    {
      v21 = *(_DWORD *)(a2 + 220);
      v13 = a2;
      v22 = *(_DWORD *)(a2 + 216);
      if ( v22 <= v21 )
        goto LABEL_20;
      v23 = v22 - v21;
      if ( a3 > v23 )
        a3 = v23;
    }
    v16 = *(_DWORD *)(a2 + 40);
    if ( a3 > v16 )
    {
      if ( a4 )
        goto LABEL_20;
      a3 = *(_DWORD *)(a2 + 40);
    }
    if ( a3 )
    {
      v17 = *(_QWORD *)(a2 + 32);
      v18 = v17;
      v19 = a3;
      do
      {
        v18 = *(_QWORD *)(v18 + 8);
        --v19;
      }
      while ( v19 );
      *(_QWORD *)(a2 + 32) = v18;
      *(_DWORD *)(a2 + 40) = v16 - a3;
      if ( a5 )
        *(_DWORD *)(v13 + 216) -= a3;
      v12 = a3;
      goto LABEL_17;
    }
LABEL_20:
    v17 = 0LL;
LABEL_17:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    result = v17;
    *a6 = v12;
    return result;
  }
  return HalpDmaAllocateScatterPagesFromScatterPoolV3(v9, a2, v10, v11, a5, a6);
}
