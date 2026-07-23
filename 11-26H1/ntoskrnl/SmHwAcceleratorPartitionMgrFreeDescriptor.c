/*
 * XREFs of SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x14043C534
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024D660 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmStoreDecompressBuffer @ 0x140392390 (SmStoreDecompressBuffer.c)
 *     SmStoreCompletePendingDecompress @ 0x14043C438 (SmStoreCompletePendingDecompress.c)
 *     ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x140481954 (-SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x140643C0C (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall SmHwAcceleratorPartitionMgrFreeDescriptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r15
  signed __int64 *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  volatile unsigned __int8 *v11; // rdx
  _BYTE *v12; // rsi
  unsigned int v13; // r9d
  int v14; // r8d
  __int64 v15; // rsi
  int v16; // ebp
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = (signed __int64 *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = *(int *)(v4 + 60);
  --CurrentThread->KernelApcDisable;
  v17 = 0LL;
  v12 = (_BYTE *)KeAbPreAcquire(a1 + 24, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, (LegacyAutoBoost *)v12, (struct _KTHREAD *)v5);
  v14 = 1;
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v11) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v12 + 33), v11, 1u, v13);
    }
    else
    {
      v12[10] = 1;
    }
  }
  v15 = a1 + 8 * v10;
  v16 = v14 & *(_DWORD *)a2;
  if ( ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(a2 + 8) + 64LL) & (unsigned __int8)v14) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v4 + 48));
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 16), (PSLIST_ENTRY)a2);
    if ( *(_QWORD *)(v15 + 56) )
    {
      v9 = _InterlockedExchange64((volatile __int64 *)(v15 + 56), 0LL);
      v17 = v9;
    }
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  if ( v9 )
    SmHwAcceleratorPartitionMgrWakeDescriptorWaiters(&v17);
  if ( v16 )
    KeAbPostRelease(v15 + 56);
}
